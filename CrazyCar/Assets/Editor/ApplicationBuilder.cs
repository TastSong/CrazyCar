using UnityEditor;
#if UNITY_IOS || UNITY_ANDROID
using System.Xml;
using UnityEngine;
#endif

public class ApplicationBuilder : Editor {

    [MenuItem("Window/Build/AB/Local")]
    private static void BuildLocalChina() {
        BuildHelper.ConfigBundleID();
        BuildHelper.BuildBundleToAsset();
        BuildHelper.BuildConfig("Local", () => {
        });
    }

    [MenuItem("Window/Build/AB/Remote")]
    private static void BuildLocalGlobal() {
        BuildHelper.ConfigBundleID();
        BuildHelper.BuildBundleToAsset();
        BuildHelper.BuildConfig("Remote", () => {
        });
    }

    [MenuItem("Window/Build/Local")]
    private static void BuildDevelopChina() {
        BuildHelper.BuildGame("Local");
    }

    [MenuItem("Window/Build/Remote")]
    private static void BuildDevelopGlobal() {
        BuildHelper.BuildGame("Remote");
    }
}