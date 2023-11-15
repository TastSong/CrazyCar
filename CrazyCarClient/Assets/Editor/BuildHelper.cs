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
        Debug.Log("BuildBundleToAsset......");
        AddressableAssetSettings.BuildPlayerContent();
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
