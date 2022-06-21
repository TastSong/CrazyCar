#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;

public class WebViewEditor : Editor
{
    private const string WebViewCanvasFileName = "WebViewCanvas";

    [MenuItem("GameObject/UI/WebView Canvas", false)]
    private static void LoadWebViewCanvas()
    {
        GameObject prefab = Resources.Load<GameObject>(WebViewCanvasFileName);
        GameObject instance = Instantiate(prefab);
        instance.name = WebViewCanvasFileName;
        EditorUtility.SetDirty(instance);
    }
}
#endif
