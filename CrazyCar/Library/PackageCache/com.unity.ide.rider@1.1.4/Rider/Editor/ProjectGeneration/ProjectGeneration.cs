using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using Packages.Rider.Editor.Util;
using UnityEditor;
using UnityEditor.Compilation;
using UnityEditor.PackageManager;
using UnityEditorInternal;
using UnityEngine;

namespace Packages.Rider.Editor
{
  public interface IGenerator
  {
    bool SyncIfNeeded(IEnumerable<string> affectedFiles, IEnumerable<string> reimportedFiles);
    void Sync();
    bool HasSolutionBeenGenerated();
    string SolutionFile();
    string ProjectDirectory { get; }
    void GenerateAll(bool generateAll);
  }

  public interface IFileIO
  {
    bool Exists(string fileName);

    string ReadAllText(string fileName);
    void WriteAllText(string fileName, string content);
  }

  public interface IGUIDGenerator
  {
    string ProjectGuid(string projectName, string assemblyName);
    string SolutionGuid(string projectName, string extension);
  }

  public interface IAssemblyNameProvider
  {
    string GetAssemblyNameFromScriptPath(string path);
    IEnumerable<Assembly> GetAssemblies(Func<string, bool> shouldFileBePartOfSolution);
    IEnumerable<string> GetAllAssetPaths();
    UnityEditor.PackageManager.PackageInfo FindForAssetPath(string assetPath);
    ResponseFileData ParseResponseFile(string responseFilePath, string projectDirectory, string[] systemReferenceDirectories);
  }

  class AssemblyNameProvider : IAssemblyNameProvider
  {
    public string GetAssemblyNameFromScriptPath(string path)
    {
      return CompilationPipeline.GetAssemblyNameFromScriptPath(path);
    }

    public IEnumerable<Assembly> GetAssemblies(Func<string, bool> shouldFileBePartOfSolution)
    {
      return CompilationPipeline.GetAssemblies()
        .Where(i => 0 < i.sourceFiles.Length && i.sourceFiles.Any(shouldFileBePartOfSolution));
    }

    public IEnumerable<string> GetAllAssetPaths()
    {
      return AssetDatabase.GetAllAssetPaths();
    }

    public UnityEditor.PackageManager.PackageInfo FindForAssetPath(string assetPath)
    {
      return UnityEditor.PackageManager.PackageInfo.FindForAssetPath(assetPath);
    }

    public ResponseFileData ParseResponseFile(string responseFilePath, string projectDirectory, string[] systemReferenceDirectories)
    {
      return CompilationPipeline.ParseResponseFile(
        responseFilePath,
        projectDirectory,
        systemReferenceDirectories
      );
    }
  }

  public class ProjectGeneration : IGenerator
  {
    enum ScriptingLanguage
    {
      None,
      CSharp
    }

    public static readonly string MSBuildNamespaceUri = "http://schemas.microsoft.com/developer/msbuild/2003";

    /// <summary>
    /// Map source extensions to ScriptingLanguages
    /// </summary>
    static readonly Dictionary<string, ScriptingLanguage> k_BuiltinSupportedExtensions =
      new Dictionary<string, ScriptingLanguage>
      {
        {"cs", ScriptingLanguage.CSharp},
        {"uxml", ScriptingLanguage.None},
        {"uss", ScriptingLanguage.None},
        {"shader", ScriptingLanguage.None},
        {"compute", ScriptingLanguage.None},
        {"cginc", ScriptingLanguage.None},
        {"hlsl", ScriptingLanguage.None},
        {"glslinc", ScriptingLanguage.None},
        {"template", ScriptingLanguage.None},
        {"raytrace", ScriptingLanguage.None}
      };

    string m_SolutionProjectEntryTemplate = string.Join(Environment.NewLine,
      @"Project(""{{{0}}}"") = ""{1}"", ""{2}"", ""{{{3}}}""",
      @"EndProject").Replace("    ", "\t");

    string m_SolutionProjectConfigurationTemplate = string.Join(Environment.NewLine,
      @"        {{{0}}}.Debug|Any CPU.ActiveCfg = Debug|Any CPU",
      @"        {{{0}}}.Debug|Any CPU.Build.0 = Debug|Any CPU",
      @"        {{{0}}}.Release|Any CPU.ActiveCfg = Release|Any CPU",
      @"        {{{0}}}.Release|Any CPU.Build.0 = Release|Any CPU").Replace("    ", "\t");

    static readonly string[] k_ReimportSyncExtensions = {".dll", ".asmdef"};

    /// <summary>
    /// Map ScriptingLanguages to project extensions
    /// </summary>
    /*static readonly Dictionary<ScriptingLanguage, string> k_ProjectExtensions = new Dictionary<ScriptingLanguage, string>
    {
        { ScriptingLanguage.CSharp, ".csproj" },
        { ScriptingLanguage.None, ".csproj" },
    };*/
    static readonly Regex k_ScriptReferenceExpression = new Regex(
      @"^Library.ScriptAssemblies.(?<dllname>(?<project>.*)\.dll$)",
      RegexOptions.Compiled | RegexOptions.IgnoreCase);

