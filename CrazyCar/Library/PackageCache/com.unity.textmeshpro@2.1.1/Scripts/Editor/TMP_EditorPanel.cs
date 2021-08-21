using UnityEngine;
using UnityEditor;
using UnityEditor.Presets;

namespace TMPro.EditorUtilities
{

    [CustomEditor(typeof(TextMeshPro), true), CanEditMultipleObjects]
    public class TMP_EditorPanel : TMP_BaseEditorPanel
    {
        static readonly GUIContent k_SortingLayerLabel = new GUIContent("Sorting Layer", "Name of the Renderer's sorting layer.");
        static readonly GUIContent k_OrderInLayerLabel = new GUIContent("Order in Layer", "Renderer's order within a sorting layer.");
        static readonly GUIContent k_OrthographicLabel = new GUIContent("Orthographic Mode", "Should be enabled when using an orthographic camera. Instructs the shader to not perform any perspective correction.");
        static readonly GUIContent k_VolumetricLabel = new GUIContent("Volumetric Setup", "Use cubes rather than quads to render the text. Allows for volumetric rendering when combined with a compatible shader.");

        private static string[] k_SortingLayerNames;
        bool IsPreset;

        SerializedProperty m_IsVolumetricTextProp;
        SerializedProperty m_IsOrthographicProp;
        Renderer m_Renderer;

        protected override void OnEnable()
        {
            base.OnEnable();

            // Determine if the inspected object is a Preset
            IsPreset = (int)(target as Component).gameObject.hideFlags == 93;

            m_IsOrthographicProp = serializedObject.FindProperty("m_isOrthographic");

            m_IsVolumetricTextProp = serializedObject.FindProperty("m_isVolumetricText");

            m_Renderer = m_TextComponent.GetComponent<Renderer>();

            // Populate Sorting Layer Names
            k_SortingLayerNames = SortingLayerHelper.sortingLayerNames;
        }

        protected override void DrawExtraSettings()
        {
            Rect rect = EditorGUILayout.GetControlRect(false, 24);

            if (GUI.Button(rect, new GUIContent("<b>Extra Settings</b>"), TMP_UIStyleManager.sectionHeader))
                Foldout.extraSettings = !Foldout.extraSettings;

            GUI.Label(rect, (Foldout.extraSettings ? "" : k_UiStateLabel[1]), TMP_UIStyleManager.rightLabel);

            if (Foldout.extraSettings)
            {
                //EditorGUI.indentLevel += 1;

                DrawMargins();

                DrawSortingLayer();

                DrawGeometrySorting();

                DrawIsTextObjectScaleStatic();

                DrawOrthographicMode();

                DrawRichText();

                DrawParsing();

                DrawSpriteAsset();

                DrawStyleSheet();

                //DrawVolumetricSetup();

                DrawKerning();

                DrawPadding();

                //EditorGUI.indentLevel -= 1;
            }
        }

        protected void DrawSortingLayer()
        {
            Undo.RecordObject(m_Renderer, "Sorting Layer Change");

            EditorGUI.BeginChangeCheck();

            TextMeshPro textComponent = (TextMeshPro)m_TextComponent;

            // Look up the layer name using the current layer ID
            string oldName = IsPreset ? SortingLayer.IDToName(textComponent._SortingLayerID) : SortingLayer.IDToName(textComponent.sortingLayerID);

            // Use the name to look up our array index into the names list
            int oldLayerIndex = System.Array.IndexOf(k_SortingLayerNames, oldName);

            // Show the pop-up for the names
            EditorGUIUtility.fieldWidth = 0f;
            int newLayerIndex = EditorGUILayout.Popup(k_SortingLayerLabel, oldLayerIndex, k_SortingLayerNames);

            // If the index changes, look up the ID for the new index to store as the new ID
            if (newLayerIndex != oldLayerIndex)
                UpdateTargetsSortingLayerID(SortingLayer.NameToID(k_SortingLayerNames[newLayerIndex]));

            // Get value from internal property if target is a Preset otherwise from the public property
            int oldSortingOrder = IsPreset ? textComponent._SortingOrder : textComponent.sortingOrder;

            int newSortingLayerOrder = EditorGUILayout.IntField(k_OrderInLayerLabel, oldSortingOrder);

            if (newSortingLayerOrder != textComponent.sortingOrder)
                UpdateTargetsSortingOrder(newSortingLayerOrder);

            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;

            EditorGUILayout.Space();
        }

        protected void DrawOrthographicMode()
        {
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_IsOrthographicProp, k_OrthographicLabel);
            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;
        }

        protected void DrawVolumetricSetup()
        {
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_IsVolumetricTextProp, k_VolumetricLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
                m_TextComponent.textInfo.ResetVertexLayout(m_IsVolumetricTextProp.boolValue);
            }

            EditorGUILayout.Space();
        }

        // Method to handle multi object selection
        protected override bool IsMixSelectionTypes()
        {
            GameObject[] objects = Selection.gameObjects;
            if (objects.Length > 1)
            {
                for (int i = 0; i < objects.Length; i++)
                {
                    if (objects[i].GetComponent<TextMeshPro>() == null)
                        return true;
                }
            }
            return false;
        }

        protected override void OnUndoRedo()
        {
            int undoEventId = Undo.GetCurrentGroup();
            int lastUndoEventId = s_EventId;

            if (undoEventId != lastUndoEventId)
            {
                for (int i = 0; i < targets.Length; i++)
                {
                    //Debug.Log("Undo & Redo Performed detected in Editor Panel. Event ID:" + Undo.GetCurrentGroup());
                    TMPro_EventManager.ON_TEXTMESHPRO_PROPERTY_CHANGED(true, targets[i] as TextMeshPro);
                    s_EventId = undoEventId;
                }
            }
        }

        void UpdateTargetsSortingLayerID(int sortingLayerID)
        {
            for (int i = 0; i < targets.Length; i++)
            {
                var textComponent = (TextMeshPro)targets[i];

                if (textComponent != null)
                    textComponent.sortingLayerID = sortingLayerID;
            }
        }

        void UpdateTargetsSortingOrder(int sortingOrder)
        {
            for (int i = 0; i < targets.Length; i++)
            {
                var textComponent = (TextMeshPro)targets[i];

                if (textComponent != null)
                    textComponent.sortingOrder = sortingOrder;
            }
        }
    }
}
