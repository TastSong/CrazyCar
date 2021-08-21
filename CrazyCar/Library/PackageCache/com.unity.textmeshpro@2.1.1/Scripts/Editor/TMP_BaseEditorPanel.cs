using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.Linq;


namespace TMPro.EditorUtilities
{
    public abstract class TMP_BaseEditorPanel : Editor
    {
        //Labels and Tooltips
        static readonly GUIContent k_RtlToggleLabel = new GUIContent("Enable RTL Editor", "Reverses text direction and allows right to left editing.");
        //static readonly GUIContent k_MainSettingsLabel = new GUIContent("Main Settings");
        static readonly GUIContent k_FontAssetLabel = new GUIContent("Font Asset", "The Font Asset containing the glyphs that can be rendered for this text.");
        static readonly GUIContent k_MaterialPresetLabel = new GUIContent("Material Preset", "The material used for rendering. Only materials created from the Font Asset can be used.");
        static readonly GUIContent k_StyleLabel = new GUIContent("Text Style", "The style from a style sheet to be applied to the text.");
        static readonly GUIContent k_AutoSizeLabel = new GUIContent("Auto Size", "Auto sizes the text to fit the available space.");
        static readonly GUIContent k_FontSizeLabel = new GUIContent("Font Size", "The size the text will be rendered at in points.");
        static readonly GUIContent k_AutoSizeOptionsLabel = new GUIContent("Auto Size Options");
        static readonly GUIContent k_MinLabel = new GUIContent("Min", "The minimum font size.");
        static readonly GUIContent k_MaxLabel = new GUIContent("Max", "The maximum font size.");
        static readonly GUIContent k_WdLabel = new GUIContent("WD%", "Compresses character width up to this value before reducing font size.");
        static readonly GUIContent k_LineLabel = new GUIContent("Line", "Negative value only. Compresses line height down to this value before reducing font size.");
        static readonly GUIContent k_FontStyleLabel = new GUIContent("Font Style", "Styles to apply to the text such as Bold or Italic.");

        static readonly GUIContent k_BoldLabel = new GUIContent("B", "Bold");
        static readonly GUIContent k_ItalicLabel = new GUIContent("I", "Italic");
        static readonly GUIContent k_UnderlineLabel = new GUIContent("U", "Underline");
        static readonly GUIContent k_StrikethroughLabel = new GUIContent("S", "Strikethrough");
        static readonly GUIContent k_LowercaseLabel = new GUIContent("ab", "Lowercase");
        static readonly GUIContent k_UppercaseLabel = new GUIContent("AB", "Uppercase");
        static readonly GUIContent k_SmallcapsLabel = new GUIContent("SC", "Smallcaps");

        static readonly GUIContent k_ColorModeLabel = new GUIContent("Color Mode", "The type of gradient to use.");
        static readonly GUIContent k_BaseColorLabel = new GUIContent("Vertex Color", "The base color of the text vertices.");
        static readonly GUIContent k_ColorPresetLabel = new GUIContent("Color Preset", "A Color Preset which override the local color settings.");
        static readonly GUIContent k_ColorGradientLabel = new GUIContent("Color Gradient", "The gradient color applied over the Vertex Color. Can be locally set or driven by a Gradient Asset.");
        static readonly GUIContent k_CorenerColorsLabel = new GUIContent("Colors", "The color composition of the gradient.");
        static readonly GUIContent k_OverrideTagsLabel = new GUIContent("Override Tags", "Whether the color settings override the <color> tag.");

        static readonly GUIContent k_SpacingOptionsLabel = new GUIContent("Spacing Options (em)", "Spacing adjustments between different elements of the text. Values are in font units where a value of 1 equals 1/100em.");
        static readonly GUIContent k_CharacterSpacingLabel = new GUIContent("Character");
        static readonly GUIContent k_WordSpacingLabel = new GUIContent("Word");
        static readonly GUIContent k_LineSpacingLabel = new GUIContent("Line");
        static readonly GUIContent k_ParagraphSpacingLabel = new GUIContent("Paragraph");

        static readonly GUIContent k_AlignmentLabel = new GUIContent("Alignment", "Horizontal and vertical aligment of the text within its container.");
        static readonly GUIContent k_WrapMixLabel = new GUIContent("Wrap Mix (W <-> C)", "How much to favor words versus characters when distributing the text.");

        static readonly GUIContent k_WrappingLabel = new GUIContent("Wrapping", "Wraps text to the next line when reaching the edge of the container.");
        static readonly GUIContent[] k_WrappingOptions = { new GUIContent("Disabled"), new GUIContent("Enabled") };
        static readonly GUIContent k_OverflowLabel = new GUIContent("Overflow", "How to display text which goes past the edge of the container.");

        static readonly GUIContent k_MarginsLabel = new GUIContent("Margins", "The space between the text and the edge of its container.");
        static readonly GUIContent k_GeometrySortingLabel = new GUIContent("Geometry Sorting", "The order in which text geometry is sorted. Used to adjust the way overlapping characters are displayed.");
        static readonly GUIContent k_IsTextObjectScaleStatic = new GUIContent("Is Scale Static", "Controls whether a text object will be excluded from the InteralUpdate callback to handle scale changes of the text object or its parent(s).");
        static readonly GUIContent k_RichTextLabel = new GUIContent("Rich Text", "Enables the use of rich text tags such as <color> and <font>.");
        static readonly GUIContent k_EscapeCharactersLabel = new GUIContent("Parse Escape Characters", "Whether to display strings such as \"\\n\" as is or replace them by the character they represent.");
        static readonly GUIContent k_VisibleDescenderLabel = new GUIContent("Visible Descender", "Compute descender values from visible characters only. Used to adjust layout behavior when hiding and revealing characters dynamically.");
        static readonly GUIContent k_SpriteAssetLabel = new GUIContent("Sprite Asset", "The Sprite Asset used when NOT specifically referencing one using <sprite=\"Sprite Asset Name\">.");
        static readonly GUIContent k_StyleSheetAssetLabel = new GUIContent("Style Sheet Asset", "The Style Sheet Asset used by this text object.");

        static readonly GUIContent k_HorizontalMappingLabel = new GUIContent("Horizontal Mapping", "Horizontal UV mapping when using a shader with a texture face option.");
        static readonly GUIContent k_VerticalMappingLabel = new GUIContent("Vertical Mapping", "Vertical UV mapping when using a shader with a texture face option.");
        static readonly GUIContent k_LineOffsetLabel = new GUIContent("Line Offset", "Adds an horizontal offset to each successive line. Used for slanted texturing.");

        static readonly GUIContent k_KerningLabel = new GUIContent("Kerning", "Enables character specific spacing between pairs of characters.");
        static readonly GUIContent k_PaddingLabel = new GUIContent("Extra Padding", "Adds some padding between the characters and the edge of the text mesh. Can reduce graphical errors when displaying small text.");

        static readonly GUIContent k_LeftLabel = new GUIContent("Left");
        static readonly GUIContent k_TopLabel = new GUIContent("Top");
        static readonly GUIContent k_RightLabel = new GUIContent("Right");
        static readonly GUIContent k_BottomLabel = new GUIContent("Bottom");