    string[] m_ProjectSupportedExtensions = new string[0];
    bool m_ShouldGenerateAll;

    public string ProjectDirectory { get; }

    public void GenerateAll(bool generateAll)
    {
      m_ShouldGenerateAll = generateAll;
    }

    readonly string m_ProjectName;
    readonly IAssemblyNameProvider m_AssemblyNameProvider;
    readonly IFileIO m_FileIOProvider;
    readonly IGUIDGenerator m_GUIDGenerator;
    internal static bool isRiderProjectGeneration; // workaround to https://github.cds.internal.unity3d.com/unity/com.unity.ide.rider/issues/28

    const string k_ToolsVersion = "4.0";
    const string k_ProductVersion = "10.0.20506";
    const string k_BaseDirectory = ".";
    const string k_TargetFrameworkVersion = "v4.7.1";
    const string k_TargetLanguageVersion = "latest";

    static readonly Regex scriptReferenceExpression = new Regex(
      @"^Library.ScriptAssemblies.(?<dllname>(?<project>.*)\.dll$)",
      RegexOptions.Compiled | RegexOptions.IgnoreCase);

    public ProjectGeneration() : this(Directory.GetParent(Application.dataPath).FullName)
    {
    }

    public ProjectGeneration(string tempDirectory) : this(tempDirectory, new AssemblyNameProvider(), new FileIOProvider(), new GUIDProvider())
    {
    }

    public ProjectGeneration(string tempDirectory, IAssemblyNameProvider assemblyNameProvider, IFileIO fileIoProvider, IGUIDGenerator guidGenerator)
    {
      ProjectDirectory = tempDirectory.Replace('\\', '/');
      m_ProjectName = Path.GetFileName(ProjectDirectory);
      m_AssemblyNameProvider = assemblyNameProvider;
      m_FileIOProvider = fileIoProvider;
      m_GUIDGenerator = guidGenerator;
    }

    /// <summary>
    /// Syncs the scripting solution if any affected files are relevant.
    /// </summary>
    /// <returns>
    /// Whether the solution was synced.
    /// </returns>
    /// <param name='affectedFiles'>
    /// A set of files whose status has changed
    /// </param>
    /// <param name="reimportedFiles">
    /// A set of files that got reimported
    /// </param>
    public bool SyncIfNeeded(IEnumerable<string> affectedFiles, IEnumerable<string> reimportedFiles)
    {
      SetupProjectSupportedExtensions();
      
      if (HasFilesBeenModified(affectedFiles, reimportedFiles))
      {
        Sync();
        return true;
      }

      return false;
    }

    bool HasFilesBeenModified(IEnumerable<string> affectedFiles, IEnumerable<string> reimportedFiles)
    {
      return affectedFiles.Any(ShouldFileBePartOfSolution) || reimportedFiles.Any(ShouldSyncOnReimportedAsset);
    }

    static bool ShouldSyncOnReimportedAsset(string asset)
    {
      return k_ReimportSyncExtensions.Contains(new FileInfo(asset).Extension);
    }

    public void Sync()
    {
      SetupProjectSupportedExtensions();
      var types = GetAssetPostprocessorTypes();
      isRiderProjectGeneration = true;
      bool externalCodeAlreadyGeneratedProjects = OnPreGeneratingCSProjectFiles(types);
      isRiderProjectGeneration = false;
      if (!externalCodeAlreadyGeneratedProjects)
      {
        GenerateAndWriteSolutionAndProjects(types);
      }

      OnGeneratedCSProjectFiles(types);
    }

    public bool HasSolutionBeenGenerated()
    {
      return m_FileIOProvider.Exists(SolutionFile());
    }

    void SetupProjectSupportedExtensions()
    {
      m_ProjectSupportedExtensions = EditorSettings.projectGenerationUserExtensions;
    }

    bool ShouldFileBePartOfSolution(string file)
    {
      string extension = Path.GetExtension(file);

      // Exclude files coming from packages except if they are internalized.
      if (!m_ShouldGenerateAll && IsInternalizedPackagePath(file))
      {
        return false;
      }

      // Dll's are not scripts but still need to be included..
      if (extension == ".dll")
        return true;

      if (file.ToLower().EndsWith(".asmdef"))
        return true;

      return IsSupportedExtension(extension);
    }

    bool IsSupportedExtension(string extension)
    {
      extension = extension.TrimStart('.');
      if (k_BuiltinSupportedExtensions.ContainsKey(extension))
        return true;
      if (m_ProjectSupportedExtensions.Contains(extension))
        return true;
      return false;
    }

    static ScriptingLanguage ScriptingLanguageFor(Assembly island)
    {
      return ScriptingLanguageFor(GetExtensionOfSourceFiles(island.sourceFiles));
    }

