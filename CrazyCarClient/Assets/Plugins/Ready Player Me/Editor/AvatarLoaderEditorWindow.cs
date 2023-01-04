using UnityEditor;
using UnityEngine;

namespace ReadyPlayerMe
{
    public class AvatarLoaderEditorWindow : EditorWindowBase
    {
        private const string AnimsPath = "/Plugins/Ready Player Me/Resources/Animations";

        private const string UrlSaveKey = "UrlSaveKey";
        private const string VoiceToAnimSaveKey = "VoiceToAnimSaveKey";
        private const string EyeAnimationSaveKey = "EyeAnimationSaveKey";
        private const string ModelCachingSaveKey = "ModelCachingSaveKey";

        private string url = null;
        private bool useVoiceToAnim = false;
        private bool useAvatarCaching = false;
        private bool useEyeAnimations = false;
        private bool variablesLoaded = false;

        private readonly GUILayoutOption fieldHeight = GUILayout.Height(20);
        private readonly GUILayoutOption inputFieldWidth = GUILayout.Width(140);
        private GUIStyle folderButtonStyle = null;
        private GUIStyle avatarButtonStyle = null;
        private static Vector2 windowSize = new Vector2Int(512, 532);

        [MenuItem("Ready Player Me/Avatar Loader")]
        private static void ShowWindowMenu()
        {
            ShowWindow(true);
        }

        public static void ShowWindow(bool force)
        {
            if (force || !SessionState.GetBool("WindowInit", false))
            {
                AvatarLoaderEditorWindow window = GetWindow(typeof(AvatarLoaderEditorWindow)) as AvatarLoaderEditorWindow;
                window.titleContent = new GUIContent("Avatar Loader");
                window.minSize = window.maxSize = windowSize;
                window.ShowUtility();
                SessionState.SetBool("WindowInit", true);
            }
        }

        private void OnGUI()
        {
            if (!variablesLoaded) LoadCachedVariables();

            DrawContent(() =>
            {
                LoadStyles();
                EditorGUILayout.BeginVertical("Box");
                DrawInputField();
                DrawModelCaching();
                DrawOptions();
                DrawLoadAvatarButton();
                EditorGUILayout.EndVertical();

                DrawAnimationButtons();
            });
        }

        private void LoadStyles()
        {
            if (folderButtonStyle == null)
            {
                folderButtonStyle = new GUIStyle(GUI.skin.button);
                folderButtonStyle.fontSize = 12;
                folderButtonStyle.padding = new RectOffset(5, 5, 5, 5);
            }
            
            if (avatarButtonStyle == null)
            {
                avatarButtonStyle = new GUIStyle(GUI.skin.button);
                avatarButtonStyle.fontStyle = FontStyle.Bold;
                avatarButtonStyle.fontSize = 14;
                avatarButtonStyle.padding = new RectOffset(5, 5, 10, 10);
                avatarButtonStyle.fixedHeight = 40;
            }
        }

        private void LoadCachedVariables()
        {
            url = EditorPrefs.GetString(UrlSaveKey);
            useAvatarCaching = EditorPrefs.GetBool(ModelCachingSaveKey);
            useEyeAnimations = EditorPrefs.GetBool(EyeAnimationSaveKey);
            useVoiceToAnim = EditorPrefs.GetBool(VoiceToAnimSaveKey);

            variablesLoaded = true;
        }

        private void DrawInputField()
        {
            GUI.skin.textField.fontSize = 12;

            EditorGUILayout.BeginHorizontal("Box");
            EditorGUILayout.LabelField(new GUIContent("Avatar Url or Short Code", "Paste the avatar URL received from Ready Player Me here."), inputFieldWidth);
            url = EditorGUILayout.TextField(url, fieldHeight);
            EditorPrefs.SetString(UrlSaveKey, url);
            EditorGUILayout.EndHorizontal();
        }

        private void DrawModelCaching()
        {
            EditorGUILayout.BeginVertical("Box");

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(new GUIContent("Use Avatar Caching", "Use the model already downloaded instead of downloading it again."), inputFieldWidth);
            useAvatarCaching = EditorGUILayout.Toggle(useAvatarCaching, fieldHeight);
            EditorPrefs.SetBool(ModelCachingSaveKey, useAvatarCaching);
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.HelpBox("Changes you make on Ready Player Me are reflected over the same URL. If caching is toggled on, avatar model with changes will not be downloaded.", MessageType.Info);

            EditorGUILayout.EndVertical();
        }

        private void DrawOptions()
        {
            EditorGUILayout.BeginVertical("Box");

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(new GUIContent("Use Eye Animations", "Optional helper component for random eye rotation and blinking, for a less static look."), inputFieldWidth);
            useEyeAnimations = EditorGUILayout.Toggle(useEyeAnimations, fieldHeight);
            EditorPrefs.SetBool(EyeAnimationSaveKey, useEyeAnimations);
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(new GUIContent("Use Voice To Animation", "Optional helper component for voice amplitude to jaw bone movement."), inputFieldWidth);
            useVoiceToAnim = EditorGUILayout.Toggle(useVoiceToAnim, fieldHeight);
            EditorPrefs.SetBool(VoiceToAnimSaveKey, useVoiceToAnim);
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.EndVertical();
        }

        private void DrawLoadAvatarButton()
        {
            GUI.enabled = !string.IsNullOrEmpty(url);
            if (GUILayout.Button("Load Avatar", avatarButtonStyle))
            {
                var avatarLoader = new AvatarLoader();
                avatarLoader.OnFailed += Failed;
                avatarLoader.OnCompleted += Completed;
                avatarLoader.UseAvatarCaching = useAvatarCaching;
                avatarLoader.LoadAvatar(url);
            }
            GUI.enabled = true;
        }

        private void Failed(object sender, FailureEventArgs args)
        {
            Debug.LogError($"{args.Type} - {args.Message}");
        }

        private void Completed(object sender, CompletionEventArgs args)
        {
            Debug.Log("Avatar loaded.");

            if (useEyeAnimations) args.Avatar.AddComponent<EyeAnimationHandler>();
            if (useVoiceToAnim) args.Avatar.AddComponent<VoiceHandler>();

            Selection.activeObject = args.Avatar;
        }

        private void DrawAnimationButtons()
        {
            EditorGUILayout.BeginVertical("Box");
            EditorGUILayout.HelpBox("To use Mixamo animations on full-body avatars, use 'FBX for Unity' and 'With Skin' settings. Add the file to 'Animations' folder. Finally select the animation in the FBX file, press CTRL+D and separate the animation from the FBX file.", MessageType.Info);
            EditorGUILayout.BeginHorizontal();
            
            if (GUILayout.Button("Reveal Animations Folder", folderButtonStyle))
            {
                EditorUtility.RevealInFinder(Application.dataPath + AnimsPath);
            }
            EditorGUILayout.EndHorizontal();
            EditorGUILayout.EndVertical();
        }
    }
}
