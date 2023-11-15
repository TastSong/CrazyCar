using System.Threading;
using System.Threading.Tasks;
using LitJson;
using System.Collections;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using Utils;
using UnityEditor.AddressableAssets.Settings;
using System.Collections.Generic;
using System;
using HybridCLR.Editor.Commands;

public static class BuildHelper {
    public static void BuildGame(string type, string path = null) {
        ConfigBundleID();
        BuildBundleToAsset();
        BuildConfig(type, () => {
            BuildGameApplication(path);
        });
    }

    public static void ConfigBundleID() {
        PlayerSettings.productName = "CrazyCar";
        PlayerSettings.applicationIdentifier = "com.TastSong.CrazyCar";
    }

    public static void BuildBundleToAsset() {
        Debug.Log("Build HotUpdate DLL......");
        PrebuildCommand.GenerateAll();
        CopyFilesToAssets();
        Debug.Log("BuildBundleToAsset......");
        AddressableAssetSettings.BuildPlayerContent();
    }
    
    private static void CopyFilesToAssets() {
        // 根据当前平台构建源文件路径
        string platformFolder = GetPlatformFolder();
        string sourceFilePath = Path.Combine(Application.dataPath, $"../HybridCLRData/HotUpdateDlls/{platformFolder}/HotUpdate.dll");

        string destinationFolderPath = Path.Combine(Application.dataPath, "HotUpdateDll");
        string destinationFilePath = Path.Combine(destinationFolderPath, "HotUpdate.dll.bytes");

        // 删除目标文件夹中的HotUpdate.dll.bytes
        if (File.Exists(destinationFilePath)) {
            File.Delete(destinationFilePath);
        }

        // 复制文件
        File.Copy(sourceFilePath, destinationFilePath);
        // 刷新Unity编辑器
        AssetDatabase.Refresh();
    }
    
    private static string GetPlatformFolder()
    {
#if UNITY_ANDROID
        return "Android";
#elif UNITY_IOS
        return "iOS";
#elif UNITY_STANDALONE
        return "StandaloneWindows";
#endif
        return "Android";
    }

    public static void BuildConfig(string type, Action successCallback = null) {
        ServerType sType = ServerType.Local;
        switch (type) {
            case "Local":
                sType = ServerType.Local;
                break;
            case "Remote":
                sType = ServerType.Remote;
                break;
            case "TestServer":
                sType = ServerType.TestServer;
                break;
            default:
                break;
        }

        BuildConfig(sType, successCallback);
    }

    public static void BuildConfig(ServerType serverType, Action successCallback = null) {
        Debug.Log("BuildConfig......");
        GameObject go = new GameObject();
        NetworkController nc = GameObject.FindObjectOfType<NetworkController>();
        nc.serverType = serverType;
        if (nc == null) {
            return;
        }
        Debug.Log("BuildConfig 当前请求服务器是 ： " + nc.serverType);
        // 设置打板Unity参数
        PlayerSettings.SplashScreen.show = false;
        PlayerSettings.defaultInterfaceOrientation = UIOrientation.LandscapeLeft;

        GameObject.DestroyImmediate(go);
        EditorUtility.SetDirty(nc);
        UnityEditor.SceneManagement.EditorSceneManager.SaveScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene());
        GameObject.DestroyImmediate(go);

        successCallback?.Invoke();
        Debug.Log("Build OVER...");
    }

    // path set to another value to set the target folder directly
    public static void BuildGameApplication(string path = null) {
        //AddressableAssetSettings.BuildPlayerContent();
        Debug.Log("BuildGameApplication......");

        if (path == null) {
            path = EditorUtility.SaveFolderPanel("Choose Location of Built Game", "", "");
            if (path.Length == 0) {
                return;
            }
        }
#if UNITY_ANDROID
        //PlayerSettings.keystorePass = "123456";
        //PlayerSettings.keyaliasPass = "123456";
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, Path.Combine(path, "CrazyCar.apk"), BuildTarget.Android, BuildOptions.None);
#elif UNITY_IOS
        // year baby! olol
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, path, BuildTarget.iOS, BuildOptions.AcceptExternalModificationsToPlayer);
#elif UNITY_STANDALONE
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, Path.Combine(path, "CrazyCar.exe"), BuildTarget.StandaloneWindows,
            BuildOptions.Development | BuildOptions.ConnectWithProfiler);
#endif
    }
}