    static string GetExtensionOfSourceFiles(string[] files)
    {
      return files.Length > 0 ? GetExtensionOfSourceFile(files[0]) : "NA";
    }

    static string GetExtensionOfSourceFile(string file)
    {
      var ext = Path.GetExtension(file).ToLower();
      ext = ext.Substring(1); //strip dot
      return ext;
    }

    static ScriptingLanguage ScriptingLanguageFor(string extension)
    {
      return k_BuiltinSupportedExtensions.TryGetValue(extension.TrimStart('.'), out var result)
        ? result
        : ScriptingLanguage.None;
    }

    public void GenerateAndWriteSolutionAndProjects(Type[] types)
    {
      // Only synchronize islands that have associated source files and ones that we actually want in the project.
      // This also filters out DLLs coming from .asmdef files in packages.
      var assemblies = m_AssemblyNameProvider.GetAssemblies(ShouldFileBePartOfSolution);

      var allAssetProjectParts = GenerateAllAssetProjectParts();

      var monoIslands = assemblies.ToList();

      SyncSolution(monoIslands, types);
      var allProjectIslands = RelevantIslandsForMode(monoIslands).ToList();
      foreach (Assembly assembly in allProjectIslands)
      {
        var responseFileData = ParseResponseFileData(assembly);
        SyncProject(assembly, allAssetProjectParts, responseFileData, allProjectIslands, types);
      }
    }

    IEnumerable<ResponseFileData> ParseResponseFileData(Assembly assembly)
    {
      var systemReferenceDirectories =
        CompilationPipeline.GetSystemAssemblyDirectories(assembly.compilerOptions.ApiCompatibilityLevel);

      Dictionary<string, ResponseFileData> responseFilesData = assembly.compilerOptions.ResponseFiles.ToDictionary(
        x => x, x => m_AssemblyNameProvider.ParseResponseFile(
          x,
          ProjectDirectory,
          systemReferenceDirectories
        ));

      Dictionary<string, ResponseFileData> responseFilesWithErrors = responseFilesData.Where(x => x.Value.Errors.Any())
        .ToDictionary(x => x.Key, x => x.Value);

      if (responseFilesWithErrors.Any())
      {
        foreach (var error in responseFilesWithErrors)
        foreach (var valueError in error.Value.Errors)
        {
          Debug.LogError($"{error.Key} Parse Error : {valueError}");
        }
      }

      return responseFilesData.Select(x => x.Value);
    }

    Dictionary<string, string> GenerateAllAssetProjectParts()
    {
      Dictionary<string, StringBuilder> stringBuilders = new Dictionary<string, StringBuilder>();

      foreach (string asset in m_AssemblyNameProvider.GetAllAssetPaths())
      {
        // Exclude files coming from packages except if they are internalized.
        if (!m_ShouldGenerateAll && IsInternalizedPackagePath(asset))
        {
          continue;
        }

        string extension = Path.GetExtension(asset);
        if (IsSupportedExtension(extension) && ScriptingLanguage.None == ScriptingLanguageFor(extension))
        {
          // Find assembly the asset belongs to by adding script extension and using compilation pipeline.
          var assemblyName = m_AssemblyNameProvider.GetAssemblyNameFromScriptPath(asset + ".cs");

          if (string.IsNullOrEmpty(assemblyName))
          {
            continue;
          }

          assemblyName = FileSystemUtil.FileNameWithoutExtension(assemblyName);

          if (!stringBuilders.TryGetValue(assemblyName, out var projectBuilder))
          {
            projectBuilder = new StringBuilder();
            stringBuilders[assemblyName] = projectBuilder;
          }

          projectBuilder.Append("     <None Include=\"").Append(EscapedRelativePathFor(asset)).Append("\" />")
            .Append(Environment.NewLine);
        }
      }

      var result = new Dictionary<string, string>();

      foreach (var entry in stringBuilders)
        result[entry.Key] = entry.Value.ToString();

      return result;
    }

    bool IsInternalizedPackagePath(string file)
    {
      if (string.IsNullOrWhiteSpace(file))
      {
        return false;
      }

      var packageInfo = m_AssemblyNameProvider.FindForAssetPath(file);
      if (packageInfo == null)
      {
        return false;
      }

      var packageSource = packageInfo.source;
      return packageSource != PackageSource.Embedded && packageSource != PackageSource.Local;
    }

    void SyncProject(
      Assembly island,
      Dictionary<string, string> allAssetsProjectParts,
      IEnumerable<ResponseFileData> responseFilesData,
      List<Assembly> allProjectIslands,
      Type[] types)
    {
      SyncProjectFileIfNotChanged(ProjectFile(island),
        ProjectText(island, allAssetsProjectParts, responseFilesData.ToList(), allProjectIslands), types);
    }

    void SyncProjectFileIfNotChanged(string path, string newContents, Type[] types)
    {
      if (Path.GetExtension(path) == ".csproj")
      {
        newContents = OnGeneratedCSProject(path, newContents, types);
      }

      SyncFileIfNotChanged(path, newContents);
    }

