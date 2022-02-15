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
        BuildConfig(type, () => {
            BuildGameApplication(path);
        });
    }

    public static void ConfigBundleID() {
        PlayerSettings.productName = "CrazyCar";
        PlayerSettings.applicationIdentifier = "com.TastSong.CrazyCar";
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
        Debug.Log("BuildConfig...OVER...");
        successCallback?.Invoke();
    }

    /// <summary>
    /// 拷贝目录内容
    /// </summary>
    /// <param name="source">源目录</param>
    /// <param name="destination">目的目录</param>
    /// <param name="copySubDirs">是否拷贝子目录</param>
    private static void CopyDirectory(DirectoryInfo source, DirectoryInfo destination, bool copySubDirs) {
        if (!destination.Exists) {
            destination.Create(); //目标目录若不存在就创建
        }
        FileInfo[] files = source.GetFiles();
        foreach (FileInfo file in files) {
            file.CopyTo(Path.Combine(destination.FullName, file.Name), true); //复制目录中所有文件
        }
        if (copySubDirs) {
            DirectoryInfo[] dirs = source.GetDirectories();
            foreach (DirectoryInfo dir in dirs) {
                string destinationDir = Path.Combine(destination.FullName, dir.Name);
                CopyDirectory(dir, new DirectoryInfo(destinationDir), copySubDirs); //复制子目录
            }
        }
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
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, Path.Combine(path, "CrazyCarXCode"), BuildTarget.iOS, BuildOptions.AcceptExternalModificationsToPlayer);
#elif UNITY_STANDALONE
        string exeName = "CrazyCar.exe";
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, Path.Combine(path, exeName), BuildTarget.StandaloneWindows,
            BuildOptions.Development | BuildOptions.ConnectWithProfiler);

        //UnityEditor.FileUtil.CopyFileOrDirectory(Path.Combine("postfiles", "OnelapMatchWinForm"),
        //  Path.Combine(path, Path.Combine(exeDataFolder, "OnelapMatchWinForm")));
#endif
    }
}
