using UnityEditor;
using UnityEngine;

namespace ReadyPlayerMe
{
    [CustomEditor(typeof(VoiceHandler))]
    public class VoiceHandlerEditor : Editor
    {
        private readonly GUIContent AudioClipLabel = new GUIContent("AudioClip", "AudioClip to play.");
        private readonly GUIContent AudioSourceLabel = new GUIContent("AudioSource", "AudioSource that will play the audio. If not assigned spawns on the avatar root object.");
        private readonly GUIContent AudioProviderLabel = new GUIContent("AudioProvider", "Selection for source of the audio.");

        private SerializedProperty AudioClip;
        private SerializedProperty AudioSource;
        private SerializedProperty AudioProvider;

        private void OnEnable()
        {
            AudioClip = serializedObject.FindProperty("AudioClip");
            AudioSource = serializedObject.FindProperty("AudioSource");
            AudioProvider = serializedObject.FindProperty("AudioProvider");
        }

        public override void OnInspectorGUI()
        {
            DrawPropertyField(AudioProvider, AudioProviderLabel);
            DrawPropertyField(AudioSource, AudioSourceLabel);

            if (AudioProvider.intValue == (int)AudioProviderType.AudioClip)
            {
                DrawPropertyField(AudioClip, AudioClipLabel);

                GUI.enabled = Application.isPlaying;
                if(GUILayout.Button("Test Audio Clip [Play Mode]"))
                {
                    (target as VoiceHandler).PlayCurrentAudioClip();
                }
                GUI.enabled = true;
            }
            
            #if UNITY_WEBGL
            if (AudioProvider.intValue == (int)AudioProviderType.Microphone)
            {
                EditorGUILayout.HelpBox("Microphone is not supported in WebGL.", MessageType.Warning);
            }
            #endif
        }

        private void DrawPropertyField(SerializedProperty property, GUIContent content)
        {
            serializedObject.Update();

            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(property, content);
            if (EditorGUI.EndChangeCheck())
            {
                serializedObject.ApplyModifiedProperties();
                (target as VoiceHandler).InitializeAudio();
            }
        }
    }
}