    void SyncSolutionFileIfNotChanged(string path, string newContents, Type[] types)
    {
      newContents = OnGeneratedSlnSolution(path, newContents, types);

      SyncFileIfNotChanged(path, newContents);
    }

    static List<Type> SafeGetTypes(System.Reflection.Assembly a)
    {
      List<Type> ret;

      try
      {
        ret = a.GetTypes().ToList();
      }
      catch (System.Reflection.ReflectionTypeLoadException rtl)
      {
        ret = rtl.Types.ToList();
      }
      catch (Exception)
      {
        return new List<Type>();
      }

      return ret.Where(r => r != null).ToList();
    }

    static void OnGeneratedCSProjectFiles(Type[] types)
    {
      var args = new object[0];
      foreach (var type in types)
      {
        var method = type.GetMethod("OnGeneratedCSProjectFiles",
          System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic |
          System.Reflection.BindingFlags.Static);
        if (method == null)
        {
          continue;
        }

        method.Invoke(null, args);
      }
    }

    public static Type[] GetAssetPostprocessorTypes()
    {
      return TypeCache.GetTypesDerivedFrom<AssetPostprocessor>().ToArray(); // doesn't find types from EditorPlugin, which is fine
    }

    static bool OnPreGeneratingCSProjectFiles(Type[] types)
    {
      bool result = false;
      foreach (var type in types)
      {
        var args = new object[0];
        var method = type.GetMethod("OnPreGeneratingCSProjectFiles",
          System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic |
          System.Reflection.BindingFlags.Static);
        if (method == null)
        {
          continue;
        }

        var returnValue = method.Invoke(null, args);
        if (method.ReturnType == typeof(bool))
        {
          result |= (bool) returnValue;
        }
      }

      return result;
    }

    static string OnGeneratedCSProject(string path, string content, Type[] types)
    {
      foreach (var type in types)
      {
        var args = new[] {path, content};
        var method = type.GetMethod("OnGeneratedCSProject",
          System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic |
          System.Reflection.BindingFlags.Static);
        if (method == null)
        {
          continue;
        }

        var returnValue = method.Invoke(null, args);
        if (method.ReturnType == typeof(string))
        {
          content = (string) returnValue;
        }
      }

      return content;
    }

    static string OnGeneratedSlnSolution(string path, string content, Type[] types)
    {
      foreach (var type in types)
      {
        var args = new[] {path, content};
        var method = type.GetMethod("OnGeneratedSlnSolution",
          System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic |
          System.Reflection.BindingFlags.Static);
        if (method == null)
        {
          continue;
        }

        var returnValue = method.Invoke(null, args);
        if (method.ReturnType == typeof(string))
        {
          content = (string) returnValue;
        }
      }

      return content;
    }

    void SyncFileIfNotChanged(string filename, string newContents)
    {
      try
      {
        if (m_FileIOProvider.Exists(filename) && newContents == m_FileIOProvider.ReadAllText(filename))
        {
          return;
        }
      }
      catch (Exception exception)
      {
        Debug.LogException(exception);
      }

      m_FileIOProvider.WriteAllText(filename, newContents);
    }

    string ProjectText(Assembly assembly,
      Dictionary<string, string> allAssetsProjectParts,
      List<ResponseFileData> responseFilesData,
      List<Assembly> allProjectIslands)
    {
      var projectBuilder = new StringBuilder(ProjectHeader(assembly, responseFilesData));
      var references = new List<string>();
      var projectReferences = new List<Match>();

      foreach (string file in assembly.sourceFiles)
      {
        if (!ShouldFileBePartOfSolution(file))
          continue;

        var extension = Path.GetExtension(file).ToLower();
        var fullFile = EscapedRelativePathFor(file);
        if (".dll" != extension)
        {
          projectBuilder.Append("     <Compile Include=\"").Append(fullFile).Append("\" />").Append(Environment.NewLine);
        }
        else
        {
          references.Add(fullFile);
        }
      }

      // Append additional non-script files that should be included in project generation.
      if (allAssetsProjectParts.TryGetValue(assembly.name, out var additionalAssetsForProject))
        projectBuilder.Append(additionalAssetsForProject);

      var islandRefs = references.Union(assembly.allReferences);
      foreach (string reference in islandRefs)
      {
        if (reference.EndsWith("/UnityEditor.dll", StringComparison.Ordinal)
            || reference.EndsWith("/UnityEngine.dll", StringComparison.Ordinal)
            || reference.EndsWith("\\UnityEditor.dll", StringComparison.Ordinal)
            || reference.EndsWith("\\UnityEngine.dll", StringComparison.Ordinal))
          continue;

        var match = k_ScriptReferenceExpression.Match(reference);
        if (match.Success)
        {
          // assume csharp language
          // Add a reference to a project except if it's a reference to a script assembly
          // that we are not generating a project for. This will be the case for assemblies
          // coming from .assembly.json files in non-internalized packages.
          var dllName = match.Groups["dllname"].Value;
          if (allProjectIslands.Any(i => Path.GetFileName(i.outputPath) == dllName))
          {
            projectReferences.Add(match);
            continue;
          }
        }

        string fullReference = Path.IsPathRooted(reference) ? reference : Path.Combine(ProjectDirectory, reference);

        AppendReference(fullReference, projectBuilder);
      }

      var responseRefs = responseFilesData.SelectMany(x => x.FullPathReferences.Select(r => r));
      foreach (var reference in responseRefs)
      {
        AppendReference(reference, projectBuilder);
      }

      if (0 < projectReferences.Count)
      {
        projectBuilder.AppendLine("  </ItemGroup>");
        projectBuilder.AppendLine("  <ItemGroup>");
        foreach (Match reference in projectReferences)
        {
          var referencedProject = reference.Groups["project"].Value;

          projectBuilder.Append("    <ProjectReference Include=\"").Append(referencedProject)
            .Append(GetProjectExtension()).Append("\">").Append(Environment.NewLine);
          projectBuilder
            .Append("      <Project>{")
            .Append(m_GUIDGenerator.ProjectGuid(m_ProjectName, reference.Groups["project"].Value))
            .Append("}</Project>")
            .Append(Environment.NewLine);
          projectBuilder.Append("      <Name>").Append(referencedProject).Append("</Name>").Append(Environment.NewLine);
          projectBuilder.AppendLine("    </ProjectReference>");
        }
      }

      projectBuilder.Append(ProjectFooter());
      return projectBuilder.ToString();
    }

