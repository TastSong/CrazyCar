#if UNITY_IOS
using System;
using UnityEngine;
using System.Runtime.InteropServices;

public class IOSWebViewWindow : WebViewWindowBase
{
    private IntPtr webView;

    #region DLL Import
    [DllImport("__Internal")]
    private static extern IntPtr _CWebViewPlugin_Init(string gameObject, bool transparent, bool zoom, string ua, bool enableWKWebView, int wkContentMode);
    [DllImport("__Internal")]
    private static extern int _CWebViewPlugin_Destroy(IntPtr instance);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_SetMargins(IntPtr instance, float left, float top, float right, float bottom, bool relative);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_SetVisibility(IntPtr instance, bool visibility);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_SetAlertDialogEnabled(IntPtr instance, bool enabled);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_SetScrollBounceEnabled(IntPtr instance, bool enabled);
    [DllImport("__Internal")]
    private static extern bool _CWebViewPlugin_SetURLPattern(IntPtr instance, string allowPattern, string denyPattern, string hookPattern);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_LoadURL(IntPtr instance, string url);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_LoadHTML(IntPtr instance, string html, string baseUrl);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_EvaluateJS(IntPtr instance, string url);
    [DllImport("__Internal")]
    private static extern int _CWebViewPlugin_Progress(IntPtr instance);
    [DllImport("__Internal")]
    private static extern bool _CWebViewPlugin_CanGoBack(IntPtr instance);
    [DllImport("__Internal")]
    private static extern bool _CWebViewPlugin_CanGoForward(IntPtr instance);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_GoBack(IntPtr instance);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_GoForward(IntPtr instance);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_Reload(IntPtr instance);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_AddCustomHeader(IntPtr instance, string headerKey, string headerValue);
    [DllImport("__Internal")]
    private static extern string _CWebViewPlugin_GetCustomHeaderValue(IntPtr instance, string headerKey);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_RemoveCustomHeader(IntPtr instance, string headerKey);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_ClearCustomHeader(IntPtr instance);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_ClearCookies();
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_SaveCookies();
    [DllImport("__Internal")]
    private static extern string _CWebViewPlugin_GetCookies(string url);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_SetBasicAuthInfo(IntPtr instance, string userName, string password);
    [DllImport("__Internal")]
    private static extern void _CWebViewPlugin_ClearCache(IntPtr instance, bool includeDiskFiles);
    #endregion

    public override void Init(WebViewOptions options)
    {
        if (!Application.HasUserAuthorization(UserAuthorization.WebCam))
        {
            Application.RequestUserAuthorization(UserAuthorization.WebCam);
        }

        webView = _CWebViewPlugin_Init(name, options.Transparent, options.Zoom, options.UA, options.EnableWKWebView, (int)options.WKContentMode);
    }

    public override void SetMargins(int left, int top, int right, int bottom)
    {
        _CWebViewPlugin_SetMargins(webView, left, top, right, bottom, false);
    }

    public override bool IsVisible
    { 
        get
        {
            return isVisible;
        }
        set {
            isVisible = value;
            _CWebViewPlugin_SetVisibility(webView, value);
        }
    }

    public override bool IsKeyboardVisible
    {
        get
        {
            return  TouchScreenKeyboard.visible;
        }
        set
        {
            Debug.LogWarning("Overwritten by [TouchScreenKeyboard.visible]");
            iskeyboardVisible = TouchScreenKeyboard.visible;
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
            _CWebViewPlugin_SetAlertDialogEnabled(webView, value);
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
            _CWebViewPlugin_SetScrollBounceEnabled(webView, value);
        }
    }

    public override void LoadURL(string url)
    {
        _CWebViewPlugin_LoadURL(webView, url);
    }

    public override void LoadHTML(string html, string baseUrl)
    {
        _CWebViewPlugin_LoadHTML(webView, html, baseUrl);
    }

    public override void EvaluateJS(string js)
    {
        _CWebViewPlugin_EvaluateJS(webView, js);
    }

    #region Navigation Methods
    public override int Progress => _CWebViewPlugin_Progress(webView);

    public override bool CanGoBack() => _CWebViewPlugin_CanGoBack(webView);

    public override bool CanGoForward() => _CWebViewPlugin_CanGoForward(webView);

    public override void GoBack() => _CWebViewPlugin_GoBack(webView);
 
    public override void GoForward() => _CWebViewPlugin_GoForward(webView);

    public override void Reload() => _CWebViewPlugin_Reload(webView);
    #endregion

    #region Session Related Methods
    public override void AddCustomHeader(string key, string value) => _CWebViewPlugin_AddCustomHeader(webView, key, value);

    public override string GetCustomHeaderValue(string key) => _CWebViewPlugin_GetCustomHeaderValue(webView, key);

    public override void RemoveCustomHeader(string key) => _CWebViewPlugin_RemoveCustomHeader(webView, key);

    public override void ClearCustomHeader() => _CWebViewPlugin_ClearCustomHeader(webView);

    public override void ClearCache(bool includeDiskFiles) => _CWebViewPlugin_ClearCache(webView, includeDiskFiles);

    public override void ClearCookies() => _CWebViewPlugin_ClearCookies();

    public override string GetCookies(string url) => _CWebViewPlugin_GetCookies(url);

    public override void SaveCookies() => _CWebViewPlugin_SaveCookies();

    public override void SetBasicAuthInfo(string userName, string password) => _CWebViewPlugin_SetBasicAuthInfo(webView, userName, password);
    #endregion

    private void OnDestroy()
    {
        _CWebViewPlugin_Destroy(webView);
        webView = IntPtr.Zero;
    }
}
#endif
