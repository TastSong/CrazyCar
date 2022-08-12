using UnityEditor;
#if UNITY_IOS || UNITY_ANDROID
using System.Xml;
using UnityEngine;
#endif

public class ApplicationBuilder : Editor {
    [MenuItem("Window/Build/Local")]
    private static void BuildLocal() {
        BuildHelper.BuildGame("Local");
    }

    [MenuItem("Window/Build/Remote")]
    private static void BuildRemote() {
        BuildHelper.BuildGame("Remote");
    }

    [MenuItem("Window/Build/TestServer")]
    private static void BuildTestServer() {
        BuildHelper.BuildGame("TestServer");
    }
}