        protected static readonly GUIContent k_ExtraSettingsLabel = new GUIContent("Extra Settings");
        protected static string[] k_UiStateLabel = new string[] { "<i>(Click to collapse)</i> ", "<i>(Click to expand)</i> " };

        static Dictionary<int, TMP_Style> k_AvailableStyles = new Dictionary<int, TMP_Style>();
        protected Dictionary<int, int> m_TextStyleIndexLookup = new Dictionary<int, int>();

        protected struct Foldout
        {
            // Track Inspector foldout panel states, globally.
            public static bool extraSettings = false;
            public static bool materialInspector = true;
        }

        protected static int s_EventId;

        public int selAlignGridA;
        public int selAlignGridB;

        protected SerializedProperty m_TextProp;

        protected SerializedProperty m_IsRightToLeftProp;
        protected string m_RtlText;

        protected SerializedProperty m_FontAssetProp;

        protected SerializedProperty m_FontSharedMaterialProp;
        protected Material[] m_MaterialPresets;
        protected GUIContent[] m_MaterialPresetNames;
        protected Dictionary<int, int> m_MaterialPresetIndexLookup = new Dictionary<int, int>();
        protected int m_MaterialPresetSelectionIndex;
        protected bool m_IsPresetListDirty;

        protected List<TMP_Style> m_Styles = new List<TMP_Style>();
        protected GUIContent[] m_StyleNames;
        protected int m_StyleSelectionIndex;

        protected SerializedProperty m_FontStyleProp;

        protected SerializedProperty m_FontColorProp;
        protected SerializedProperty m_EnableVertexGradientProp;
        protected SerializedProperty m_FontColorGradientProp;
        protected SerializedProperty m_FontColorGradientPresetProp;
        protected SerializedProperty m_OverrideHtmlColorProp;

        protected SerializedProperty m_FontSizeProp;
        protected SerializedProperty m_FontSizeBaseProp;

        protected SerializedProperty m_AutoSizingProp;
        protected SerializedProperty m_FontSizeMinProp;
        protected SerializedProperty m_FontSizeMaxProp;

        protected SerializedProperty m_LineSpacingMaxProp;
        protected SerializedProperty m_CharWidthMaxAdjProp;

        protected SerializedProperty m_CharacterSpacingProp;
        protected SerializedProperty m_WordSpacingProp;
        protected SerializedProperty m_LineSpacingProp;
        protected SerializedProperty m_ParagraphSpacingProp;

        protected SerializedProperty m_TextAlignmentProp;

        protected SerializedProperty m_HorizontalAlignmentProp;
        protected SerializedProperty m_VerticalAlignmentProp;

        protected SerializedProperty m_HorizontalMappingProp;
        protected SerializedProperty m_VerticalMappingProp;
        protected SerializedProperty m_UvLineOffsetProp;

        protected SerializedProperty m_EnableWordWrappingProp;
        protected SerializedProperty m_WordWrappingRatiosProp;
        protected SerializedProperty m_TextOverflowModeProp;
        protected SerializedProperty m_PageToDisplayProp;
        protected SerializedProperty m_LinkedTextComponentProp;
        protected SerializedProperty m_ParentLinkedTextComponentProp;

        protected SerializedProperty m_EnableKerningProp;

        protected SerializedProperty m_IsRichTextProp;

        protected SerializedProperty m_HasFontAssetChangedProp;

        protected SerializedProperty m_EnableExtraPaddingProp;
        protected SerializedProperty m_CheckPaddingRequiredProp;
        protected SerializedProperty m_EnableEscapeCharacterParsingProp;
        protected SerializedProperty m_UseMaxVisibleDescenderProp;
        protected SerializedProperty m_GeometrySortingOrderProp;
        protected SerializedProperty m_IsTextObjectScaleStaticProp;

        protected SerializedProperty m_SpriteAssetProp;

        protected SerializedProperty m_StyleSheetAssetProp;
        protected SerializedProperty m_TextStyleHashCodeProp;

        protected SerializedProperty m_MarginProp;

        protected SerializedProperty m_ColorModeProp;

        protected bool m_HavePropertiesChanged;

        protected TMP_Text m_TextComponent;
        protected TMP_Text m_PreviousLinkedTextComponent;
        protected RectTransform m_RectTransform;

        protected Material m_TargetMaterial;

        protected Vector3[] m_RectCorners = new Vector3[4];
        protected Vector3[] m_HandlePoints = new Vector3[4];

        protected virtual void OnEnable()
        {
            m_TextProp = serializedObject.FindProperty("m_text");
            m_IsRightToLeftProp = serializedObject.FindProperty("m_isRightToLeft");
            m_FontAssetProp = serializedObject.FindProperty("m_fontAsset");
            m_FontSharedMaterialProp = serializedObject.FindProperty("m_sharedMaterial");

            m_FontStyleProp = serializedObject.FindProperty("m_fontStyle");

            m_FontSizeProp = serializedObject.FindProperty("m_fontSize");
            m_FontSizeBaseProp = serializedObject.FindProperty("m_fontSizeBase");

            m_AutoSizingProp = serializedObject.FindProperty("m_enableAutoSizing");
            m_FontSizeMinProp = serializedObject.FindProperty("m_fontSizeMin");
            m_FontSizeMaxProp = serializedObject.FindProperty("m_fontSizeMax");

            m_LineSpacingMaxProp = serializedObject.FindProperty("m_lineSpacingMax");
            m_CharWidthMaxAdjProp = serializedObject.FindProperty("m_charWidthMaxAdj");

            // Colors & Gradient
            m_FontColorProp = serializedObject.FindProperty("m_fontColor");
            m_EnableVertexGradientProp = serializedObject.FindProperty("m_enableVertexGradient");
            m_FontColorGradientProp = serializedObject.FindProperty("m_fontColorGradient");
            m_FontColorGradientPresetProp = serializedObject.FindProperty("m_fontColorGradientPreset");
            m_OverrideHtmlColorProp = serializedObject.FindProperty("m_overrideHtmlColors");

            m_CharacterSpacingProp = serializedObject.FindProperty("m_characterSpacing");
            m_WordSpacingProp = serializedObject.FindProperty("m_wordSpacing");
            m_LineSpacingProp = serializedObject.FindProperty("m_lineSpacing");
            m_ParagraphSpacingProp = serializedObject.FindProperty("m_paragraphSpacing");

            m_TextAlignmentProp = serializedObject.FindProperty("m_textAlignment");
            m_HorizontalAlignmentProp = serializedObject.FindProperty("m_HorizontalAlignment");
            m_VerticalAlignmentProp = serializedObject.FindProperty("m_VerticalAlignment");

            m_HorizontalMappingProp = serializedObject.FindProperty("m_horizontalMapping");
            m_VerticalMappingProp = serializedObject.FindProperty("m_verticalMapping");
            m_UvLineOffsetProp = serializedObject.FindProperty("m_uvLineOffset");

            m_EnableWordWrappingProp = serializedObject.FindProperty("m_enableWordWrapping");
            m_WordWrappingRatiosProp = serializedObject.FindProperty("m_wordWrappingRatios");
            m_TextOverflowModeProp = serializedObject.FindProperty("m_overflowMode");
            m_PageToDisplayProp = serializedObject.FindProperty("m_pageToDisplay");
            m_LinkedTextComponentProp = serializedObject.FindProperty("m_linkedTextComponent");
            m_ParentLinkedTextComponentProp = serializedObject.FindProperty("parentLinkedComponent");

            m_EnableKerningProp = serializedObject.FindProperty("m_enableKerning");

            m_EnableExtraPaddingProp = serializedObject.FindProperty("m_enableExtraPadding");
            m_IsRichTextProp = serializedObject.FindProperty("m_isRichText");
            m_CheckPaddingRequiredProp = serializedObject.FindProperty("checkPaddingRequired");
            m_EnableEscapeCharacterParsingProp = serializedObject.FindProperty("m_parseCtrlCharacters");
            m_UseMaxVisibleDescenderProp = serializedObject.FindProperty("m_useMaxVisibleDescender");

            m_GeometrySortingOrderProp = serializedObject.FindProperty("m_geometrySortingOrder");
            m_IsTextObjectScaleStaticProp = serializedObject.FindProperty("m_IsTextObjectScaleStatic");

            m_SpriteAssetProp = serializedObject.FindProperty("m_spriteAsset");

            m_StyleSheetAssetProp = serializedObject.FindProperty("m_StyleSheet");
            m_TextStyleHashCodeProp = serializedObject.FindProperty("m_TextStyleHashCode");

            m_MarginProp = serializedObject.FindProperty("m_margin");

            m_HasFontAssetChangedProp = serializedObject.FindProperty("m_hasFontAssetChanged");

            m_ColorModeProp = serializedObject.FindProperty("m_colorMode");

            m_TextComponent = (TMP_Text)target;
            m_RectTransform = m_TextComponent.rectTransform;

            // Restore Previous Linked Text Component
            m_PreviousLinkedTextComponent = m_TextComponent.linkedTextComponent;

            // Create new Material Editor if one does not exists
            m_TargetMaterial = m_TextComponent.fontSharedMaterial;

            // Set material inspector visibility
            if (m_TargetMaterial != null)
                UnityEditorInternal.InternalEditorUtility.SetIsInspectorExpanded(m_TargetMaterial, Foldout.materialInspector);

            // Find all Material Presets matching the current Font Asset Material
            m_MaterialPresetNames = GetMaterialPresets();

            // Get Styles from Style Sheet
            if (!m_TextComponent.m_isWaitingOnResourceLoad)
                m_StyleNames = GetStyleNames();

            // Register to receive events when style sheets are modified.
            TMPro_EventManager.TEXT_STYLE_PROPERTY_EVENT.Add(ON_TEXT_STYLE_CHANGED);

            // Initialize the Event Listener for Undo Events.
            Undo.undoRedoPerformed += OnUndoRedo;
        }