    static void AppendReference(string fullReference, StringBuilder projectBuilder)
    {
      //replace \ with / and \\ with /
      var escapedFullPath = SecurityElement.Escape(fullReference);
      escapedFullPath = escapedFullPath.Replace("\\\\", "/").Replace("\\", "/");
      projectBuilder.Append(" <Reference Include=\"").Append(FileSystemUtil.FileNameWithoutExtension(escapedFullPath))
        .Append("\">").Append(Environment.NewLine);
      projectBuilder.Append(" <HintPath>").Append(escapedFullPath).Append("</HintPath>").Append(Environment.NewLine);
      projectBuilder.Append(" </Reference>").Append(Environment.NewLine);
    }

    public string ProjectFile(Assembly assembly)
    {
      return Path.Combine(ProjectDirectory, $"{assembly.name}.csproj");
    }

    public string SolutionFile()
    {
      return Path.Combine(ProjectDirectory, $"{m_ProjectName}.sln");
    }

    string ProjectHeader(
      Assembly assembly,
      List<ResponseFileData> responseFilesData
    )
    {
      var otherResponseFilesData = GetOtherArgumentsFromResponseFilesData(responseFilesData);
      var arguments = new object[]
      {
        k_ToolsVersion, k_ProductVersion, m_GUIDGenerator.ProjectGuid(m_ProjectName, assembly.name),
        InternalEditorUtility.GetEngineAssemblyPath(),
        InternalEditorUtility.GetEditorAssemblyPath(),
        string.Join(";",
          new[] {"DEBUG", "TRACE"}.Concat(EditorUserBuildSettings.activeScriptCompilationDefines).Concat(assembly.defines)
            .Concat(responseFilesData.SelectMany(x => x.Defines)).Distinct().ToArray()),
        MSBuildNamespaceUri,
        assembly.name,
        EditorSettings.projectGenerationRootNamespace,
        k_TargetFrameworkVersion,
        GenerateLangVersion(otherResponseFilesData["langversion"]),
        k_BaseDirectory,
        assembly.compilerOptions.AllowUnsafeCode | responseFilesData.Any(x => x.Unsafe),
        GenerateNoWarn(otherResponseFilesData["nowarn"].Distinct().ToArray()),
        GenerateAnalyserItemGroup(otherResponseFilesData["analyzer"].Concat(otherResponseFilesData["a"]).SelectMany(x=>x.Split(';')).Distinct().ToArray()),
        GenerateAnalyserAdditionalFiles(otherResponseFilesData["additionalfile"].SelectMany(x=>x.Split(';')).Distinct().ToArray()),
        GenerateAnalyserRuleSet(otherResponseFilesData["ruleset"].Distinct().ToArray()),
        GenerateWarningLevel(otherResponseFilesData["warn"].Concat(otherResponseFilesData["w"]).Distinct()),
        GenerateWarningAsError(otherResponseFilesData["warnaserror"]),
        GenerateDocumentationFile(otherResponseFilesData["doc"])
      };

      try
      {
        return string.Format(GetProjectHeaderTemplate(), arguments);
      }
      catch (Exception)
      {
        throw new NotSupportedException(
          "Failed creating c# project because the c# project header did not have the correct amount of arguments, which is " +
          arguments.Length);
      }
    }

    private string GenerateDocumentationFile(IEnumerable<string> paths)
    {
      if (!paths.Any())
        return String.Empty;
      
      
      return $"{Environment.NewLine}{string.Join(Environment.NewLine, paths.Select(a => $"  <DocumentationFile>{a}</DocumentationFile>"))}";
    }

