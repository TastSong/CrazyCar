using System;
using UnityEngine;

public abstract class WebViewWindowBase : MonoBehaviour
{
    // Callbacks
    public Action<string> OnJS;
    public Action<string> OnError;
    public Action<string> OnHttpError;
    public Action<string> OnStarted;
    public Action<string> OnLoaded;
    public Action<string> OnHooked;

    // Cached window margins
    protected int marginLeft;
    protected int marginTop;
    protected int marginRight;
    protected int marginBottom;

    protected MessagePanel messageCanvas;
    protected int windowVisibleDisplayFrameHeight;

    #region Properties
    // Window visibility
    protected bool isVisible = false;
    public abstract bool IsVisible { get; set; }

    // Keyboard visibility
    protected bool iskeyboardVisible = false;
    public abstract bool IsKeyboardVisible { get; set; }

    // Alert Dialog 
    protected bool alertDialogEnabled = true;
    public abstract bool AlertDialogEnabled { get; set; }

    // Scroll Bounce
    protected bool scrollBounceEnabled = true;
    public abstract bool ScrollBounceEnabled { get; set; }
    #endregion

    public abstract void Init(WebViewOptions options);

    public abstract void SetMargins(int left, int top, int right, int bottom);
    
    public abstract void LoadURL(string url);

    public abstract void LoadHTML(string html, string baseUrl);

    public abstract void EvaluateJS(string js);

    public abstract int Progress { get; }

    #region Navigation Methods
    public abstract bool CanGoBack();

    public abstract bool CanGoForward();

    public abstract void GoBack();
    
    public abstract void GoForward();

    public abstract void Reload();
    #endregion

    #region Session Related Methods
    public abstract void AddCustomHeader(string key, string value);

    public abstract string GetCustomHeaderValue(string key);

    public abstract void RemoveCustomHeader(string key);

    public abstract void ClearCustomHeader();

    public abstract void ClearCookies();

    public abstract void SaveCookies();

    public abstract string GetCookies(string url);

    public abstract void SetBasicAuthInfo(string userName, string password);

    public abstract void ClearCache(bool includeDiskFiles);
    #endregion

    #region Callback Methods
    public void CallFromJS(string message) => OnJS?.Invoke(message);
    public void CallOnHooked(string message) => OnHooked?.Invoke(message);
    public void CallOnLoaded(string url) => OnLoaded?.Invoke(url);
    public void CallOnStarted(string url) => OnStarted?.Invoke(url);
    public void CallOnError(string error) => OnError?.Invoke(error);
    public void CallOnHttpError(string error) => OnHttpError?.Invoke(error);
    #endregion
}
