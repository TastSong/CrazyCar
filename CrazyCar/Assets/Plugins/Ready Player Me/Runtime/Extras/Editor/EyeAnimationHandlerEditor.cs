using UnityEditor;
using UnityEngine;

namespace ReadyPlayerMe
{
    [CustomEditor(typeof(EyeAnimationHandler))]
    public class EyeAnimationHandlerEditor : Editor
    {
        private readonly GUIContent blinkSpeedLabel = new GUIContent("Blink Speed", "How fast the eyes blink in seconds.");
        private readonly GUIContent blinkRateLabel = new GUIContent("Blink Interval", "Frequency of eye blinking in seconds.");

        private SerializedProperty blinkSpeed;
        private SerializedProperty blinkRate;

        private void OnEnable()
        {
            blinkSpeed = serializedObject.FindProperty("blinkSpeed");
            blinkRate = serializedObject.FindProperty("blinkInterval");
        }

        public override void OnInspectorGUI()
        {
            DrawPropertyField(blinkSpeed, blinkSpeedLabel);
            DrawPropertyField(blinkRate, blinkRateLabel);
        }

        private void DrawPropertyField(SerializedProperty property, GUIContent content)
        {
            serializedObject.Update();

            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(property, content);
            if (EditorGUI.EndChangeCheck() && Application.isPlaying)
            {
                (target as EyeAnimationHandler)?.Initialize();
            }
            serializedObject.ApplyModifiedProperties();
        }
    }
}