    private string GenerateWarningAsError(IEnumerable<string> enumerable)
    {
      string returnValue = String.Empty;
      bool allWarningsAsErrors = false;
      List<string> warningIds = new List<string>();
      
      foreach (string s in enumerable)
      {
        if (s == "+") allWarningsAsErrors = true;
        else if (s == "-") allWarningsAsErrors = false;
        else
        {
          warningIds.Add(s);
        }
      }

      returnValue += $@"    <TreatWarningsAsErrors>{allWarningsAsErrors}</TreatWarningsAsErrors>";
      if (warningIds.Any())
      {
        returnValue += $"{Environment.NewLine}    <WarningsAsErrors>{string.Join(";", warningIds)}</WarningsAsErrors>";
      }

      return $"{Environment.NewLine}{returnValue}";
    }

    private string GenerateWarningLevel(IEnumerable<string> warningLevel)
    {
      var level = warningLevel.FirstOrDefault();
      if (!string.IsNullOrWhiteSpace(level))
        return level;

      return 4.ToString();
    }

    static string GetSolutionText()
    {
      return string.Join(Environment.NewLine,
        @"",
        @"Microsoft Visual Studio Solution File, Format Version {0}",
        @"# Visual Studio {1}",
        @"{2}",
        @"Global",
        @"    GlobalSection(SolutionConfigurationPlatforms) = preSolution",
        @"        Debug|Any CPU = Debug|Any CPU",
        @"        Release|Any CPU = Release|Any CPU",
        @"    EndGlobalSection",
        @"    GlobalSection(ProjectConfigurationPlatforms) = postSolution",
        @"{3}",
        @"    EndGlobalSection",
        @"    GlobalSection(SolutionProperties) = preSolution",
        @"        HideSolutionNode = FALSE",
        @"    EndGlobalSection",
        @"EndGlobal",
        @"").Replace("    ", "\t");
    }

    static string GetProjectFooterTemplate()
    {
      return string.Join(Environment.NewLine,
        @"  </ItemGroup>",
        @"  <Import Project=""$(MSBuildToolsPath)\Microsoft.CSharp.targets"" />",
        @"  <!-- To modify your build process, add your task inside one of the targets below and uncomment it. ",
        @"       Other similar extension points exist, see Microsoft.Common.targets.",
        @"  <Target Name=""BeforeBuild"">",
        @"  </Target>",
        @"  <Target Name=""AfterBuild"">",
        @"  </Target>",
        @"  -->",
        @"</Project>",
        @"");
    }

    static string GetProjectHeaderTemplate()
    {
      var header = new[]
      {
        @"<?xml version=""1.0"" encoding=""utf-8""?>",
        @"<Project ToolsVersion=""{0}"" DefaultTargets=""Build"" xmlns=""{6}"">",
        @"  <PropertyGroup>",
        @"    <LangVersion>{10}</LangVersion>",
        @"    <_TargetFrameworkDirectories>non_empty_path_generated_by_unity.rider.package</_TargetFrameworkDirectories>",
        @"    <_FullFrameworkReferenceAssemblyPaths>non_empty_path_generated_by_unity.rider.package</_FullFrameworkReferenceAssemblyPaths>", 
        @"    <DisableHandlePackageFileConflicts>true</DisableHandlePackageFileConflicts>{16}",
        @"  </PropertyGroup>",
        @"  <PropertyGroup>",
        @"    <Configuration Condition="" '$(Configuration)' == '' "">Debug</Configuration>",
        @"    <Platform Condition="" '$(Platform)' == '' "">AnyCPU</Platform>",
        @"    <ProductVersion>{1}</ProductVersion>",
        @"    <SchemaVersion>2.0</SchemaVersion>",
        @"    <RootNamespace>{8}</RootNamespace>",
        @"    <ProjectGuid>{{{2}}}</ProjectGuid>",
        @"    <OutputType>Library</OutputType>",
        @"    <AppDesignerFolder>Properties</AppDesignerFolder>",
        @"    <AssemblyName>{7}</AssemblyName>",
        @"    <TargetFrameworkVersion>{9}</TargetFrameworkVersion>",
        @"    <FileAlignment>512</FileAlignment>",
        @"    <BaseDirectory>{11}</BaseDirectory>",
        @"  </PropertyGroup>",
        @"  <PropertyGroup Condition="" '$(Configuration)|$(Platform)' == 'Debug|AnyCPU' "">",
        @"    <DebugSymbols>true</DebugSymbols>",
        @"    <DebugType>full</DebugType>",
        @"    <Optimize>false</Optimize>",
        @"    <OutputPath>Temp\bin\Debug\</OutputPath>",
        @"    <DefineConstants>{5}</DefineConstants>",
        @"    <ErrorReport>prompt</ErrorReport>",
        @"    <WarningLevel>{17}</WarningLevel>",
        @"    <NoWarn>0169{13}</NoWarn>",
        @"    <AllowUnsafeBlocks>{12}</AllowUnsafeBlocks>{18}{19}",
        @"  </PropertyGroup>",
        @"  <PropertyGroup Condition="" '$(Configuration)|$(Platform)' == 'Release|AnyCPU' "">",
        @"    <DebugType>pdbonly</DebugType>",
        @"    <Optimize>true</Optimize>",
        @"    <OutputPath>Temp\bin\Release\</OutputPath>",
        @"    <ErrorReport>prompt</ErrorReport>",
        @"    <WarningLevel>{17}</WarningLevel>",
        @"    <NoWarn>0169{13}</NoWarn>",
        @"    <AllowUnsafeBlocks>{12}</AllowUnsafeBlocks>{18}{19}",
        @"  </PropertyGroup>"
      };

      var forceExplicitReferences = new[]
      {
        @"  <PropertyGroup>",
        @"    <NoConfig>true</NoConfig>",
        @"    <NoStdLib>true</NoStdLib>",
        @"    <AddAdditionalExplicitAssemblyReferences>false</AddAdditionalExplicitAssemblyReferences>",
        @"    <ImplicitlyExpandNETStandardFacades>false</ImplicitlyExpandNETStandardFacades>",
        @"    <ImplicitlyExpandDesignTimeFacades>false</ImplicitlyExpandDesignTimeFacades>",
        @"  </PropertyGroup>"
      };

      var itemGroupStart = new[]
      {
        @"  <ItemGroup>"
      };

      var footer = new[]
      {
        @"    <Reference Include=""UnityEngine"">",
        @"      <HintPath>{3}</HintPath>",
        @"    </Reference>",
        @"    <Reference Include=""UnityEditor"">",
        @"      <HintPath>{4}</HintPath>",
        @"    </Reference>",
        @"  </ItemGroup>{14}{15}",
        @"  <ItemGroup>",
        @""
      };

      var pieces = header.Concat(forceExplicitReferences).Concat(itemGroupStart).Concat(footer).ToArray();
      return string.Join(Environment.NewLine, pieces);
    }