        protected virtual void OnDisable()
        {
            // Set material inspector visibility
            if (m_TargetMaterial != null)
                Foldout.materialInspector = UnityEditorInternal.InternalEditorUtility.GetIsInspectorExpanded(m_TargetMaterial);

            if (Undo.undoRedoPerformed != null)
                Undo.undoRedoPerformed -= OnUndoRedo;

            // Unregister from style sheet related events.
            TMPro_EventManager.TEXT_STYLE_PROPERTY_EVENT.Remove(ON_TEXT_STYLE_CHANGED);
        }

        // Event received when Text Styles are changed.
        void ON_TEXT_STYLE_CHANGED(bool isChanged)
        {
            m_StyleNames = GetStyleNames();
        }

        public override void OnInspectorGUI()
        {
            // Make sure Multi selection only includes TMP Text objects.
            if (IsMixSelectionTypes()) return;

            serializedObject.Update();

            DrawTextInput();

            DrawMainSettings();

            DrawExtraSettings();

            EditorGUILayout.Space();

            if (serializedObject.ApplyModifiedProperties() || m_HavePropertiesChanged)
            {
                m_TextComponent.havePropertiesChanged = true;
                m_HavePropertiesChanged = false;
                EditorUtility.SetDirty(target);
            }
        }

        public void OnSceneGUI()
        {
            if (IsMixSelectionTypes()) return;

            // Margin Frame & Handles
            m_RectTransform.GetWorldCorners(m_RectCorners);
            Vector4 marginOffset = m_TextComponent.margin;
            Vector3 lossyScale = m_RectTransform.lossyScale;

            m_HandlePoints[0] = m_RectCorners[0] + m_RectTransform.TransformDirection(new Vector3(marginOffset.x * lossyScale.x, marginOffset.w * lossyScale.y, 0));
            m_HandlePoints[1] = m_RectCorners[1] + m_RectTransform.TransformDirection(new Vector3(marginOffset.x * lossyScale.x, -marginOffset.y * lossyScale.y, 0));
            m_HandlePoints[2] = m_RectCorners[2] + m_RectTransform.TransformDirection(new Vector3(-marginOffset.z * lossyScale.x, -marginOffset.y * lossyScale.y, 0));
            m_HandlePoints[3] = m_RectCorners[3] + m_RectTransform.TransformDirection(new Vector3(-marginOffset.z * lossyScale.x, marginOffset.w * lossyScale.y, 0));

            Handles.DrawSolidRectangleWithOutline(m_HandlePoints, new Color32(255, 255, 255, 0), new Color32(255, 255, 0, 255));

            // Draw & process FreeMoveHandles

            // LEFT HANDLE
            Vector3 oldLeft = (m_HandlePoints[0] + m_HandlePoints[1]) * 0.5f;
            Vector3 newLeft = Handles.FreeMoveHandle(oldLeft, Quaternion.identity, HandleUtility.GetHandleSize(m_RectTransform.position) * 0.05f, Vector3.zero, Handles.DotHandleCap);
            bool hasChanged = false;
            if (oldLeft != newLeft)
            {
                float delta = oldLeft.x - newLeft.x;
                marginOffset.x += -delta / lossyScale.x;
                //Debug.Log("Left Margin H0:" + handlePoints[0] + "  H1:" + handlePoints[1]);
                hasChanged = true;
            }

            // TOP HANDLE
            Vector3 oldTop = (m_HandlePoints[1] + m_HandlePoints[2]) * 0.5f;
            Vector3 newTop = Handles.FreeMoveHandle(oldTop, Quaternion.identity, HandleUtility.GetHandleSize(m_RectTransform.position) * 0.05f, Vector3.zero, Handles.DotHandleCap);
            if (oldTop != newTop)
            {
                float delta = oldTop.y - newTop.y;
                marginOffset.y += delta / lossyScale.y;
                //Debug.Log("Top Margin H1:" + handlePoints[1] + "  H2:" + handlePoints[2]);
                hasChanged = true;
            }

            // RIGHT HANDLE
            Vector3 oldRight = (m_HandlePoints[2] + m_HandlePoints[3]) * 0.5f;
            Vector3 newRight = Handles.FreeMoveHandle(oldRight, Quaternion.identity, HandleUtility.GetHandleSize(m_RectTransform.position) * 0.05f, Vector3.zero, Handles.DotHandleCap);
            if (oldRight != newRight)
            {
                float delta = oldRight.x - newRight.x;
                marginOffset.z += delta / lossyScale.x;
                hasChanged = true;
                //Debug.Log("Right Margin H2:" + handlePoints[2] + "  H3:" + handlePoints[3]);
            }

            // BOTTOM HANDLE
            Vector3 oldBottom = (m_HandlePoints[3] + m_HandlePoints[0]) * 0.5f;
            Vector3 newBottom = Handles.FreeMoveHandle(oldBottom, Quaternion.identity, HandleUtility.GetHandleSize(m_RectTransform.position) * 0.05f, Vector3.zero, Handles.DotHandleCap);
            if (oldBottom != newBottom)
            {
                float delta = oldBottom.y - newBottom.y;
                marginOffset.w += -delta / lossyScale.y;
                hasChanged = true;
                //Debug.Log("Bottom Margin H0:" + handlePoints[0] + "  H3:" + handlePoints[3]);
            }

            if (hasChanged)
            {
                Undo.RecordObjects(new Object[] {m_RectTransform, m_TextComponent }, "Margin Changes");
                m_TextComponent.margin = marginOffset;
                EditorUtility.SetDirty(target);
            }
        }

