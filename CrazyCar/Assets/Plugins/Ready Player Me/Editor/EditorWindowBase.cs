using System;
using UnityEditor;
using UnityEngine;

namespace ReadyPlayerMe
{
    public class EditorWindowBase : EditorWindow
    {
        public const string Version = "v1.10.0";

        private const string BannerPath = "Assets/Plugins/Ready Player Me/Editor/RPM_EditorImage_Banner.png";
        private const string LovePath = "Assets/Plugins/Ready Player Me/Editor/RPM_EditorImage_Love.png";

        private const string BecomeAPartnerUrl = "https://bit.ly/UnitySDKForm";
        private const string BecomePartnerText = "Would you like to become a Ready Player Me partner to have your a own subdomain with your logo and custom theme? Click on the button and fill in the form to get in touch with us!";

        private const string DocsUrl = "https://bit.ly/UnitySDKDocs";
        private const string faqUrl= "https://docs.readyplayer.me/overview/frequently-asked-questions/game-engine-faq";
        private const string DiscordUrl = "https://bit.ly/UnitySDKDiscord";

        private const int HeaderTop = 110;
        private readonly Vector2 headerSize = new Vector2(320, 10);

        private static Texture2D banner = null;
        private static Texture2D love = null;

        private GUIStyle headerTextStyle = null;
        private GUIStyle footerTextStyle = null;
        private GUIStyle webButtonStyle = null;
        private GUIStyle partnerButtonStyle = null;

        private readonly GUILayoutOption windowWidth = GUILayout.Width(512);

        private void LoadAssets()
        {
            if (banner == null) banner = AssetDatabase.LoadAssetAtPath<Texture2D>(BannerPath);
            if (love == null) love = AssetDatabase.LoadAssetAtPath<Texture2D>(LovePath);

            if (headerTextStyle == null)
            {
                headerTextStyle = new GUIStyle();
                headerTextStyle.fontSize = 18;
                headerTextStyle.richText = true;
                headerTextStyle.fontStyle = FontStyle.Bold;
                headerTextStyle.normal.textColor = Color.white;
            }

            if (footerTextStyle == null)
            {
                footerTextStyle = new GUIStyle();
                footerTextStyle.richText = true;
                footerTextStyle.fontStyle = FontStyle.Bold;
                footerTextStyle.normal.textColor = GUI.skin.label.normal.textColor;
            }

            if (webButtonStyle == null)
            {
                webButtonStyle = new GUIStyle(GUI.skin.button);
                webButtonStyle.fontSize = 12;
                webButtonStyle.fixedWidth = 166;
                webButtonStyle.padding = new RectOffset(5, 5, 5, 5);
            }

            if (partnerButtonStyle == null)
            {
                partnerButtonStyle = new GUIStyle(GUI.skin.button);
                partnerButtonStyle.fontSize = 12;
                partnerButtonStyle.padding = new RectOffset(5, 5, 8, 8);
            } 
        }

        public void DrawContent(Action content)
        {
            LoadAssets();

            Horizontal(() =>
            {
                GUILayout.FlexibleSpace();
                Vertical(() => {
                    DrawBanner();
                    content?.Invoke();
                    DrawExternalLinks();
                }, windowWidth);
                GUILayout.FlexibleSpace();
            });
        }

        private void DrawBanner()
        {
            if (banner != null)
            {
                GUI.DrawTexture(new Rect((position.size.x - banner.width) / 2, 0, banner.width, banner.height), banner);
            }

            EditorGUI.DropShadowLabel(new Rect((position.size.x - headerSize.x) / 2, HeaderTop, headerSize.y, banner.height), $"Ready Player Me Unity SDK { Version }", headerTextStyle);

            GUILayout.Space(142);
        }

        private void DrawExternalLinks()
        {
            Vertical(() =>
            {
                EditorGUILayout.HelpBox(BecomePartnerText, MessageType.Info);
                EditorGUILayout.BeginHorizontal();
                if (GUILayout.Button("Become a Partner", partnerButtonStyle))
                {
                    Application.OpenURL(BecomeAPartnerUrl);
                }

                EditorGUILayout.EndHorizontal();
            }, true);
            
            EditorGUILayout.BeginHorizontal("Box");
            GUILayout.FlexibleSpace();
            if (GUILayout.Button("Documentation", webButtonStyle))
            {
                Application.OpenURL(DocsUrl);
            }
            if (GUILayout.Button("FAQ", webButtonStyle))
            {
                Application.OpenURL(faqUrl);
            }
            if (GUILayout.Button("Discord", webButtonStyle))
            {
                Application.OpenURL(DiscordUrl);
            }
            GUILayout.FlexibleSpace();
            EditorGUILayout.EndHorizontal();
        }

        #region Horizontal and Vertical Layouts
        public void Vertical(Action content, bool isBox = false)
        {
            EditorGUILayout.BeginVertical(isBox ? "Box" : GUIStyle.none);
            content?.Invoke();
            EditorGUILayout.EndVertical();
        }

        public void Vertical(Action content, params GUILayoutOption[] options)
        {
            EditorGUILayout.BeginVertical(options);
            content?.Invoke();
            EditorGUILayout.EndVertical();
        }

        public void Horizontal(Action content, bool isBox = false)
        {
            EditorGUILayout.BeginHorizontal(isBox ? "Box" : GUIStyle.none);
            content?.Invoke();
            EditorGUILayout.EndHorizontal();
        }

        public void Horizontal(Action content, params GUILayoutOption[] options)
        {
            EditorGUILayout.BeginHorizontal(options);
            content?.Invoke();
            EditorGUILayout.EndHorizontal();
        }
        #endregion
    }
}