    void SyncSolution(IEnumerable<Assembly> islands, Type[] types)
    {
      SyncSolutionFileIfNotChanged(SolutionFile(), SolutionText(islands), types);
    }

    string SolutionText(IEnumerable<Assembly> islands)
    {
      var fileversion = "11.00";
      var vsversion = "2010";

      var relevantIslands = RelevantIslandsForMode(islands);
      string projectEntries = GetProjectEntries(relevantIslands);
      string projectConfigurations = string.Join(Environment.NewLine,
        relevantIslands.Select(i => GetProjectActiveConfigurations(m_GUIDGenerator.ProjectGuid(m_ProjectName, i.name))).ToArray());
      return string.Format(GetSolutionText(), fileversion, vsversion, projectEntries, projectConfigurations);
    }
    
    private static string GenerateAnalyserItemGroup(string[] paths)
    {
      //   <ItemGroup>
        //      <Analyzer Include="..\packages\Comments_analyser.1.0.6626.21356\analyzers\dotnet\cs\Comments_analyser.dll" />
        //      <Analyzer Include="..\packages\UnityEngineAnalyzer.1.0.0.0\analyzers\dotnet\cs\UnityEngineAnalyzer.dll" />
        //  </ItemGroup>
        if (!paths.Any())
            return string.Empty;

        var analyserBuilder = new StringBuilder();
        analyserBuilder.AppendLine("  <ItemGroup>");
        foreach (var path in paths)
        {
          analyserBuilder.AppendLine($"    <Analyzer Include=\"{path}\" />");
        }
        analyserBuilder.AppendLine("  </ItemGroup>");
        return analyserBuilder.ToString();
    }

    private static ILookup<string, string> GetOtherArgumentsFromResponseFilesData(List<ResponseFileData> responseFilesData)
    {
      var paths = responseFilesData.SelectMany(x =>
        {
          return x.OtherArguments
            .Where(a => a.StartsWith("/") || a.StartsWith("-"))
            .Select(b =>
            {
              var index = b.IndexOf(":", StringComparison.Ordinal);
              if (index > 0 && b.Length > index)
              {
                var key = b.Substring(1, index - 1);
                return new KeyValuePair<string, string>(key, b.Substring(index + 1));
              }

              const string warnaserror = "warnaserror";
              if (b.Substring(1).StartsWith(warnaserror))
              {
                return new KeyValuePair<string,string>(warnaserror, b.Substring(warnaserror.Length+ 1) );
              }

              return default;
            });
        })
        .Distinct()
        .ToLookup(o => o.Key, pair => pair.Value);
      return paths;
    }

    private string GenerateLangVersion(IEnumerable<string> langVersionList)
    {
      var langVersion = langVersionList.FirstOrDefault();
      if (!string.IsNullOrWhiteSpace(langVersion))
        return langVersion;
      return k_TargetLanguageVersion;
    }

