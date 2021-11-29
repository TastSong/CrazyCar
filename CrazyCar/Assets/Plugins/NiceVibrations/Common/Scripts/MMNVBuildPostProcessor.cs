#if UNITY_EDITOR
using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;

#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif

namespace MoreMountains.NiceVibrations
{
    /// <summary>
    /// This class takes care of post processing after a build
    /// </summary>
    public class MMNVBuildPostProcessor
    {

        public static string GetPluginPath()
        {
#if UNITY_IOS && UNITY_EDITOR
            string[] res = System.IO.Directory.GetFiles(Application.dataPath, "MMNVBuildPostProcessor.cs", SearchOption.AllDirectories);
            if (res.Length == 0)
            {
                return "error";
            }
            string path = res[0].Replace("MMNVBuildPostProcessor.cs", "").Replace("\\", "/");

            string[] explodedPath = path.Split('/');

            string finalPath = "Libraries/";

            bool assetsFound = false;
            for (int i = 0; i < explodedPath.Length; i++)
            {
                if (!assetsFound)
                {
                    if (explodedPath[i] == "Assets")
                    {
                        assetsFound = true;
                    }
                }
                else
                {
                    finalPath += explodedPath[i]+"/";
                }                
            }
            finalPath = finalPath.Replace("//", "/");
            finalPath = finalPath.Replace("Common/Scripts/", "Common/Plugins/iOS/Swift/");

            if (!finalPath.Contains("Common/Plugins/iOS/Swift"))
            {
                return "path not found";
            }

            return finalPath;
#else 
            return "not iOS";
#endif
        }

        /// <summary>
        /// After an iOS build, sets proper paths, framework, etc to the iOS project
        /// </summary>
        /// <param name="target"></param>
        /// <param name="path"></param>
        [PostProcessBuildAttribute(1)]
        public static void OnPostProcessBuild(BuildTarget target, string path)
        {
#if UNITY_IOS && UNITY_EDITOR

            string pluginPath = GetPluginPath();
            
            if (target == BuildTarget.iOS)
            {
                string pbxProjectPath = PBXProject.GetPBXProjectPath(path);
                PBXProject pbxProject = new PBXProject();
                pbxProject.ReadFromString(File.ReadAllText(pbxProjectPath));
                string unityTargetName = PBXProject.GetUnityTargetName();
                string targetGUID = pbxProject.TargetGuidByName(unityTargetName);

                pbxProject.AddFrameworkToProject(targetGUID, "CoreHaptics.framework", false);

                pbxProject.AddBuildProperty(targetGUID, "SWIFT_VERSION", "5.1");
                pbxProject.SetBuildProperty(targetGUID, "ENABLE_BITCODE", "NO");
                pbxProject.SetBuildProperty(targetGUID, "SWIFT_OBJC_BRIDGING_HEADER", pluginPath+"UnitySwift-Bridging-Header.h");
                pbxProject.SetBuildProperty(targetGUID, "SWIFT_OBJC_INTERFACE_HEADER_NAME", "unityswift-Swift.h");
                pbxProject.AddBuildProperty(targetGUID, "LD_RUNPATH_SEARCH_PATHS", "@executable_path/Frameworks");

                File.WriteAllText(pbxProjectPath, pbxProject.WriteToString());
                Debug.Log("[MMNVBuildPostProcessor] On post process build - CoreHaptics framework added, path : "+pluginPath);
            }
#endif
        }
    }
}
#endif