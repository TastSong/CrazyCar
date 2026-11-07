using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;
using System.IO;

public static class iOSSceneFix
{
    [PostProcessBuild(1001)]
    public static void OnPostProcessBuild(BuildTarget target, string buildPath)
    {
        if (target != BuildTarget.iOS) return;

        string projPath = PBXProject.GetPBXProjectPath(buildPath);
        var proj = new PBXProject();
        proj.ReadFromFile(projPath);

        string mainTarget = proj.GetUnityMainTargetGuid();

        // 1) 给 Unity-iPhone 补上 UIKit
        proj.AddFrameworkToProject(mainTarget, "UIKit.framework", false);

        // 2) 确保 SceneDelegate.mm 在 Compile Sources 里
        //    文件放在 Assets/Plugins/iOS/ 时，导出路径是 Libraries/Plugins/iOS/
        string rel = "Libraries/Plugins/iOS/SceneDelegate.mm";
        string guid = proj.FindFileGuidByProjectPath(rel);
        if (string.IsNullOrEmpty(guid))
            guid = proj.AddFile(rel, rel, PBXSourceTree.Source);
        if (!string.IsNullOrEmpty(guid))
            proj.AddFileToBuild(mainTarget, guid);

        proj.WriteToFile(projPath);

        // 3) 顺带保证 plist 里的 Scene Manifest 存在
        string plistPath = Path.Combine(buildPath, "Info.plist");
        var plist = new PlistDocument();
        plist.ReadFromFile(plistPath);
        if (plist.root["UIApplicationSceneManifest"] == null)
        {
            var manifest = plist.root.CreateDict("UIApplicationSceneManifest");
            manifest.SetBoolean("UIApplicationSupportsMultipleScenes", false);
            var configs = manifest.CreateDict("UISceneConfigurations");
            var arr = configs.CreateArray("UIWindowSceneSessionRoleApplication");
            var item = arr.AddDict();
            item.SetString("UISceneConfigurationName", "Default Configuration");
            item.SetString("UISceneDelegateClassName", "SceneDelegate");
        }
        plist.WriteToFile(plistPath);
    }
}