    private static string GenerateAnalyserRuleSet(string[] paths)
    {
      //<CodeAnalysisRuleSet>..\path\to\myrules.ruleset</CodeAnalysisRuleSet>
        if (!paths.Any())
            return string.Empty;
      
        return $"{Environment.NewLine}{string.Join(Environment.NewLine, paths.Select(a => $"  <CodeAnalysisRuleSet>{a}</CodeAnalysisRuleSet>"))}";
    }
    
    private static string GenerateAnalyserAdditionalFiles(string[] paths)
    {
      if (!paths.Any())
        return string.Empty;
      
      
      var analyserBuilder = new StringBuilder();
      analyserBuilder.AppendLine("  <ItemGroup>");
      foreach (var path in paths)
      {
        analyserBuilder.AppendLine($"    <AdditionalFiles Include=\"{path}\" />");
      }
      analyserBuilder.AppendLine("  </ItemGroup>");
      return analyserBuilder.ToString();
    }
    
    private static string GenerateNoWarn(string[] codes)
    {
      if (!codes.Any())
        return string.Empty;
      
      return $",{string.Join(",", codes)}";
    }

    static IEnumerable<Assembly> RelevantIslandsForMode(IEnumerable<Assembly> islands)
    {
      IEnumerable<Assembly> relevantIslands = islands.Where(i => ScriptingLanguage.CSharp == ScriptingLanguageFor(i));
      return relevantIslands;
    }

    /// <summary>
    /// Get a Project("{guid}") = "MyProject", "MyProject.unityproj", "{projectguid}"
    /// entry for each relevant language
    /// </summary>
    string GetProjectEntries(IEnumerable<Assembly> islands)
    {
      var projectEntries = islands.Select(i => string.Format(
        m_SolutionProjectEntryTemplate,
        m_GUIDGenerator.SolutionGuid(m_ProjectName, GetExtensionOfSourceFiles(i.sourceFiles)),
        i.name,
        Path.GetFileName(ProjectFile(i)),
        m_GUIDGenerator.ProjectGuid(m_ProjectName, i.name)
      ));

      return string.Join(Environment.NewLine, projectEntries.ToArray());
    }

    /// <summary>
    /// Generate the active configuration string for a given project guid
    /// </summary>
    string GetProjectActiveConfigurations(string projectGuid)
    {
      return string.Format(
        m_SolutionProjectConfigurationTemplate,
        projectGuid);
    }

    string EscapedRelativePathFor(string file)
    {
      var projectDir = ProjectDirectory.Replace('/', '\\');
      file = file.Replace('/', '\\');
      var path = SkipPathPrefix(file, projectDir);

      var packageInfo = m_AssemblyNameProvider.FindForAssetPath(path.Replace('\\', '/'));
      if (packageInfo != null)
      {
        // We have to normalize the path, because the PackageManagerRemapper assumes
        // dir seperators will be os specific.
        var absolutePath = Path.GetFullPath(NormalizePath(path)).Replace('/', '\\');
        path = SkipPathPrefix(absolutePath, projectDir);
      }

      return SecurityElement.Escape(path);
    }

    static string SkipPathPrefix(string path, string prefix)
    {
      if (path.Replace("\\", "/").StartsWith($"{prefix}/"))
        return path.Substring(prefix.Length + 1);
      return path;
    }

    static string NormalizePath(string path)
    {
      if (Path.DirectorySeparatorChar == '\\')
        return path.Replace('/', Path.DirectorySeparatorChar);
      return path.Replace('\\', Path.DirectorySeparatorChar);
    }

    static string ProjectFooter()
    {
      return GetProjectFooterTemplate();
    }

    static string GetProjectExtension()
    {
      return ".csproj";
    }
  }

  public static class SolutionGuidGenerator
  {
    public static string GuidForProject(string projectName)
    {
      return ComputeGuidHashFor(projectName + "salt");
    }

    public static string GuidForSolution(string projectName, string sourceFileExtension)
    {
      if (sourceFileExtension.ToLower() == "cs")
        // GUID for a C# class library: http://www.codeproject.com/Reference/720512/List-of-Visual-Studio-Project-Type-GUIDs
        return "FAE04EC0-301F-11D3-BF4B-00C04F79EFBC";

      return ComputeGuidHashFor(projectName);
    }

    static string ComputeGuidHashFor(string input)
    {
      var hash = MD5.Create().ComputeHash(Encoding.Default.GetBytes(input));
      return HashAsGuid(HashToString(hash));
    }

    static string HashAsGuid(string hash)
    {
      var guid = hash.Substring(0, 8) + "-" + hash.Substring(8, 4) + "-" + hash.Substring(12, 4) + "-" +
                 hash.Substring(16, 4) + "-" + hash.Substring(20, 12);
      return guid.ToUpper();
    }

    static string HashToString(byte[] bs)
    {
      var sb = new StringBuilder();
      foreach (byte b in bs)
        sb.Append(b.ToString("x2"));
      return sb.ToString();
    }
  }
}
