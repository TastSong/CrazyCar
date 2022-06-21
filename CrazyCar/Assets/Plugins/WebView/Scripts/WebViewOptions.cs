public enum ColorMode
{
    SystemSetting = 0,
    DarkModeOff = 1,
    DarkModeOn = 2
}

public enum WebkitContentMode
{
    Recommended = 0,
    Mobile = 1,
    Desktop = 2
}

public class WebViewOptions
{
    public bool Transparent = false;
    public bool Zoom = false;
    public string UA = "";
    public ColorMode AndroidForceDarkMode = ColorMode.DarkModeOff;
    public bool EnableWKWebView = true;
    public WebkitContentMode WKContentMode = WebkitContentMode.Recommended;
}