        protected void DrawTextInput()
        {
            EditorGUILayout.Space();

            Rect rect = EditorGUILayout.GetControlRect(false, 22);
            GUI.Label(rect, new GUIContent("<b>Text Input</b>"), TMP_UIStyleManager.sectionHeader);

            EditorGUI.indentLevel = 0;

            // If the text component is linked, disable the text input box.
            if (m_ParentLinkedTextComponentProp.objectReferenceValue != null)
            {
                EditorGUILayout.HelpBox("The Text Input Box is disabled due to this text component being linked to another.", MessageType.Info);
            }
            else
            {
                // Display RTL Toggle
                float labelWidth = EditorGUIUtility.labelWidth;
                EditorGUIUtility.labelWidth = 110f;

                m_IsRightToLeftProp.boolValue = EditorGUI.Toggle(new Rect(rect.width - 120, rect.y + 3, 130, 20), k_RtlToggleLabel, m_IsRightToLeftProp.boolValue);

                EditorGUIUtility.labelWidth = labelWidth;

                EditorGUI.BeginChangeCheck();
                EditorGUILayout.PropertyField(m_TextProp, GUIContent.none);

                if (EditorGUI.EndChangeCheck())
                {
                    m_TextComponent.m_inputSource = TMP_Text.TextInputSources.Text;
                    m_TextComponent.m_isInputParsingRequired = true;
                    m_HavePropertiesChanged = true;
                }

                if (m_IsRightToLeftProp.boolValue)
                {
                    // Copy source text to RTL string
                    m_RtlText = string.Empty;
                    string sourceText = m_TextProp.stringValue;

                    // Reverse Text displayed in Text Input Box
                    for (int i = 0; i < sourceText.Length; i++)
                        m_RtlText += sourceText[sourceText.Length - i - 1];

                    GUILayout.Label("RTL Text Input");

                    EditorGUI.BeginChangeCheck();
                    m_RtlText = EditorGUILayout.TextArea(m_RtlText, TMP_UIStyleManager.wrappingTextArea, GUILayout.Height(EditorGUI.GetPropertyHeight(m_TextProp) - EditorGUIUtility.singleLineHeight), GUILayout.ExpandWidth(true));

                    if (EditorGUI.EndChangeCheck())
                    {
                        // Convert RTL input
                        sourceText = string.Empty;

                        // Reverse Text displayed in Text Input Box
                        for (int i = 0; i < m_RtlText.Length; i++)
                            sourceText += m_RtlText[m_RtlText.Length - i - 1];

                        m_TextProp.stringValue = sourceText;
                    }
                }

                // TEXT STYLE
                if (m_StyleNames != null)
                {
                    rect = EditorGUILayout.GetControlRect(false, 17);

                    m_TextStyleIndexLookup.TryGetValue(m_TextStyleHashCodeProp.intValue, out m_StyleSelectionIndex);

                    EditorGUI.BeginChangeCheck();
                    m_StyleSelectionIndex = EditorGUI.Popup(rect, k_StyleLabel, m_StyleSelectionIndex, m_StyleNames);
                    if (EditorGUI.EndChangeCheck())
                    {
                        m_TextStyleHashCodeProp.intValue = m_Styles[m_StyleSelectionIndex].hashCode;
                        m_TextComponent.m_TextStyle = m_Styles[m_StyleSelectionIndex];
                        m_HavePropertiesChanged = true;
                    }
                }
            }
        }

        protected void DrawMainSettings()
        {
            // MAIN SETTINGS SECTION
            GUILayout.Label(new GUIContent("<b>Main Settings</b>"), TMP_UIStyleManager.sectionHeader);

            //EditorGUI.indentLevel += 1;

            DrawFont();

            DrawColor();

            DrawSpacing();

            DrawAlignment();

            DrawWrappingOverflow();

            DrawTextureMapping();

            //EditorGUI.indentLevel -= 1;
        }

        void DrawFont()
        {
            bool isFontAssetDirty = false;

            // FONT ASSET
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_FontAssetProp, k_FontAssetLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
                m_HasFontAssetChangedProp.boolValue = true;

                // Get new Material Presets for the new font asset
                m_MaterialPresetNames = GetMaterialPresets();
                m_MaterialPresetSelectionIndex = 0;

                isFontAssetDirty = true;
            }

            Rect rect;

            // MATERIAL PRESET
            if (m_MaterialPresetNames != null && !isFontAssetDirty )
            {
                EditorGUI.BeginChangeCheck();
                rect = EditorGUILayout.GetControlRect(false, 17);

                float oldHeight = EditorStyles.popup.fixedHeight;
                EditorStyles.popup.fixedHeight = rect.height;

                int oldSize = EditorStyles.popup.fontSize;
                EditorStyles.popup.fontSize = 11;

                if (m_FontSharedMaterialProp.objectReferenceValue != null)
                    m_MaterialPresetIndexLookup.TryGetValue(m_FontSharedMaterialProp.objectReferenceValue.GetInstanceID(), out m_MaterialPresetSelectionIndex);

                m_MaterialPresetSelectionIndex = EditorGUI.Popup(rect, k_MaterialPresetLabel, m_MaterialPresetSelectionIndex, m_MaterialPresetNames);
                if (EditorGUI.EndChangeCheck())
                {
                    m_FontSharedMaterialProp.objectReferenceValue = m_MaterialPresets[m_MaterialPresetSelectionIndex];
                    m_HavePropertiesChanged = true;
                }

                EditorStyles.popup.fixedHeight = oldHeight;
                EditorStyles.popup.fontSize = oldSize;
            }

            // FONT STYLE
            EditorGUI.BeginChangeCheck();

            int v1, v2, v3, v4, v5, v6, v7;

            if (EditorGUIUtility.wideMode)
            {
                rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.singleLineHeight + 2f);

                EditorGUI.PrefixLabel(rect, k_FontStyleLabel);

                int styleValue = m_FontStyleProp.intValue;

                rect.x += EditorGUIUtility.labelWidth;
                rect.width -= EditorGUIUtility.labelWidth;

                rect.width = Mathf.Max(25f, rect.width / 7f);

