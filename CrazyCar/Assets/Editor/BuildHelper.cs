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

public static class BuildHelper {
    public static void BuildGame(string type, string path = null) {
        ConfigBundleID();
        BuildBundleToAsset();
        BuildConfig(type, () => {
            CopyToAssetBundleDir();
            BuildGameApplication(path);
        });
    }

    public static void ConfigBundleID() {
        PlayerSettings.productName = "CrazyCar";
        PlayerSettings.applicationIdentifier = "com.TastSong.CrazyCar";
    }
    
    public static void BuildBundleToAsset() {
        Debug.Log("1.BuildBundleToAsset......");
        string assetBundleDirectory = Application.streamingAssetsPath;

        if (!Directory.Exists(assetBundleDirectory)) {
            Directory.CreateDirectory(assetBundleDirectory);
        }

#if UNITY_STANDALONE
        var mani = BuildPipeline.BuildAssetBundles(assetBundleDirectory, BuildAssetBundleOptions.ChunkBasedCompression, BuildTarget.StandaloneWindows);
#elif UNITY_ANDROID
        var mani = BuildPipeline.BuildAssetBundles(assetBundleDirectory, BuildAssetBundleOptions.ChunkBasedCompression, BuildTarget.Android);
#elif UNITY_IOS
        var mani = BuildPipeline.BuildAssetBundles(assetBundleDirectory, BuildAssetBundleOptions.ChunkBasedCompression, BuildTarget.iOS);
#endif

        Debug.Log("=======Here is the result========");

        foreach (var name in mani.GetAllAssetBundles()) {
            var file = assetBundleDirectory + "/" + name + ".manifest";
            Debug.Log(file);
            var s = File.ReadAllLines(file);
            Debug.Log(name + " Hash is:  " + mani.GetAssetBundleHash(name).ToString() + " " + s[1].Trim());
        }

        Debug.Log("========End========");
        string n = assetBundleDirectory.Substring(assetBundleDirectory.LastIndexOf("/") + 1);
        File.Delete(assetBundleDirectory + "/" + n);
        File.Delete(assetBundleDirectory + "/" + n + ".manifest");
    }

    public static void BuildConfig(string type, Util.NoneParamFunction successCallback = null) {
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

    public static void BuildConfig(ServerType serverType, Util.NoneParamFunction successCallback = null) {
        Debug.Log("2.BuildConfig......");
        GameObject go = new GameObject();
        AssetBundleHelper abh = go.AddComponent<AssetBundleHelper>();
        NetworkController nc = GameObject.FindObjectOfType<NetworkController>();
        nc.serverType = serverType;
        string path = Application.streamingAssetsPath + "/config.json";
        if (!File.Exists(path)) {
            File.Create(path);
        }
        if (nc == null) {
            return;
        }
        Debug.Log("BuildConfig 当前请求服务器是 ： " + nc.serverType);
        Util.lastLogNid = PlayerPrefs.GetInt(PrefKeys.lastLogNid, 0);
        string url = Util.GetServerBaseUrl(nc.serverType) + RequestUrl.resourceUrl;
        FetchResource(url, go, path, nc, successCallback);
        Debug.LogError("BuildConfig...OVER...");
        PlayerSettings.SplashScreen.show = false;
    }

    private static void FetchResource(string url, GameObject go, string configPath, NetworkController nc, Util.NoneParamFunction successCallback) {
        Debug.Log("请求AB url : " + url);
        UnityWebRequest webRequest = UnityWebRequest.Get(url);
        webRequest.SendWebRequest();
        while (!webRequest.isDone) {
            Debug.Log("Requesting");
            Thread.Sleep(1000);
        }
        if (webRequest.isHttpError || webRequest.isNetworkError)
            Debug.Log(webRequest.error);
        else {
            byte[] results = webRequest.downloadHandler.data;
            string s = Encoding.UTF8.GetString(results);
            Debug.Log("Resquest：" + s);

            JsonData originData = JsonMapper.ToObject(s);
            int code = (int)originData["code"];
            if (code == 200) {
                JsonData data = originData["data"];
                string hashCar = (string)data["car"]["hash"];
                Debug.Log("++++++remote hashCar = " + hashCar);
                string jsonTest = File.ReadAllText(configPath);
                JsonData jsonData = JsonMapper.ToObject(jsonTest);
                jsonData["car"] = hashCar;
                File.WriteAllText(configPath, jsonData.ToJson());
                GameObject.DestroyImmediate(go);
                EditorUtility.SetDirty(nc);
                UnityEditor.SceneManagement.EditorSceneManager.SaveScene(UnityEngine.SceneManagement.SceneManager.GetActiveScene());
                successCallback?.Invoke();
            } else {
                Debug.LogError("request url : " + webRequest.url + "   " + originData.ToJson());
            }
        }
        GameObject.DestroyImmediate(go);
    }

    public static void CopyToAssetBundleDir() {
        string assetBundleDirectory = "AssetBundle";
        CopyDirectory(new DirectoryInfo(Application.streamingAssetsPath), new DirectoryInfo(assetBundleDirectory), true);
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
        AddressableAssetSettings.BuildPlayerContent();
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
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, Path.Combine(path, "onelap.apk"), BuildTarget.Android, BuildOptions.None);
#elif UNITY_IOS
        // year baby! olol
#elif UNITY_STANDALONE
        string exeName = "CrazyCar.exe";
        BuildPipeline.BuildPlayer(EditorBuildSettings.scenes, Path.Combine(path, exeName), BuildTarget.StandaloneWindows,
            BuildOptions.Development | BuildOptions.ConnectWithProfiler);

        //UnityEditor.FileUtil.CopyFileOrDirectory(Path.Combine("postfiles", "OnelapMatchWinForm"),
        //  Path.Combine(path, Path.Combine(exeDataFolder, "OnelapMatchWinForm")));
#endif
    }
}
