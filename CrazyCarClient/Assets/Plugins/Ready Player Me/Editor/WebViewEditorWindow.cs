using System;
using UnityEditor;
using UnityEngine;
using System.Linq;

namespace ReadyPlayerMe
{
    public class WebViewEditorWindow : EditorWindowBase
    {
        private const string WebViewPartnerSaveKey = "WebViewPartnerSubdomainName";
        private const string HelpText = "If you are a Ready Player Me partner who owns a subdomain, you can enter it here to change your WebView start url. If you want to use the default website please leave this blank.";

        private ScriptableObject partner;
        private string partnerSubdomain = "";
        private bool initialized = false;

        private bool saveButtonDirty = true;
        private string SaveButtonText => saveButtonDirty ? "Save" : "Subdomain Saved!";

        private static Vector2Int windowSize = new Vector2Int(512, 390);

        private GUIStyle textFieldStyle = null;
        private GUIStyle textLabelStyle = null;
        private GUIStyle saveButtonStyle = null;

        [MenuItem("Ready Player Me/WebView Partner Editor")]
        public static void ShowWindowMenu()
        {
            WebViewEditorWindow window = GetWindow(typeof(WebViewEditorWindow)) as WebViewEditorWindow;
            window.titleContent = new GUIContent("WebView Partner Editor");
            window.minSize = window.maxSize = windowSize;
            window.ShowUtility();
        }

        private void Initialize()
        {
            partner = Resources.Load<ScriptableObject>("Partner");
            Type type = partner.GetType();
            var method = type.GetMethod("GetSubdomain");
            partnerSubdomain = method.Invoke(partner, null) as string;

            initialized = true;
        }

        private void OnGUI()
        {
            if (!initialized) Initialize();

            LoadStyles();

            DrawContent(()=>
            {
                DrawContent();
            });
        }

        private void LoadStyles()
        {
            if (saveButtonStyle == null)
            {
                saveButtonStyle = new GUIStyle(GUI.skin.button);
                saveButtonStyle.fontSize = 14;
                saveButtonStyle.fontStyle = FontStyle.Bold;
                saveButtonStyle.fixedHeight = 40;
                saveButtonStyle.padding = new RectOffset(5, 5, 10, 10);
            }
            if(textFieldStyle == null)
            {
                textFieldStyle = new GUIStyle(GUI.skin.textField);
                textFieldStyle.alignment = TextAnchor.MiddleCenter;
                textFieldStyle.fontSize = 16;
            }

            if (textLabelStyle == null)
            {
                textLabelStyle = new GUIStyle(GUI.skin.label);
                textLabelStyle.alignment = TextAnchor.MiddleLeft;
                textLabelStyle.fontStyle = FontStyle.Bold;
                textLabelStyle.fontSize = 16;
            }
        }

        private void DrawContent()
        {
            Vertical(() => {
                EditorGUILayout.HelpBox(HelpText, MessageType.Info);

                EditorGUILayout.Space();

                Horizontal(() => { 
                    EditorGUILayout.LabelField("https://", textLabelStyle, GUILayout.Width(65), GUILayout.Height(30));
                    string oldValue = partnerSubdomain;
                    partnerSubdomain = EditorGUILayout.TextField(oldValue, textFieldStyle, GUILayout.Width(300), GUILayout.Height(30));
                    EditorGUILayout.LabelField(".readyplayer.me", textLabelStyle, GUILayout.Width(128), GUILayout.Height(30));

                    if(oldValue != partnerSubdomain)
                    {
                        saveButtonDirty = true;
                    }
                });

                EditorGUILayout.Space();
                
                if (GUILayout.Button(SaveButtonText, saveButtonStyle) && ValidateSubdomain())
                {
                    saveButtonDirty = false;
                    EditorPrefs.SetString(WebViewPartnerSaveKey, partnerSubdomain);

                    Type type = partner.GetType();
                    var field = type.GetField("Subdomain");
                    field.SetValue(partner, partnerSubdomain);
                    EditorUtility.SetDirty(partner);
                    AssetDatabase.SaveAssets();
                }
            }, true);
        }

        private bool ValidateSubdomain()
        {
            if (partnerSubdomain.All(c => char.IsWhiteSpace(c)))
            {
                EditorUtility.DisplayDialog("Subdomain Format Error", $"Partner subdomain cannot contain white space. Value you entered is '{ partnerSubdomain }'.", "OK");
                return false;
            }

            return true;
        }
    }
}