                v1 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 1) == 1, k_BoldLabel, TMP_UIStyleManager.alignmentButtonLeft) ? 1 : 0; // Bold
                rect.x += rect.width;
                v2 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 2) == 2, k_ItalicLabel, TMP_UIStyleManager.alignmentButtonMid) ? 2 : 0; // Italics
                rect.x += rect.width;
                v3 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 4) == 4, k_UnderlineLabel, TMP_UIStyleManager.alignmentButtonMid) ? 4 : 0; // Underline
                rect.x += rect.width;
                v7 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 64) == 64, k_StrikethroughLabel, TMP_UIStyleManager.alignmentButtonRight) ? 64 : 0; // Strikethrough
                rect.x += rect.width;

                int selected = 0;

                EditorGUI.BeginChangeCheck();
                v4 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 8) == 8, k_LowercaseLabel, TMP_UIStyleManager.alignmentButtonLeft) ? 8 : 0; // Lowercase
                if (EditorGUI.EndChangeCheck() && v4 > 0)
                {
                    selected = v4;
                }
                rect.x += rect.width;
                EditorGUI.BeginChangeCheck();
                v5 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 16) == 16, k_UppercaseLabel, TMP_UIStyleManager.alignmentButtonMid) ? 16 : 0; // Uppercase
                if (EditorGUI.EndChangeCheck() && v5 > 0)
                {
                    selected = v5;
                }
                rect.x += rect.width;
                EditorGUI.BeginChangeCheck();
                v6 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 32) == 32, k_SmallcapsLabel, TMP_UIStyleManager.alignmentButtonRight) ? 32 : 0; // Smallcaps
                if (EditorGUI.EndChangeCheck() && v6 > 0)
                {
                    selected = v6;
                }

                if (selected > 0)
                {
                    v4 = selected == 8 ? 8 : 0;
                    v5 = selected == 16 ? 16 : 0;
                    v6 = selected == 32 ? 32 : 0;
                }
            }
            else
            {
                rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.singleLineHeight + 2f);

                EditorGUI.PrefixLabel(rect, k_FontStyleLabel);

                int styleValue = m_FontStyleProp.intValue;

                rect.x += EditorGUIUtility.labelWidth;
                rect.width -= EditorGUIUtility.labelWidth;
                rect.width = Mathf.Max(25f, rect.width / 4f);

                v1 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 1) == 1, k_BoldLabel, TMP_UIStyleManager.alignmentButtonLeft) ? 1 : 0; // Bold
                rect.x += rect.width;
                v2 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 2) == 2, k_ItalicLabel, TMP_UIStyleManager.alignmentButtonMid) ? 2 : 0; // Italics
                rect.x += rect.width;
                v3 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 4) == 4, k_UnderlineLabel, TMP_UIStyleManager.alignmentButtonMid) ? 4 : 0; // Underline
                rect.x += rect.width;
                v7 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 64) == 64, k_StrikethroughLabel, TMP_UIStyleManager.alignmentButtonRight) ? 64 : 0; // Strikethrough

                rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.singleLineHeight + 2f);

                rect.x += EditorGUIUtility.labelWidth;
                rect.width -= EditorGUIUtility.labelWidth;

                rect.width = Mathf.Max(25f, rect.width / 4f);

                int selected = 0;

                EditorGUI.BeginChangeCheck();
                v4 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 8) == 8, k_LowercaseLabel, TMP_UIStyleManager.alignmentButtonLeft) ? 8 : 0; // Lowercase
                if (EditorGUI.EndChangeCheck() && v4 > 0)
                {
                    selected = v4;
                }
                rect.x += rect.width;
                EditorGUI.BeginChangeCheck();
                v5 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 16) == 16, k_UppercaseLabel, TMP_UIStyleManager.alignmentButtonMid) ? 16 : 0; // Uppercase
                if (EditorGUI.EndChangeCheck() && v5 > 0)
                {
                    selected = v5;
                }
                rect.x += rect.width;
                EditorGUI.BeginChangeCheck();
                v6 = TMP_EditorUtility.EditorToggle(rect, (styleValue & 32) == 32, k_SmallcapsLabel, TMP_UIStyleManager.alignmentButtonRight) ? 32 : 0; // Smallcaps
                if (EditorGUI.EndChangeCheck() && v6 > 0)
                {
                    selected = v6;
                }

                if (selected > 0)
                {
                    v4 = selected == 8 ? 8 : 0;
                    v5 = selected == 16 ? 16 : 0;
                    v6 = selected == 32 ? 32 : 0;
                }
            }

            if (EditorGUI.EndChangeCheck())
            {
                m_FontStyleProp.intValue = v1 + v2 + v3 + v4 + v5 + v6 + v7;
                m_HavePropertiesChanged = true;
            }

            // FONT SIZE
            EditorGUI.BeginChangeCheck();

            EditorGUI.BeginDisabledGroup(m_AutoSizingProp.boolValue);
            EditorGUILayout.PropertyField(m_FontSizeProp, k_FontSizeLabel, GUILayout.MaxWidth(EditorGUIUtility.labelWidth + 50f));
            EditorGUI.EndDisabledGroup();

            if (EditorGUI.EndChangeCheck())
            {
                float fontSize = Mathf.Clamp(m_FontSizeProp.floatValue, 0, 32767);

                m_FontSizeProp.floatValue = fontSize;
                m_FontSizeBaseProp.floatValue = fontSize;
                m_HavePropertiesChanged = true;
            }

            EditorGUI.indentLevel += 1;

            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_AutoSizingProp, k_AutoSizeLabel);
            if (EditorGUI.EndChangeCheck())
            {
                if (m_AutoSizingProp.boolValue == false)
                    m_FontSizeProp.floatValue = m_FontSizeBaseProp.floatValue;

                m_HavePropertiesChanged = true;
            }

            // Show auto sizing options
            if (m_AutoSizingProp.boolValue)
            {
                rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.singleLineHeight);

                EditorGUI.PrefixLabel(rect, k_AutoSizeOptionsLabel);

                int previousIndent = EditorGUI.indentLevel;

                EditorGUI.indentLevel = 0;

                rect.width = (rect.width - EditorGUIUtility.labelWidth) / 4f;
                rect.x += EditorGUIUtility.labelWidth;

                EditorGUIUtility.labelWidth = 24;
                EditorGUI.BeginChangeCheck();
                EditorGUI.PropertyField(rect, m_FontSizeMinProp, k_MinLabel);
                if (EditorGUI.EndChangeCheck())
                {
                    float minSize = m_FontSizeMinProp.floatValue;

                    minSize = Mathf.Max(0, minSize);

                    m_FontSizeMinProp.floatValue = Mathf.Min(minSize, m_FontSizeMaxProp.floatValue);
                    m_HavePropertiesChanged = true;
                }
                rect.x += rect.width;

                EditorGUIUtility.labelWidth = 27;
                EditorGUI.BeginChangeCheck();
                EditorGUI.PropertyField(rect, m_FontSizeMaxProp, k_MaxLabel);
                if (EditorGUI.EndChangeCheck())
                {
                    float maxSize = Mathf.Clamp(m_FontSizeMaxProp.floatValue, 0, 32767);

                    m_FontSizeMaxProp.floatValue = Mathf.Max(m_FontSizeMinProp.floatValue, maxSize);
                    m_HavePropertiesChanged = true;
                }
                rect.x += rect.width;

                EditorGUI.BeginChangeCheck();
                EditorGUIUtility.labelWidth = 36;
                EditorGUI.PropertyField(rect, m_CharWidthMaxAdjProp, k_WdLabel);
                rect.x += rect.width;
                EditorGUIUtility.labelWidth = 28;
                EditorGUI.PropertyField(rect, m_LineSpacingMaxProp, k_LineLabel);

                EditorGUIUtility.labelWidth = 0;

                if (EditorGUI.EndChangeCheck())
                {
                    m_CharWidthMaxAdjProp.floatValue = Mathf.Clamp(m_CharWidthMaxAdjProp.floatValue, 0, 50);
                    m_LineSpacingMaxProp.floatValue = Mathf.Min(0, m_LineSpacingMaxProp.floatValue);
                    m_HavePropertiesChanged = true;
                }

                EditorGUI.indentLevel = previousIndent;
            }

            EditorGUI.indentLevel -= 1;



            EditorGUILayout.Space();
        }

        void DrawColor()
        {
            // FACE VERTEX COLOR
            EditorGUI.BeginChangeCheck();
            Color vertexColor = EditorGUILayout.ColorField(k_BaseColorLabel, m_FontColorProp.colorValue, false, true, false);
            if (EditorGUI.EndChangeCheck())
            {
                m_FontColorProp.colorValue = vertexColor;
                m_HavePropertiesChanged = true;
            }

            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_EnableVertexGradientProp, k_ColorGradientLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
            }

            EditorGUIUtility.fieldWidth = 0;

            if (m_EnableVertexGradientProp.boolValue)
            {
                EditorGUI.indentLevel += 1;

                EditorGUI.BeginChangeCheck();

                EditorGUILayout.PropertyField(m_FontColorGradientPresetProp, k_ColorPresetLabel);

                SerializedObject obj = null;

                SerializedProperty colorMode;

                SerializedProperty topLeft;
                SerializedProperty topRight;
                SerializedProperty bottomLeft;
                SerializedProperty bottomRight;

                if (m_FontColorGradientPresetProp.objectReferenceValue == null)
                {
                    colorMode = m_ColorModeProp;
                    topLeft = m_FontColorGradientProp.FindPropertyRelative("topLeft");
                    topRight = m_FontColorGradientProp.FindPropertyRelative("topRight");
                    bottomLeft = m_FontColorGradientProp.FindPropertyRelative("bottomLeft");
                    bottomRight = m_FontColorGradientProp.FindPropertyRelative("bottomRight");
                }
                else
                {
                    obj = new SerializedObject(m_FontColorGradientPresetProp.objectReferenceValue);
                    colorMode = obj.FindProperty("colorMode");
                    topLeft = obj.FindProperty("topLeft");
                    topRight = obj.FindProperty("topRight");
                    bottomLeft = obj.FindProperty("bottomLeft");
                    bottomRight = obj.FindProperty("bottomRight");
                }

                EditorGUILayout.PropertyField(colorMode, k_ColorModeLabel);

                var rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.singleLineHeight * (EditorGUIUtility.wideMode ? 1 : 2));

                EditorGUI.PrefixLabel(rect, k_CorenerColorsLabel);

                rect.x += EditorGUIUtility.labelWidth;
                rect.width = rect.width - EditorGUIUtility.labelWidth;

                switch ((ColorMode)colorMode.enumValueIndex)
                {
                    case ColorMode.Single:
                        TMP_EditorUtility.DrawColorProperty(rect, topLeft);

                        topRight.colorValue = topLeft.colorValue;
                        bottomLeft.colorValue = topLeft.colorValue;
                        bottomRight.colorValue = topLeft.colorValue;
                        break;
                    case ColorMode.HorizontalGradient:
                        rect.width /= 2f;

                        TMP_EditorUtility.DrawColorProperty(rect, topLeft);

                        rect.x += rect.width;

                        TMP_EditorUtility.DrawColorProperty(rect, topRight);

                        bottomLeft.colorValue = topLeft.colorValue;
                        bottomRight.colorValue = topRight.colorValue;
                        break;
                    case ColorMode.VerticalGradient:
                        TMP_EditorUtility.DrawColorProperty(rect, topLeft);

                        rect = EditorGUILayout.GetControlRect(false, EditorGUIUtility.singleLineHeight * (EditorGUIUtility.wideMode ? 1 : 2));
                        rect.x += EditorGUIUtility.labelWidth;

                        TMP_EditorUtility.DrawColorProperty(rect, bottomLeft);

                        topRight.colorValue = topLeft.colorValue;
                        bottomRight.colorValue = bottomLeft.colorValue;
                        break;
                    case ColorMode.FourCornersGradient:
                        rect.width /= 2f;

                        TMP_EditorUtility.DrawColorProperty(rect, topLeft);

                        rect.x += rect.width;

                        TMP_EditorUtility.DrawColorProperty(rect, topRight);

                        rect = EditorGUILayout.GetControlRect(false, EditorGUIUtility.singleLineHeight * (EditorGUIUtility.wideMode ? 1 : 2));
                        rect.x += EditorGUIUtility.labelWidth;
                        rect.width = (rect.width - EditorGUIUtility.labelWidth) / 2f;

                        TMP_EditorUtility.DrawColorProperty(rect, bottomLeft);

                        rect.x += rect.width;

                        TMP_EditorUtility.DrawColorProperty(rect, bottomRight);
                        break;
                }

                if (EditorGUI.EndChangeCheck())
                {
                    m_HavePropertiesChanged = true;
                    if (obj != null)
                    {
                        obj.ApplyModifiedProperties();
                        TMPro_EventManager.ON_COLOR_GRADIENT_PROPERTY_CHANGED(m_FontColorGradientPresetProp.objectReferenceValue as TMP_ColorGradient);
                    }
                }

                EditorGUI.indentLevel -= 1;
            }

            EditorGUILayout.PropertyField(m_OverrideHtmlColorProp, k_OverrideTagsLabel);

            EditorGUILayout.Space();
        }

        void DrawSpacing()
        {
            // CHARACTER, LINE & PARAGRAPH SPACING
            EditorGUI.BeginChangeCheck();

            Rect rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.singleLineHeight);

            EditorGUI.PrefixLabel(rect, k_SpacingOptionsLabel);

            int oldIndent = EditorGUI.indentLevel;
            EditorGUI.indentLevel = 0;

            rect.x += EditorGUIUtility.labelWidth;
            rect.width = (rect.width - EditorGUIUtility.labelWidth - 3f) / 2f;

            EditorGUIUtility.labelWidth = Mathf.Min(rect.width * 0.55f, 80f);

            EditorGUI.PropertyField(rect, m_CharacterSpacingProp, k_CharacterSpacingLabel);
            rect.x += rect.width + 3f;
            EditorGUI.PropertyField(rect, m_WordSpacingProp, k_WordSpacingLabel);

            rect = EditorGUILayout.GetControlRect(false, EditorGUIUtility.singleLineHeight);
            EditorGUIUtility.labelWidth = 0;
            rect.x += EditorGUIUtility.labelWidth;
            rect.width = (rect.width - EditorGUIUtility.labelWidth -3f) / 2f;
            EditorGUIUtility.labelWidth = Mathf.Min(rect.width * 0.55f, 80f);

            EditorGUI.PropertyField(rect, m_LineSpacingProp, k_LineSpacingLabel);
            rect.x += rect.width + 3f;
            EditorGUI.PropertyField(rect, m_ParagraphSpacingProp, k_ParagraphSpacingLabel);

            EditorGUIUtility.labelWidth = 0;
            EditorGUI.indentLevel = oldIndent;

            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
            }

            EditorGUILayout.Space();
        }

        void DrawAlignment()
        {
            // TEXT ALIGNMENT
            EditorGUI.BeginChangeCheck();

            Rect rect = EditorGUILayout.GetControlRect(true, EditorGUIUtility.currentViewWidth > 504 ? 20 : 40 + 3);

            EditorGUI.PrefixLabel(rect, k_AlignmentLabel);
            rect.x += EditorGUIUtility.labelWidth;

            EditorGUI.PropertyField(rect, m_HorizontalAlignmentProp, GUIContent.none);
            EditorGUI.PropertyField(rect, m_VerticalAlignmentProp, GUIContent.none);

            // WRAPPING RATIOS shown if Justified mode is selected.
            if (((HorizontalAlignmentOptions)m_HorizontalAlignmentProp.intValue & HorizontalAlignmentOptions.Justified) == HorizontalAlignmentOptions.Justified || ((HorizontalAlignmentOptions)m_HorizontalAlignmentProp.intValue & HorizontalAlignmentOptions.Flush) == HorizontalAlignmentOptions.Flush)
                DrawPropertySlider(k_WrapMixLabel, m_WordWrappingRatiosProp);

            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;

            EditorGUILayout.Space();
        }

        void DrawWrappingOverflow()
        {
            // TEXT WRAPPING
            EditorGUI.BeginChangeCheck();
            int wrapSelection = EditorGUILayout.Popup(k_WrappingLabel, m_EnableWordWrappingProp.boolValue ? 1 : 0, k_WrappingOptions);
            if (EditorGUI.EndChangeCheck())
            {
                m_EnableWordWrappingProp.boolValue = wrapSelection == 1;
                m_HavePropertiesChanged = true;
                m_TextComponent.m_isInputParsingRequired = true;
            }

            // TEXT OVERFLOW
            EditorGUI.BeginChangeCheck();

            if ((TextOverflowModes)m_TextOverflowModeProp.enumValueIndex == TextOverflowModes.Linked)
            {
                EditorGUILayout.BeginHorizontal();

                float fieldWidth = EditorGUIUtility.fieldWidth;
                EditorGUIUtility.fieldWidth = 65;
                EditorGUILayout.PropertyField(m_TextOverflowModeProp, k_OverflowLabel);
                EditorGUIUtility.fieldWidth = fieldWidth;

                EditorGUILayout.PropertyField(m_LinkedTextComponentProp, GUIContent.none);

                EditorGUILayout.EndHorizontal();

                if (GUI.changed)
                {
                    TMP_Text linkedComponent = m_LinkedTextComponentProp.objectReferenceValue as TMP_Text;

                    if (linkedComponent == null)
                    {
                        m_LinkedTextComponentProp.objectReferenceValue = null;

                        if (m_PreviousLinkedTextComponent != null)
                            m_TextComponent.ReleaseLinkedTextComponent(m_PreviousLinkedTextComponent);
                    }
                    else if (m_TextComponent.IsSelfOrLinkedAncestor(linkedComponent))
                    {
                        m_LinkedTextComponentProp.objectReferenceValue = m_PreviousLinkedTextComponent;
                    }
                    else
                    {
                        if (m_PreviousLinkedTextComponent != null)
                            m_TextComponent.ReleaseLinkedTextComponent(m_PreviousLinkedTextComponent);

                        m_LinkedTextComponentProp.objectReferenceValue = linkedComponent;
                        linkedComponent.parentLinkedComponent = m_TextComponent;
                        m_PreviousLinkedTextComponent = linkedComponent;
                    }
                }
            }
            else if ((TextOverflowModes)m_TextOverflowModeProp.enumValueIndex == TextOverflowModes.Page)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.PropertyField(m_TextOverflowModeProp, k_OverflowLabel);
                EditorGUILayout.PropertyField(m_PageToDisplayProp, GUIContent.none);
                EditorGUILayout.EndHorizontal();

                if (m_PreviousLinkedTextComponent)
                {
                    m_TextComponent.ReleaseLinkedTextComponent(m_PreviousLinkedTextComponent);

                    m_TextComponent.linkedTextComponent = null;
                }
            }
            else
            {
                EditorGUILayout.PropertyField(m_TextOverflowModeProp, k_OverflowLabel);

                if (m_PreviousLinkedTextComponent)
                {
                    m_TextComponent.ReleaseLinkedTextComponent(m_PreviousLinkedTextComponent);

                    m_TextComponent.linkedTextComponent = null;
                }
            }

            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
                m_TextComponent.m_isInputParsingRequired = true;
            }

            EditorGUILayout.Space();
        }

        protected abstract void DrawExtraSettings();

        protected void DrawMargins()
        {
            EditorGUI.BeginChangeCheck();
            DrawMarginProperty(m_MarginProp, k_MarginsLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
            }

            EditorGUILayout.Space();
        }

        protected void DrawGeometrySorting()
        {
            EditorGUI.BeginChangeCheck();

            EditorGUILayout.PropertyField(m_GeometrySortingOrderProp, k_GeometrySortingLabel);

            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;

            EditorGUILayout.Space();
        }

        protected void DrawIsTextObjectScaleStatic()
        {
            EditorGUI.BeginChangeCheck();

            EditorGUILayout.PropertyField(m_IsTextObjectScaleStaticProp, k_IsTextObjectScaleStatic);

            if (EditorGUI.EndChangeCheck())
            {
                m_TextComponent.isTextObjectScaleStatic = m_IsTextObjectScaleStaticProp.boolValue;
                m_HavePropertiesChanged = true;
            }

            EditorGUILayout.Space();
        }


        protected void DrawRichText()
        {
            EditorGUI.BeginChangeCheck();

            EditorGUILayout.PropertyField(m_IsRichTextProp, k_RichTextLabel);
            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;
        }

        protected void DrawParsing()
        {
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_EnableEscapeCharacterParsingProp, k_EscapeCharactersLabel);
            EditorGUILayout.PropertyField(m_UseMaxVisibleDescenderProp, k_VisibleDescenderLabel);

            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;

            EditorGUILayout.Space();
        }

        protected void DrawSpriteAsset()
        {
            EditorGUI.BeginChangeCheck();

            EditorGUILayout.PropertyField(m_SpriteAssetProp, k_SpriteAssetLabel, true);

            if (EditorGUI.EndChangeCheck())
                m_HavePropertiesChanged = true;

            EditorGUILayout.Space();
        }

        protected void DrawStyleSheet()
        {
            EditorGUI.BeginChangeCheck();

            EditorGUILayout.PropertyField(m_StyleSheetAssetProp, k_StyleSheetAssetLabel, true);

            if (EditorGUI.EndChangeCheck())
            {
                m_StyleNames = GetStyleNames();
                m_HavePropertiesChanged = true;
            }

            EditorGUILayout.Space();
        }

        protected void DrawTextureMapping()
        {
            // TEXTURE MAPPING OPTIONS
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_HorizontalMappingProp, k_HorizontalMappingLabel);
            EditorGUILayout.PropertyField(m_VerticalMappingProp, k_VerticalMappingLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
            }

            // UV OPTIONS
            if (m_HorizontalMappingProp.enumValueIndex > 0)
            {
                EditorGUI.BeginChangeCheck();
                EditorGUILayout.PropertyField(m_UvLineOffsetProp, k_LineOffsetLabel, GUILayout.MinWidth(70f));
                if (EditorGUI.EndChangeCheck())
                {
                    m_HavePropertiesChanged = true;
                }
            }

            EditorGUILayout.Space();
        }

        protected void DrawKerning()
        {
            // KERNING
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_EnableKerningProp, k_KerningLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
            }
        }

        protected void DrawPadding()
        {
            // EXTRA PADDING
            EditorGUI.BeginChangeCheck();
            EditorGUILayout.PropertyField(m_EnableExtraPaddingProp, k_PaddingLabel);
            if (EditorGUI.EndChangeCheck())
            {
                m_HavePropertiesChanged = true;
                m_CheckPaddingRequiredProp.boolValue = true;
            }
        }

        /// <summary>
        /// Method to retrieve the material presets that match the currently selected font asset.
        /// </summary>
        protected GUIContent[] GetMaterialPresets()
        {
            TMP_FontAsset fontAsset = m_FontAssetProp.objectReferenceValue as TMP_FontAsset;
            if (fontAsset == null) return null;

            m_MaterialPresets = TMP_EditorUtility.FindMaterialReferences(fontAsset);
            m_MaterialPresetNames = new GUIContent[m_MaterialPresets.Length];

            m_MaterialPresetIndexLookup.Clear();

            for (int i = 0; i < m_MaterialPresetNames.Length; i++)
            {
                m_MaterialPresetNames[i] = new GUIContent(m_MaterialPresets[i].name);

                m_MaterialPresetIndexLookup.Add(m_MaterialPresets[i].GetInstanceID(), i);

                //if (m_TargetMaterial.GetInstanceID() == m_MaterialPresets[i].GetInstanceID())
                //    m_MaterialPresetSelectionIndex = i;
            }

            m_IsPresetListDirty = false;

            return m_MaterialPresetNames;
        }

        protected GUIContent[] GetStyleNames()
        {
            k_AvailableStyles.Clear();
            m_TextStyleIndexLookup.Clear();
            m_Styles.Clear();

            // First style on the list is always the Normal default style.
            TMP_Style styleNormal = TMP_Style.NormalStyle;

            m_Styles.Add(styleNormal);
            m_TextStyleIndexLookup.Add(styleNormal.hashCode, 0);

            k_AvailableStyles.Add(styleNormal.hashCode, styleNormal);

            // Get styles from Style Sheet potentially assigned to the text object.
            TMP_StyleSheet localStyleSheet = (TMP_StyleSheet)m_StyleSheetAssetProp.objectReferenceValue;

            if (localStyleSheet != null)
            {
                int styleCount = localStyleSheet.styles.Count;

                for (int i = 0; i < styleCount; i++)
                {
                    TMP_Style style = localStyleSheet.styles[i];

                    if (k_AvailableStyles.ContainsKey(style.hashCode) == false)
                    {
                        k_AvailableStyles.Add(style.hashCode, style);
                        m_Styles.Add(style);
                        m_TextStyleIndexLookup.Add(style.hashCode, m_TextStyleIndexLookup.Count);
                    }
                }
            }

            // Get styles from TMP Settings' default style sheet.
            TMP_StyleSheet globalStyleSheet = TMP_Settings.defaultStyleSheet;

            if (globalStyleSheet != null)
            {
                int styleCount = globalStyleSheet.styles.Count;

                for (int i = 0; i < styleCount; i++)
                {
                    TMP_Style style = globalStyleSheet.styles[i];

                    if (k_AvailableStyles.ContainsKey(style.hashCode) == false)
                    {
                        k_AvailableStyles.Add(style.hashCode, style);
                        m_Styles.Add(style);
                        m_TextStyleIndexLookup.Add(style.hashCode, m_TextStyleIndexLookup.Count);
                    }
                }
            }

            // Create array that will contain the list of available styles.
            GUIContent[] styleNames = k_AvailableStyles.Values.Select(item => new GUIContent(item.name)).ToArray();

            // Set text style index
            m_TextStyleIndexLookup.TryGetValue(m_TextStyleHashCodeProp.intValue, out m_StyleSelectionIndex);

            return styleNames;
        }

        // DRAW MARGIN PROPERTY
        protected void DrawMarginProperty(SerializedProperty property, GUIContent label)
        {
            Rect rect = EditorGUILayout.GetControlRect(false, 2 * 18);

            EditorGUI.BeginProperty(rect, label, property);

            Rect pos0 = new Rect(rect.x, rect.y + 2, rect.width - 15, 18);

            float width = rect.width + 3;
            pos0.width = EditorGUIUtility.labelWidth;
            EditorGUI.PrefixLabel(pos0, label);

            Vector4 margins = property.vector4Value;

            float widthB = width - EditorGUIUtility.labelWidth;
            float fieldWidth = widthB / 4;
            pos0.width = Mathf.Max(fieldWidth - 5, 45f);

            // Labels
            pos0.x = EditorGUIUtility.labelWidth + 15;
            margins.x = DrawMarginField(pos0, "Left", margins.x);

            pos0.x += fieldWidth;
            margins.y = DrawMarginField(pos0, "Top", margins.y);

            pos0.x += fieldWidth;
            margins.z = DrawMarginField(pos0, "Right", margins.z);

            pos0.x += fieldWidth;
            margins.w = DrawMarginField(pos0, "Bottom", margins.w);

            property.vector4Value = margins;

            EditorGUI.EndProperty();
        }

        float DrawMarginField(Rect position, string label, float value)
        {
            int controlId = GUIUtility.GetControlID(FocusType.Keyboard, position);
            EditorGUI.PrefixLabel(position, controlId, new GUIContent(label));

            Rect dragZone = new Rect(position.x, position.y, position.width, position.height);
            position.y += EditorGUIUtility.singleLineHeight;

            return EditorGUI.DoFloatField(EditorGUI.s_RecycledEditor, position, dragZone, controlId, value, EditorGUI.kFloatFieldFormatString, EditorStyles.numberField, true);
        }

        protected void DrawPropertySlider(GUIContent label, SerializedProperty property)
        {
            Rect rect = EditorGUILayout.GetControlRect(false, 17);

            GUIContent content = label ?? GUIContent.none;
            EditorGUI.Slider(new Rect(rect.x, rect.y, rect.width, rect.height), property, 0.0f, 1.0f, content);
        }

        protected abstract bool IsMixSelectionTypes();

        // Special Handling of Undo / Redo Events.
        protected abstract void OnUndoRedo();

    }
}
