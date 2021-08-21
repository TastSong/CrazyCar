using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditor.Compilation;
using UnityEditor.PackageManager;

namespace VSCodeEditor
{
    public interface IAssemblyNameProvider
    {
        string[] ProjectSupportedExtensions { get; }
        ProjectGenerationFlag ProjectGenerationFlag { get; }
        string GetAssemblyNameFromScriptPath(string path);
        IEnumerable<Assembly> GetAssemblies(Func<string, bool> shouldFileBePartOfSolution);
        IEnumerable<string> GetAllAssetPaths();
        IEnumerable<string> GetRoslynAnalyzerPaths();
        UnityEditor.PackageManager.PackageInfo FindForAssetPath(string assetPath);
        ResponseFileData ParseResponseFile(string responseFilePath, string projectDirectory, string[] systemReferenceDirectories);
        bool IsInternalizedPackagePath(string path);
        void ToggleProjectGeneration(ProjectGenerationFlag preference);
    }

    internal class AssemblyNameProvider : IAssemblyNameProvider
    {
        ProjectGenerationFlag m_ProjectGenerationFlag = (ProjectGenerationFlag)EditorPrefs.GetInt("unity_project_generation_flag", 0);

        public string[] ProjectSupportedExtensions => EditorSettings.projectGenerationUserExtensions;

        public ProjectGenerationFlag ProjectGenerationFlag
        {
            get => m_ProjectGenerationFlag;
            private set
            {
                EditorPrefs.SetInt("unity_project_generation_flag", (int)value);
                m_ProjectGenerationFlag = value;
            }
        }

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

        public bool IsInternalizedPackagePath(string path)
        {
            if (string.IsNullOrWhiteSpace(path))
            {
                return false;
            }
            var packageInfo = FindForAssetPath(path);
            if (packageInfo == null)
            {
                return false;
            }
            var packageSource = packageInfo.source;
            switch (packageSource)
            {
                case PackageSource.Embedded:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.Embedded);
                case PackageSource.Registry:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.Registry);
                case PackageSource.BuiltIn:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.BuiltIn);
                case PackageSource.Unknown:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.Unknown);
                case PackageSource.Local:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.Local);
                case PackageSource.Git:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.Git);
#if UNITY_2019_3_OR_NEWER
                case PackageSource.LocalTarball:
                    return !ProjectGenerationFlag.HasFlag(ProjectGenerationFlag.LocalTarBall);
#endif
            }

            return false;
        }

        public void ToggleProjectGeneration(ProjectGenerationFlag preference)
        {
            if (ProjectGenerationFlag.HasFlag(preference))
            {
                ProjectGenerationFlag ^= preference;
            }
            else
            {
                ProjectGenerationFlag |= preference;
            }
        }

        public IEnumerable<string> GetRoslynAnalyzerPaths()
        {
            return PluginImporter.GetAllImporters()
                .Where(i => !i.isNativePlugin && AssetDatabase.GetLabels(i).SingleOrDefault(l => l == "RoslynAnalyzer") != null)
                .Select(i => i.assetPath);
        }
    }
}
