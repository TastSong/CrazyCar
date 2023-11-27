using UnityEditor;
#if UNITY_IOS || UNITY_ANDROID
using System.Xml;
using UnityEngine;
#endif

public class ApplicationBuilder : Editor {
    [MenuItem("Build/Local")]
    private static void BuildLocal() {
        BuildHelper.BuildGame("Local");
    }

    [MenuItem("Build/Remote")]
    private static void BuildRemote() {
        BuildHelper.BuildGame("Remote");
    }

    [MenuItem("Build/TestServer")]
    private static void BuildTestServer() {
        BuildHelper.BuildGame("TestServer");
    }
    
    [MenuItem("Build/HotFix")]
    private static void BuildHotFix() {
        BuildHelper.BuildBundleToAsset();
    }
}