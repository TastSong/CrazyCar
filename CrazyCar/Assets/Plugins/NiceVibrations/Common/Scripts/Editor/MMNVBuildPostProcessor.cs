#if UNITY_EDITOR
using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.Build;
#if UNITY_2018_1_OR_NEWER
using UnityEditor.Build.Reporting;
#endif

#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This class takes care of post processing after a build, adding properties to the XCode project or framework depending on the Unity version.
    /// Note that this class tries to guess paths to certain files, and while this will work in most cases, you may be in a configuration where it doesn't.
    /// You'll need to bind the header and mobule files in an asset located in NiceVibrations/Common/Resources, and called
    /// MMNVPathDefinition. Don't change its name! Just select it, and from the editor, bind the files if it's not already the case.
    /// </summary>
    public class MMNVBuildPostProcessor : IPostprocessBuildWithReport
    {
        public static readonly char SEPARATOR = '/';

        /// the order at which this build post processor should run
        public int callbackOrder => 1;

        public static string _pluginPath;

        public static string _headerFileName;
        public static string _headerFileUnityPath;
        public static string _headerFileXCodePath;

        public static string _moduleFileName;
        public static string _moduleFileUnityPath;
        public static string _moduleFileXCodePath;

        public static MMNVPath _mmnvPath;

        public static bool _forceSwiftForFramework = false;
        public static bool _forceSwiftForMainTarget = false;

        /// <summary>
        /// On post process build, we run our treatment, and throw an error if necessary
        /// </summary>
        /// <param name="report"></param>
        public void OnPostprocessBuild(BuildReport report)
        {
            try
            {

                if (EditorUserBuildSettings.symlinkLibraries)
                {
                    Debug.LogError("[MMNVBuildPostProcessor] Please make sure you set 'Symlink Unity Libraries' to false in your build settings before building.");
                }

                if (report.summary.platform == BuildTarget.iOS)
                {
                    string path = report.summary.outputPath;
                    #if UNITY_IOS && UNITY_EDITOR
                        ConfigureXCodeProjectForNativePlugin(path);
                    #endif
                }
            }
            catch (System.Exception e)
            {
                throw new BuildFailedException(e); // make sure the build fails
            }
        }

#if UNITY_IOS && UNITY_EDITOR

        /// <summary>
        /// Grabs the MMNVPathDefinition asset
        /// </summary>
        public static void GetMMNVPath()
        {
            if (_mmnvPath == null)
            {
                _mmnvPath = Resources.Load<MMNVPath>("MMNVPathDefinition");
            }
            if (_mmnvPath != null)
            {
                _forceSwiftForFramework = _mmnvPath.ForceAlwaysEmbedSwiftSLForFramework;
                _forceSwiftForMainTarget = _mmnvPath.ForceAlwaysEmbedSwiftSLForMainTarget;
            }
        }

        /// <summary>
        /// Determines the paths based on the files bound in the MMNVPathDefinition asset
        /// </summary>
        public static void DeterminePaths()
        {
            _pluginPath = "";

            if (_mmnvPath != null)
            {
                _pluginPath = AssetDatabase.GetAssetPath(_mmnvPath.Header);
                _headerFileName = System.IO.Path.GetFileName(_pluginPath);
                _headerFileUnityPath = _pluginPath;

                _pluginPath = ReplaceFirst(_pluginPath, "Assets", "Libraries");
                _pluginPath = _pluginPath.Replace(_headerFileName, "");
                _headerFileXCodePath = _pluginPath + _headerFileName;

                _moduleFileUnityPath = AssetDatabase.GetAssetPath(_mmnvPath.ModuleMap);
                _moduleFileName = System.IO.Path.GetFileName(_moduleFileUnityPath);
                _moduleFileXCodePath = _pluginPath + _moduleFileName;
            }
            else
            {
                Debug.LogError("[MMNVBuildPostProcessor] No MMNVPath asset could be found. Make sure you have one named MMNVPathDefinition in a Resources folder.");
            }
        }

        /// <summary>
        /// A method to setup XCode's framework and main target 
        /// </summary>
        /// <param name="xcodeProjectPath"></param>
        public static void ConfigureXCodeProjectForNativePlugin(string xcodeProjectPath)
        {
            GetMMNVPath();
            DeterminePaths();

            string pbxProjectPath = PBXProject.GetPBXProjectPath(xcodeProjectPath);
            PBXProject pbxProject = new PBXProject();
            pbxProject.ReadFromString(File.ReadAllText(pbxProjectPath));

            string targetGUID = pbxProject.GetUnityFrameworkTargetGuid();
            WritePropertiesToFramework(pbxProject, targetGUID, pbxProjectPath, _pluginPath, _forceSwiftForFramework);

            targetGUID = pbxProject.GetUnityMainTargetGuid();
            WritePropertiesToMainTarget(pbxProject, targetGUID, pbxProjectPath, _pluginPath, _forceSwiftForMainTarget);

            File.WriteAllText(pbxProjectPath, pbxProject.WriteToString());
            Debug.Log("[MMNVBuildPostProcessor] Post process complete.");
        }

        /// <summary>
        /// Writes properties to the XCode framework
        /// </summary>
        /// <param name="pbxProject"></param>
        /// <param name="targetGUID"></param>
        /// <param name="pbxProjectPath"></param>
        /// <param name="pluginPath"></param>
        private static void WritePropertiesToFramework(PBXProject pbxProject, string targetGUID, string pbxProjectPath, string pluginPath, bool forceAlwaysEmbedSwiftStandardLibraries)
        {
            // Full Path to copy from
            Debug.Log("[MMNVBuildPostProcessor] Adding properties to XCode framework");
            Debug.Log("[MMNVBuildPostProcessor] Plugin path : " + pluginPath);

            pbxProject.AddFrameworkToProject(targetGUID, "CoreHaptics.framework", false);
            pbxProject.SetBuildProperty(targetGUID, "SWIFT_VERSION", "5.1");
            pbxProject.SetBuildProperty(targetGUID, "ENABLE_BITCODE", "NO");

            if (forceAlwaysEmbedSwiftStandardLibraries)
            {
                pbxProject.SetBuildProperty(targetGUID, "EMBEDDED_CONTENT_CONTAINS_SWIFT", "YES");
                pbxProject.SetBuildProperty(targetGUID, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "YES");
            }
            pbxProject.SetBuildProperty(targetGUID, "CLANG_ENABLE_MODULES", "YES");
            pbxProject.SetBuildProperty(targetGUID, "SWIFT_INCLUDE_PATHS", pluginPath);
            pbxProject.SetBuildProperty(targetGUID, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks");

            // if you're using the FB SDK and are having issues with your build pipeline, you may want to uncomment these lines (part 1/2) :
            // proj.AddBuildProperty(targetGUID, "OTHER_LDFLAGS", "-lxml2");
            // proj.AddFrameworkToProject(targetGUID, "libxml2.dylib", true);

            // we add a module reference to the pbx project
            Debug.Log("[MMNVBuildPostProcessor] Add module reference : " + _moduleFileUnityPath + " -> " + _moduleFileXCodePath);
            string file_guid = pbxProject.AddFile(_moduleFileXCodePath,
                                                    _moduleFileXCodePath,
                                                    PBXSourceTree.Source);
            Debug.Log("[MMNVBuildPostProcessor] Module GUID : " + file_guid);
            pbxProject.AddFileToBuild(targetGUID, file_guid);
            File.WriteAllText(pbxProjectPath, pbxProject.WriteToString());

            // we copy the module file to the project
            string projFileDir = System.IO.Path.GetDirectoryName(pbxProjectPath);
            string moduleFilePath = Application.dataPath + SEPARATOR + ".." + SEPARATOR + _moduleFileUnityPath;
            string destination = projFileDir + SEPARATOR + ".." + SEPARATOR + pluginPath + _moduleFileName;
            if (!Directory.Exists (Path.GetDirectoryName(destination)))
            {
              Debug.Log("[MMNVBuildPostProcessor] Creating directory " + destination);
              Directory.CreateDirectory(Path.GetDirectoryName(destination));
            }
            Debug.Log("[MMNVBuildPostProcessor] Copy module file to project : " + moduleFilePath + " -> " + destination);
            System.IO.File.Copy(moduleFilePath, destination, true);

            Debug.Log("[MMNVBuildPostProcessor] Copy module file to project : " + moduleFilePath + " -> " + destination);
            string headerGUID = pbxProject.AddFile(_headerFileUnityPath,
                                                    _headerFileXCodePath,
                                                    PBXSourceTree.Source);
            pbxProject.AddFileToBuild(targetGUID, headerGUID);
            pbxProject.AddPublicHeaderToBuild(targetGUID, headerGUID);

            Debug.Log("[MMNVBuildPostProcessor] Framework complete");
        }

        /// <summary>
        /// Writes properties to the main target
        /// </summary>
        private static void WritePropertiesToMainTarget(PBXProject pbxProject, string targetGUID, string pbxProjectPath, string pluginPath, bool forceAlwaysEmbedSwiftStandardLibraries)
        {
            Debug.Log("[MMNVBuildPostProcessor] Writing properties to main target");
            pbxProject.SetBuildProperty(targetGUID, "SWIFT_VERSION", "5.1");
            if (forceAlwaysEmbedSwiftStandardLibraries)
            {
                pbxProject.SetBuildProperty(targetGUID, "EMBEDDED_CONTENT_CONTAINS_SWIFT", "YES");
                pbxProject.SetBuildProperty(targetGUID, "ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES", "YES");
            }
            Debug.Log("[MMNVBuildPostProcessor] Main target complete");

            // if you're using the FB SDK and are having issues with your build pipeline, you may want to uncomment these lines (part 2/2) :
            // proj.AddBuildProperty(targetGuid, "OTHER_LDFLAGS", "-lxml2");
            // proj.AddFrameworkToProject(targetGuid, "libxml2.dylib", true);
            // proj.AddFrameworkToProject(targetGuid, "StoreKit.framework", true);
        }

        /// <summary>
        /// A helper method that replaces the first found instance of a pattern in a string with a replacement
        /// </summary>
        /// <param name="text"></param>
        /// <param name="search"></param>
        /// <param name="replace"></param>
        /// <returns></returns>
        public static string ReplaceFirst(string text, string search, string replace)
        {
            int pos = text.IndexOf(search);
            if (pos < 0)
            {
                return text;
            }
            return text.Substring(0, pos) + replace + text.Substring(pos + search.Length);
        }
#endif
    }
}
#endif
