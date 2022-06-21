using UnityEngine;
using UnityEngine.UI;

namespace ReadyPlayerMe
{
    public class WebViewExample : MonoBehaviour
    {
        private GameObject avatar;

        [SerializeField] private WebView webView;
        [SerializeField] private GameObject loadingLabel = null;
        [SerializeField] private Button displayButton = null;
        [SerializeField] private Button closeButton = null;
        
        [SerializeField, Tooltip("Uncheck if you don't want to continue editing the previous avatar, and make a completely new one.")] 
        private bool keepBrowserSessionAlive = true;
        private void Start()
        {
            displayButton.onClick.AddListener(DisplayWebView);
            closeButton.onClick.AddListener(HideWebView);
            if(webView == null)
            {
                webView = FindObjectOfType<WebView>();
            }
            webView.KeepSessionAlive = keepBrowserSessionAlive;
        }

        // Display WebView or create it if not initialized yet 
        private void DisplayWebView()
        {
            if (webView.Loaded)
            {
                webView.SetVisible(true);
            }
            else
            {
                webView.CreateWebView();
                webView.OnAvatarCreated = OnAvatarCreated;
            }
            
            closeButton.gameObject.SetActive(true);
            displayButton.gameObject.SetActive(false);
        }

        private void HideWebView()
        {
            webView.SetVisible(false);
            closeButton.gameObject.SetActive(false);
            displayButton.gameObject.SetActive(true);
        }

        // WebView callback for retrieving avatar url
        private void OnAvatarCreated(string url)
        {
            if (avatar) Destroy(avatar);
            webView.SetVisible(false);
            
            loadingLabel.SetActive(true);
            displayButton.gameObject.SetActive(false);
            closeButton.gameObject.SetActive(false);

            var avatarLoader = new AvatarLoader();
            avatarLoader.OnCompleted += Completed;
            avatarLoader.OnFailed += Failed;
            avatarLoader.LoadAvatar(url);
        }

        private void Failed(object sender, FailureEventArgs args)
        {
            Debug.LogError(args.Type);
        }

        // AvatarLoader callback for retrieving loaded avatar game object
        private void Completed(object sender, CompletionEventArgs args)
        {
            avatar = args.Avatar;
            loadingLabel.SetActive(false);
            displayButton.gameObject.SetActive(true);

            Debug.Log("Avatar Imported");
        }

        private void Destroy()
        {
            displayButton.onClick.RemoveListener(DisplayWebView);
            closeButton.onClick.RemoveListener(HideWebView);
        }
    }
}