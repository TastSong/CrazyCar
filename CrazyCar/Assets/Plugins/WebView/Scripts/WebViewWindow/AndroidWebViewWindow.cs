#if UNITY_ANDROID
using UnityEngine;
using UnityEngine.Android;

public class AndroidWebViewWindow : WebViewWindowBase
{
    private const string WebViewAndroidPluginName = "io.wolf3d.webviewplugin.CWebViewPlugin";

    private AndroidJavaObject webView;
    private AndroidJavaObject rectangle;

    public override void Init(WebViewOptions options)
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
        {
            Permission.RequestUserPermission(Permission.Camera);
        }

        webView = new AndroidJavaObject(WebViewAndroidPluginName);
        webView.Call("Init", name, options.Transparent, options.Zoom, (int)options.AndroidForceDarkMode, options.UA);

        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            AndroidJavaObject view = currentActivity.Get<AndroidJavaObject>("mUnityPlayer").Call<AndroidJavaObject>("getView");
            rectangle = new AndroidJavaObject("android.graphics.Rect");

            view.Call("getWindowVisibleDisplayFrame", rectangle);
            windowVisibleDisplayFrameHeight = rectangle.Call<int>("height");
        }
    }

    public override void SetMargins(int left, int top, int right, int bottom)
    {
        bottom = AdjustBottomMargin(bottom);
        webView.Call("SetMargins", left, top, right, bottom);
    }

    private int AdjustBottomMargin(int bottom)
    {
        if (IsKeyboardVisible)
        {
            int keyboardHeight = windowVisibleDisplayFrameHeight - rectangle.Call<int>("height");
            return (bottom > keyboardHeight) ? bottom : keyboardHeight;
        }

        return bottom;
    }

    public override bool IsVisible
    {
        get
        {
            return isVisible;
        }
        set
        {
            isVisible = value;
            webView.Call("SetVisibility", value);
        }
    }

    public override bool IsKeyboardVisible
    {
        get
        {
            return iskeyboardVisible;
        }
        set
        {
            iskeyboardVisible = value;
            SetMargins(marginLeft, marginTop, marginRight, marginBottom);
        }
    }

    public override bool AlertDialogEnabled
    {
        get
        {
            return alertDialogEnabled;
        }
        set
        {
            alertDialogEnabled = value;
            webView.Call("SetAlertDialogEnabled", value);
        }
    }
    
    public override bool ScrollBounceEnabled
    {
        get
        {
            return scrollBounceEnabled;
        }
        set
        {
            scrollBounceEnabled = value;
        }
    }

    public override void LoadURL(string url)
    {
        webView.Call("LoadURL", url);
    }

    public override void LoadHTML(string html, string baseUrl)
    {
        webView.Call("LoadHTML", html, baseUrl);
    }

    public override void EvaluateJS(string js)
    {
        webView.Call("EvaluateJS", js);
    }


    #region Navigation Methods
    public override int Progress => webView.Get<int>("progress");

    public override bool CanGoBack() => webView.Get<bool>("canGoBack");

    public override bool CanGoForward() => webView.Get<bool>("canGoForward");

    public override void GoBack() => webView.Call("GoBack");

    public override void GoForward() => webView.Call("GoForward");

    public override void Reload() => webView.Call("Reload");
    #endregion

    #region Session Related Methods
    public override void AddCustomHeader(string key, string value) => webView.Call("AddCustomHeader", key, value);

    public override string GetCustomHeaderValue(string key) => webView.Call<string>("GetCustomHeaderValue", key);

    public override void RemoveCustomHeader(string key) => webView.Call("RemoveCustomHeader", key);

    public override void ClearCustomHeader() => webView.Call("ClearCustomHeader");

    public override void ClearCookies() => webView.Call("ClearCookies");

    public override void SaveCookies() => webView.Call("SaveCookies");

    public override string GetCookies(string url) => webView.Call<string>("GetCookies", url);

    public override void SetBasicAuthInfo(string userName, string password) => webView.Call("SetBasicAuthInfo", userName, password);

    public override void ClearCache(bool includeDiskFiles)=> webView.Call("ClearCache", includeDiskFiles);
    #endregion
    
    private void OnDestroy()
    {
        webView.Call("Destroy");
        webView = null;
    }
}
#endif
