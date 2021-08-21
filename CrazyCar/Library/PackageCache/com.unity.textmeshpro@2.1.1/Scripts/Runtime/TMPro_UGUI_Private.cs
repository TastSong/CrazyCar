//#define TMP_PROFILE_ON


using UnityEngine;
using UnityEngine.TextCore;
using System;
using System.Collections.Generic;
using UnityEngine.UI;
using Object = UnityEngine.Object;

#pragma warning disable 0414 // Disabled a few warnings related to serialized variables not used in this script but used in the editor.
#pragma warning disable 0618 // Disabled warning due to SetVertices being deprecated until new release with SetMesh() is available.

namespace TMPro
{

    public partial class TextMeshProUGUI
    {
        [SerializeField]
        private bool m_hasFontAssetChanged = false; // Used to track when font properties have changed.

        protected TMP_SubMeshUI[] m_subTextObjects = new TMP_SubMeshUI[8];

        private float m_previousLossyScaleY = -1; // Used for Tracking lossy scale changes in the transform;

        private Vector3[] m_RectTransformCorners = new Vector3[4];
        private CanvasRenderer m_canvasRenderer;
        private Canvas m_canvas;


        private bool m_isFirstAllocation; // Flag to determine if this is the first allocation of the buffers.
        private int m_max_characters = 8; // Determines the initial allocation and size of the character array / buffer.
        //private int m_max_numberOfLines = 4; // Determines the initial allocation and maximum number of lines of text.

        // MASKING RELATED PROPERTIES
        // This property is now obsolete and used for compatibility with previous releases (prior to release 0.1.54).
        [SerializeField]
        private Material m_baseMaterial;

        private bool m_isScrollRegionSet;
        //private Mask m_mask;

        [SerializeField]
        private Vector4 m_maskOffset;

        // Matrix used to animated Env Map
        private Matrix4x4 m_EnvMapMatrix = new Matrix4x4();


        //private bool m_isEnabled;
        [NonSerialized]
        private bool m_isRegisteredForEvents;

        protected override void Awake()
        {
            //Debug.Log("***** Awake() called on object ID " + GetInstanceID() + ". *****");

            #if UNITY_EDITOR
            // Special handling for TMP Settings and importing Essential Resources
            if (TMP_Settings.instance == null)
            {
                if (m_isWaitingOnResourceLoad == false)
                    TMPro_EventManager.RESOURCE_LOAD_EVENT.Add(ON_RESOURCES_LOADED);

                m_isWaitingOnResourceLoad = true;
                return;
            }
            #endif

            // Cache Reference to the Canvas
            m_canvas = this.canvas;

            m_isOrthographic = true;

            // Cache Reference to RectTransform.
            m_rectTransform = gameObject.GetComponent<RectTransform>();
            if (m_rectTransform == null)
                m_rectTransform = gameObject.AddComponent<RectTransform>();

            // Cache a reference to the CanvasRenderer.
            m_canvasRenderer = GetComponent<CanvasRenderer>();
            if (m_canvasRenderer == null)
                m_canvasRenderer = gameObject.AddComponent<CanvasRenderer> ();

            if (m_mesh == null)
            {
                m_mesh = new Mesh();
                m_mesh.hideFlags = HideFlags.HideAndDontSave;
                #if DEVELOPMENT_BUILD || UNITY_EDITOR
                m_mesh.name = "TextMeshPro UI Mesh";
                #endif
                // Create new TextInfo for the text object.
                m_textInfo = new TMP_TextInfo(this);
            }

            // Load TMP Settings for new text object instances.
            LoadDefaultSettings();

            // Load the font asset and assign material to renderer.
            LoadFontAsset();

            // Allocate our initial buffers.
            if (m_InternalParsingBuffer == null)
                m_InternalParsingBuffer = new UnicodeChar[m_max_characters];

            m_cached_TextElement = new TMP_Character();
            m_isFirstAllocation = true;

            // Check to make sure Sub Text Objects are tracked correctly in the event a Prefab is used.
            TMP_SubMeshUI[] subTextObjects = GetComponentsInChildren<TMP_SubMeshUI>();
            if (subTextObjects.Length > 0)
            {
                for (int i = 0; i < subTextObjects.Length; i++)
                    m_subTextObjects[i + 1] = subTextObjects[i];
            }

            // Set flags to ensure our text is parsed and redrawn.
            m_isInputParsingRequired = true;
            m_havePropertiesChanged = true;

            m_isAwake = true;
        }


        protected override void OnEnable()
        {
            //Debug.Log("***** OnEnable() called on object ID " + GetInstanceID() + ". *****");

            // Return if Awake() has not been called on the text object.
            if (m_isAwake == false)
                return;

            if (!m_isRegisteredForEvents)
            {
                //Debug.Log("Registering for Events.");

                #if UNITY_EDITOR
                // Register Callbacks for various events.
                TMPro_EventManager.MATERIAL_PROPERTY_EVENT.Add(ON_MATERIAL_PROPERTY_CHANGED);
                TMPro_EventManager.FONT_PROPERTY_EVENT.Add(ON_FONT_PROPERTY_CHANGED);
                TMPro_EventManager.TEXTMESHPRO_UGUI_PROPERTY_EVENT.Add(ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED);
                TMPro_EventManager.DRAG_AND_DROP_MATERIAL_EVENT.Add(ON_DRAG_AND_DROP_MATERIAL);
                TMPro_EventManager.TEXT_STYLE_PROPERTY_EVENT.Add(ON_TEXT_STYLE_CHANGED);
                TMPro_EventManager.COLOR_GRADIENT_PROPERTY_EVENT.Add(ON_COLOR_GRADIENT_CHANGED);
                TMPro_EventManager.TMP_SETTINGS_PROPERTY_EVENT.Add(ON_TMP_SETTINGS_CHANGED);

                UnityEditor.PrefabUtility.prefabInstanceUpdated += OnPrefabInstanceUpdate;
                #endif
                m_isRegisteredForEvents = true;
            }

            // Cache Reference to the Canvas
            m_canvas = GetCanvas();

            SetActiveSubMeshes(true);

            // Register Graphic Component to receive event triggers
            GraphicRegistry.RegisterGraphicForCanvas(m_canvas, this);

            // Register text object for internal updates
            if (m_IsTextObjectScaleStatic == false)
                TMP_UpdateManager.RegisterTextObjectForUpdate(this);

            ComputeMarginSize();

            m_isInputParsingRequired = true;
            SetAllDirty();

            RecalculateClipping();
            RecalculateMasking();
        }


        protected override void OnDisable()
        {
            //Debug.Log("***** OnDisable() called on object ID " + GetInstanceID() + ". *****");

            // Return if Awake() has not been called on the text object.
            if (m_isAwake == false)
                return;

            //if (m_MaskMaterial != null)
            //{
            //    TMP_MaterialManager.ReleaseStencilMaterial(m_MaskMaterial);
            //    m_MaskMaterial = null;
            //}

            // UnRegister Graphic Component
            GraphicRegistry.UnregisterGraphicForCanvas(m_canvas, this);
            CanvasUpdateRegistry.UnRegisterCanvasElementForRebuild((ICanvasElement)this);

            TMP_UpdateManager.UnRegisterTextObjectForUpdate(this);

            if (m_canvasRenderer != null)
                m_canvasRenderer.Clear();

            SetActiveSubMeshes(false);

            LayoutRebuilder.MarkLayoutForRebuild(m_rectTransform);
            RecalculateClipping();
            RecalculateMasking();
        }


        protected override void OnDestroy()
        {
            //Debug.Log("***** OnDestroy() called on object ID " + GetInstanceID() + ". *****");

            // UnRegister Graphic Component
            GraphicRegistry.UnregisterGraphicForCanvas(m_canvas, this);

            TMP_UpdateManager.UnRegisterTextObjectForUpdate(this);

            // Clean up remaining mesh
            if (m_mesh != null)
                DestroyImmediate(m_mesh);

            // Clean up mask material
            if (m_MaskMaterial != null)
            {
                TMP_MaterialManager.ReleaseStencilMaterial(m_MaskMaterial);
                m_MaskMaterial = null;
            }

            #if UNITY_EDITOR
            // Unregister the event this object was listening to
            TMPro_EventManager.MATERIAL_PROPERTY_EVENT.Remove(ON_MATERIAL_PROPERTY_CHANGED);
            TMPro_EventManager.FONT_PROPERTY_EVENT.Remove(ON_FONT_PROPERTY_CHANGED);
            TMPro_EventManager.TEXTMESHPRO_UGUI_PROPERTY_EVENT.Remove(ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED);
            TMPro_EventManager.DRAG_AND_DROP_MATERIAL_EVENT.Remove(ON_DRAG_AND_DROP_MATERIAL);
            TMPro_EventManager.TEXT_STYLE_PROPERTY_EVENT.Remove(ON_TEXT_STYLE_CHANGED);
            TMPro_EventManager.COLOR_GRADIENT_PROPERTY_EVENT.Remove(ON_COLOR_GRADIENT_CHANGED);
            TMPro_EventManager.TMP_SETTINGS_PROPERTY_EVENT.Remove(ON_TMP_SETTINGS_CHANGED);
            TMPro_EventManager.RESOURCE_LOAD_EVENT.Remove(ON_RESOURCES_LOADED);

            UnityEditor.PrefabUtility.prefabInstanceUpdated -= OnPrefabInstanceUpdate;
            #endif
            m_isRegisteredForEvents = false;
        }


        #if UNITY_EDITOR
        protected override void Reset()
        {
            //Debug.Log("***** Reset() *****"); //has been called.");

            // Return if Awake() has not been called on the text object.
            if (m_isAwake == false)
                return;

            LoadDefaultSettings();
            LoadFontAsset();

            m_isInputParsingRequired = true;
            m_havePropertiesChanged = true;
        }


        protected override void OnValidate()
        {
            //Debug.Log("***** OnValidate() ***** Frame:" + Time.frameCount); // ID " + GetInstanceID()); // New Material [" + m_sharedMaterial.name + "] with ID " + m_sharedMaterial.GetInstanceID() + ". Base Material is [" + m_baseMaterial.name + "] with ID " + m_baseMaterial.GetInstanceID() + ". Previous Base Material is [" + (m_lastBaseMaterial == null ? "Null" : m_lastBaseMaterial.name) + "].");

            if (m_isAwake == false)
                return;

            // Handle Font Asset changes in the inspector.
            if (m_fontAsset == null || m_hasFontAssetChanged)
            {
                LoadFontAsset();
                m_hasFontAssetChanged = false;
            }

            if (m_canvasRenderer == null || m_canvasRenderer.GetMaterial() == null || m_canvasRenderer.GetMaterial().GetTexture(ShaderUtilities.ID_MainTex) == null || m_fontAsset == null || m_fontAsset.atlasTexture.GetInstanceID() != m_canvasRenderer.GetMaterial().GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID())
            {
                LoadFontAsset();
                m_hasFontAssetChanged = false;
            }

            m_padding = GetPaddingForMaterial();
            ComputeMarginSize();

            m_isInputParsingRequired = true;
            m_inputSource = TextInputSources.Text;
            m_havePropertiesChanged = true;
            m_isPreferredWidthDirty = true;
            m_isPreferredHeightDirty = true;

            SetAllDirty();
        }


        /// <summary>
        /// Callback received when Prefabs are updated.
        /// </summary>
        /// <param name="go">The affected GameObject</param>
        void OnPrefabInstanceUpdate(GameObject go)
        {
            // Remove Callback if this prefab has been deleted.
            if (this == null)
            {
                UnityEditor.PrefabUtility.prefabInstanceUpdated -= OnPrefabInstanceUpdate;
                return;
            }

            if (go == this.gameObject)
            {
                TMP_SubMeshUI[] subTextObjects = GetComponentsInChildren<TMP_SubMeshUI>();
                if (subTextObjects.Length > 0)
                {
                    for (int i = 0; i < subTextObjects.Length; i++)
                        m_subTextObjects[i + 1] = subTextObjects[i];
                }
            }
        }


        // Event received when TMP resources have been loaded.
        void ON_RESOURCES_LOADED()
        {
            TMPro_EventManager.RESOURCE_LOAD_EVENT.Remove(ON_RESOURCES_LOADED);

            if (this == null)
                return;

            Awake();
            OnEnable();
        }


        // Event received when custom material editor properties are changed.
        void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, Material mat)
        {
            //Debug.Log("ON_MATERIAL_PROPERTY_CHANGED event received."); // Targeted Material is: " + mat.name + "  m_sharedMaterial: " + m_sharedMaterial.name + " with ID:" + m_sharedMaterial.GetInstanceID() + "  m_renderer.sharedMaterial: " + m_canvasRenderer.GetMaterial() + "  Masking Material:" + m_MaskMaterial.GetInstanceID());

            ShaderUtilities.GetShaderPropertyIDs(); // Initialize ShaderUtilities and get shader property IDs.

            int materialID = mat.GetInstanceID();
            int sharedMaterialID = m_sharedMaterial.GetInstanceID();
            int maskingMaterialID = m_MaskMaterial == null ? 0 : m_MaskMaterial.GetInstanceID();

            if (m_canvasRenderer == null || m_canvasRenderer.GetMaterial() == null)
            {
                if (m_canvasRenderer == null) return;

                if (m_fontAsset != null)
                {
                    m_canvasRenderer.SetMaterial(m_fontAsset.material, m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex));
                    //Debug.LogWarning("No Material was assigned to " + name + ". " + m_fontAsset.material.name + " was assigned.");
                }
                else
                    Debug.LogWarning("No Font Asset assigned to " + name + ". Please assign a Font Asset.", this);
            }


            if (m_canvasRenderer.GetMaterial() != m_sharedMaterial && m_fontAsset == null) //    || m_renderer.sharedMaterials.Contains(mat))
            {
                //Debug.Log("ON_MATERIAL_PROPERTY_CHANGED Called on Target ID: " + GetInstanceID() + ". Previous Material:" + m_sharedMaterial + "  New Material:" + m_uiRenderer.GetMaterial()); // on Object ID:" + GetInstanceID() + ". m_sharedMaterial: " + m_sharedMaterial.name + "  m_renderer.sharedMaterial: " + m_renderer.sharedMaterial.name);
                m_sharedMaterial = m_canvasRenderer.GetMaterial();
            }


            // Make sure material properties are synchronized between the assigned material and masking material.
            if (m_MaskMaterial != null)
            {
                UnityEditor.Undo.RecordObject(m_MaskMaterial, "Material Property Changes");
                UnityEditor.Undo.RecordObject(m_sharedMaterial, "Material Property Changes");

                if (materialID == sharedMaterialID)
                {
                    //Debug.Log("Copy base material properties to masking material if not null.");
                    float stencilID = m_MaskMaterial.GetFloat(ShaderUtilities.ID_StencilID);
                    float stencilComp = m_MaskMaterial.GetFloat(ShaderUtilities.ID_StencilComp);
                    //float stencilOp = m_MaskMaterial.GetFloat(ShaderUtilities.ID_StencilOp);
                    //float stencilRead = m_MaskMaterial.GetFloat(ShaderUtilities.ID_StencilReadMask);
                    //float stencilWrite = m_MaskMaterial.GetFloat(ShaderUtilities.ID_StencilWriteMask);

                    m_MaskMaterial.CopyPropertiesFromMaterial(mat);
                    m_MaskMaterial.shaderKeywords = mat.shaderKeywords;

                    m_MaskMaterial.SetFloat(ShaderUtilities.ID_StencilID, stencilID);
                    m_MaskMaterial.SetFloat(ShaderUtilities.ID_StencilComp, stencilComp);
                    //m_MaskMaterial.SetFloat(ShaderUtilities.ID_StencilOp, stencilOp);
                    //m_MaskMaterial.SetFloat(ShaderUtilities.ID_StencilReadMask, stencilID);
                    //m_MaskMaterial.SetFloat(ShaderUtilities.ID_StencilWriteMask, 0);
                }
                else if (materialID == maskingMaterialID)
                {
                    // Update the padding
                    GetPaddingForMaterial(mat);

                    m_sharedMaterial.CopyPropertiesFromMaterial(mat);
                    m_sharedMaterial.shaderKeywords = mat.shaderKeywords;
                    m_sharedMaterial.SetFloat(ShaderUtilities.ID_StencilID, 0);
                    m_sharedMaterial.SetFloat(ShaderUtilities.ID_StencilComp, 8);
                    //m_sharedMaterial.SetFloat(ShaderUtilities.ID_StencilOp, 0);
                    //m_sharedMaterial.SetFloat(ShaderUtilities.ID_StencilReadMask, 255);
                    //m_sharedMaterial.SetFloat(ShaderUtilities.ID_StencilWriteMask, 255);
                }

            }

            m_padding = GetPaddingForMaterial();
            m_havePropertiesChanged = true;
            SetVerticesDirty();
            //SetMaterialDirty();
        }


        // Event received when font asset properties are changed in Font Inspector
        void ON_FONT_PROPERTY_CHANGED(bool isChanged, Object font)
        {
            if (MaterialReference.Contains(m_materialReferences, (TMP_FontAsset) font))
            {
                //Debug.Log("ON_FONT_PROPERTY_CHANGED event received.");
                m_isInputParsingRequired = true;
                m_havePropertiesChanged = true;

                UpdateMeshPadding();

                SetLayoutDirty();
                SetVerticesDirty();
            }
        }


        // Event received when UNDO / REDO Event alters the properties of the object.
        void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, Object obj)
        {
            //Debug.Log("Event Received by " + obj);

            if (obj == this)
            {
                //Debug.Log("Undo / Redo Event Received by Object ID:" + GetInstanceID());
                m_havePropertiesChanged = true;
                m_isInputParsingRequired = true;

                ComputeMarginSize(); // Review this change
                SetVerticesDirty();
            }
        }


        // Event to Track Material Changed resulting from Drag-n-drop.
        void ON_DRAG_AND_DROP_MATERIAL(GameObject obj, Material currentMaterial, Material newMaterial)
        {
            //Debug.Log("Drag-n-Drop Event - Receiving Object ID " + GetInstanceID() + ". Sender ID " + obj.GetInstanceID()); // +  ". Prefab Parent is " + UnityEditor.PrefabUtility.GetPrefabParent(gameObject).GetInstanceID()); // + ". New Material is " + newMaterial.name + " with ID " + newMaterial.GetInstanceID() + ". Base Material is " + m_baseMaterial.name + " with ID " + m_baseMaterial.GetInstanceID());

            // Check if event applies to this current object
            #if UNITY_2018_2_OR_NEWER
            if (obj == gameObject || UnityEditor.PrefabUtility.GetCorrespondingObjectFromSource(gameObject) == obj)
            #else
            if (obj == gameObject || UnityEditor.PrefabUtility.GetPrefabParent(gameObject) == obj)
            #endif
            {
                UnityEditor.Undo.RecordObject(this, "Material Assignment");
                UnityEditor.Undo.RecordObject(m_canvasRenderer, "Material Assignment");

                m_sharedMaterial = newMaterial;

                m_padding = GetPaddingForMaterial();

                m_havePropertiesChanged = true;
                SetVerticesDirty();
                SetMaterialDirty();
            }
        }


        // Event received when Text Styles are changed.
        void ON_TEXT_STYLE_CHANGED(bool isChanged)
        {
            m_havePropertiesChanged = true;
            m_isInputParsingRequired = true;
            SetVerticesDirty();
        }


        /// <summary>
        /// Event received when a Color Gradient Preset is modified.
        /// </summary>
        /// <param name="textObject"></param>
        void ON_COLOR_GRADIENT_CHANGED(Object gradient)
        {
            m_havePropertiesChanged = true;
            SetVerticesDirty();
        }


        /// <summary>
        /// Event received when the TMP Settings are changed.
        /// </summary>
        void ON_TMP_SETTINGS_CHANGED()
        {
            m_defaultSpriteAsset = null;
            m_havePropertiesChanged = true;
            m_isInputParsingRequired = true;
            SetAllDirty();
        }
        #endif


        // Function which loads either the default font or a newly assigned font asset. This function also assigned the appropriate material to the renderer.
        protected override void LoadFontAsset()
        {
            //Debug.Log("***** LoadFontAsset() *****"); //TextMeshPro LoadFontAsset() has been called."); // Current Font Asset is " + (font != null ? font.name: "Null") );

            ShaderUtilities.GetShaderPropertyIDs(); // Initialize & Get shader property IDs.

            if (m_fontAsset == null)
            {
                if (TMP_Settings.defaultFontAsset != null)
                    m_fontAsset = TMP_Settings.defaultFontAsset;
                else
                    m_fontAsset = Resources.Load<TMP_FontAsset>("Fonts & Materials/LiberationSans SDF");

                if (m_fontAsset == null)
                {
                    Debug.LogWarning("The LiberationSans SDF Font Asset was not found. There is no Font Asset assigned to " + gameObject.name + ".", this);
                    return;
                }

                if (m_fontAsset.characterLookupTable == null)
                {
                    Debug.Log("Dictionary is Null!");
                }

                m_sharedMaterial = m_fontAsset.material;
            }
            else
            {
                // Read font definition if needed.
                if (m_fontAsset.characterLookupTable == null)
                    m_fontAsset.ReadFontAssetDefinition();

                // Added for compatibility with previous releases.
                if (m_sharedMaterial == null && m_baseMaterial != null)
                {
                    m_sharedMaterial = m_baseMaterial;
                    m_baseMaterial = null;
                }

                // If font atlas texture doesn't match the assigned material font atlas, switch back to default material specified in the Font Asset.
                if (m_sharedMaterial == null || m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex) == null || m_fontAsset.atlasTexture.GetInstanceID() != m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID())
                {
                    if (m_fontAsset.material == null)
                        Debug.LogWarning("The Font Atlas Texture of the Font Asset " + m_fontAsset.name + " assigned to " + gameObject.name + " is missing.", this);
                    else
                        m_sharedMaterial = m_fontAsset.material;
                }
            }


            // Find and cache Underline & Ellipsis characters.
            GetSpecialCharacters(m_fontAsset);

            m_padding = GetPaddingForMaterial();

            SetMaterialDirty();
        }


        /// <summary>
        /// Method to retrieve the parent Canvas.
        /// </summary>
        private Canvas GetCanvas()
        {
            Canvas canvas = null;
            var list = TMP_ListPool<Canvas>.Get();

            gameObject.GetComponentsInParent(false, list);
            if (list.Count > 0)
            {
                // Find the first active and enabled canvas.
                for (int i = 0; i < list.Count; ++i)
                {
                    if (list[i].isActiveAndEnabled)
                    {
                        canvas = list[i];
                        break;
                    }
                }
            }

            TMP_ListPool<Canvas>.Release(list);

            return canvas;
        }


        /// <summary>
        /// Method used when animating the Env Map on the material.
        /// </summary>
        void UpdateEnvMapMatrix()
        {
            if (!m_sharedMaterial.HasProperty(ShaderUtilities.ID_EnvMap) || m_sharedMaterial.GetTexture(ShaderUtilities.ID_EnvMap) == null)
                return;

            //Debug.Log("Updating Env Matrix...");
            Vector3 rotation = m_sharedMaterial.GetVector(ShaderUtilities.ID_EnvMatrixRotation);
            m_EnvMapMatrix = Matrix4x4.TRS(Vector3.zero, Quaternion.Euler(rotation), Vector3.one);

            m_sharedMaterial.SetMatrix(ShaderUtilities.ID_EnvMatrix, m_EnvMapMatrix);
        }


        // Enable Masking in the Shader
        void EnableMasking()
        {
            if (m_fontMaterial == null)
            {
                m_fontMaterial = CreateMaterialInstance(m_sharedMaterial);
                m_canvasRenderer.SetMaterial(m_fontMaterial, m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex));
            }

            m_sharedMaterial = m_fontMaterial;
            if (m_sharedMaterial.HasProperty(ShaderUtilities.ID_ClipRect))
            {
                m_sharedMaterial.EnableKeyword(ShaderUtilities.Keyword_MASK_SOFT);
                m_sharedMaterial.DisableKeyword(ShaderUtilities.Keyword_MASK_HARD);
                m_sharedMaterial.DisableKeyword(ShaderUtilities.Keyword_MASK_TEX);

                UpdateMask(); // Update Masking Coordinates
            }

            m_isMaskingEnabled = true;

            //m_uiRenderer.SetMaterial(m_sharedMaterial, null);

            //m_padding = ShaderUtilities.GetPadding(m_sharedMaterial, m_enableExtraPadding, m_isUsingBold);
            //m_alignmentPadding = ShaderUtilities.GetFontExtent(m_sharedMaterial);

            /*
            Material mat = m_uiRenderer.GetMaterial();
            if (mat.HasProperty(ShaderUtilities.ID_MaskCoord))
            {
                mat.EnableKeyword("MASK_SOFT");
                mat.DisableKeyword("MASK_HARD");
                mat.DisableKeyword("MASK_OFF");

                m_isMaskingEnabled = true;
                UpdateMask();
            }
            */
        }


        // Enable Masking in the Shader
        void DisableMasking()
        {
            /*
            if (m_fontMaterial != null)
            {
                if (m_stencilID > 0)
                    m_sharedMaterial = m_MaskMaterial;
                else
                    m_sharedMaterial = m_baseMaterial;

                m_canvasRenderer.SetMaterial(m_sharedMaterial, m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex));

                DestroyImmediate(m_fontMaterial);
            }

            m_isMaskingEnabled = false;
            */

            /*
            if (m_maskingMaterial != null && m_stencilID == 0)
            {
                m_sharedMaterial = m_baseMaterial;
                m_uiRenderer.SetMaterial(m_sharedMaterial, null);
            }
            else if (m_stencilID > 0)
            {
                m_sharedMaterial.EnableKeyword("MASK_OFF");
                m_sharedMaterial.DisableKeyword("MASK_HARD");
                m_sharedMaterial.DisableKeyword("MASK_SOFT");
            }
            */


            /*
            Material mat = m_uiRenderer.GetMaterial();
            if (mat.HasProperty(ShaderUtilities.ID_MaskCoord))
            {
                mat.EnableKeyword("MASK_OFF");
                mat.DisableKeyword("MASK_HARD");
                mat.DisableKeyword("MASK_SOFT");

                m_isMaskingEnabled = false;
                UpdateMask();
            }
            */
        }


        // Update & recompute Mask offset
        void UpdateMask()
        {
            //Debug.Log("Updating Mask...");

            if (m_rectTransform != null)
            {
                //Material mat = m_uiRenderer.GetMaterial();
                //if (mat == null || (m_overflowMode == TextOverflowModes.ScrollRect && m_isScrollRegionSet))
                //    return;

                if (!ShaderUtilities.isInitialized)
                    ShaderUtilities.GetShaderPropertyIDs();

                //Debug.Log("Setting Mask for the first time.");

                m_isScrollRegionSet = true;

                float softnessX = Mathf.Min(Mathf.Min(m_margin.x, m_margin.z), m_sharedMaterial.GetFloat(ShaderUtilities.ID_MaskSoftnessX));
                float softnessY = Mathf.Min(Mathf.Min(m_margin.y, m_margin.w), m_sharedMaterial.GetFloat(ShaderUtilities.ID_MaskSoftnessY));

                softnessX = softnessX > 0 ? softnessX : 0;
                softnessY = softnessY > 0 ? softnessY : 0;

                float width = (m_rectTransform.rect.width - Mathf.Max(m_margin.x, 0) - Mathf.Max(m_margin.z, 0)) / 2 + softnessX;
                float height = (m_rectTransform.rect.height - Mathf.Max(m_margin.y, 0) - Mathf.Max(m_margin.w, 0)) / 2 + softnessY;


                Vector2 center = m_rectTransform.localPosition + new Vector3((0.5f - m_rectTransform.pivot.x) * m_rectTransform.rect.width + (Mathf.Max(m_margin.x, 0) - Mathf.Max(m_margin.z, 0)) / 2, (0.5f - m_rectTransform.pivot.y) * m_rectTransform.rect.height + (-Mathf.Max(m_margin.y, 0) + Mathf.Max(m_margin.w, 0)) / 2);

                //Vector2 center = m_rectTransform.localPosition + new Vector3((0.5f - m_rectTransform.pivot.x) * m_rectTransform.rect.width + (margin.x - margin.z) / 2, (0.5f - m_rectTransform.pivot.y) * m_rectTransform.rect.height + (-margin.y + margin.w) / 2);
                Vector4 mask = new Vector4(center.x, center.y, width, height);
                //Debug.Log(mask);



                //Rect rect = new Rect(0, 0, m_rectTransform.rect.width + margin.x + margin.z, m_rectTransform.rect.height + margin.y + margin.w);
                //int softness = (int)m_sharedMaterial.GetFloat(ShaderUtilities.ID_MaskSoftnessX) / 2;
                m_sharedMaterial.SetVector(ShaderUtilities.ID_ClipRect, mask);
            }
        }


        // Function called internally when a new material is assigned via the fontMaterial property.
        protected override Material GetMaterial(Material mat)
        {
            // Get Shader PropertyIDs if they haven't been cached already.
            ShaderUtilities.GetShaderPropertyIDs();

            // Check in case Object is disabled. If so, we don't have a valid reference to the Renderer.
            // This can occur when the Duplicate Material Context menu is used on an inactive object.
            //if (m_canvasRenderer == null)
            //    m_canvasRenderer = GetComponent<CanvasRenderer>();

            // Create Instance Material only if the new material is not the same instance previously used.
            if (m_fontMaterial == null || m_fontMaterial.GetInstanceID() != mat.GetInstanceID())
                m_fontMaterial = CreateMaterialInstance(mat);

            m_sharedMaterial = m_fontMaterial;

            m_padding = GetPaddingForMaterial();

            m_ShouldRecalculateStencil = true;
            SetVerticesDirty();
            SetMaterialDirty();

            return m_sharedMaterial;
        }


        /// <summary>
        /// Method returning instances of the materials used by the text object.
        /// </summary>
        /// <returns></returns>
        protected override Material[] GetMaterials(Material[] mats)
        {
            int materialCount = m_textInfo.materialCount;

            if (m_fontMaterials == null)
                m_fontMaterials = new Material[materialCount];
            else if (m_fontMaterials.Length != materialCount)
                TMP_TextInfo.Resize(ref m_fontMaterials, materialCount, false);

            // Get instances of the materials
            for (int i = 0; i < materialCount; i++)
            {
                if (i == 0)
                    m_fontMaterials[i] = fontMaterial;
                else
                    m_fontMaterials[i] = m_subTextObjects[i].material;
            }

            m_fontSharedMaterials = m_fontMaterials;

            return m_fontMaterials;
        }


        // Function called internally when a new shared material is assigned via the fontSharedMaterial property.
        protected override void SetSharedMaterial(Material mat)
        {
            // Check in case Object is disabled. If so, we don't have a valid reference to the Renderer.
            // This can occur when the Duplicate Material Context menu is used on an inactive object.
            //if (m_canvasRenderer == null)
            //    m_canvasRenderer = GetComponent<CanvasRenderer>();

            m_sharedMaterial = mat;

            m_padding = GetPaddingForMaterial();

            SetMaterialDirty();
        }


        /// <summary>
        /// Method returning an array containing the materials used by the text object.
        /// </summary>
        /// <returns></returns>
        protected override Material[] GetSharedMaterials()
        {
            int materialCount = m_textInfo.materialCount;

            if (m_fontSharedMaterials == null)
                m_fontSharedMaterials = new Material[materialCount];
            else if (m_fontSharedMaterials.Length != materialCount)
                TMP_TextInfo.Resize(ref m_fontSharedMaterials, materialCount, false);

            for (int i = 0; i < materialCount; i++)
            {
                if (i == 0)
                    m_fontSharedMaterials[i] = m_sharedMaterial;
                else
                    m_fontSharedMaterials[i] = m_subTextObjects[i].sharedMaterial;
            }

            return m_fontSharedMaterials;
        }


        /// <summary>
        /// Method used to assign new materials to the text and sub text objects.
        /// </summary>
        protected override void SetSharedMaterials(Material[] materials)
        {
            int materialCount = m_textInfo.materialCount;

            // Check allocation of the fontSharedMaterials array.
            if (m_fontSharedMaterials == null)
                m_fontSharedMaterials = new Material[materialCount];
            else if (m_fontSharedMaterials.Length != materialCount)
                TMP_TextInfo.Resize(ref m_fontSharedMaterials, materialCount, false);

            // Only assign as many materials as the text object contains.
            for (int i = 0; i < materialCount; i++)
            {
                if (i == 0)
                {
                    // Only assign new material if the font atlas textures match.
                    if (materials[i].GetTexture(ShaderUtilities.ID_MainTex) == null || materials[i].GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID() != m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID())
                        continue;

                    m_sharedMaterial = m_fontSharedMaterials[i] = materials[i];
                    m_padding = GetPaddingForMaterial(m_sharedMaterial);
                }
                else
                {
                    // Only assign new material if the font atlas textures match.
                    if (materials[i].GetTexture(ShaderUtilities.ID_MainTex) == null || materials[i].GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID() != m_subTextObjects[i].sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex).GetInstanceID())
                        continue;

                    // Only assign a new material if none were specified in the text input.
                    if (m_subTextObjects[i].isDefaultMaterial)
                        m_subTextObjects[i].sharedMaterial = m_fontSharedMaterials[i] = materials[i];
                }
            }
        }


        // This function will create an instance of the Font Material.
        protected override void SetOutlineThickness(float thickness)
        {
            // Use material instance if one exists. Otherwise, create a new instance of the shared material.
            if (m_fontMaterial != null && m_sharedMaterial.GetInstanceID() != m_fontMaterial.GetInstanceID())
            {
                m_sharedMaterial = m_fontMaterial;
                m_canvasRenderer.SetMaterial(m_sharedMaterial, m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex));
            }
            else if(m_fontMaterial == null)
            {
                m_fontMaterial = CreateMaterialInstance(m_sharedMaterial);
                m_sharedMaterial = m_fontMaterial;
                m_canvasRenderer.SetMaterial(m_sharedMaterial, m_sharedMaterial.GetTexture(ShaderUtilities.ID_MainTex));
            }

            thickness = Mathf.Clamp01(thickness);
            m_sharedMaterial.SetFloat(ShaderUtilities.ID_OutlineWidth, thickness);
            m_padding = GetPaddingForMaterial();
        }


        // This function will create an instance of the Font Material.
        protected override void SetFaceColor(Color32 color)
        {
            // Use material instance if one exists. Otherwise, create a new instance of the shared material.
            if (m_fontMaterial == null)
                m_fontMaterial = CreateMaterialInstance(m_sharedMaterial);

            m_sharedMaterial = m_fontMaterial;
            m_padding = GetPaddingForMaterial();

            m_sharedMaterial.SetColor(ShaderUtilities.ID_FaceColor, color);
        }


        // This function will create an instance of the Font Material.
        protected override void SetOutlineColor(Color32 color)
        {
            // Use material instance if one exists. Otherwise, create a new instance of the shared material.
            if (m_fontMaterial == null)
                m_fontMaterial = CreateMaterialInstance(m_sharedMaterial);

            m_sharedMaterial = m_fontMaterial;
            m_padding = GetPaddingForMaterial();

            m_sharedMaterial.SetColor(ShaderUtilities.ID_OutlineColor, color);
        }


        // Sets the Render Queue and Ztest mode
        protected override void SetShaderDepth()
        {
            if (m_canvas == null || m_sharedMaterial == null)
                return;

            if (m_canvas.renderMode == RenderMode.ScreenSpaceOverlay || m_isOverlay)
            {
                // Should this use an instanced material?
                m_sharedMaterial.SetFloat(ShaderUtilities.ShaderTag_ZTestMode, 0);
            }
            else
            {   // TODO: This section needs to be tested.
                m_sharedMaterial.SetFloat(ShaderUtilities.ShaderTag_ZTestMode, 4);
            }
        }


        // Sets the Culling mode of the material
        protected override void SetCulling()
        {
            if (m_isCullingEnabled)
            {
                Material mat = materialForRendering;

                if (mat != null)
                    mat.SetFloat("_CullMode", 2);

                for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
                {
                    mat = m_subTextObjects[i].materialForRendering;

                    if (mat != null)
                    {
                        mat.SetFloat(ShaderUtilities.ShaderTag_CullMode, 2);
                    }
                }
            }
            else
            {
                Material mat = materialForRendering;

                if (mat != null)
                    mat.SetFloat("_CullMode", 0);

                for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
                {
                    mat = m_subTextObjects[i].materialForRendering;

                    if (mat != null)
                    {
                        mat.SetFloat(ShaderUtilities.ShaderTag_CullMode, 0);
                    }
                }
            }
        }


        // Set Perspective Correction Mode based on whether Camera is Orthographic or Perspective
        void SetPerspectiveCorrection()
        {
            if (m_isOrthographic)
                m_sharedMaterial.SetFloat(ShaderUtilities.ID_PerspectiveFilter, 0.0f);
            else
                m_sharedMaterial.SetFloat(ShaderUtilities.ID_PerspectiveFilter, 0.875f);
        }


        // Function to allocate the necessary buffers to render the text. This function is called whenever the buffer size needs to be increased.
        void SetMeshArrays(int size)
        {
            m_textInfo.meshInfo[0].ResizeMeshInfo(size);

            m_canvasRenderer.SetMesh(m_textInfo.meshInfo[0].mesh);
        }


        // This function parses through the Char[] to determine how many characters will be visible. It then makes sure the arrays are large enough for all those characters.
        protected override int SetArraySizes(UnicodeChar[] unicodeChars)
        {
            #if TMP_PROFILE_ON
            Profiler.BeginSample("TMP SetArraySizes()");
            //Debug.Log("*** SetArraySizes() ***");
            #endif

            int spriteCount = 0;

            m_totalCharacterCount = 0;
            m_isUsingBold = false;
            m_isParsingText = false;
            tag_NoParsing = false;
            m_FontStyleInternal = m_fontStyle;
            m_fontStyleStack.Clear();

            m_FontWeightInternal = (m_FontStyleInternal & FontStyles.Bold) == FontStyles.Bold ? FontWeight.Bold : m_fontWeight;
            m_FontWeightStack.SetDefault(m_FontWeightInternal);

            m_currentFontAsset = m_fontAsset;
            m_currentMaterial = m_sharedMaterial;
            m_currentMaterialIndex = 0;

            m_materialReferenceStack.SetDefault(new MaterialReference(m_currentMaterialIndex, m_currentFontAsset, null, m_currentMaterial, m_padding));

            m_materialReferenceIndexLookup.Clear();
            MaterialReference.AddMaterialReference(m_currentMaterial, m_currentFontAsset, m_materialReferences, m_materialReferenceIndexLookup);

            // Set allocations for the text object's TextInfo
            if (m_textInfo == null)
                m_textInfo = new TMP_TextInfo(m_InternalParsingBufferSize);
            else if (m_textInfo.characterInfo.Length < m_InternalParsingBufferSize)
                TMP_TextInfo.Resize(ref m_textInfo.characterInfo, m_InternalParsingBufferSize, false);

            m_textElementType = TMP_TextElementType.Character;

            // Handling for Underline special character
            #region Setup Underline Special Character
            /*
            GetUnderlineSpecialCharacter(m_currentFontAsset);
            if (m_Underline.character != null)
            {
                if (m_Underline.fontAsset.GetInstanceID() != m_currentFontAsset.GetInstanceID())
                {
                    if (TMP_Settings.matchMaterialPreset && m_currentMaterial.GetInstanceID() != m_Underline.fontAsset.material.GetInstanceID())
                        m_Underline.material = TMP_MaterialManager.GetFallbackMaterial(m_currentMaterial, m_Underline.fontAsset.material);
                    else
                        m_Underline.material = m_Underline.fontAsset.material;

                    m_Underline.materialIndex = MaterialReference.AddMaterialReference(m_Underline.material, m_Underline.fontAsset, m_materialReferences, m_materialReferenceIndexLookup);
                    m_materialReferences[m_Underline.materialIndex].referenceCount = 0;
                }
            }
            */
            #endregion


            // Handling for Ellipsis special character
            #region Setup Ellipsis Special Character
            if (m_overflowMode == TextOverflowModes.Ellipsis)
            {
                GetEllipsisSpecialCharacter(m_currentFontAsset);

                if (m_Ellipsis.character != null)
                {
                    if (m_Ellipsis.fontAsset.GetInstanceID() != m_currentFontAsset.GetInstanceID())
                    {
                        if (TMP_Settings.matchMaterialPreset && m_currentMaterial.GetInstanceID() != m_Ellipsis.fontAsset.material.GetInstanceID())
                            m_Ellipsis.material = TMP_MaterialManager.GetFallbackMaterial(m_currentMaterial, m_Ellipsis.fontAsset.material);
                        else
                            m_Ellipsis.material = m_Ellipsis.fontAsset.material;

                        m_Ellipsis.materialIndex = MaterialReference.AddMaterialReference(m_Ellipsis.material, m_Ellipsis.fontAsset, m_materialReferences, m_materialReferenceIndexLookup);
                        m_materialReferences[m_Ellipsis.materialIndex].referenceCount = 0;
                    }
                }
                else
                {
                    m_overflowMode = TextOverflowModes.Truncate;

                    if (!TMP_Settings.warningsDisabled)
                        Debug.LogWarning("The character used for Ellipsis is not available in font asset [" + m_currentFontAsset.name + "] or any potential fallbacks. Switching Text Overflow mode to Truncate.", this);
                }
            }
            #endregion


            // Clear Linked Text object if we have one.
            if (m_linkedTextComponent != null && !m_isCalculatingPreferredValues)
            {
                m_linkedTextComponent.text = string.Empty;
                m_linkedTextComponent.ClearMesh();
            }

            // Parsing XML tags in the text
            for (int i = 0; i < unicodeChars.Length && unicodeChars[i].unicode != 0; i++)
            {
                //Make sure the characterInfo array can hold the next text element.
                if (m_textInfo.characterInfo == null || m_totalCharacterCount >= m_textInfo.characterInfo.Length)
                    TMP_TextInfo.Resize(ref m_textInfo.characterInfo, m_totalCharacterCount + 1, true);

                int unicode = unicodeChars[i].unicode;

                // PARSE XML TAGS
                #region PARSE XML TAGS
                if (m_isRichText && unicode == 60) // if Char '<'
                {
                    int prev_MaterialIndex = m_currentMaterialIndex;
                    int endTagIndex;

                    // Check if Tag is Valid
                    if (ValidateHtmlTag(unicodeChars, i + 1, out endTagIndex))
                    {
                        int tagStartIndex = unicodeChars[i].stringIndex;
                        i = endTagIndex;

                        if ((m_FontStyleInternal & FontStyles.Bold) == FontStyles.Bold)
                            m_isUsingBold = true;

                        if (m_textElementType == TMP_TextElementType.Sprite)
                        {
                            m_materialReferences[m_currentMaterialIndex].referenceCount += 1;

                            m_textInfo.characterInfo[m_totalCharacterCount].character = (char)(57344 + m_spriteIndex);
                            m_textInfo.characterInfo[m_totalCharacterCount].spriteIndex = m_spriteIndex;
                            m_textInfo.characterInfo[m_totalCharacterCount].fontAsset = m_currentFontAsset;
                            m_textInfo.characterInfo[m_totalCharacterCount].spriteAsset = m_currentSpriteAsset;
                            m_textInfo.characterInfo[m_totalCharacterCount].materialReferenceIndex = m_currentMaterialIndex;
                            m_textInfo.characterInfo[m_totalCharacterCount].textElement = m_currentSpriteAsset.spriteCharacterTable[m_spriteIndex];
                            m_textInfo.characterInfo[m_totalCharacterCount].elementType = m_textElementType;
                            m_textInfo.characterInfo[m_totalCharacterCount].index = tagStartIndex;
                            m_textInfo.characterInfo[m_totalCharacterCount].stringLength = unicodeChars[i].stringIndex - tagStartIndex + 1;

                            // Restore element type and material index to previous values.
                            m_textElementType = TMP_TextElementType.Character;
                            m_currentMaterialIndex = prev_MaterialIndex;

                            spriteCount += 1;
                            m_totalCharacterCount += 1;
                        }

                        continue;
                    }
                }
                #endregion

                bool isUsingAlternativeTypeface = false;
                bool isUsingFallbackOrAlternativeTypeface = false;

                TMP_FontAsset prev_fontAsset = m_currentFontAsset;
                Material prev_material = m_currentMaterial;
                int prev_materialIndex = m_currentMaterialIndex;

                // Handle Font Styles like LowerCase, UpperCase and SmallCaps.
                #region Handling of LowerCase, UpperCase and SmallCaps Font Styles
                if (m_textElementType == TMP_TextElementType.Character)
                {
                    if ((m_FontStyleInternal & FontStyles.UpperCase) == FontStyles.UpperCase)
                    {
                        // If this character is lowercase, switch to uppercase.
                        if (char.IsLower((char)unicode))
                            unicode = char.ToUpper((char)unicode);

                    }
                    else if ((m_FontStyleInternal & FontStyles.LowerCase) == FontStyles.LowerCase)
                    {
                        // If this character is uppercase, switch to lowercase.
                        if (char.IsUpper((char)unicode))
                            unicode = char.ToLower((char)unicode);
                    }
                    else if ((m_FontStyleInternal & FontStyles.SmallCaps) == FontStyles.SmallCaps)
                    {
                        // Only convert lowercase characters to uppercase.
                        if (char.IsLower((char)unicode))
                            unicode = char.ToUpper((char)unicode);
                    }
                }
                #endregion

                // Lookup the Glyph data for each character and cache it.
                #region LOOKUP GLYPH
                TMP_TextElement character = GetTextElement((uint)unicode, m_currentFontAsset, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);

                // Check if Lowercase or Uppercase variant of the character is available.
                /* Not sure this is necessary anyone as it is very unlikely with recursive search through fallback fonts.
                if (glyph == null)
                {
                    if (char.IsLower((char)c))
                    {
                        if (m_currentFontAsset.characterDictionary.TryGetValue(char.ToUpper((char)c), out glyph))
                            c = chars[i] = char.ToUpper((char)c);
                    }
                    else if (char.IsUpper((char)c))
                    {
                        if (m_currentFontAsset.characterDictionary.TryGetValue(char.ToLower((char)c), out glyph))
                            c = chars[i] = char.ToLower((char)c);
                    }
                }*/

                // Special handling for missing character.
                // Replace missing glyph by the Square (9633) glyph or possibly the Space (32) glyph.
                if (character == null)
                {
                    // Save the original unicode character
                    int srcGlyph = unicode;

                    // Try replacing the missing glyph character by TMP Settings Missing Glyph or Square (9633) character.
                    unicode = unicodeChars[i].unicode = TMP_Settings.missingGlyphCharacter == 0 ? 9633 : TMP_Settings.missingGlyphCharacter;

                    // Check for the missing glyph character in the currently assigned font asset and its fallbacks
                    character = TMP_FontAssetUtilities.GetCharacterFromFontAsset((uint)unicode, m_currentFontAsset, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);

                    if (character == null)
                    {
                        // Search for the missing glyph character in the TMP Settings Fallback list.
                        if (TMP_Settings.fallbackFontAssets != null && TMP_Settings.fallbackFontAssets.Count > 0)
                            character = TMP_FontAssetUtilities.GetCharacterFromFontAssets((uint)unicode, m_currentFontAsset, TMP_Settings.fallbackFontAssets, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
                    }

                    if (character == null)
                    {
                        // Search for the missing glyph in the TMP Settings Default Font Asset.
                        if (TMP_Settings.defaultFontAsset != null)
                            character = TMP_FontAssetUtilities.GetCharacterFromFontAsset((uint)unicode, TMP_Settings.defaultFontAsset, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
                    }

                    if (character == null)
                    {
                        // Use Space (32) Glyph from the currently assigned font asset.
                        unicode = unicodeChars[i].unicode = 32;
                        character = TMP_FontAssetUtilities.GetCharacterFromFontAsset((uint)unicode, m_currentFontAsset, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
                    }

                    if (character == null)
                    {
                        // Use End of Text (0x03) Glyph from the currently assigned font asset.
                        unicode = unicodeChars[i].unicode = 0x03;
                        character = TMP_FontAssetUtilities.GetCharacterFromFontAsset((uint)unicode, m_currentFontAsset, true, m_FontStyleInternal, m_FontWeightInternal, out isUsingAlternativeTypeface);
                    }

                    if (!TMP_Settings.warningsDisabled)
                    {
                        string formattedWarning = srcGlyph > 0xFFFF
                            ? string.Format("The character with Unicode value \\U{0:X8} was not found in the [{1}] font asset or any potential fallbacks. It was replaced by Unicode character \\u{2:X4} in text object [{3}].", srcGlyph, m_fontAsset.name, character.unicode, this.name)
                            : string.Format("The character with Unicode value \\u{0:X4} was not found in the [{1}] font asset or any potential fallbacks. It was replaced by Unicode character \\u{2:X4} in text object [{3}].", srcGlyph, m_fontAsset.name, character.unicode, this.name);

                        Debug.LogWarning(formattedWarning, this);
                    }
                }

                if (character.elementType == TextElementType.Character)
                {
                    if (character.textAsset.instanceID != m_currentFontAsset.instanceID)
                    {
                        isUsingFallbackOrAlternativeTypeface = true;
                        m_currentFontAsset = character.textAsset as TMP_FontAsset;

                    }
                }
                #endregion

                // Save text element data
                m_textInfo.characterInfo[m_totalCharacterCount].elementType = TMP_TextElementType.Character;
                m_textInfo.characterInfo[m_totalCharacterCount].textElement = character;
                m_textInfo.characterInfo[m_totalCharacterCount].isUsingAlternateTypeface = isUsingAlternativeTypeface;
                m_textInfo.characterInfo[m_totalCharacterCount].character = (char)unicode;
                m_textInfo.characterInfo[m_totalCharacterCount].index = unicodeChars[i].stringIndex;
                m_textInfo.characterInfo[m_totalCharacterCount].stringLength = unicodeChars[i].length;
                m_textInfo.characterInfo[m_totalCharacterCount].fontAsset = m_currentFontAsset;

                // Special handling if the character is a sprite.
                if (character.elementType == TextElementType.Sprite)
                {
                    TMP_SpriteAsset spriteAssetRef = character.textAsset as TMP_SpriteAsset;
                    m_currentMaterialIndex = MaterialReference.AddMaterialReference(spriteAssetRef.material, spriteAssetRef, m_materialReferences, m_materialReferenceIndexLookup);
                    m_materialReferences[m_currentMaterialIndex].referenceCount += 1;

                    m_textInfo.characterInfo[m_totalCharacterCount].elementType = TMP_TextElementType.Sprite;
                    m_textInfo.characterInfo[m_totalCharacterCount].materialReferenceIndex = m_currentMaterialIndex;
                    m_textInfo.characterInfo[m_totalCharacterCount].spriteAsset = spriteAssetRef;
                    m_textInfo.characterInfo[m_totalCharacterCount].spriteIndex = (int)character.glyphIndex;

                    // Restore element type and material index to previous values.
                    m_textElementType = TMP_TextElementType.Character;
                    m_currentMaterialIndex = prev_materialIndex;

                    spriteCount += 1;
                    m_totalCharacterCount += 1;

                    continue;
                }

                if (isUsingFallbackOrAlternativeTypeface && m_currentFontAsset.instanceID != m_fontAsset.instanceID)
                {
                    // Create Fallback material instance matching current material preset if necessary
                    if (TMP_Settings.matchMaterialPreset)
                        m_currentMaterial = TMP_MaterialManager.GetFallbackMaterial(m_currentMaterial, m_currentFontAsset.material);
                    else
                        m_currentMaterial = m_currentFontAsset.material;

                    m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, m_currentFontAsset, m_materialReferences, m_materialReferenceIndexLookup);
                }

                // Handle Multi Atlas Texture support
                if (character != null && character.glyph.atlasIndex > 0)
                {
                    m_currentMaterial = TMP_MaterialManager.GetFallbackMaterial(m_currentFontAsset, m_currentMaterial, character.glyph.atlasIndex);

                    m_currentMaterialIndex = MaterialReference.AddMaterialReference(m_currentMaterial, m_currentFontAsset, m_materialReferences, m_materialReferenceIndexLookup);

                    isUsingFallbackOrAlternativeTypeface = true;
                }

                if (!char.IsWhiteSpace((char)unicode) && unicode != 0x200B)
                {
                    // Limit the mesh of the main text object to 65535 vertices and use sub objects for the overflow.
                    if (m_materialReferences[m_currentMaterialIndex].referenceCount < 16383)
                        m_materialReferences[m_currentMaterialIndex].referenceCount += 1;
                    else
                    {
                        m_currentMaterialIndex = MaterialReference.AddMaterialReference(new Material(m_currentMaterial), m_currentFontAsset, m_materialReferences, m_materialReferenceIndexLookup);
                        m_materialReferences[m_currentMaterialIndex].referenceCount += 1;
                    }
                }

                m_textInfo.characterInfo[m_totalCharacterCount].material = m_currentMaterial;
                m_textInfo.characterInfo[m_totalCharacterCount].materialReferenceIndex = m_currentMaterialIndex;
                m_materialReferences[m_currentMaterialIndex].isFallbackMaterial = isUsingFallbackOrAlternativeTypeface;

                // Restore previous font asset and material if fallback font was used.
                if (isUsingFallbackOrAlternativeTypeface)
                {
                    m_materialReferences[m_currentMaterialIndex].fallbackMaterial = prev_material;
                    m_currentFontAsset = prev_fontAsset;
                    m_currentMaterial = prev_material;
                    m_currentMaterialIndex = prev_materialIndex;
                }

                m_totalCharacterCount += 1;
            }

            // Early return if we are calculating the preferred values.
            if (m_isCalculatingPreferredValues)
            {
                m_isCalculatingPreferredValues = false;
                m_isInputParsingRequired = true;
                return m_totalCharacterCount;
            }

            // Save material and sprite count.
            m_textInfo.spriteCount = spriteCount;
            int materialCount = m_textInfo.materialCount = m_materialReferenceIndexLookup.Count;

            // Check if we need to resize the MeshInfo array for handling different materials.
            if (materialCount > m_textInfo.meshInfo.Length)
                TMP_TextInfo.Resize(ref m_textInfo.meshInfo, materialCount, false);

            // Resize SubTextObject array if necessary
            if (materialCount > m_subTextObjects.Length)
                TMP_TextInfo.Resize(ref m_subTextObjects, Mathf.NextPowerOfTwo(materialCount + 1));

            // Resize CharacterInfo[] if allocations are excessive
            if (m_textInfo.characterInfo.Length - m_totalCharacterCount > 256)
                TMP_TextInfo.Resize(ref m_textInfo.characterInfo, Mathf.Max(m_totalCharacterCount + 1, 256), true);


            // Iterate through the material references to set the mesh buffer allocations
            for (int i = 0; i < materialCount; i++)
            {
                // Add new sub text object for each material reference
                if (i > 0)
                {
                    if (m_subTextObjects[i] == null)
                    {
                        m_subTextObjects[i] = TMP_SubMeshUI.AddSubTextObject(this, m_materialReferences[i]);

                        // Not sure this is necessary
                        m_textInfo.meshInfo[i].vertices = null;
                    }
                    //else if (m_subTextObjects[i].gameObject.activeInHierarchy == false)
                    //    m_subTextObjects[i].gameObject.SetActive(true);

                    // Make sure the pivots are synchronized
                    if (m_rectTransform.pivot != m_subTextObjects[i].rectTransform.pivot)
                        m_subTextObjects[i].rectTransform.pivot = m_rectTransform.pivot;

                    // Check if the material has changed.
                    if (m_subTextObjects[i].sharedMaterial == null || m_subTextObjects[i].sharedMaterial.GetInstanceID() != m_materialReferences[i].material.GetInstanceID())
                    {
                        m_subTextObjects[i].sharedMaterial = m_materialReferences[i].material;
                        m_subTextObjects[i].fontAsset = m_materialReferences[i].fontAsset;
                        m_subTextObjects[i].spriteAsset = m_materialReferences[i].spriteAsset;
                    }

                    // Check if we need to use a Fallback Material
                    if (m_materialReferences[i].isFallbackMaterial)
                    {
                        m_subTextObjects[i].fallbackMaterial = m_materialReferences[i].material;
                        m_subTextObjects[i].fallbackSourceMaterial = m_materialReferences[i].fallbackMaterial;
                    }
                }

                int referenceCount = m_materialReferences[i].referenceCount;

                // Check to make sure our buffers allocations can accommodate the required text elements.
                if (m_textInfo.meshInfo[i].vertices == null || m_textInfo.meshInfo[i].vertices.Length < referenceCount * 4)
                {
                    if (m_textInfo.meshInfo[i].vertices == null)
                    {
                        if (i == 0)
                            m_textInfo.meshInfo[i] = new TMP_MeshInfo(m_mesh, referenceCount + 1);
                        else
                            m_textInfo.meshInfo[i] = new TMP_MeshInfo(m_subTextObjects[i].mesh, referenceCount + 1);
                    }
                    else
                        m_textInfo.meshInfo[i].ResizeMeshInfo(referenceCount > 1024 ? referenceCount + 256 : Mathf.NextPowerOfTwo(referenceCount + 1));
                }
                else if (m_VertexBufferAutoSizeReduction && referenceCount > 0 && m_textInfo.meshInfo[i].vertices.Length / 4 - referenceCount > 256)
                {
                    // Resize vertex buffers if allocations are excessive.
                    //Debug.Log("Reducing the size of the vertex buffers.");
                    m_textInfo.meshInfo[i].ResizeMeshInfo(referenceCount > 1024 ? referenceCount + 256 : Mathf.NextPowerOfTwo(referenceCount + 1));
                }

                // Assign material reference
                m_textInfo.meshInfo[i].material = m_materialReferences[i].material;
            }

            //TMP_MaterialManager.CleanupFallbackMaterials();

            // Clean up unused SubMeshes
            for (int i = materialCount; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
            {
                if (i < m_textInfo.meshInfo.Length)
                {
                    m_subTextObjects[i].canvasRenderer.SetMesh(null);

                    // TODO: Figure out a way to handle this without running into Unity's Rebuild loop issue.
                    //m_subTextObjects[i].gameObject.SetActive(false);
                }
            }

            #if TMP_PROFILE_ON
            Profiler.EndSample();
            #endif

            return m_totalCharacterCount;
        }


        // Added to sort handle the potential issue with OnWillRenderObject() not getting called when objects are not visible by camera.
        //void OnBecameInvisible()
        //{
        //    if (m_mesh != null)
        //        m_mesh.bounds = new Bounds(transform.position, new Vector3(1000, 1000, 0));
        //}


        /// <summary>
        /// Update the margin width and height
        /// </summary>
        public override void ComputeMarginSize()
        {
            if (this.rectTransform != null)
            {
                //Debug.Log("*** ComputeMarginSize() *** Current RectTransform's Width is " + m_rectTransform.rect.width + " and Height is " + m_rectTransform.rect.height); // + " and size delta is "  + m_rectTransform.sizeDelta);
                Rect rect = m_rectTransform.rect;

                m_marginWidth = rect.width - m_margin.x - m_margin.z;
                m_marginHeight = rect.height - m_margin.y - m_margin.w;

                // Cache current RectTransform width and pivot referenced in OnRectTransformDimensionsChange() to get around potential rounding error in the reported width of the RectTransform.
                m_PreviousRectTransformSize = rect.size;
                m_PreviousPivotPosition = m_rectTransform.pivot;

                // Update the corners of the RectTransform
                m_RectTransformCorners = GetTextContainerLocalCorners();
            }
        }


        /// <summary>
        ///
        /// </summary>
        protected override void OnDidApplyAnimationProperties()
        {
            m_havePropertiesChanged = true;
            SetVerticesDirty();
            SetLayoutDirty();
            //Debug.Log("Animation Properties have changed.");
        }


        protected override void OnCanvasHierarchyChanged()
        {
            base.OnCanvasHierarchyChanged();

            m_canvas = canvas;

            if (!m_isAwake || !isActiveAndEnabled)
                return;

            // Special handling to stop InternalUpdate calls when parent Canvas is disabled.
            if (m_canvas == null || m_canvas.enabled == false)
                TMP_UpdateManager.UnRegisterTextObjectForUpdate(this);
            else if (m_IsTextObjectScaleStatic == false)
                TMP_UpdateManager.RegisterTextObjectForUpdate(this);
        }


        protected override void OnTransformParentChanged()
        {
            //Debug.Log("***** OnTransformParentChanged *****");

            base.OnTransformParentChanged();

            m_canvas = this.canvas;

            ComputeMarginSize();
            m_havePropertiesChanged = true;
        }


        protected override void OnRectTransformDimensionsChange()
        {
            //Debug.Log("*** OnRectTransformDimensionsChange() *** ActiveInHierarchy: " + this.gameObject.activeInHierarchy + "  Frame: " + Time.frameCount);

            // Make sure object is active in Hierarchy
            if (!this.gameObject.activeInHierarchy)
                return;

            // Ignore changes to RectTransform SizeDelta that are very small and typically the result of rounding errors when using RectTransform in Anchor Stretch mode.
            if (rectTransform != null &&
                Mathf.Abs(m_rectTransform.rect.width - m_PreviousRectTransformSize.x) < 0.0001f && Mathf.Abs(m_rectTransform.rect.height - m_PreviousRectTransformSize.y) < 0.0001f &&
                Mathf.Abs(m_rectTransform.pivot.x - m_PreviousPivotPosition.x) < 0.0001f && Mathf.Abs(m_rectTransform.pivot.y - m_PreviousPivotPosition.y) < 0.0001f)
            {
                return;
            }

            ComputeMarginSize();

            UpdateSubObjectPivot();

            SetVerticesDirty();
            SetLayoutDirty();
        }


        /// <summary>
        /// Function used as a replacement for LateUpdate to check if the transform or scale of the text object has changed.
        /// </summary>
        internal override void InternalUpdate()
        {
            // We need to update the SDF scale or possibly regenerate the text object if lossy scale has changed.
            if (m_havePropertiesChanged == false)
            {
                float lossyScaleY = m_rectTransform.lossyScale.y;

                // Ignore very small lossy scale changes as their effect on SDF Scale would not be visually noticeable.
                // Do not update SDF Scale if the text is null or empty
                if (Mathf.Abs(lossyScaleY - m_previousLossyScaleY) > 0.0001f && m_InternalParsingBuffer[0].unicode != 0)
                {
                    float scaleDelta = lossyScaleY / m_previousLossyScaleY;

                    UpdateSDFScale(scaleDelta);

                    m_previousLossyScaleY = lossyScaleY;
                }
            }

            // Added to handle legacy animation mode.
            if (m_isUsingLegacyAnimationComponent)
            {
                //if (m_havePropertiesChanged)
                m_havePropertiesChanged = true;
                OnPreRenderCanvas();
            }
        }


        // Called just before the Canvas is rendered.
        void OnPreRenderCanvas()
        {
            //Debug.Log("*** OnPreRenderCanvas() *** Frame: " + Time.frameCount);

            // Make sure object is active and that we have a valid Canvas.
            if (!m_isAwake || (this.IsActive() == false && m_ignoreActiveState == false))
                return;

            if (m_canvas == null) { m_canvas = this.canvas; if (m_canvas == null) return; }

            // Check if we have a font asset assigned. Return if we don't because no one likes to see purple squares on screen.
            if (m_fontAsset == null)
            {
                Debug.LogWarning("Please assign a Font Asset to this " + transform.name + " gameobject.", this);
                return;
            }

            if (m_havePropertiesChanged || m_isLayoutDirty)
            {
                //Debug.Log("Properties have changed!"); // Assigned Material is:" + m_sharedMaterial); // New Text is: " + m_text + ".");

                // Update mesh padding if necessary.
                if (checkPaddingRequired)
                    UpdateMeshPadding();

                // Reparse the text if the input has changed or text was truncated.
                if (m_isInputParsingRequired || m_isTextTruncated)
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - ParseInputText()");
                    #endif

                    ParseInputText();

                    TMP_FontAsset.UpdateFontFeaturesForFontAssetsInQueue();

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }

                // Reset Font min / max used with Auto-sizing
                if (m_enableAutoSizing)
                    m_fontSize = Mathf.Clamp(m_fontSizeBase, m_fontSizeMin, m_fontSizeMax);

                m_maxFontSize = m_fontSizeMax;
                m_minFontSize = m_fontSizeMin;
                m_lineSpacingDelta = 0;
                m_charWidthAdjDelta = 0;

                m_isTextTruncated = false;

                m_havePropertiesChanged = false;
                m_isLayoutDirty = false;
                m_ignoreActiveState = false;

                // Reset Text Auto Size iteration tracking.
                m_IsAutoSizePointSizeSet = false;
                m_AutoSizeIterationCount = 0;

                // The GenerateTextMesh function is potentially called repeatedly when text auto size is enabled.
                // This is a revised implementation to remove the use of recursion which could potentially result in stack overflow issues.
                while (m_IsAutoSizePointSizeSet == false)
                {
                    GenerateTextMesh();
                    m_AutoSizeIterationCount += 1;
                }
            }
        }


        /// <summary>
        /// This is the main function that is responsible for creating / displaying the text.
        /// </summary>
        protected override void GenerateTextMesh()
        {
            #if TMP_PROFILE_ON
            Profiler.BeginSample("TMP GenerateText()");
            //Debug.Log("***** GenerateTextMesh() called on object ID " + GetInstanceID() + ". *****"); // ***** Frame: " + Time.frameCount); // + ". Point Size: " + m_fontSize + ". Margins are (W) " + m_marginWidth + "  (H) " + m_marginHeight); // ". Iteration Count: " + loopCountA + ".  Min: " + m_minFontSize + "  Max: " + m_maxFontSize + "  Delta: " + (m_maxFontSize - m_minFontSize) + "  Font size is " + m_fontSize); //called for Object with ID " + GetInstanceID()); // Assigned Material is " + m_uiRenderer.GetMaterial().name); // IncludeForMasking " + this.m_IncludeForMasking); // and text is " + m_text);
            #endif

            // Early exit if no font asset was assigned. This should not be needed since LiberationSans SDF will be assigned by default.
            if (m_fontAsset == null || m_fontAsset.characterLookupTable == null)
            {
                Debug.LogWarning("Can't Generate Mesh! No Font Asset has been assigned to Object ID: " + this.GetInstanceID());
                m_IsAutoSizePointSizeSet = true;
                return;
            }

            // Clear TextInfo
            if (m_textInfo != null)
                m_textInfo.Clear();

            // Early exit if we don't have any Text to generate.
            if (m_InternalParsingBuffer == null || m_InternalParsingBuffer.Length == 0 || m_InternalParsingBuffer[0].unicode == 0)
            {
                // Clear mesh and upload changes to the mesh.
                ClearMesh();

                m_preferredWidth = 0;
                m_preferredHeight = 0;

                // Event indicating the text has been regenerated.
                TMPro_EventManager.ON_TEXT_CHANGED(this);
                m_IsAutoSizePointSizeSet = true;
                return;
            }

            m_currentFontAsset = m_fontAsset;
            m_currentMaterial = m_sharedMaterial;
            m_currentMaterialIndex = 0;
            m_materialReferenceStack.SetDefault(new MaterialReference(m_currentMaterialIndex, m_currentFontAsset, null, m_currentMaterial, m_padding));

            m_currentSpriteAsset = m_spriteAsset;

            // Stop all Sprite Animations
            if (m_spriteAnimator != null)
                m_spriteAnimator.StopAllAnimations();

            // Total character count is computed when the text is parsed.
            int totalCharacterCount = m_totalCharacterCount;

            // Calculate the scale of the font based on selected font size and sampling point size.
            // baseScale is calculated using the font asset assigned to the text object.
            float baseScale = m_fontScale = (m_fontSize / m_fontAsset.m_FaceInfo.pointSize * m_fontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f));
            float currentElementScale = baseScale;
            float currentEmScale = m_fontSize * 0.01f * (m_isOrthographic ? 1 : 0.1f);
            m_fontScaleMultiplier = 1;

            m_currentFontSize = m_fontSize;
            m_sizeStack.SetDefault(m_currentFontSize);
            float fontSizeDelta = 0;

            int charCode = 0; // Holds the character code of the currently being processed character.

            m_FontStyleInternal = m_fontStyle; // Set the default style.
            m_FontWeightInternal = (m_FontStyleInternal & FontStyles.Bold) == FontStyles.Bold ? FontWeight.Bold : m_fontWeight;
            m_FontWeightStack.SetDefault(m_FontWeightInternal);
            m_fontStyleStack.Clear();

            m_lineJustification = m_HorizontalAlignment; // m_textAlignment; // Sets the line justification mode to match editor alignment.
            m_lineJustificationStack.SetDefault(m_lineJustification);

            float padding = 0;
            float style_padding = 0; // Extra padding required to accommodate Bold style.
            float boldSpacingAdjustment = 0;
            //float bold_xAdvance_multiplier = 1; // Used to increase spacing between character when style is bold.

            m_baselineOffset = 0; // Used by subscript characters.
            m_baselineOffsetStack.Clear();

            // Underline
            bool beginUnderline = false;
            Vector3 underline_start = Vector3.zero; // Used to track where underline starts & ends.
            Vector3 underline_end = Vector3.zero;

            // Strike-through
            bool beginStrikethrough = false;
            Vector3 strikethrough_start = Vector3.zero;
            Vector3 strikethrough_end = Vector3.zero;

            // Text Highlight
            bool beginHighlight = false;
            Vector3 highlight_start = Vector3.zero;
            Vector3 highlight_end = Vector3.zero;

            m_fontColor32 = m_fontColor;
            Color32 vertexColor;
            m_htmlColor = m_fontColor32;
            m_underlineColor = m_htmlColor;
            m_strikethroughColor = m_htmlColor;

            m_colorStack.SetDefault(m_htmlColor);
            m_underlineColorStack.SetDefault(m_htmlColor);
            m_strikethroughColorStack.SetDefault(m_htmlColor);
            m_HighlightStateStack.SetDefault(new HighlightState(m_htmlColor, TMP_Offset.zero));

            m_colorGradientPreset = null;
            m_colorGradientStack.SetDefault(null);

            m_ItalicAngle = m_currentFontAsset.italicStyle;
            m_ItalicAngleStack.SetDefault(m_ItalicAngle);

            // Clear the Style stack.
            //m_styleStack.Clear();

            // Clear the Action stack.
            m_actionStack.Clear();

            m_isFXMatrixSet = false;

            m_lineOffset = 0; // Amount of space between lines (font line spacing + m_linespacing).
            m_lineHeight = TMP_Math.FLOAT_UNSET;
            float lineGap = m_currentFontAsset.m_FaceInfo.lineHeight - (m_currentFontAsset.m_FaceInfo.ascentLine - m_currentFontAsset.m_FaceInfo.descentLine);

            m_cSpacing = 0; // Amount of space added between characters as a result of the use of the <cspace> tag.
            m_monoSpacing = 0;
            m_xAdvance = 0; // Used to track the position of each character.

            tag_LineIndent = 0; // Used for indentation of text.
            tag_Indent = 0;
            m_indentStack.SetDefault(0);
            tag_NoParsing = false;
            //m_isIgnoringAlignment = false;

            m_characterCount = 0; // Total characters in the char[]

            // Tracking of line information
            m_firstCharacterOfLine = m_firstVisibleCharacter;
            m_lastCharacterOfLine = 0;
            m_firstVisibleCharacterOfLine = 0;
            m_lastVisibleCharacterOfLine = 0;
            m_maxLineAscender = k_LargeNegativeFloat;
            m_maxLineDescender = k_LargePositiveFloat;
            m_lineNumber = 0;
            m_startOfLineAscender = 0;
            m_startOfLineDescender = 0;
            m_lineVisibleCharacterCount = 0;
            bool isStartOfNewLine = true;
            m_IsDrivenLineSpacing = false;
            m_firstOverflowCharacterIndex = -1;

            m_pageNumber = 0;
            int pageToDisplay = Mathf.Clamp(m_pageToDisplay - 1, 0, m_textInfo.pageInfo.Length - 1);
            m_textInfo.ClearPageInfo();

            Vector4 margins = m_margin;
            float marginWidth = m_marginWidth > 0 ? m_marginWidth : 0;
            float marginHeight = m_marginHeight > 0 ? m_marginHeight : 0;
            m_marginLeft = 0;
            m_marginRight = 0;
            m_width = -1;
            float widthOfTextArea = marginWidth + 0.0001f - m_marginLeft - m_marginRight;

            // Need to initialize these Extents structures
            m_meshExtents.min = k_LargePositiveVector2;
            m_meshExtents.max = k_LargeNegativeVector2;

            // Initialize lineInfo
            m_textInfo.ClearLineInfo();

            // Tracking of the highest Ascender
            m_maxCapHeight = 0;
            m_maxTextAscender = 0;
            m_ElementDescender = 0;
            m_PageAscender = 0;
            float maxVisibleDescender = 0;
            bool isMaxVisibleDescenderSet = false;
            m_isNewPage = false;

            // Initialize struct to track states of word wrapping
            bool isFirstWordOfLine = true;
            m_isNonBreakingSpace = false;
            bool ignoreNonBreakingSpace = false;
            //bool isLastCharacterCJK = false;
            int lastSoftLineBreak = 0;

            CharacterSubstitution characterToSubstitute = new CharacterSubstitution(-1, 0);
            bool isSoftHyphenIgnored = false;
            bool isInjectingCharacter = false;

            // Save character and line state before we begin layout.
            SaveWordWrappingState(ref m_SavedWordWrapState, -1, -1);
            SaveWordWrappingState(ref m_SavedLineState, -1, -1);
            SaveWordWrappingState(ref m_SavedEllipsisState, -1, -1);
            SaveWordWrappingState(ref m_SavedLastValidState, -1, -1);
            SaveWordWrappingState(ref m_SavedSoftLineBreakState, -1, -1);

            m_EllipsisInsertionCandidateStack.Clear();

            // Safety Tracker
            int restoreCount = 0;

            #if TMP_PROFILE_ON
            Profiler.BeginSample("TMP GenerateText() - Phase I");
            #endif

            // Parse through Character buffer to read HTML tags and begin creating mesh.
            for (int i = 0; i < m_InternalParsingBuffer.Length && m_InternalParsingBuffer[i].unicode != 0; i++)
            {
                charCode = m_InternalParsingBuffer[i].unicode;

                if (restoreCount > 5)
                {
                    Debug.LogError("Line breaking recursion max threshold hit... Character [" + charCode + "] index: " + i);
                    characterToSubstitute.index = m_characterCount;
                    characterToSubstitute.unicode = 0x03;
                }

                // Parse Rich Text Tag
                #region Parse Rich Text Tag
                if (m_isRichText && charCode == 60)  // '<'
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Parse Rich Text Tags");
                    #endif

                    m_isParsingText = true;
                    m_textElementType = TMP_TextElementType.Character;
                    int endTagIndex;

                    // Check if Tag is valid. If valid, skip to the end of the validated tag.
                    if (ValidateHtmlTag(m_InternalParsingBuffer, i + 1, out endTagIndex))
                    {
                        i = endTagIndex;

                        // Continue to next character or handle the sprite element
                        if (m_textElementType == TMP_TextElementType.Character)
                        {
                            #if TMP_PROFILE_ON
                            Profiler.EndSample();
                            #endif

                            continue;
                        }
                    }

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                else
                {
                    m_textElementType = m_textInfo.characterInfo[m_characterCount].elementType;
                    m_currentMaterialIndex = m_textInfo.characterInfo[m_characterCount].materialReferenceIndex;
                    m_currentFontAsset = m_textInfo.characterInfo[m_characterCount].fontAsset;
                }
                #endregion End Parse Rich Text Tag

                int previousMaterialIndex = m_currentMaterialIndex;
                bool isUsingAltTypeface = m_textInfo.characterInfo[m_characterCount].isUsingAlternateTypeface;

                m_isParsingText = false;

                // Handle potential character substitutions
                #region Character Substitutions
                isInjectingCharacter = false;

                if (characterToSubstitute.index == m_characterCount)
                {
                    charCode = (int)characterToSubstitute.unicode;
                    m_textElementType = TMP_TextElementType.Character;
                    isInjectingCharacter = true;

                    switch (charCode)
                    {
                        case 0x03:
                            m_textInfo.characterInfo[m_characterCount].textElement = m_currentFontAsset.characterLookupTable[0x03];
                            m_isTextTruncated = true;
                            break;
                        case 0x2D:
                            //
                            break;
                        case 0x2026:
                            m_textInfo.characterInfo[m_characterCount].textElement = m_Ellipsis.character;
                            m_textInfo.characterInfo[m_characterCount].elementType = TMP_TextElementType.Character;
                            m_textInfo.characterInfo[m_characterCount].fontAsset = m_Ellipsis.fontAsset;
                            m_textInfo.characterInfo[m_characterCount].material = m_Ellipsis.material;
                            m_textInfo.characterInfo[m_characterCount].materialReferenceIndex = m_Ellipsis.materialIndex;

                            // Indicates the source parsing data has been modified.
                            m_isTextTruncated = true;

                            // End Of Text
                            characterToSubstitute.index = m_characterCount + 1;
                            characterToSubstitute.unicode = 0x03;
                            break;
                    }
                }
                #endregion


                // When using Linked text, mark character as ignored and skip to next character.
                #region Linked Text
                if (m_characterCount < m_firstVisibleCharacter && charCode != 0x03)
                {
                    m_textInfo.characterInfo[m_characterCount].isVisible = false;
                    m_textInfo.characterInfo[m_characterCount].character = (char)0x200B;
                    m_textInfo.characterInfo[m_characterCount].lineNumber = 0;
                    m_characterCount += 1;
                    continue;
                }
                #endregion


                // Handle Font Styles like LowerCase, UpperCase and SmallCaps.
                #region Handling of LowerCase, UpperCase and SmallCaps Font Styles

                float smallCapsMultiplier = 1.0f;

                if (m_textElementType == TMP_TextElementType.Character)
                {
                    if ((m_FontStyleInternal & FontStyles.UpperCase) == FontStyles.UpperCase)
                    {
                        // If this character is lowercase, switch to uppercase.
                        if (char.IsLower((char)charCode))
                            charCode = char.ToUpper((char)charCode);

                    }
                    else if ((m_FontStyleInternal & FontStyles.LowerCase) == FontStyles.LowerCase)
                    {
                        // If this character is uppercase, switch to lowercase.
                        if (char.IsUpper((char)charCode))
                            charCode = char.ToLower((char)charCode);
                    }
                    else if ((m_FontStyleInternal & FontStyles.SmallCaps) == FontStyles.SmallCaps)
                    {
                        if (char.IsLower((char)charCode))
                        {
                            smallCapsMultiplier = 0.8f;
                            charCode = char.ToUpper((char)charCode);
                        }
                    }
                }
                #endregion


                // Look up Character Data from Dictionary and cache it.
                #region Look up Character Data
                #if TMP_PROFILE_ON
                Profiler.BeginSample("TMP - Lookup Character & Glyph Data");
                #endif
                float baselineOffset = 0;
                float elementAscentLine = 0;
                float elementDescentLine = 0;
                if (m_textElementType == TMP_TextElementType.Sprite)
                {
                    // If a sprite is used as a fallback then get a reference to it and set the color to white.
                    m_currentSpriteAsset = m_textInfo.characterInfo[m_characterCount].spriteAsset;
                    m_spriteIndex = m_textInfo.characterInfo[m_characterCount].spriteIndex;

                    TMP_SpriteCharacter sprite = m_currentSpriteAsset.spriteCharacterTable[m_spriteIndex];
                    if (sprite == null) continue;

                    // Sprites are assigned in the E000 Private Area + sprite Index
                    if (charCode == 60)
                        charCode = 57344 + m_spriteIndex;
                    else
                        m_spriteColor = s_colorWhite;

                    // The sprite scale calculations are based on the font asset assigned to the text object.
                    if (m_currentSpriteAsset.m_FaceInfo.pointSize > 0)
                    {
                        float spriteScale = m_currentFontSize / m_currentSpriteAsset.m_FaceInfo.pointSize * m_currentSpriteAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);
                        currentElementScale = sprite.m_Scale * sprite.m_Glyph.scale * spriteScale;
                        elementAscentLine = m_currentSpriteAsset.m_FaceInfo.ascentLine;
                        baselineOffset = m_currentSpriteAsset.m_FaceInfo.baseline * m_fontScale * m_fontScaleMultiplier * m_currentSpriteAsset.m_FaceInfo.scale;
                        elementDescentLine = m_currentSpriteAsset.m_FaceInfo.descentLine;
                    }
                    else
                    {
                        float spriteScale = m_currentFontSize / m_currentFontAsset.m_FaceInfo.pointSize * m_currentFontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);
                        currentElementScale = m_currentFontAsset.m_FaceInfo.ascentLine / sprite.m_Glyph.metrics.height * sprite.m_Scale * sprite.m_Glyph.scale * spriteScale;
                        float scaleDelta = spriteScale / currentElementScale;
                        elementAscentLine = m_currentFontAsset.m_FaceInfo.ascentLine * scaleDelta;
                        baselineOffset = m_currentFontAsset.m_FaceInfo.baseline * m_fontScale * m_fontScaleMultiplier * m_currentFontAsset.m_FaceInfo.scale;
                        elementDescentLine = m_currentFontAsset.m_FaceInfo.descentLine * scaleDelta;
                    }

                    m_cached_TextElement = sprite;

                    m_textInfo.characterInfo[m_characterCount].elementType = TMP_TextElementType.Sprite;
                    m_textInfo.characterInfo[m_characterCount].scale = currentElementScale;
                    m_textInfo.characterInfo[m_characterCount].spriteAsset = m_currentSpriteAsset;
                    m_textInfo.characterInfo[m_characterCount].fontAsset = m_currentFontAsset;
                    m_textInfo.characterInfo[m_characterCount].materialReferenceIndex = m_currentMaterialIndex;

                    m_currentMaterialIndex = previousMaterialIndex;

                    padding = 0;
                }
                else if (m_textElementType == TMP_TextElementType.Character)
                {
                    m_cached_TextElement = m_textInfo.characterInfo[m_characterCount].textElement;
                    if (m_cached_TextElement == null) continue;

                    m_currentFontAsset = m_textInfo.characterInfo[m_characterCount].fontAsset;
                    m_currentMaterial = m_textInfo.characterInfo[m_characterCount].material;
                    m_currentMaterialIndex = m_textInfo.characterInfo[m_characterCount].materialReferenceIndex;

                    // Special handling if replaced character was a line feed where in this case we have to use the scale of the previous character.
                    float adjustedScale;
                    if (isInjectingCharacter && m_InternalParsingBuffer[i].unicode == 0x0A && m_characterCount != m_firstCharacterOfLine)
                        adjustedScale = m_textInfo.characterInfo[m_characterCount - 1].pointSize * smallCapsMultiplier / m_currentFontAsset.m_FaceInfo.pointSize * m_currentFontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);
                    else
                        adjustedScale = m_currentFontSize * smallCapsMultiplier / m_currentFontAsset.m_FaceInfo.pointSize * m_currentFontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);

                    elementAscentLine = m_currentFontAsset.m_FaceInfo.ascentLine;
                    elementDescentLine = m_currentFontAsset.m_FaceInfo.descentLine;

                    currentElementScale = adjustedScale * m_fontScaleMultiplier * m_cached_TextElement.m_Scale * m_cached_TextElement.m_Glyph.scale;
                    baselineOffset = m_currentFontAsset.m_FaceInfo.baseline * adjustedScale * m_fontScaleMultiplier * m_currentFontAsset.m_FaceInfo.scale;

                    m_textInfo.characterInfo[m_characterCount].elementType = TMP_TextElementType.Character;
                    m_textInfo.characterInfo[m_characterCount].scale = currentElementScale;

                    padding = m_currentMaterialIndex == 0 ? m_padding : m_subTextObjects[m_currentMaterialIndex].padding;
                }
                #if TMP_PROFILE_ON
                Profiler.EndSample();
                #endif
                #endregion


                // Handle Soft Hyphen
                #region Handle Soft Hyphen
                float currentElementUnmodifiedScale = currentElementScale;
                if (charCode == 0xAD || charCode == 0x03)
                    currentElementScale = 0;
                #endregion


                // Store some of the text object's information
                m_textInfo.characterInfo[m_characterCount].character = (char)charCode;
                m_textInfo.characterInfo[m_characterCount].pointSize = m_currentFontSize;
                m_textInfo.characterInfo[m_characterCount].color = m_htmlColor;
                m_textInfo.characterInfo[m_characterCount].underlineColor = m_underlineColor;
                m_textInfo.characterInfo[m_characterCount].strikethroughColor = m_strikethroughColor;
                m_textInfo.characterInfo[m_characterCount].highlightState = m_HighlightStateStack.current;
                m_textInfo.characterInfo[m_characterCount].style = m_FontStyleInternal;

                // Cache glyph metrics
                GlyphMetrics currentGlyphMetrics = m_cached_TextElement.m_Glyph.metrics;

                // Optimization to avoid calling this more than once per character.
                bool isWhiteSpace = char.IsWhiteSpace((char)charCode);
                //bool isVisibleCharacter = !isWhiteSpace;

                // Handle Kerning if Enabled.
                #region Handle Kerning
                TMP_GlyphValueRecord glyphAdjustments = new TMP_GlyphValueRecord();
                float characterSpacingAdjustment = m_characterSpacing;
                m_GlyphHorizontalAdvanceAdjustment = 0;
                if (m_enableKerning)
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Handle Glyph Positional Adjustments");
                    #endif

                    TMP_GlyphPairAdjustmentRecord adjustmentPair;
                    uint baseGlyphIndex = m_cached_TextElement.m_GlyphIndex;

                    if (m_characterCount < totalCharacterCount - 1)
                    {
                        uint nextGlyphIndex = m_textInfo.characterInfo[m_characterCount + 1].textElement.m_GlyphIndex;
                        uint key = nextGlyphIndex << 16 | baseGlyphIndex;

                        if (m_currentFontAsset.m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.TryGetValue(key, out adjustmentPair))
                        {
                            glyphAdjustments = adjustmentPair.m_FirstAdjustmentRecord.m_GlyphValueRecord;
                            characterSpacingAdjustment = (adjustmentPair.m_FeatureLookupFlags & FontFeatureLookupFlags.IgnoreSpacingAdjustments) == FontFeatureLookupFlags.IgnoreSpacingAdjustments ? 0 : characterSpacingAdjustment;
                        }
                    }

                    if (m_characterCount >= 1)
                    {
                        uint previousGlyphIndex = m_textInfo.characterInfo[m_characterCount - 1].textElement.m_GlyphIndex;
                        uint key = baseGlyphIndex << 16 | previousGlyphIndex;

                        if (m_currentFontAsset.m_FontFeatureTable.m_GlyphPairAdjustmentRecordLookupDictionary.TryGetValue(key, out adjustmentPair))
                        {
                            glyphAdjustments += adjustmentPair.m_SecondAdjustmentRecord.m_GlyphValueRecord;
                            characterSpacingAdjustment = (adjustmentPair.m_FeatureLookupFlags & FontFeatureLookupFlags.IgnoreSpacingAdjustments) == FontFeatureLookupFlags.IgnoreSpacingAdjustments ? 0 : characterSpacingAdjustment;
                        }
                    }

                    m_GlyphHorizontalAdvanceAdjustment = glyphAdjustments.xAdvance;

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                #endregion


                // Initial Implementation for RTL support.
                #region Handle Right-to-Left
                if (m_isRightToLeft)
                {
                    m_xAdvance -= currentGlyphMetrics.horizontalAdvance * (1 - m_charWidthAdjDelta) * currentElementScale;

                    if (isWhiteSpace || charCode == 0x200B)
                        m_xAdvance -= m_wordSpacing * currentEmScale;
                }
                #endregion


                // Handle Mono Spacing
                #region Handle Mono Spacing
                float monoAdvance = 0;
                if (m_monoSpacing != 0)
                {
                    monoAdvance = (m_monoSpacing / 2 - (currentGlyphMetrics.width / 2 + currentGlyphMetrics.horizontalBearingX) * currentElementScale) * (1 - m_charWidthAdjDelta);
                    m_xAdvance += monoAdvance;
                }
                #endregion


                // Set Padding based on selected font style
                #region Handle Style Padding
                if (m_textElementType == TMP_TextElementType.Character && !isUsingAltTypeface && ((m_FontStyleInternal & FontStyles.Bold) == FontStyles.Bold)) // Checks for any combination of Bold Style.
                {
                    if (m_currentMaterial != null && m_currentMaterial.HasProperty(ShaderUtilities.ID_GradientScale))
                    {
                        float gradientScale = m_currentMaterial.GetFloat(ShaderUtilities.ID_GradientScale);
                        style_padding = m_currentFontAsset.boldStyle / 4.0f * gradientScale * m_currentMaterial.GetFloat(ShaderUtilities.ID_ScaleRatio_A);

                        // Clamp overall padding to Gradient Scale size.
                        if (style_padding + padding > gradientScale)
                            padding = gradientScale - style_padding;
                    }
                    else
                        style_padding = 0;

                    boldSpacingAdjustment = m_currentFontAsset.boldSpacing;
                }
                else
                {
                    if (m_currentMaterial != null && m_currentMaterial.HasProperty(ShaderUtilities.ID_GradientScale))
                    {
                        float gradientScale = m_currentMaterial.GetFloat(ShaderUtilities.ID_GradientScale);
                        style_padding = m_currentFontAsset.normalStyle / 4.0f * gradientScale * m_currentMaterial.GetFloat(ShaderUtilities.ID_ScaleRatio_A);

                        // Clamp overall padding to Gradient Scale size.
                        if (style_padding + padding > gradientScale)
                            padding = gradientScale - style_padding;
                    }
                    else
                        style_padding = 0;

                    boldSpacingAdjustment = 0;
                }
                #endregion Handle Style Padding


                // Determine the position of the vertices of the Character or Sprite.
                #region Calculate Vertices Position
                #if TMP_PROFILE_ON
                Profiler.BeginSample("TMP - Calculate Vertices Position");
                #endif
                Vector3 top_left;
                top_left.x = m_xAdvance + ((currentGlyphMetrics.horizontalBearingX - padding - style_padding + glyphAdjustments.m_XPlacement) * currentElementScale * (1 - m_charWidthAdjDelta));
                top_left.y = baselineOffset + (currentGlyphMetrics.horizontalBearingY + padding + glyphAdjustments.m_YPlacement) * currentElementScale - m_lineOffset + m_baselineOffset;
                top_left.z = 0;

                Vector3 bottom_left;
                bottom_left.x = top_left.x;
                bottom_left.y = top_left.y - ((currentGlyphMetrics.height + padding * 2) * currentElementScale);
                bottom_left.z = 0;

                Vector3 top_right;
                top_right.x = bottom_left.x + ((currentGlyphMetrics.width + padding * 2 + style_padding * 2) * currentElementScale * (1 - m_charWidthAdjDelta));
                top_right.y = top_left.y;
                top_right.z = 0;

                Vector3 bottom_right;
                bottom_right.x = top_right.x;
                bottom_right.y = bottom_left.y;
                bottom_right.z = 0;

                #if TMP_PROFILE_ON
                Profiler.EndSample();
                #endif
                #endregion


                // Check if we need to Shear the rectangles for Italic styles
                #region Handle Italic & Shearing
                if (m_textElementType == TMP_TextElementType.Character && !isUsingAltTypeface && ((m_FontStyleInternal & FontStyles.Italic) == FontStyles.Italic))
                {
                    // Shift Top vertices forward by half (Shear Value * height of character) and Bottom vertices back by same amount.
                    float shear_value = m_ItalicAngle * 0.01f;
                    Vector3 topShear = new Vector3(shear_value * ((currentGlyphMetrics.horizontalBearingY + padding + style_padding) * currentElementScale), 0, 0);
                    Vector3 bottomShear = new Vector3(shear_value * (((currentGlyphMetrics.horizontalBearingY - currentGlyphMetrics.height - padding - style_padding)) * currentElementScale), 0, 0);

                    Vector3 shearAdjustment = new Vector3((topShear.x - bottomShear.x) / 2, 0, 0);

                    top_left = top_left + topShear - shearAdjustment;
                    bottom_left = bottom_left + bottomShear - shearAdjustment;
                    top_right = top_right + topShear - shearAdjustment;
                    bottom_right = bottom_right + bottomShear - shearAdjustment;
                }
                #endregion Handle Italics & Shearing


                // Handle Character Rotation
                #region Handle Character Rotation
                if (m_isFXMatrixSet)
                {
                    // Apply scale matrix when simulating Condensed text.
                    if (m_FXMatrix.lossyScale.x != 1)
                    {
                        //top_left = m_FXMatrix.MultiplyPoint3x4(top_left);
                        //bottom_left = m_FXMatrix.MultiplyPoint3x4(bottom_left);
                        //top_right = m_FXMatrix.MultiplyPoint3x4(top_right);
                        //bottom_right = m_FXMatrix.MultiplyPoint3x4(bottom_right);
                    }

                    Vector3 positionOffset = (top_right + bottom_left) / 2;

                    top_left = m_FXMatrix.MultiplyPoint3x4(top_left - positionOffset) + positionOffset;
                    bottom_left = m_FXMatrix.MultiplyPoint3x4(bottom_left - positionOffset) + positionOffset;
                    top_right = m_FXMatrix.MultiplyPoint3x4(top_right - positionOffset) + positionOffset;
                    bottom_right = m_FXMatrix.MultiplyPoint3x4(bottom_right - positionOffset) + positionOffset;
                }
                #endregion


                // Store vertex information for the character or sprite.
                m_textInfo.characterInfo[m_characterCount].bottomLeft = bottom_left;
                m_textInfo.characterInfo[m_characterCount].topLeft = top_left;
                m_textInfo.characterInfo[m_characterCount].topRight = top_right;
                m_textInfo.characterInfo[m_characterCount].bottomRight = bottom_right;

                m_textInfo.characterInfo[m_characterCount].origin = m_xAdvance;
                m_textInfo.characterInfo[m_characterCount].baseLine = baselineOffset - m_lineOffset + m_baselineOffset;
                m_textInfo.characterInfo[m_characterCount].aspectRatio = (top_right.x - bottom_left.x) / (top_left.y - bottom_left.y);


                // Compute text metrics
                #region Compute Ascender & Descender values
                #if TMP_PROFILE_ON
                Profiler.BeginSample("TMP - Compute Text Metrics");
                #endif
                // Element Ascender in line space
                float elementAscender = m_textElementType == TMP_TextElementType.Character
                    ? elementAscentLine * currentElementScale / smallCapsMultiplier + m_baselineOffset
                    : elementAscentLine * currentElementScale + m_baselineOffset;

                // Element Descender in line space
                float elementDescender = m_textElementType == TMP_TextElementType.Character
                    ? elementDescentLine * currentElementScale / smallCapsMultiplier + m_baselineOffset
                    : elementDescentLine * currentElementScale + m_baselineOffset;

                float adjustedAscender = elementAscender;
                float adjustedDescender = elementDescender;

                bool isFirstCharacterOfLine = m_characterCount == m_firstCharacterOfLine;
                // Max line ascender and descender in line space
                if (isFirstCharacterOfLine || isWhiteSpace == false)
                {
                    // Special handling for Superscript and Subscript where we use the unadjusted line ascender and descender
                    if (m_baselineOffset != 0)
                    {
                        adjustedAscender = Mathf.Max((elementAscender - m_baselineOffset) / m_fontScaleMultiplier, adjustedAscender);
                        adjustedDescender = Mathf.Min((elementDescender - m_baselineOffset) / m_fontScaleMultiplier, adjustedDescender);
                    }

                    m_maxLineAscender = Mathf.Max(adjustedAscender, m_maxLineAscender);
                    m_maxLineDescender = Mathf.Min(adjustedDescender, m_maxLineDescender);
                }

                // Element Ascender and Descender in object space
                if (isFirstCharacterOfLine || isWhiteSpace == false)
                {
                    m_textInfo.characterInfo[m_characterCount].adjustedAscender = adjustedAscender;
                    m_textInfo.characterInfo[m_characterCount].adjustedDescender = adjustedDescender;

                    m_ElementAscender = m_textInfo.characterInfo[m_characterCount].ascender = elementAscender - m_lineOffset;
                    m_ElementDescender = m_textInfo.characterInfo[m_characterCount].descender = elementDescender - m_lineOffset;
                }
                else
                {
                    m_textInfo.characterInfo[m_characterCount].adjustedAscender = m_maxLineAscender;
                    m_textInfo.characterInfo[m_characterCount].adjustedDescender = m_maxLineDescender;

                    m_ElementAscender = m_textInfo.characterInfo[m_characterCount].ascender = m_maxLineAscender - m_lineOffset;
                    m_ElementDescender = m_textInfo.characterInfo[m_characterCount].descender = m_maxLineDescender - m_lineOffset;
                }

                // Max text object ascender and cap height
                if (m_lineNumber == 0 || m_isNewPage)
                {
                    if (isFirstCharacterOfLine || isWhiteSpace == false)
                    {
                        m_maxTextAscender = m_maxLineAscender;
                        m_maxCapHeight = Mathf.Max(m_maxCapHeight, m_currentFontAsset.m_FaceInfo.capLine * currentElementScale / smallCapsMultiplier);
                    }
                }

                // Page ascender
                if (m_lineOffset == 0)
                {
                    if (isFirstCharacterOfLine || isWhiteSpace == false)
                        m_PageAscender = m_PageAscender > elementAscender ? m_PageAscender : elementAscender;
                }
                #if TMP_PROFILE_ON
                Profiler.EndSample();
                #endif
                #endregion


                // Set Characters to not visible by default.
                m_textInfo.characterInfo[m_characterCount].isVisible = false;

                bool isJustifiedOrFlush = (m_lineJustification & HorizontalAlignmentOptions.Flush) == HorizontalAlignmentOptions.Flush || (m_lineJustification & HorizontalAlignmentOptions.Justified) == HorizontalAlignmentOptions.Justified;

                // Setup Mesh for visible text elements. ie. not a SPACE / LINEFEED / CARRIAGE RETURN.
                #region Handle Visible Characters
                if (charCode == 9 || (isWhiteSpace == false && charCode != 0x200B && charCode != 0xAD && charCode != 0x03) || (charCode == 0xAD && isSoftHyphenIgnored == false) || m_textElementType == TMP_TextElementType.Sprite)
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Handle Visible Character");
                    #endif

                    m_textInfo.characterInfo[m_characterCount].isVisible = true;

                    #region Experimental Margin Shaper
                    //Vector2 shapedMargins;
                    //if (marginShaper)
                    //{
                    //    shapedMargins = m_marginShaper.GetShapedMargins(m_textInfo.characterInfo[m_characterCount].baseLine);
                    //    if (shapedMargins.x < margins.x)
                    //    {
                    //        shapedMargins.x = m_marginLeft;
                    //    }
                    //    else
                    //    {
                    //        shapedMargins.x += m_marginLeft - margins.x;
                    //    }
                    //    if (shapedMargins.y < margins.z)
                    //    {
                    //        shapedMargins.y = m_marginRight;
                    //    }
                    //    else
                    //    {
                    //        shapedMargins.y += m_marginRight - margins.z;
                    //    }
                    //}
                    //else
                    //{
                    //    shapedMargins.x = m_marginLeft;
                    //    shapedMargins.y = m_marginRight;
                    //}
                    //width = marginWidth + 0.0001f - shapedMargins.x - shapedMargins.y;
                    //if (m_width != -1 && m_width < width)
                    //{
                    //    width = m_width;
                    //}
                    //m_textInfo.lineInfo[m_lineNumber].marginLeft = shapedMargins.x;
                    #endregion

                    float marginLeft = m_marginLeft;
                    float marginRight = m_marginRight;

                    // Injected characters do not override margins
                    if (isInjectingCharacter)
                    {
                        marginLeft = m_textInfo.lineInfo[m_lineNumber].marginLeft;
                        marginRight = m_textInfo.lineInfo[m_lineNumber].marginRight;
                    }

                    widthOfTextArea = m_width != -1 ? Mathf.Min(marginWidth + 0.0001f - marginLeft - marginRight, m_width) : marginWidth + 0.0001f - marginLeft - marginRight;

                    // Calculate the line breaking width of the text.
                    float textWidth = Mathf.Abs(m_xAdvance) + (!m_isRightToLeft ? currentGlyphMetrics.horizontalAdvance : 0) * (1 - m_charWidthAdjDelta) * (charCode == 0xAD ? currentElementUnmodifiedScale : currentElementScale);
                    float textHeight = m_maxTextAscender - (m_maxLineDescender - m_lineOffset) + (m_lineOffset > 0 && m_IsDrivenLineSpacing == false ? m_maxLineAscender - m_startOfLineAscender : 0);

                    int testedCharacterCount = m_characterCount;

                    // Handling of current line Vertical Bounds
                    #region Current Line Vertical Bounds Check
                    if (textHeight > marginHeight + 0.0001f)
                    {
                        // Set isTextOverflowing and firstOverflowCharacterIndex
                        if (m_firstOverflowCharacterIndex == -1)
                            m_firstOverflowCharacterIndex = m_characterCount;

                        // Check if Auto-Size is enabled
                        if (m_enableAutoSizing)
                        {
                            // Handle Line spacing adjustments
                            #region Line Spacing Adjustments
                            if (m_lineSpacingDelta > m_lineSpacingMax && m_lineOffset > 0 && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                            {
                                float adjustmentDelta = (marginHeight - textHeight) / m_lineNumber;

                                m_lineSpacingDelta = Mathf.Max(m_lineSpacingDelta + adjustmentDelta / baseScale, m_lineSpacingMax);

                                //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Line Spacing. Delta of [" + m_lineSpacingDelta.ToString("f3") + "].");
                                return;
                            }
                            #endregion


                            // Handle Text Auto-sizing resulting from text exceeding vertical bounds.
                            #region Text Auto-Sizing (Text greater than vertical bounds)
                            if (m_fontSize > m_fontSizeMin && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                            {
                                m_maxFontSize = m_fontSize;

                                float sizeDelta = Mathf.Max((m_fontSize - m_minFontSize) / 2, 0.05f);
                                m_fontSize -= sizeDelta;
                                m_fontSize = Mathf.Max((int)(m_fontSize * 20 + 0.5f) / 20f, m_fontSizeMin);

                                //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Point Size from [" + m_maxFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                                return;
                            }
                            #endregion Text Auto-Sizing
                        }

                        // Handle Vertical Overflow on current line
                        switch (m_overflowMode)
                        {
                            case TextOverflowModes.Overflow:
                            case TextOverflowModes.ScrollRect:
                            case TextOverflowModes.Masking:
                                // Nothing happens as vertical bounds are ignored in this mode.
                                break;

                            case TextOverflowModes.Truncate:
                                i = RestoreWordWrappingState(ref m_SavedLastValidState);

                                characterToSubstitute.index = testedCharacterCount;
                                characterToSubstitute.unicode = 0x03;
                                continue;

                            case TextOverflowModes.Ellipsis:
                                if (m_EllipsisInsertionCandidateStack.Count == 0)
                                {
                                    i = -1;
                                    m_characterCount = 0;
                                    characterToSubstitute.index = 0;
                                    characterToSubstitute.unicode = 0x03;
                                    m_firstCharacterOfLine = 0;
                                    continue;
                                }

                                var ellipsisState = m_EllipsisInsertionCandidateStack.Pop();
                                i = RestoreWordWrappingState(ref ellipsisState);

                                i -= 1;
                                m_characterCount -= 1;
                                characterToSubstitute.index = m_characterCount;
                                characterToSubstitute.unicode = 0x2026;

                                restoreCount += 1;
                                continue;

                            case TextOverflowModes.Linked:
                                i = RestoreWordWrappingState(ref m_SavedLastValidState);

                                if (m_linkedTextComponent != null)
                                {
                                    m_linkedTextComponent.text = text;
                                    m_linkedTextComponent.firstVisibleCharacter = m_characterCount;
                                    m_linkedTextComponent.ForceMeshUpdate();

                                    m_isTextTruncated = true;
                                }

                                // Truncate remaining text
                                characterToSubstitute.index = testedCharacterCount;
                                characterToSubstitute.unicode = 0x03;
                                continue;

                            case TextOverflowModes.Page:
                                // End layout of text if first character / page doesn't fit.
                                if (i < 0 || testedCharacterCount == 0)
                                {
                                    i = -1;
                                    m_characterCount = 0;
                                    characterToSubstitute.index = 0;
                                    characterToSubstitute.unicode = 0x03;
                                    continue;
                                }
                                else if (m_maxLineAscender - m_maxLineDescender > marginHeight + 0.0001f)
                                {
                                    // Current line exceeds the height of the text container
                                    // as such we stop on the previous line.
                                    i = RestoreWordWrappingState(ref m_SavedLineState);

                                    characterToSubstitute.index = testedCharacterCount;
                                    characterToSubstitute.unicode = 0x03;
                                    continue;
                                }

                                // Go back to previous line and re-layout
                                i = RestoreWordWrappingState(ref m_SavedLineState);

                                m_isNewPage = true;
                                m_firstCharacterOfLine = m_characterCount;
                                m_maxLineAscender = k_LargeNegativeFloat;
                                m_maxLineDescender = k_LargePositiveFloat;
                                m_startOfLineAscender = 0;

                                m_xAdvance = 0 + tag_Indent;
                                m_lineOffset = 0;
                                m_maxTextAscender = 0;
                                m_PageAscender = 0;
                                m_lineNumber += 1;
                                m_pageNumber += 1;

                                // Should consider saving page data here
                                continue;
                        }
                    }
                    #endregion


                    // Handling of Horizontal Bounds
                    #region Current Line Horizontal Bounds Check
                    if (textWidth > widthOfTextArea * (isJustifiedOrFlush ? 1.05f : 1.0f))
                    {
                        #if TMP_PROFILE_ON
                            Profiler.BeginSample("TMP - Handle Horizontal Line Breaking");
                        #endif

                        // Handle Line Breaking (if still possible)
                        if (m_enableWordWrapping && m_characterCount != m_firstCharacterOfLine) // && isFirstWord == false)
                        {
                            // Restore state to previous safe line breaking
                            i = RestoreWordWrappingState(ref m_SavedWordWrapState);

                            // Compute potential new line offset in the event a line break is needed.
                            float lineOffsetDelta = 0;
                            if (m_lineHeight == TMP_Math.FLOAT_UNSET)
                            {
                                float ascender = m_textInfo.characterInfo[m_characterCount].adjustedAscender;
                                lineOffsetDelta = (m_lineOffset > 0 && m_IsDrivenLineSpacing == false ? m_maxLineAscender - m_startOfLineAscender : 0) - m_maxLineDescender + ascender + (lineGap + m_lineSpacingDelta) * baseScale + m_lineSpacing * currentEmScale;
                            }
                            else
                            {
                                lineOffsetDelta = m_lineHeight + m_lineSpacing * currentEmScale;
                                m_IsDrivenLineSpacing = true;
                            }

                            // Calculate new text height
                            float newTextHeight = m_maxTextAscender + lineOffsetDelta + m_lineOffset - m_textInfo.characterInfo[m_characterCount].adjustedDescender;

                            // Replace Soft Hyphen by Hyphen Minus 0x2D
                            #region Handle Soft Hyphenation
                            if (m_textInfo.characterInfo[m_characterCount - 1].character == 0xAD && isSoftHyphenIgnored == false)
                            {
                                // Only inject Hyphen Minus if new line is possible
                                if (m_overflowMode == TextOverflowModes.Overflow || newTextHeight < marginHeight + 0.0001f)
                                {
                                    characterToSubstitute.index = m_characterCount - 1;
                                    characterToSubstitute.unicode = 0x2D;

                                    i -= 1;
                                    m_characterCount -= 1;
                                    continue;
                                }
                            }

                            isSoftHyphenIgnored = false;

                            // Ignore Soft Hyphen to prevent it from wrapping
                            if (m_textInfo.characterInfo[m_characterCount].character == 0xAD)
                            {
                                isSoftHyphenIgnored = true;
                                continue;
                            }
                            #endregion

                            // Adjust character spacing before breaking up word if auto size is enabled
                            if (m_enableAutoSizing && isFirstWordOfLine)
                            {
                                // Handle Character Width Adjustments
                                #region Character Width Adjustments
                                if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100 && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                {
                                    float adjustedTextWidth = textWidth;

                                    // Determine full width of the text
                                    if (m_charWidthAdjDelta > 0)
                                        adjustedTextWidth /= 1f - m_charWidthAdjDelta;

                                    float adjustmentDelta = textWidth - (widthOfTextArea - 0.0001f) * (isJustifiedOrFlush ? 1.05f : 1.0f);
                                    m_charWidthAdjDelta += adjustmentDelta / adjustedTextWidth;
                                    m_charWidthAdjDelta = Mathf.Min(m_charWidthAdjDelta, m_charWidthMaxAdj / 100);

                                    //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Character Width by " + (m_charWidthAdjDelta * 100) + "%");
                                    return;
                                }
                                #endregion

                                // Handle Text Auto-sizing resulting from text exceeding vertical bounds.
                                #region Text Auto-Sizing (Text greater than vertical bounds)
                                if (m_fontSize > m_fontSizeMin && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                {
                                    m_maxFontSize = m_fontSize;

                                    float sizeDelta = Mathf.Max((m_fontSize - m_minFontSize) / 2, 0.05f);
                                    m_fontSize -= sizeDelta;
                                    m_fontSize = Mathf.Max((int)(m_fontSize * 20 + 0.5f) / 20f, m_fontSizeMin);

                                    //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Point Size from [" + m_maxFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                                    return;
                                }
                                #endregion Text Auto-Sizing
                            }


                            // Special handling if first word of line and non breaking space
                            int savedSoftLineBreakingSpace = m_SavedSoftLineBreakState.previous_WordBreak;
                            if (isFirstWordOfLine && savedSoftLineBreakingSpace != -1)
                            {
                                if (savedSoftLineBreakingSpace != lastSoftLineBreak)
                                {
                                    i = RestoreWordWrappingState(ref m_SavedSoftLineBreakState);
                                    lastSoftLineBreak = savedSoftLineBreakingSpace;

                                    // check if soft hyphen
                                    if (m_textInfo.characterInfo[m_characterCount - 1].character == 0xAD)
                                    {
                                        characterToSubstitute.index = m_characterCount - 1;
                                        characterToSubstitute.unicode = 0x2D;

                                        i -= 1;
                                        m_characterCount -= 1;
                                        continue;
                                    }
                                }
                            }

                            // Determine if new line of text would exceed the vertical bounds of text container
                            if (newTextHeight > marginHeight + 0.0001f)
                            {
                                // Set isTextOverflowing and firstOverflowCharacterIndex
                                if (m_firstOverflowCharacterIndex == -1)
                                    m_firstOverflowCharacterIndex = m_characterCount;

                                // Check if Auto-Size is enabled
                                if (m_enableAutoSizing)
                                {
                                    // Handle Line spacing adjustments
                                    #region Line Spacing Adjustments
                                    if (m_lineSpacingDelta > m_lineSpacingMax && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                    {
                                        float adjustmentDelta = (marginHeight - newTextHeight) / (m_lineNumber + 1);

                                        m_lineSpacingDelta = Mathf.Max(m_lineSpacingDelta + adjustmentDelta / baseScale, m_lineSpacingMax);

                                        //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Line Spacing. Delta of [" + m_lineSpacingDelta.ToString("f3") + "].");
                                        return;
                                    }
                                    #endregion

                                    // Handle Character Width Adjustments
                                    #region Character Width Adjustments
                                    if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100 && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                    {
                                        float adjustedTextWidth = textWidth;

                                        // Determine full width of the text
                                        if (m_charWidthAdjDelta > 0)
                                            adjustedTextWidth /= 1f - m_charWidthAdjDelta;

                                        float adjustmentDelta = textWidth - (widthOfTextArea - 0.0001f) * (isJustifiedOrFlush ? 1.05f : 1.0f);
                                        m_charWidthAdjDelta += adjustmentDelta / adjustedTextWidth;
                                        m_charWidthAdjDelta = Mathf.Min(m_charWidthAdjDelta, m_charWidthMaxAdj / 100);

                                        //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Character Width by " + (m_charWidthAdjDelta * 100) + "%");
                                        return;
                                    }
                                    #endregion

                                    // Handle Text Auto-sizing resulting from text exceeding vertical bounds.
                                    #region Text Auto-Sizing (Text greater than vertical bounds)
                                    if (m_fontSize > m_fontSizeMin && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                    {
                                        m_maxFontSize = m_fontSize;

                                        float sizeDelta = Mathf.Max((m_fontSize - m_minFontSize) / 2, 0.05f);
                                        m_fontSize -= sizeDelta;
                                        m_fontSize = Mathf.Max((int)(m_fontSize * 20 + 0.5f) / 20f, m_fontSizeMin);

                                        //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Point Size from [" + m_maxFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                                        return;
                                    }
                                    #endregion Text Auto-Sizing
                                }

                                // Check Text Overflow Modes
                                switch (m_overflowMode)
                                {
                                    case TextOverflowModes.Overflow:
                                    case TextOverflowModes.ScrollRect:
                                    case TextOverflowModes.Masking:
                                        #if TMP_PROFILE_ON
                                            Profiler.BeginSample("TMP - InsertNewLine()");
                                        #endif

                                        InsertNewLine(i, baseScale, currentElementScale, currentEmScale, m_GlyphHorizontalAdvanceAdjustment, boldSpacingAdjustment, characterSpacingAdjustment, widthOfTextArea, lineGap, ref isMaxVisibleDescenderSet, ref maxVisibleDescender);
                                        isStartOfNewLine = true;
                                        isFirstWordOfLine = true;

                                        #if TMP_PROFILE_ON
                                            // End Sampling of InsertNewLine()
                                            Profiler.EndSample();

                                            // End Sampling of Horizontal Line Breaking
                                            Profiler.EndSample();

                                            // End Sampling of Visible Character
                                            Profiler.EndSample();
                                        #endif

                                        continue;

                                    case TextOverflowModes.Truncate:
                                        i = RestoreWordWrappingState(ref m_SavedLastValidState);

                                        characterToSubstitute.index = testedCharacterCount;
                                        characterToSubstitute.unicode = 0x03;
                                        continue;

                                    case TextOverflowModes.Ellipsis:
                                        if (m_EllipsisInsertionCandidateStack.Count == 0)
                                        {
                                            i = -1;
                                            m_characterCount = 0;
                                            characterToSubstitute.index = 0;
                                            characterToSubstitute.unicode = 0x03;
                                            m_firstCharacterOfLine = 0;
                                            continue;
                                        }

                                        var ellipsisState = m_EllipsisInsertionCandidateStack.Pop();
                                        i = RestoreWordWrappingState(ref ellipsisState);

                                        i -= 1;
                                        m_characterCount -= 1;
                                        characterToSubstitute.index = m_characterCount;
                                        characterToSubstitute.unicode = 0x2026;

                                        restoreCount += 1;
                                        continue;

                                    case TextOverflowModes.Linked:
                                        if (m_linkedTextComponent != null)
                                        {
                                            m_linkedTextComponent.text = text;
                                            m_linkedTextComponent.firstVisibleCharacter = m_characterCount;
                                            m_linkedTextComponent.ForceMeshUpdate();

                                            m_isTextTruncated = true;
                                        }

                                        // Truncate remaining text
                                        characterToSubstitute.index = m_characterCount;
                                        characterToSubstitute.unicode = 0x03;
                                        continue;

                                    case TextOverflowModes.Page:
                                        // Add new page
                                        m_isNewPage = true;

                                        InsertNewLine(i, baseScale, currentElementScale, currentEmScale, m_GlyphHorizontalAdvanceAdjustment, boldSpacingAdjustment, characterSpacingAdjustment, widthOfTextArea, lineGap, ref isMaxVisibleDescenderSet, ref maxVisibleDescender);

                                        m_startOfLineAscender = 0;
                                        m_lineOffset = 0;
                                        m_maxTextAscender = 0;
                                        m_PageAscender = 0;
                                        m_pageNumber += 1;

                                        isStartOfNewLine = true;
                                        isFirstWordOfLine = true;
                                        continue;
                                }
                            }
                            else
                            {
                                //if (m_enableAutoSizing && isFirstWordOfLine)
                                //{
                                //    // Handle Character Width Adjustments
                                //    #region Character Width Adjustments
                                //    if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100 && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                                //    {
                                //        //m_AutoSizeIterationCount = 0;
                                //        float adjustedTextWidth = textWidth;

                                //        // Determine full width of the text
                                //        if (m_charWidthAdjDelta > 0)
                                //            adjustedTextWidth /= 1f - m_charWidthAdjDelta;

                                //        float adjustmentDelta = textWidth - (widthOfTextArea - 0.0001f) * (isJustifiedOrFlush ? 1.05f : 1.0f);
                                //        m_charWidthAdjDelta += adjustmentDelta / adjustedTextWidth;
                                //        m_charWidthAdjDelta = Mathf.Min(m_charWidthAdjDelta, m_charWidthMaxAdj / 100);

                                //        //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Character Width by " + (m_charWidthAdjDelta * 100) + "%");

                                //        GenerateTextMesh();
                                //        return;
                                //    }
                                //    #endregion
                                //}

                                #if TMP_PROFILE_ON
                                    Profiler.BeginSample("TMP - InsertNewLine()");
                                #endif
                                // New line of text does not exceed vertical bounds of text container
                                InsertNewLine(i, baseScale, currentElementScale, currentEmScale, m_GlyphHorizontalAdvanceAdjustment, boldSpacingAdjustment, characterSpacingAdjustment, widthOfTextArea, lineGap, ref isMaxVisibleDescenderSet, ref maxVisibleDescender);
                                isStartOfNewLine = true;
                                isFirstWordOfLine = true;

                                #if TMP_PROFILE_ON
                                    // End Sampling of InsertNewLine()
                                    Profiler.EndSample();

                                    // End Sampling of Horizontal Line Breaking
                                    Profiler.EndSample();

                                    // End Sampling of Visible Character
                                    Profiler.EndSample();
                                #endif
                                continue;
                            }
                        }
                        else
                        {
                            if (m_enableAutoSizing && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
                            {
                                // Handle Character Width Adjustments
                                #region Character Width Adjustments
                                if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100)
                                {
                                    float adjustedTextWidth = textWidth;

                                    // Determine full width of the text
                                    if (m_charWidthAdjDelta > 0)
                                        adjustedTextWidth /= 1f - m_charWidthAdjDelta;

                                    float adjustmentDelta = textWidth - (widthOfTextArea - 0.0001f) * (isJustifiedOrFlush ? 1.05f : 1.0f);
                                    m_charWidthAdjDelta += adjustmentDelta / adjustedTextWidth;
                                    m_charWidthAdjDelta = Mathf.Min(m_charWidthAdjDelta, m_charWidthMaxAdj / 100);

                                    //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Character Width by " + (m_charWidthAdjDelta * 100) + "%");
                                    return;
                                }
                                #endregion

                                // Handle Text Auto-sizing resulting from text exceeding horizontal bounds.
                                #region Text Exceeds Horizontal Bounds - Reducing Point Size
                                if (m_fontSize > m_fontSizeMin)
                                {
                                    // Reset character width adjustment delta
                                    //m_charWidthAdjDelta = 0;

                                    // Adjust Point Size
                                    m_maxFontSize = m_fontSize;

                                    float sizeDelta = Mathf.Max((m_fontSize - m_minFontSize) / 2, 0.05f);
                                    m_fontSize -= sizeDelta;
                                    m_fontSize = Mathf.Max((int)(m_fontSize * 20 + 0.5f) / 20f, m_fontSizeMin);

                                    //Debug.Log("[" + m_AutoSizeIterationCount + "] Reducing Point Size from [" + m_maxFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                                    return;
                                }
                                #endregion

                            }

                            // Check Text Overflow Modes
                            switch (m_overflowMode)
                            {
                                case TextOverflowModes.Overflow:
                                case TextOverflowModes.ScrollRect:
                                case TextOverflowModes.Masking:
                                    // Nothing happens as horizontal bounds are ignored in this mode.
                                    break;

                                case TextOverflowModes.Truncate:
                                    i = RestoreWordWrappingState(ref m_SavedWordWrapState);

                                    characterToSubstitute.index = testedCharacterCount;
                                    characterToSubstitute.unicode = 0x03;
                                    continue;

                                case TextOverflowModes.Ellipsis:
                                    if (m_EllipsisInsertionCandidateStack.Count == 0)
                                    {
                                        i = -1;
                                        m_characterCount = 0;
                                        characterToSubstitute.index = 0;
                                        characterToSubstitute.unicode = 0x03;
                                        m_firstCharacterOfLine = 0;
                                        continue;
                                    }

                                    var ellipsisState = m_EllipsisInsertionCandidateStack.Pop();
                                    i = RestoreWordWrappingState(ref ellipsisState);

                                    i -= 1;
                                    m_characterCount -= 1;
                                    characterToSubstitute.index = m_characterCount;
                                    characterToSubstitute.unicode = 0x2026;

                                    restoreCount += 1;
                                    continue;

                                case TextOverflowModes.Linked:
                                    i = RestoreWordWrappingState(ref m_SavedWordWrapState);

                                    if (m_linkedTextComponent != null)
                                    {
                                        m_linkedTextComponent.text = text;
                                        m_linkedTextComponent.firstVisibleCharacter = m_characterCount;
                                        m_linkedTextComponent.ForceMeshUpdate();

                                        m_isTextTruncated = true;
                                    }

                                    // Truncate text the overflows the vertical bounds
                                    characterToSubstitute.index = m_characterCount;
                                    characterToSubstitute.unicode = 0x03;
                                    continue;
                            }

                        }

                        #if TMP_PROFILE_ON
                            // End Sampling of Horizontal Line Breaking
                            Profiler.EndSample();
                        #endif
                    }
                    #endregion


                    // Special handling of characters that are not ignored at the end of a line.
                    if (charCode == 9)
                    {
                        m_textInfo.characterInfo[m_characterCount].isVisible = false;
                        m_lastVisibleCharacterOfLine = m_characterCount;
                        m_textInfo.lineInfo[m_lineNumber].spaceCount += 1;
                        m_textInfo.spaceCount += 1;
                    }
                    else if (charCode == 0xAD)
                    {
                        m_textInfo.characterInfo[m_characterCount].isVisible = false;
                    }
                    else
                    {
                        // Determine Vertex Color
                        if (m_overrideHtmlColors)
                            vertexColor = m_fontColor32;
                        else
                            vertexColor = m_htmlColor;

                        #if TMP_PROFILE_ON
                        Profiler.BeginSample("TMP - Save Glyph Vertex Data");
                        #endif
                        // Store Character & Sprite Vertex Information
                        if (m_textElementType == TMP_TextElementType.Character)
                        {
                            // Save Character Vertex Data
                            SaveGlyphVertexInfo(padding, style_padding, vertexColor);
                        }
                        else if (m_textElementType == TMP_TextElementType.Sprite)
                        {
                            SaveSpriteVertexInfo(vertexColor);
                        }
                        #if TMP_PROFILE_ON
                        Profiler.EndSample();
                        #endif

                        if (isStartOfNewLine)
                        {
                            isStartOfNewLine = false;
                            m_firstVisibleCharacterOfLine = m_characterCount;
                        }

                        m_lineVisibleCharacterCount += 1;
                        m_lastVisibleCharacterOfLine = m_characterCount;
                        m_textInfo.lineInfo[m_lineNumber].marginLeft = marginLeft;
                        m_textInfo.lineInfo[m_lineNumber].marginRight = marginRight;
                    }

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                else
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Handle White Space & Non Visible Character");
                    #endif
                    // This is white spacing / non visible characters.

                    // Track # of spaces per line which is used for line justification.
                    if ((charCode == 10 || charCode == 11 || charCode == 0xA0 || charCode == 0x2007 || charCode == 0x2028 || charCode == 0x2029 || char.IsSeparator((char)charCode)) && charCode != 0xAD && charCode != 0x200B && charCode != 0x2060)
                    {
                        m_textInfo.lineInfo[m_lineNumber].spaceCount += 1;
                        m_textInfo.spaceCount += 1;
                    }

                    if (charCode == 0xA0)
                        m_textInfo.lineInfo[m_lineNumber].controlCharacterCount += 1;

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                #endregion Handle Visible Characters


                // Tracking of potential insertion positions for Ellipsis character
                #region Track Potential Insertion Location for Ellipsis
                if (m_overflowMode == TextOverflowModes.Ellipsis && (isInjectingCharacter == false || charCode == 0x2D))
                {
                    float fontScale = m_currentFontSize / m_Ellipsis.fontAsset.m_FaceInfo.pointSize * m_Ellipsis.fontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);
                    float scale = fontScale * m_fontScaleMultiplier * m_Ellipsis.character.m_Scale * m_Ellipsis.character.m_Glyph.scale;
                    float marginLeft = m_marginLeft;
                    float marginRight = m_marginRight;

                    // Use the scale and margins of the previous character if Line Feed (LF) is not the first character of a line.
                    if (charCode == 0x0A && m_characterCount != m_firstCharacterOfLine)
                    {
                        fontScale = m_textInfo.characterInfo[m_characterCount - 1].pointSize / m_Ellipsis.fontAsset.m_FaceInfo.pointSize * m_Ellipsis.fontAsset.m_FaceInfo.scale * (m_isOrthographic ? 1 : 0.1f);
                        scale = fontScale * m_fontScaleMultiplier * m_Ellipsis.character.m_Scale * m_Ellipsis.character.m_Glyph.scale;
                        marginLeft = m_textInfo.lineInfo[m_lineNumber].marginLeft;
                        marginRight = m_textInfo.lineInfo[m_lineNumber].marginRight;
                    }

                    float textHeight = m_maxTextAscender - (m_maxLineDescender - m_lineOffset) + (m_lineOffset > 0 && m_IsDrivenLineSpacing == false ? m_maxLineAscender - m_startOfLineAscender : 0);
                    float textWidth = Mathf.Abs(m_xAdvance) + (!m_isRightToLeft ? m_Ellipsis.character.m_Glyph.metrics.horizontalAdvance : 0) * (1 - m_charWidthAdjDelta) * scale;
                    float widthOfTextAreaForEllipsis = m_width != -1 ? Mathf.Min(marginWidth + 0.0001f - marginLeft - marginRight, m_width) : marginWidth + 0.0001f - marginLeft - marginRight;

                    if (textWidth < widthOfTextAreaForEllipsis * (isJustifiedOrFlush ? 1.05f : 1.0f) && textHeight < marginHeight + 0.0001f)
                    {
                        SaveWordWrappingState(ref m_SavedEllipsisState, i, m_characterCount);
                        m_EllipsisInsertionCandidateStack.Push(m_SavedEllipsisState);
                    }
                }
                #endregion


                // Store Rectangle positions for each Character.
                #region Store Character Data
                m_textInfo.characterInfo[m_characterCount].lineNumber = m_lineNumber;
                m_textInfo.characterInfo[m_characterCount].pageNumber = m_pageNumber;

                if (charCode != 10 && charCode != 11 && charCode != 13 && isInjectingCharacter == false /* && charCode != 8230 */ || m_textInfo.lineInfo[m_lineNumber].characterCount == 1)
                    m_textInfo.lineInfo[m_lineNumber].alignment = m_lineJustification;
                #endregion Store Character Data


                // Handle xAdvance & Tabulation Stops. Tab stops at every 25% of Font Size.
                #region XAdvance, Tabulation & Stops
                #if TMP_PROFILE_ON
                Profiler.BeginSample("TMP - Handle Advance & Tabulation");
                #endif
                if (charCode == 9)
                {
                    float tabSize = m_currentFontAsset.m_FaceInfo.tabWidth * m_currentFontAsset.tabSize * currentElementScale;
                    float tabs = Mathf.Ceil(m_xAdvance / tabSize) * tabSize;
                    m_xAdvance = tabs > m_xAdvance ? tabs : m_xAdvance + tabSize;
                }
                else if (m_monoSpacing != 0)
                {
                    m_xAdvance += (m_monoSpacing - monoAdvance + ((m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale) + m_cSpacing) * (1 - m_charWidthAdjDelta);

                    if (isWhiteSpace || charCode == 0x200B)
                        m_xAdvance += m_wordSpacing * currentEmScale;
                }
                else if (m_isRightToLeft)
                {
                    m_xAdvance -= (((glyphAdjustments.m_XAdvance + boldSpacingAdjustment) * currentElementScale + (m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale + m_cSpacing) * (1 - m_charWidthAdjDelta));

                    if (isWhiteSpace || charCode == 0x200B)
                        m_xAdvance -= m_wordSpacing * currentEmScale;
                }
                else
                {
                    float scaleFXMultiplier = 1;
                    if (m_isFXMatrixSet) scaleFXMultiplier = m_FXMatrix.lossyScale.x;

                    m_xAdvance += ((currentGlyphMetrics.horizontalAdvance * scaleFXMultiplier + glyphAdjustments.m_XAdvance + boldSpacingAdjustment) * currentElementScale + (m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale + m_cSpacing) * (1 - m_charWidthAdjDelta);

                    if (isWhiteSpace || charCode == 0x200B)
                        m_xAdvance += m_wordSpacing * currentEmScale;
                }

                // Store xAdvance information
                m_textInfo.characterInfo[m_characterCount].xAdvance = m_xAdvance;
                #if TMP_PROFILE_ON
                Profiler.EndSample();
                #endif
                #endregion Tabulation & Stops


                // Handle Carriage Return
                #region Carriage Return
                if (charCode == 13)
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Handle Carriage Return");
                    #endif

                    m_xAdvance = 0 + tag_Indent;

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                #endregion Carriage Return


                // Handle Line Spacing Adjustments + Word Wrapping & special case for last line.
                #region Check for Line Feed and Last Character
                if (charCode == 10 || charCode == 11 || charCode == 0x03 || charCode == 0x2028 || charCode == 0x2029 || (charCode == 0x2D && isInjectingCharacter) || m_characterCount == totalCharacterCount - 1)
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Handle Line & Text Termination");
                    #endif

                    // Adjust current line spacing (if necessary) before inserting new line
                    float baselineAdjustmentDelta = m_maxLineAscender - m_startOfLineAscender;
                    if (m_lineOffset > 0 && Math.Abs(baselineAdjustmentDelta) > 0.01f && m_IsDrivenLineSpacing == false && !m_isNewPage)
                    {
                        //Debug.Log("Line Feed - Adjusting Line Spacing on line #" + m_lineNumber);
                        AdjustLineOffset(m_firstCharacterOfLine, m_characterCount, baselineAdjustmentDelta);
                        m_ElementDescender -= baselineAdjustmentDelta;
                        m_lineOffset += baselineAdjustmentDelta;

                        // Adjust saved ellipsis state only if we are adjusting the same line number
                        if (m_SavedEllipsisState.lineNumber == m_lineNumber)
                        {
                            m_SavedEllipsisState = m_EllipsisInsertionCandidateStack.Pop();
                            m_SavedEllipsisState.startOfLineAscender += baselineAdjustmentDelta;
                            m_SavedEllipsisState.lineOffset += baselineAdjustmentDelta;
                            m_EllipsisInsertionCandidateStack.Push(m_SavedEllipsisState);
                        }
                    }
                    m_isNewPage = false;

                    // Calculate lineAscender & make sure if last character is superscript or subscript that we check that as well.
                    float lineAscender = m_maxLineAscender - m_lineOffset;
                    float lineDescender = m_maxLineDescender - m_lineOffset;

                    // Update maxDescender and maxVisibleDescender
                    m_ElementDescender = m_ElementDescender < lineDescender ? m_ElementDescender : lineDescender;
                    if (!isMaxVisibleDescenderSet)
                        maxVisibleDescender = m_ElementDescender;

                    if (m_useMaxVisibleDescender && (m_characterCount >= m_maxVisibleCharacters || m_lineNumber >= m_maxVisibleLines))
                        isMaxVisibleDescenderSet = true;

                    // Save Line Information
                    m_textInfo.lineInfo[m_lineNumber].firstCharacterIndex = m_firstCharacterOfLine;
                    m_textInfo.lineInfo[m_lineNumber].firstVisibleCharacterIndex = m_firstVisibleCharacterOfLine = m_firstCharacterOfLine > m_firstVisibleCharacterOfLine ? m_firstCharacterOfLine : m_firstVisibleCharacterOfLine;
                    m_textInfo.lineInfo[m_lineNumber].lastCharacterIndex = m_lastCharacterOfLine = m_characterCount;
                    m_textInfo.lineInfo[m_lineNumber].lastVisibleCharacterIndex = m_lastVisibleCharacterOfLine = m_lastVisibleCharacterOfLine < m_firstVisibleCharacterOfLine ? m_firstVisibleCharacterOfLine : m_lastVisibleCharacterOfLine;

                    m_textInfo.lineInfo[m_lineNumber].characterCount = m_textInfo.lineInfo[m_lineNumber].lastCharacterIndex - m_textInfo.lineInfo[m_lineNumber].firstCharacterIndex + 1;
                    m_textInfo.lineInfo[m_lineNumber].visibleCharacterCount = m_lineVisibleCharacterCount;
                    m_textInfo.lineInfo[m_lineNumber].lineExtents.min = new Vector2(m_textInfo.characterInfo[m_firstVisibleCharacterOfLine].bottomLeft.x, lineDescender);
                    m_textInfo.lineInfo[m_lineNumber].lineExtents.max = new Vector2(m_textInfo.characterInfo[m_lastVisibleCharacterOfLine].topRight.x, lineAscender);
                    m_textInfo.lineInfo[m_lineNumber].length = m_textInfo.lineInfo[m_lineNumber].lineExtents.max.x - (padding * currentElementScale);
                    m_textInfo.lineInfo[m_lineNumber].width = widthOfTextArea;

                    if (m_textInfo.lineInfo[m_lineNumber].characterCount == 1)
                        m_textInfo.lineInfo[m_lineNumber].alignment = m_lineJustification;

                    float maxAdvanceOffset = (boldSpacingAdjustment * currentElementScale + (m_currentFontAsset.normalSpacingOffset + characterSpacingAdjustment) * currentEmScale - m_cSpacing) * (1 - m_charWidthAdjDelta);
                    if (m_textInfo.characterInfo[m_lastVisibleCharacterOfLine].isVisible)
                        m_textInfo.lineInfo[m_lineNumber].maxAdvance = m_textInfo.characterInfo[m_lastVisibleCharacterOfLine].xAdvance + (m_isRightToLeft ? maxAdvanceOffset : - maxAdvanceOffset);
                    else
                        m_textInfo.lineInfo[m_lineNumber].maxAdvance = m_textInfo.characterInfo[m_lastCharacterOfLine].xAdvance + (m_isRightToLeft ? maxAdvanceOffset : - maxAdvanceOffset);

                    m_textInfo.lineInfo[m_lineNumber].baseline = 0 - m_lineOffset;
                    m_textInfo.lineInfo[m_lineNumber].ascender = lineAscender;
                    m_textInfo.lineInfo[m_lineNumber].descender = lineDescender;
                    m_textInfo.lineInfo[m_lineNumber].lineHeight = lineAscender - lineDescender + lineGap * baseScale;

                    // Add new line if not last line or character.
                    if (charCode == 10 || charCode == 11 || charCode == 0x2D || charCode == 0x2028 || charCode == 0x2029)
                    {
                        // Store the state of the line before starting on the new line.
                        SaveWordWrappingState(ref m_SavedLineState, i, m_characterCount);

                        m_lineNumber += 1;
                        isStartOfNewLine = true;
                        ignoreNonBreakingSpace = false;
                        isFirstWordOfLine = true;

                        m_firstCharacterOfLine = m_characterCount + 1;
                        m_lineVisibleCharacterCount = 0;

                        // Check to make sure Array is large enough to hold a new line.
                        if (m_lineNumber >= m_textInfo.lineInfo.Length)
                            ResizeLineExtents(m_lineNumber);

                        float lastVisibleAscender = m_textInfo.characterInfo[m_characterCount].adjustedAscender;

                        // Apply Line Spacing with special handling for VT char(11)
                        if (m_lineHeight == TMP_Math.FLOAT_UNSET)
                        {
                            float lineOffsetDelta = 0 - m_maxLineDescender + lastVisibleAscender + (lineGap + m_lineSpacingDelta) * baseScale + (m_lineSpacing + (charCode == 10 || charCode == 0x2029 ? m_paragraphSpacing : 0)) * currentEmScale;
                            m_lineOffset += lineOffsetDelta;
                            m_IsDrivenLineSpacing = false;
                        }
                        else
                        {
                            m_lineOffset += m_lineHeight + (m_lineSpacing + (charCode == 10 || charCode == 0x2029 ? m_paragraphSpacing : 0)) * currentEmScale;
                            m_IsDrivenLineSpacing = true;
                        }

                        m_maxLineAscender = k_LargeNegativeFloat;
                        m_maxLineDescender = k_LargePositiveFloat;
                        m_startOfLineAscender = lastVisibleAscender;

                        m_xAdvance = 0 + tag_LineIndent + tag_Indent;

                        SaveWordWrappingState(ref m_SavedWordWrapState, i, m_characterCount);
                        SaveWordWrappingState(ref m_SavedLastValidState, i, m_characterCount);

                        m_characterCount += 1;

                        #if TMP_PROFILE_ON
                        Profiler.EndSample();
                        #endif

                        continue;
                    }

                    // If End of Text
                    if (charCode == 0x03)
                        i = m_InternalParsingBuffer.Length;

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                #endregion Check for Linefeed or Last Character


                // Store Rectangle positions for each Character.
                #region Save CharacterInfo for the current character.
                #if TMP_PROFILE_ON
                Profiler.BeginSample("TMP - Save Character & Page Info");
                #endif
                // Determine the bounds of the Mesh.
                if (m_textInfo.characterInfo[m_characterCount].isVisible)
                {
                    m_meshExtents.min.x = Mathf.Min(m_meshExtents.min.x, m_textInfo.characterInfo[m_characterCount].bottomLeft.x);
                    m_meshExtents.min.y = Mathf.Min(m_meshExtents.min.y, m_textInfo.characterInfo[m_characterCount].bottomLeft.y);

                    m_meshExtents.max.x = Mathf.Max(m_meshExtents.max.x, m_textInfo.characterInfo[m_characterCount].topRight.x);
                    m_meshExtents.max.y = Mathf.Max(m_meshExtents.max.y, m_textInfo.characterInfo[m_characterCount].topRight.y);

                    //m_meshExtents.min = new Vector2(Mathf.Min(m_meshExtents.min.x, m_textInfo.characterInfo[m_characterCount].bottomLeft.x), Mathf.Min(m_meshExtents.min.y, m_textInfo.characterInfo[m_characterCount].bottomLeft.y));
                    //m_meshExtents.max = new Vector2(Mathf.Max(m_meshExtents.max.x, m_textInfo.characterInfo[m_characterCount].topRight.x), Mathf.Max(m_meshExtents.max.y, m_textInfo.characterInfo[m_characterCount].topRight.y));
                }


                // Save pageInfo Data
                if (m_overflowMode == TextOverflowModes.Page && charCode != 10 && charCode != 11 && charCode != 13 && charCode != 0x2028 && charCode != 0x2029) // && m_pageNumber < 16)
                {
                    // Check if we need to increase allocations for the pageInfo array.
                    if (m_pageNumber + 1 > m_textInfo.pageInfo.Length)
                        TMP_TextInfo.Resize(ref m_textInfo.pageInfo, m_pageNumber + 1, true);

                    m_textInfo.pageInfo[m_pageNumber].ascender = m_PageAscender;
                    m_textInfo.pageInfo[m_pageNumber].descender = m_ElementDescender < m_textInfo.pageInfo[m_pageNumber].descender
                        ? m_ElementDescender
                        : m_textInfo.pageInfo[m_pageNumber].descender;

                    if (m_pageNumber == 0 && m_characterCount == 0)
                        m_textInfo.pageInfo[m_pageNumber].firstCharacterIndex = m_characterCount;
                    else if (m_characterCount > 0 && m_pageNumber != m_textInfo.characterInfo[m_characterCount - 1].pageNumber)
                    {
                        m_textInfo.pageInfo[m_pageNumber - 1].lastCharacterIndex = m_characterCount - 1;
                        m_textInfo.pageInfo[m_pageNumber].firstCharacterIndex = m_characterCount;
                    }
                    else if (m_characterCount == totalCharacterCount - 1)
                        m_textInfo.pageInfo[m_pageNumber].lastCharacterIndex = m_characterCount;
                }
                #if TMP_PROFILE_ON
                Profiler.EndSample();
                #endif
                #endregion Saving CharacterInfo


                // Save State of Mesh Creation for handling of Word Wrapping
                #region Save Word Wrapping State
                if (m_enableWordWrapping || m_overflowMode == TextOverflowModes.Truncate || m_overflowMode == TextOverflowModes.Ellipsis || m_overflowMode == TextOverflowModes.Linked)
                {
                    #if TMP_PROFILE_ON
                    Profiler.BeginSample("TMP - Save Word Wrapping State");
                    #endif

                    if ((isWhiteSpace || charCode == 0x200B || charCode == 0x2D || charCode == 0xAD) && (!m_isNonBreakingSpace || ignoreNonBreakingSpace) && charCode != 0xA0 && charCode != 0x2007 && charCode != 0x2011 && charCode != 0x202F && charCode != 0x2060)
                    {
                        // We store the state of numerous variables for the most recent Space, LineFeed or Carriage Return to enable them to be restored
                        // for Word Wrapping.
                        SaveWordWrappingState(ref m_SavedWordWrapState, i, m_characterCount);
                        isFirstWordOfLine = false;
                        //isLastCharacterCJK = false;

                        // Reset soft line breaking point since we now have a valid hard break point.
                        m_SavedSoftLineBreakState.previous_WordBreak = -1;
                    }
                    // Handling for East Asian characters
                    else if (m_isNonBreakingSpace == false &&
                             ((charCode > 0x1100 && charCode < 0x11ff || /* Hangul Jamo */
                               charCode > 0xA960 && charCode < 0xA97F || /* Hangul Jamo Extended-A */
                               charCode > 0xAC00 && charCode < 0xD7FF)&& /* Hangul Syllables */
                              TMP_Settings.useModernHangulLineBreakingRules == false ||

                              (charCode > 0x2E80 && charCode < 0x9FFF || /* CJK */
                               charCode > 0xF900 && charCode < 0xFAFF || /* CJK Compatibility Ideographs */
                               charCode > 0xFE30 && charCode < 0xFE4F || /* CJK Compatibility Forms */
                               charCode > 0xFF00 && charCode < 0xFFEF))) /* CJK Halfwidth */
                    {
                        bool isCurrentLeadingCharacter = TMP_Settings.linebreakingRules.leadingCharacters.ContainsKey(charCode);
                        bool isNextFollowingCharacter = m_characterCount < totalCharacterCount - 1 && TMP_Settings.linebreakingRules.followingCharacters.ContainsKey(m_textInfo.characterInfo[m_characterCount + 1].character);

                        if (isCurrentLeadingCharacter == false)
                        {
                            if (isNextFollowingCharacter == false)
                            {
                                SaveWordWrappingState(ref m_SavedWordWrapState, i, m_characterCount);
                                isFirstWordOfLine = false;
                            }

                            if (isFirstWordOfLine)
                            {
                                // Special handling for non-breaking space and soft line breaks
                                if (isWhiteSpace)
                                    SaveWordWrappingState(ref m_SavedSoftLineBreakState, i, m_characterCount);

                                SaveWordWrappingState(ref m_SavedWordWrapState, i, m_characterCount);
                            }
                        }
                        else
                        {
                            if (isFirstWordOfLine && isFirstCharacterOfLine)
                            {
                                // Special handling for non-breaking space and soft line breaks
                                if (isWhiteSpace)
                                    SaveWordWrappingState(ref m_SavedSoftLineBreakState, i, m_characterCount);

                                SaveWordWrappingState(ref m_SavedWordWrapState, i, m_characterCount);
                            }
                        }

                        //isLastCharacterCJK = true;
                    }
                    else if (isFirstWordOfLine)
                    {
                        // Special handling for non-breaking space and soft line breaks
                        if (isWhiteSpace || (charCode == 0xAD && isSoftHyphenIgnored == false))
                            SaveWordWrappingState(ref m_SavedSoftLineBreakState, i, m_characterCount);

                        SaveWordWrappingState(ref m_SavedWordWrapState, i, m_characterCount);
                        //isLastCharacterCJK = false;
                    }

                    #if TMP_PROFILE_ON
                    Profiler.EndSample();
                    #endif
                }
                #endregion Save Word Wrapping State

                SaveWordWrappingState(ref m_SavedLastValidState, i, m_characterCount);

                m_characterCount += 1;
            }

            // Check Auto Sizing and increase font size to fill text container.
            #region Check Auto-Sizing (Upper Font Size Bounds)
            fontSizeDelta = m_maxFontSize - m_minFontSize;
            if (/* !m_isCharacterWrappingEnabled && */ m_enableAutoSizing && fontSizeDelta > 0.051f && m_fontSize < m_fontSizeMax && m_AutoSizeIterationCount < m_AutoSizeMaxIterationCount)
            {
                // Reset character width adjustment delta
                if (m_charWidthAdjDelta < m_charWidthMaxAdj / 100)
                    m_charWidthAdjDelta = 0;

                m_minFontSize = m_fontSize;

                float sizeDelta = Mathf.Max((m_maxFontSize - m_fontSize) / 2, 0.05f);
                m_fontSize += sizeDelta;
                m_fontSize = Mathf.Min((int)(m_fontSize * 20 + 0.5f) / 20f, m_fontSizeMax);

                //Debug.Log("[" + m_AutoSizeIterationCount + "] Increasing Point Size from [" + m_minFontSize.ToString("f3") + "] to [" + m_fontSize.ToString("f3") + "] with delta of [" + sizeDelta.ToString("f3") + "].");
                return;
            }
            #endregion End Auto-sizing Check

            m_IsAutoSizePointSizeSet = true;

            if (m_AutoSizeIterationCount >= m_AutoSizeMaxIterationCount)
                Debug.Log("Auto Size Iteration Count: " + m_AutoSizeIterationCount + ". Final Point Size: " + m_fontSize);

            // If there are no visible characters or only character is End of Text (0x03)... no need to continue
            if (m_characterCount == 0 || (m_characterCount == 1 && charCode == 0x03))
            {
                ClearMesh();

                // Event indicating the text has been regenerated.
                TMPro_EventManager.ON_TEXT_CHANGED(this);
                return;
            }

            #if TMP_PROFILE_ON
            // End Sampling of Phase I
            Profiler.EndSample();

            Profiler.BeginSample("TMP GenerateText() - Phase II");
            #endif

            // *** PHASE II of Text Generation ***
            int last_vert_index = m_materialReferences[m_Underline.materialIndex].referenceCount * 4;

            // Partial clear of the vertices array to mark unused vertices as degenerate.
            m_textInfo.meshInfo[0].Clear(false);

            // Handle Text Alignment
            #region Text Vertical Alignment
            Vector3 anchorOffset = Vector3.zero;
            Vector3[] corners = m_RectTransformCorners; // GetTextContainerLocalCorners();

            // Handle Vertical Text Alignment
            switch (m_VerticalAlignment)
            {
                // Top Vertically
                case VerticalAlignmentOptions.Top:
                    if (m_overflowMode != TextOverflowModes.Page)
                        anchorOffset = corners[1] + new Vector3(0 + margins.x, 0 - m_maxTextAscender - margins.y, 0);
                    else
                        anchorOffset = corners[1] + new Vector3(0 + margins.x, 0 - m_textInfo.pageInfo[pageToDisplay].ascender - margins.y, 0);
                    break;

                // Middle Vertically
                case VerticalAlignmentOptions.Middle:
                    if (m_overflowMode != TextOverflowModes.Page)
                        anchorOffset = (corners[0] + corners[1]) / 2 + new Vector3(0 + margins.x, 0 - (m_maxTextAscender + margins.y + maxVisibleDescender - margins.w) / 2, 0);
                    else
                        anchorOffset = (corners[0] + corners[1]) / 2 + new Vector3(0 + margins.x, 0 - (m_textInfo.pageInfo[pageToDisplay].ascender + margins.y + m_textInfo.pageInfo[pageToDisplay].descender - margins.w) / 2, 0);
                    break;

                // Bottom Vertically
                case VerticalAlignmentOptions.Bottom:
                    if (m_overflowMode != TextOverflowModes.Page)
                        anchorOffset = corners[0] + new Vector3(0 + margins.x, 0 - maxVisibleDescender + margins.w, 0);
                    else
                        anchorOffset = corners[0] + new Vector3(0 + margins.x, 0 - m_textInfo.pageInfo[pageToDisplay].descender + margins.w, 0);
                    break;

                // Baseline Vertically
                case VerticalAlignmentOptions.Baseline:
                    anchorOffset = (corners[0] + corners[1]) / 2 + new Vector3(0 + margins.x, 0, 0);
                    break;

                // Midline Vertically
                case VerticalAlignmentOptions.Geometry:
                    anchorOffset = (corners[0] + corners[1]) / 2 + new Vector3(0 + margins.x, 0 - (m_meshExtents.max.y + margins.y + m_meshExtents.min.y - margins.w) / 2, 0);
                    break;

                // Capline Vertically
                case VerticalAlignmentOptions.Capline:
                    anchorOffset = (corners[0] + corners[1]) / 2 + new Vector3(0 + margins.x, 0 - (m_maxCapHeight - margins.y - margins.w) / 2, 0);
                    break;
            }
            #endregion


            // Initialization for Second Pass
            Vector3 justificationOffset = Vector3.zero;
            Vector3 offset = Vector3.zero;
            int vert_index_X4 = 0;
            int sprite_index_X4 = 0;

            int wordCount = 0;
            int lineCount = 0;
            int lastLine = 0;
            bool isFirstSeperator = false;

            bool isStartOfWord = false;
            int wordFirstChar = 0;
            int wordLastChar = 0;

            // Second Pass : Line Justification, UV Mapping, Character & Line Visibility & more.
            // Variables used to handle Canvas Render Modes and SDF Scaling
            bool isCameraAssigned = m_canvas.worldCamera == null ? false : true;
            float lossyScale = m_previousLossyScaleY = this.transform.lossyScale.y;
            RenderMode canvasRenderMode = m_canvas.renderMode;
            float canvasScaleFactor = m_canvas.scaleFactor;

            Color32 underlineColor = Color.white;
            Color32 strikethroughColor = Color.white;
            HighlightState highlightState = new HighlightState(new Color32(255, 255, 0, 64), TMP_Offset.zero);
            float xScale = 0;
            float xScaleMax = 0;
            float underlineStartScale = 0;
            float underlineEndScale = 0;
            float underlineMaxScale = 0;
            float underlineBaseLine = k_LargePositiveFloat;
            int lastPage = 0;

            float strikethroughPointSize = 0;
            float strikethroughScale = 0;
            float strikethroughBaseline = 0;

            TMP_CharacterInfo[] characterInfos = m_textInfo.characterInfo;
            #region Handle Line Justification & UV Mapping & Character Visibility & More
            for (int i = 0; i < m_characterCount; i++)
            {
                TMP_FontAsset currentFontAsset = characterInfos[i].fontAsset;

                char unicode = characterInfos[i].character;

                int currentLine = characterInfos[i].lineNumber;
                TMP_LineInfo lineInfo = m_textInfo.lineInfo[currentLine];
                lineCount = currentLine + 1;

                HorizontalAlignmentOptions lineAlignment = lineInfo.alignment;

                // Process Line Justification
                #region Handle Line Justification
                switch (lineAlignment)
                {
                    case HorizontalAlignmentOptions.Left:
                        if (!m_isRightToLeft)
                            justificationOffset = new Vector3(0 + lineInfo.marginLeft, 0, 0);
                        else
                            justificationOffset = new Vector3(0 - lineInfo.maxAdvance, 0, 0);
                        break;

                    case HorizontalAlignmentOptions.Center:
                        justificationOffset = new Vector3(lineInfo.marginLeft + lineInfo.width / 2 - lineInfo.maxAdvance / 2, 0, 0);
                        break;

                    case HorizontalAlignmentOptions.Geometry:
                        justificationOffset = new Vector3(lineInfo.marginLeft + lineInfo.width / 2 - (lineInfo.lineExtents.min.x + lineInfo.lineExtents.max.x) / 2, 0, 0);
                        break;

                    case HorizontalAlignmentOptions.Right:
                        if (!m_isRightToLeft)
                            justificationOffset = new Vector3(lineInfo.marginLeft + lineInfo.width - lineInfo.maxAdvance, 0, 0);
                        else
                            justificationOffset = new Vector3(lineInfo.marginLeft + lineInfo.width, 0, 0);
                        break;

                    case HorizontalAlignmentOptions.Justified:
                    case HorizontalAlignmentOptions.Flush:
                        // Skip Zero Width Characters
                        if (unicode == 0x0A || unicode == 0xAD || unicode == 0x200B || unicode == 0x2060 || unicode == 0x03) break;

                        char lastCharOfCurrentLine = characterInfos[lineInfo.lastCharacterIndex].character;
                        bool isFlush = (lineAlignment & HorizontalAlignmentOptions.Flush) == HorizontalAlignmentOptions.Flush;

                        // In Justified mode, all lines are justified except the last one.
                        // In Flush mode, all lines are justified.
                        if (char.IsControl(lastCharOfCurrentLine) == false && currentLine < m_lineNumber || isFlush || lineInfo.maxAdvance > lineInfo.width)
                        {
                            // First character of each line.
                            if (currentLine != lastLine || i == 0 /*|| i == lineInfo.firstVisibleCharacterIndex */ || i == m_firstVisibleCharacter)
                            {
                                if (!m_isRightToLeft)
                                    justificationOffset = new Vector3(lineInfo.marginLeft, 0, 0);
                                else
                                    justificationOffset = new Vector3(lineInfo.marginLeft + lineInfo.width, 0, 0);

                                if (char.IsSeparator(unicode))
                                    isFirstSeperator = true;
                                else
                                    isFirstSeperator = false;
                            }
                            else
                            {
                                float gap = !m_isRightToLeft ? lineInfo.width - lineInfo.maxAdvance : lineInfo.width + lineInfo.maxAdvance;

                                int visibleCount = lineInfo.visibleCharacterCount - 1 + lineInfo.controlCharacterCount;

                                // Get the number of spaces for each line ignoring the last character if it is not visible (ie. a space or linefeed).
                                int spaces = (characterInfos[lineInfo.lastCharacterIndex].isVisible ? lineInfo.spaceCount : lineInfo.spaceCount - 1) - lineInfo.controlCharacterCount;

                                if (isFirstSeperator) { spaces -= 1; visibleCount += 1; }

                                float ratio = spaces > 0 ? m_wordWrappingRatios : 1;

                                if (spaces < 1) spaces = 1;

                                if (unicode != 0xA0 && (unicode == 9 || char.IsSeparator((char)unicode)))
                                {
                                    if (!m_isRightToLeft)
                                        justificationOffset += new Vector3(gap * (1 - ratio) / spaces, 0, 0);
                                    else
                                        justificationOffset -= new Vector3(gap * (1 - ratio) / spaces, 0, 0);
                                }
                                else
                                {
                                    if (!m_isRightToLeft)
                                        justificationOffset += new Vector3(gap * ratio / visibleCount, 0, 0);
                                    else
                                        justificationOffset -= new Vector3(gap * ratio / visibleCount, 0, 0);
                                }
                            }
                        }
                        else
                        {
                            if (!m_isRightToLeft)
                                justificationOffset = new Vector3(lineInfo.marginLeft, 0, 0); // Keep last line left justified.
                            else
                                justificationOffset = new Vector3(lineInfo.marginLeft + lineInfo.width, 0, 0); // Keep last line right justified.
                        }
                        //Debug.Log("Char [" + (char)charCode + "] Code:" + charCode + "  Line # " + currentLine + "  Offset:" + justificationOffset + "  # Spaces:" + lineInfo.spaceCount + "  # Characters:" + lineInfo.characterCount);
                        break;
                }
                #endregion End Text Justification

                offset = anchorOffset + justificationOffset;

                // Handle UV2 mapping options and packing of scale information into UV2.
                #region Handling of UV2 mapping & Scale packing
                bool isCharacterVisible = characterInfos[i].isVisible;
                if (isCharacterVisible)
                {
                    TMP_TextElementType elementType = characterInfos[i].elementType;
                    switch (elementType)
                    {
                        // CHARACTERS
                        case TMP_TextElementType.Character:
                            Extents lineExtents = lineInfo.lineExtents;
                            float uvOffset = (m_uvLineOffset * currentLine) % 1; // + m_uvOffset.x;

                            // Setup UV2 based on Character Mapping Options Selected
                            #region Handle UV Mapping Options
                            switch (m_horizontalMapping)
                            {
                                case TextureMappingOptions.Character:
                                    characterInfos[i].vertex_BL.uv2.x = 0; //+ m_uvOffset.x;
                                    characterInfos[i].vertex_TL.uv2.x = 0; //+ m_uvOffset.x;
                                    characterInfos[i].vertex_TR.uv2.x = 1; //+ m_uvOffset.x;
                                    characterInfos[i].vertex_BR.uv2.x = 1; //+ m_uvOffset.x;
                                    break;

                                case TextureMappingOptions.Line:
                                    if (m_textAlignment != TextAlignmentOptions.Justified)
                                    {
                                        characterInfos[i].vertex_BL.uv2.x = (characterInfos[i].vertex_BL.position.x - lineExtents.min.x) / (lineExtents.max.x - lineExtents.min.x) + uvOffset;
                                        characterInfos[i].vertex_TL.uv2.x = (characterInfos[i].vertex_TL.position.x - lineExtents.min.x) / (lineExtents.max.x - lineExtents.min.x) + uvOffset;
                                        characterInfos[i].vertex_TR.uv2.x = (characterInfos[i].vertex_TR.position.x - lineExtents.min.x) / (lineExtents.max.x - lineExtents.min.x) + uvOffset;
                                        characterInfos[i].vertex_BR.uv2.x = (characterInfos[i].vertex_BR.position.x - lineExtents.min.x) / (lineExtents.max.x - lineExtents.min.x) + uvOffset;
                                        break;
                                    }
                                    else // Special Case if Justified is used in Line Mode.
                                    {
                                        characterInfos[i].vertex_BL.uv2.x = (characterInfos[i].vertex_BL.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                        characterInfos[i].vertex_TL.uv2.x = (characterInfos[i].vertex_TL.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                        characterInfos[i].vertex_TR.uv2.x = (characterInfos[i].vertex_TR.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                        characterInfos[i].vertex_BR.uv2.x = (characterInfos[i].vertex_BR.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                        break;
                                    }

                                case TextureMappingOptions.Paragraph:
                                    characterInfos[i].vertex_BL.uv2.x = (characterInfos[i].vertex_BL.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                    characterInfos[i].vertex_TL.uv2.x = (characterInfos[i].vertex_TL.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                    characterInfos[i].vertex_TR.uv2.x = (characterInfos[i].vertex_TR.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                    characterInfos[i].vertex_BR.uv2.x = (characterInfos[i].vertex_BR.position.x + justificationOffset.x - m_meshExtents.min.x) / (m_meshExtents.max.x - m_meshExtents.min.x) + uvOffset;
                                    break;

                                case TextureMappingOptions.MatchAspect:

                                    switch (m_verticalMapping)
                                    {
                                        case TextureMappingOptions.Character:
                                            characterInfos[i].vertex_BL.uv2.y = 0; // + m_uvOffset.y;
                                            characterInfos[i].vertex_TL.uv2.y = 1; // + m_uvOffset.y;
                                            characterInfos[i].vertex_TR.uv2.y = 0; // + m_uvOffset.y;
                                            characterInfos[i].vertex_BR.uv2.y = 1; // + m_uvOffset.y;
                                            break;

                                        case TextureMappingOptions.Line:
                                            characterInfos[i].vertex_BL.uv2.y = (characterInfos[i].vertex_BL.position.y - lineExtents.min.y) / (lineExtents.max.y - lineExtents.min.y) + uvOffset;
                                            characterInfos[i].vertex_TL.uv2.y = (characterInfos[i].vertex_TL.position.y - lineExtents.min.y) / (lineExtents.max.y - lineExtents.min.y) + uvOffset;
                                            characterInfos[i].vertex_TR.uv2.y = characterInfos[i].vertex_BL.uv2.y;
                                            characterInfos[i].vertex_BR.uv2.y = characterInfos[i].vertex_TL.uv2.y;
                                            break;

                                        case TextureMappingOptions.Paragraph:
                                            characterInfos[i].vertex_BL.uv2.y = (characterInfos[i].vertex_BL.position.y - m_meshExtents.min.y) / (m_meshExtents.max.y - m_meshExtents.min.y) + uvOffset;
                                            characterInfos[i].vertex_TL.uv2.y = (characterInfos[i].vertex_TL.position.y - m_meshExtents.min.y) / (m_meshExtents.max.y - m_meshExtents.min.y) + uvOffset;
                                            characterInfos[i].vertex_TR.uv2.y = characterInfos[i].vertex_BL.uv2.y;
                                            characterInfos[i].vertex_BR.uv2.y = characterInfos[i].vertex_TL.uv2.y;
                                            break;

                                        case TextureMappingOptions.MatchAspect:
                                            Debug.Log("ERROR: Cannot Match both Vertical & Horizontal.");
                                            break;
                                    }

                                    //float xDelta = 1 - (_uv2s[vert_index + 0].y * textMeshCharacterInfo[i].AspectRatio); // Left aligned
                                    float xDelta = (1 - ((characterInfos[i].vertex_BL.uv2.y + characterInfos[i].vertex_TL.uv2.y) * characterInfos[i].aspectRatio)) / 2; // Center of Rectangle

                                    characterInfos[i].vertex_BL.uv2.x = (characterInfos[i].vertex_BL.uv2.y * characterInfos[i].aspectRatio) + xDelta + uvOffset;
                                    characterInfos[i].vertex_TL.uv2.x = characterInfos[i].vertex_BL.uv2.x;
                                    characterInfos[i].vertex_TR.uv2.x = (characterInfos[i].vertex_TL.uv2.y * characterInfos[i].aspectRatio) + xDelta + uvOffset;
                                    characterInfos[i].vertex_BR.uv2.x = characterInfos[i].vertex_TR.uv2.x;
                                    break;
                            }

                            switch (m_verticalMapping)
                            {
                                case TextureMappingOptions.Character:
                                    characterInfos[i].vertex_BL.uv2.y = 0; // + m_uvOffset.y;
                                    characterInfos[i].vertex_TL.uv2.y = 1; // + m_uvOffset.y;
                                    characterInfos[i].vertex_TR.uv2.y = 1; // + m_uvOffset.y;
                                    characterInfos[i].vertex_BR.uv2.y = 0; // + m_uvOffset.y;
                                    break;

                                case TextureMappingOptions.Line:
                                    characterInfos[i].vertex_BL.uv2.y = (characterInfos[i].vertex_BL.position.y - lineInfo.descender) / (lineInfo.ascender - lineInfo.descender); // + m_uvOffset.y;
                                    characterInfos[i].vertex_TL.uv2.y = (characterInfos[i].vertex_TL.position.y - lineInfo.descender) / (lineInfo.ascender - lineInfo.descender); // + m_uvOffset.y;
                                    characterInfos[i].vertex_TR.uv2.y = characterInfos[i].vertex_TL.uv2.y;
                                    characterInfos[i].vertex_BR.uv2.y = characterInfos[i].vertex_BL.uv2.y;
                                    break;

                                case TextureMappingOptions.Paragraph:
                                    characterInfos[i].vertex_BL.uv2.y = (characterInfos[i].vertex_BL.position.y - m_meshExtents.min.y) / (m_meshExtents.max.y - m_meshExtents.min.y); // + m_uvOffset.y;
                                    characterInfos[i].vertex_TL.uv2.y = (characterInfos[i].vertex_TL.position.y - m_meshExtents.min.y) / (m_meshExtents.max.y - m_meshExtents.min.y); // + m_uvOffset.y;
                                    characterInfos[i].vertex_TR.uv2.y = characterInfos[i].vertex_TL.uv2.y;
                                    characterInfos[i].vertex_BR.uv2.y = characterInfos[i].vertex_BL.uv2.y;
                                    break;

                                case TextureMappingOptions.MatchAspect:
                                    float yDelta = (1 - ((characterInfos[i].vertex_BL.uv2.x + characterInfos[i].vertex_TR.uv2.x) / characterInfos[i].aspectRatio)) / 2; // Center of Rectangle

                                    characterInfos[i].vertex_BL.uv2.y = yDelta + (characterInfos[i].vertex_BL.uv2.x / characterInfos[i].aspectRatio); // + m_uvOffset.y;
                                    characterInfos[i].vertex_TL.uv2.y = yDelta + (characterInfos[i].vertex_TR.uv2.x / characterInfos[i].aspectRatio); // + m_uvOffset.y;
                                    characterInfos[i].vertex_BR.uv2.y = characterInfos[i].vertex_BL.uv2.y;
                                    characterInfos[i].vertex_TR.uv2.y = characterInfos[i].vertex_TL.uv2.y;
                                    break;
                            }
                            #endregion

                            // Pack UV's so that we can pass Xscale needed for Shader to maintain 1:1 ratio.
                            #region Pack Scale into UV2
                            xScale = characterInfos[i].scale * (1 - m_charWidthAdjDelta);
                            if (!characterInfos[i].isUsingAlternateTypeface && (characterInfos[i].style & FontStyles.Bold) == FontStyles.Bold) xScale *= -1;

                            switch (canvasRenderMode)
                            {
                                case RenderMode.ScreenSpaceOverlay:
                                    xScale *= Mathf.Abs(lossyScale) / canvasScaleFactor;
                                    break;
                                case RenderMode.ScreenSpaceCamera:
                                    xScale *= isCameraAssigned ? Mathf.Abs(lossyScale) : 1;
                                    break;
                                case RenderMode.WorldSpace:
                                    xScale *= Mathf.Abs(lossyScale);
                                    break;
                            }

                            // isBold is encoded in the X value and SDF Scale in Y.
                            //Vector2 vertexData = new Vector2((characterInfos[i].style & FontStyles.Bold) == FontStyles.Bold ? 1 : 0, xScale);
                            //characterInfos[i].vertex_BL.uv2 = vertexData;
                            //characterInfos[i].vertex_TL.uv2 = vertexData;
                            //characterInfos[i].vertex_TR.uv2 = vertexData;
                            //characterInfos[i].vertex_BR.uv2 = vertexData;

                            float x0 = characterInfos[i].vertex_BL.uv2.x;
                            float y0 = characterInfos[i].vertex_BL.uv2.y;
                            float x1 = characterInfos[i].vertex_TR.uv2.x;
                            float y1 = characterInfos[i].vertex_TR.uv2.y;

                            float dx = (int)x0;
                            float dy = (int)y0;

                            x0 = x0 - dx;
                            x1 = x1 - dx;
                            y0 = y0 - dy;
                            y1 = y1 - dy;

                            // Optimization to avoid having a vector2 returned from the Pack UV function.
                            characterInfos[i].vertex_BL.uv2.x = PackUV(x0, y0); characterInfos[i].vertex_BL.uv2.y = xScale;
                            characterInfos[i].vertex_TL.uv2.x = PackUV(x0, y1); characterInfos[i].vertex_TL.uv2.y = xScale;
                            characterInfos[i].vertex_TR.uv2.x = PackUV(x1, y1); characterInfos[i].vertex_TR.uv2.y = xScale;
                            characterInfos[i].vertex_BR.uv2.x = PackUV(x1, y0); characterInfos[i].vertex_BR.uv2.y = xScale;
                            #endregion
                            break;

                        // SPRITES
                        case TMP_TextElementType.Sprite:
                            // Nothing right now
                            break;
                    }

                    // Handle maxVisibleCharacters, maxVisibleLines and Overflow Page Mode.
                    #region Handle maxVisibleCharacters / maxVisibleLines / Page Mode
                    if (i < m_maxVisibleCharacters && wordCount < m_maxVisibleWords && currentLine < m_maxVisibleLines && m_overflowMode != TextOverflowModes.Page)
                    {
                        characterInfos[i].vertex_BL.position += offset;
                        characterInfos[i].vertex_TL.position += offset;
                        characterInfos[i].vertex_TR.position += offset;
                        characterInfos[i].vertex_BR.position += offset;
                    }
                    else if (i < m_maxVisibleCharacters && wordCount < m_maxVisibleWords && currentLine < m_maxVisibleLines && m_overflowMode == TextOverflowModes.Page && characterInfos[i].pageNumber == pageToDisplay)
                    {
                        characterInfos[i].vertex_BL.position += offset;
                        characterInfos[i].vertex_TL.position += offset;
                        characterInfos[i].vertex_TR.position += offset;
                        characterInfos[i].vertex_BR.position += offset;
                    }
                    else
                    {
                        characterInfos[i].vertex_BL.position = Vector3.zero;
                        characterInfos[i].vertex_TL.position = Vector3.zero;
                        characterInfos[i].vertex_TR.position = Vector3.zero;
                        characterInfos[i].vertex_BR.position = Vector3.zero;
                        characterInfos[i].isVisible = false;
                    }
                    #endregion


                    // Fill Vertex Buffers for the various types of element
                    if (elementType == TMP_TextElementType.Character)
                    {
                        FillCharacterVertexBuffers(i, vert_index_X4);
                    }
                    else if (elementType == TMP_TextElementType.Sprite)
                    {
                        FillSpriteVertexBuffers(i, sprite_index_X4);
                    }
                }
                #endregion

                // Apply Alignment and Justification Offset
                m_textInfo.characterInfo[i].bottomLeft += offset;
                m_textInfo.characterInfo[i].topLeft += offset;
                m_textInfo.characterInfo[i].topRight += offset;
                m_textInfo.characterInfo[i].bottomRight += offset;

                m_textInfo.characterInfo[i].origin += offset.x;
                m_textInfo.characterInfo[i].xAdvance += offset.x;

                m_textInfo.characterInfo[i].ascender += offset.y;
                m_textInfo.characterInfo[i].descender += offset.y;
                m_textInfo.characterInfo[i].baseLine += offset.y;

                // Update MeshExtents
                if (isCharacterVisible)
                {
                    //m_meshExtents.min = new Vector2(Mathf.Min(m_meshExtents.min.x, m_textInfo.characterInfo[i].bottomLeft.x), Mathf.Min(m_meshExtents.min.y, m_textInfo.characterInfo[i].bottomLeft.y));
                    //m_meshExtents.max = new Vector2(Mathf.Max(m_meshExtents.max.x, m_textInfo.characterInfo[i].topRight.x), Mathf.Max(m_meshExtents.max.y, m_textInfo.characterInfo[i].topLeft.y));
                }

                // Need to recompute lineExtent to account for the offset from justification.
                #region Adjust lineExtents resulting from alignment offset
                if (currentLine != lastLine || i == m_characterCount - 1)
                {
                    // Update the previous line's extents
                    if (currentLine != lastLine)
                    {
                        m_textInfo.lineInfo[lastLine].baseline += offset.y;
                        m_textInfo.lineInfo[lastLine].ascender += offset.y;
                        m_textInfo.lineInfo[lastLine].descender += offset.y;

                        m_textInfo.lineInfo[lastLine].maxAdvance += offset.x;

                        m_textInfo.lineInfo[lastLine].lineExtents.min = new Vector2(m_textInfo.characterInfo[m_textInfo.lineInfo[lastLine].firstCharacterIndex].bottomLeft.x, m_textInfo.lineInfo[lastLine].descender);
                        m_textInfo.lineInfo[lastLine].lineExtents.max = new Vector2(m_textInfo.characterInfo[m_textInfo.lineInfo[lastLine].lastVisibleCharacterIndex].topRight.x, m_textInfo.lineInfo[lastLine].ascender);
                    }

                    // Update the current line's extents
                    if (i == m_characterCount - 1)
                    {
                        m_textInfo.lineInfo[currentLine].baseline += offset.y;
                        m_textInfo.lineInfo[currentLine].ascender += offset.y;
                        m_textInfo.lineInfo[currentLine].descender += offset.y;

                        m_textInfo.lineInfo[currentLine].maxAdvance += offset.x;

                        m_textInfo.lineInfo[currentLine].lineExtents.min = new Vector2(m_textInfo.characterInfo[m_textInfo.lineInfo[currentLine].firstCharacterIndex].bottomLeft.x, m_textInfo.lineInfo[currentLine].descender);
                        m_textInfo.lineInfo[currentLine].lineExtents.max = new Vector2(m_textInfo.characterInfo[m_textInfo.lineInfo[currentLine].lastVisibleCharacterIndex].topRight.x, m_textInfo.lineInfo[currentLine].ascender);
                    }
                }
                #endregion


                // Track Word Count per line and for the object
                #region Track Word Count
                if (char.IsLetterOrDigit(unicode) || unicode == 0x2D || unicode == 0xAD || unicode == 0x2010 || unicode == 0x2011)
                {
                    if (isStartOfWord == false)
                    {
                        isStartOfWord = true;
                        wordFirstChar = i;
                    }

                    // If last character is a word
                    if (isStartOfWord && i == m_characterCount - 1)
                    {
                        int size = m_textInfo.wordInfo.Length;
                        int index = m_textInfo.wordCount;

                        if (m_textInfo.wordCount + 1 > size)
                            TMP_TextInfo.Resize(ref m_textInfo.wordInfo, size + 1);

                        wordLastChar = i;

                        m_textInfo.wordInfo[index].firstCharacterIndex = wordFirstChar;
                        m_textInfo.wordInfo[index].lastCharacterIndex = wordLastChar;
                        m_textInfo.wordInfo[index].characterCount = wordLastChar - wordFirstChar + 1;
                        m_textInfo.wordInfo[index].textComponent = this;

                        wordCount += 1;
                        m_textInfo.wordCount += 1;
                        m_textInfo.lineInfo[currentLine].wordCount += 1;
                    }
                }
                else if (isStartOfWord || i == 0 && (!char.IsPunctuation(unicode) || char.IsWhiteSpace(unicode) || unicode == 0x200B || i == m_characterCount - 1))
                {
                    if (i > 0 && i < characterInfos.Length - 1 && i < m_characterCount && (unicode == 39 || unicode == 8217) && char.IsLetterOrDigit(characterInfos[i - 1].character) && char.IsLetterOrDigit(characterInfos[i + 1].character))
                    {

                    }
                    else
                    {
                        wordLastChar = i == m_characterCount - 1 && char.IsLetterOrDigit(unicode) ? i : i - 1;
                        isStartOfWord = false;

                        int size = m_textInfo.wordInfo.Length;
                        int index = m_textInfo.wordCount;

                        if (m_textInfo.wordCount + 1 > size)
                            TMP_TextInfo.Resize(ref m_textInfo.wordInfo, size + 1);

                        m_textInfo.wordInfo[index].firstCharacterIndex = wordFirstChar;
                        m_textInfo.wordInfo[index].lastCharacterIndex = wordLastChar;
                        m_textInfo.wordInfo[index].characterCount = wordLastChar - wordFirstChar + 1;
                        m_textInfo.wordInfo[index].textComponent = this;

                        wordCount += 1;
                        m_textInfo.wordCount += 1;
                        m_textInfo.lineInfo[currentLine].wordCount += 1;
                    }
                }
                #endregion


                // Setup & Handle Underline
                #region Underline
                // NOTE: Need to figure out how underline will be handled with multiple fonts and which font will be used for the underline.
                bool isUnderline = (m_textInfo.characterInfo[i].style & FontStyles.Underline) == FontStyles.Underline;
                if (isUnderline)
                {
                    bool isUnderlineVisible = true;
                    int currentPage = m_textInfo.characterInfo[i].pageNumber;
                    m_textInfo.characterInfo[i].underlineVertexIndex = last_vert_index;

                    if (i > m_maxVisibleCharacters || currentLine > m_maxVisibleLines || (m_overflowMode == TextOverflowModes.Page && currentPage + 1 != m_pageToDisplay))
                        isUnderlineVisible = false;

                    // We only use the scale of visible characters.
                    if (!char.IsWhiteSpace(unicode) && unicode != 0x200B)
                    {
                        underlineMaxScale = Mathf.Max(underlineMaxScale, m_textInfo.characterInfo[i].scale);
                        xScaleMax = Mathf.Max(xScaleMax, Mathf.Abs(xScale));
                        underlineBaseLine = Mathf.Min(currentPage == lastPage ? underlineBaseLine : k_LargePositiveFloat, m_textInfo.characterInfo[i].baseLine + font.m_FaceInfo.underlineOffset * underlineMaxScale);
                        lastPage = currentPage; // Need to track pages to ensure we reset baseline for the new pages.
                    }

                    if (beginUnderline == false && isUnderlineVisible == true && i <= lineInfo.lastVisibleCharacterIndex && unicode != 10 && unicode != 11 && unicode != 13)
                    {
                        if (i == lineInfo.lastVisibleCharacterIndex && char.IsSeparator(unicode))
                        { }
                        else
                        {
                            beginUnderline = true;
                            underlineStartScale = m_textInfo.characterInfo[i].scale;
                            if (underlineMaxScale == 0)
                            {
                                underlineMaxScale = underlineStartScale;
                                xScaleMax = xScale;
                            }
                            underline_start = new Vector3(m_textInfo.characterInfo[i].bottomLeft.x, underlineBaseLine, 0);
                            underlineColor = m_textInfo.characterInfo[i].underlineColor;
                        }
                    }

                    // End Underline if text only contains one character.
                    if (beginUnderline && m_characterCount == 1)
                    {
                        beginUnderline = false;
                        underline_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, underlineBaseLine, 0);
                        underlineEndScale = m_textInfo.characterInfo[i].scale;

                        DrawUnderlineMesh(underline_start, underline_end, ref last_vert_index, underlineStartScale, underlineEndScale, underlineMaxScale, xScaleMax, underlineColor);
                        underlineMaxScale = 0;
                        xScaleMax = 0;
                        underlineBaseLine = k_LargePositiveFloat;
                    }
                    else if (beginUnderline && (i == lineInfo.lastCharacterIndex || i >= lineInfo.lastVisibleCharacterIndex))
                    {
                        // Terminate underline at previous visible character if space or carriage return.
                        if (char.IsWhiteSpace(unicode) || unicode == 0x200B)
                        {
                            int lastVisibleCharacterIndex = lineInfo.lastVisibleCharacterIndex;
                            underline_end = new Vector3(m_textInfo.characterInfo[lastVisibleCharacterIndex].topRight.x, underlineBaseLine, 0);
                            underlineEndScale = m_textInfo.characterInfo[lastVisibleCharacterIndex].scale;
                        }
                        else
                        {   // End underline if last character of the line.
                            underline_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, underlineBaseLine, 0);
                            underlineEndScale = m_textInfo.characterInfo[i].scale;
                        }

                        beginUnderline = false;
                        DrawUnderlineMesh(underline_start, underline_end, ref last_vert_index, underlineStartScale, underlineEndScale, underlineMaxScale, xScaleMax, underlineColor);
                        underlineMaxScale = 0;
                        xScaleMax = 0;
                        underlineBaseLine = k_LargePositiveFloat;
                    }
                    else if (beginUnderline && !isUnderlineVisible)
                    {
                        beginUnderline = false;
                        underline_end = new Vector3(m_textInfo.characterInfo[i - 1].topRight.x, underlineBaseLine, 0);
                        underlineEndScale = m_textInfo.characterInfo[i - 1].scale;

                        DrawUnderlineMesh(underline_start, underline_end, ref last_vert_index, underlineStartScale, underlineEndScale, underlineMaxScale, xScaleMax, underlineColor);
                        underlineMaxScale = 0;
                        xScaleMax = 0;
                        underlineBaseLine = k_LargePositiveFloat;
                    }
                    else if (beginUnderline && i < m_characterCount - 1 && !underlineColor.Compare(m_textInfo.characterInfo[i + 1].underlineColor))
                    {
                        // End underline if underline color has changed.
                        beginUnderline = false;
                        underline_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, underlineBaseLine, 0);
                        underlineEndScale = m_textInfo.characterInfo[i].scale;

                        DrawUnderlineMesh(underline_start, underline_end, ref last_vert_index, underlineStartScale, underlineEndScale, underlineMaxScale, xScaleMax, underlineColor);
                        underlineMaxScale = 0;
                        xScaleMax = 0;
                        underlineBaseLine = k_LargePositiveFloat;
                    }
                }
                else
                {
                    // End Underline
                    if (beginUnderline == true)
                    {
                        beginUnderline = false;
                        underline_end = new Vector3(m_textInfo.characterInfo[i - 1].topRight.x, underlineBaseLine, 0);
                        underlineEndScale = m_textInfo.characterInfo[i - 1].scale;

                        DrawUnderlineMesh(underline_start, underline_end, ref last_vert_index, underlineStartScale, underlineEndScale, underlineMaxScale, xScaleMax, underlineColor);
                        underlineMaxScale = 0;
                        xScaleMax = 0;
                        underlineBaseLine = k_LargePositiveFloat;
                    }
                }
                #endregion


                // Setup & Handle Strikethrough
                #region Strikethrough
                // NOTE: Need to figure out how underline will be handled with multiple fonts and which font will be used for the underline.
                bool isStrikethrough = (m_textInfo.characterInfo[i].style & FontStyles.Strikethrough) == FontStyles.Strikethrough;
                float strikethroughOffset = currentFontAsset.m_FaceInfo.strikethroughOffset;

                if (isStrikethrough)
                {
                    bool isStrikeThroughVisible = true;
                    m_textInfo.characterInfo[i].strikethroughVertexIndex = last_vert_index;

                    if (i > m_maxVisibleCharacters || currentLine > m_maxVisibleLines || (m_overflowMode == TextOverflowModes.Page && m_textInfo.characterInfo[i].pageNumber + 1 != m_pageToDisplay))
                        isStrikeThroughVisible = false;

                    if (beginStrikethrough == false && isStrikeThroughVisible && i <= lineInfo.lastVisibleCharacterIndex && unicode != 10 && unicode != 11 && unicode != 13)
                    {
                        if (i == lineInfo.lastVisibleCharacterIndex && char.IsSeparator(unicode))
                        { }
                        else
                        {
                            beginStrikethrough = true;
                            strikethroughPointSize = m_textInfo.characterInfo[i].pointSize;
                            strikethroughScale = m_textInfo.characterInfo[i].scale;
                            strikethrough_start = new Vector3(m_textInfo.characterInfo[i].bottomLeft.x, m_textInfo.characterInfo[i].baseLine + strikethroughOffset * strikethroughScale, 0);
                            strikethroughColor = m_textInfo.characterInfo[i].strikethroughColor;
                            strikethroughBaseline = m_textInfo.characterInfo[i].baseLine;
                            //Debug.Log("Char [" + currentCharacter + "] Start Strikethrough POS: " + strikethrough_start);
                        }
                    }

                    // End Strikethrough if text only contains one character.
                    if (beginStrikethrough && m_characterCount == 1)
                    {
                        beginStrikethrough = false;
                        strikethrough_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, m_textInfo.characterInfo[i].baseLine + strikethroughOffset * strikethroughScale, 0);

                        DrawUnderlineMesh(strikethrough_start, strikethrough_end, ref last_vert_index, strikethroughScale, strikethroughScale, strikethroughScale, xScale, strikethroughColor);
                    }
                    else if (beginStrikethrough && i == lineInfo.lastCharacterIndex)
                    {
                        // Terminate Strikethrough at previous visible character if space or carriage return.
                        if (char.IsWhiteSpace(unicode) || unicode == 0x200B)
                        {
                            int lastVisibleCharacterIndex = lineInfo.lastVisibleCharacterIndex;
                            strikethrough_end = new Vector3(m_textInfo.characterInfo[lastVisibleCharacterIndex].topRight.x, m_textInfo.characterInfo[lastVisibleCharacterIndex].baseLine + strikethroughOffset * strikethroughScale, 0);
                        }
                        else
                        {
                            // Terminate Strikethrough at last character of line.
                            strikethrough_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, m_textInfo.characterInfo[i].baseLine + strikethroughOffset * strikethroughScale, 0);
                        }

                        beginStrikethrough = false;
                        DrawUnderlineMesh(strikethrough_start, strikethrough_end, ref last_vert_index, strikethroughScale, strikethroughScale, strikethroughScale, xScale, strikethroughColor);
                    }
                    else if (beginStrikethrough && i < m_characterCount && (m_textInfo.characterInfo[i + 1].pointSize != strikethroughPointSize || !TMP_Math.Approximately(m_textInfo.characterInfo[i + 1].baseLine + offset.y, strikethroughBaseline)))
                    {
                        // Terminate Strikethrough if scale changes.
                        beginStrikethrough = false;

                        int lastVisibleCharacterIndex = lineInfo.lastVisibleCharacterIndex;
                        if (i > lastVisibleCharacterIndex)
                            strikethrough_end = new Vector3(m_textInfo.characterInfo[lastVisibleCharacterIndex].topRight.x, m_textInfo.characterInfo[lastVisibleCharacterIndex].baseLine + strikethroughOffset * strikethroughScale, 0);
                        else
                            strikethrough_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, m_textInfo.characterInfo[i].baseLine + strikethroughOffset * strikethroughScale, 0);

                        DrawUnderlineMesh(strikethrough_start, strikethrough_end, ref last_vert_index, strikethroughScale, strikethroughScale, strikethroughScale, xScale, strikethroughColor);
                        //Debug.Log("Char [" + currentCharacter + "] at Index: " + i + "  End Strikethrough POS: " + strikethrough_end + "  Baseline: " + m_textInfo.characterInfo[i].baseLine.ToString("f3"));
                    }
                    else if (beginStrikethrough && i < m_characterCount && currentFontAsset.GetInstanceID() != characterInfos[i + 1].fontAsset.GetInstanceID())
                    {
                        // Terminate Strikethrough if font asset changes.
                        beginStrikethrough = false;
                        strikethrough_end = new Vector3(m_textInfo.characterInfo[i].topRight.x, m_textInfo.characterInfo[i].baseLine + strikethroughOffset * strikethroughScale, 0);

                        DrawUnderlineMesh(strikethrough_start, strikethrough_end, ref last_vert_index, strikethroughScale, strikethroughScale, strikethroughScale, xScale, strikethroughColor);
                    }
                    else if (beginStrikethrough && !isStrikeThroughVisible)
                    {
                        // Terminate Strikethrough if character is not visible.
                        beginStrikethrough = false;
                        strikethrough_end = new Vector3(m_textInfo.characterInfo[i - 1].topRight.x, m_textInfo.characterInfo[i - 1].baseLine + strikethroughOffset * strikethroughScale, 0);

                        DrawUnderlineMesh(strikethrough_start, strikethrough_end, ref last_vert_index, strikethroughScale, strikethroughScale, strikethroughScale, xScale, strikethroughColor);
                    }
                }
                else
                {
                    // End Strikethrough
                    if (beginStrikethrough == true)
                    {
                        beginStrikethrough = false;
                        strikethrough_end = new Vector3(m_textInfo.characterInfo[i - 1].topRight.x, m_textInfo.characterInfo[i - 1].baseLine + strikethroughOffset * strikethroughScale, 0);

                        DrawUnderlineMesh(strikethrough_start, strikethrough_end, ref last_vert_index, strikethroughScale, strikethroughScale, strikethroughScale, xScale, strikethroughColor);
                    }
                }
                #endregion


                // HANDLE TEXT HIGHLIGHTING
                #region Text Highlighting
                bool isHighlight = (m_textInfo.characterInfo[i].style & FontStyles.Highlight) == FontStyles.Highlight;
                if (isHighlight)
                {
                    bool isHighlightVisible = true;
                    int currentPage = m_textInfo.characterInfo[i].pageNumber;

                    if (i > m_maxVisibleCharacters || currentLine > m_maxVisibleLines || (m_overflowMode == TextOverflowModes.Page && currentPage + 1 != m_pageToDisplay))
                        isHighlightVisible = false;

                    if (beginHighlight == false && isHighlightVisible == true && i <= lineInfo.lastVisibleCharacterIndex && unicode != 10 && unicode != 11 && unicode != 13)
                    {
                        if (i == lineInfo.lastVisibleCharacterIndex && char.IsSeparator(unicode))
                        { }
                        else
                        {
                            beginHighlight = true;
                            highlight_start = k_LargePositiveVector2;
                            highlight_end = k_LargeNegativeVector2;
                            highlightState = m_textInfo.characterInfo[i].highlightState;
                        }
                    }

                    if (beginHighlight)
                    {
                        TMP_CharacterInfo currentCharacter = m_textInfo.characterInfo[i];
                        HighlightState currentState = currentCharacter.highlightState;

                        bool isColorTransition = false;

                        // Handle Highlight color changes
                        if (highlightState != currentCharacter.highlightState)
                        {
                            // Adjust previous highlight section to prevent a gaps between sections.
                            highlight_end.x = (highlight_end.x - highlightState.padding.right + currentCharacter.bottomLeft.x) / 2;

                            highlight_start.y = Mathf.Min(highlight_start.y, currentCharacter.descender);
                            highlight_end.y = Mathf.Max(highlight_end.y, currentCharacter.ascender);

                            DrawTextHighlight(highlight_start, highlight_end, ref last_vert_index, highlightState.color);

                            beginHighlight = true;
                            highlight_start = new Vector2(highlight_end.x, currentCharacter.descender - currentState.padding.bottom);
                            highlight_end = new Vector2(currentCharacter.topRight.x + currentState.padding.right, currentCharacter.ascender + currentState.padding.top);

                            highlightState = currentCharacter.highlightState;

                            isColorTransition = true;
                        }

                        if (!isColorTransition)
                        {
                            // Use the Min / Max Extents of the Highlight area to handle different character sizes and fonts.
                            highlight_start.x = Mathf.Min(highlight_start.x, currentCharacter.bottomLeft.x - highlightState.padding.left);
                            highlight_start.y = Mathf.Min(highlight_start.y, currentCharacter.descender - highlightState.padding.bottom);

                            highlight_end.x = Mathf.Max(highlight_end.x, currentCharacter.topRight.x + highlightState.padding.right);
                            highlight_end.y = Mathf.Max(highlight_end.y, currentCharacter.ascender + highlightState.padding.top);
                        }
                    }

                    // End Highlight if text only contains one character.
                    if (beginHighlight && m_characterCount == 1)
                    {
                        beginHighlight = false;

                        DrawTextHighlight(highlight_start, highlight_end, ref last_vert_index, highlightState.color);
                    }
                    else if (beginHighlight && (i == lineInfo.lastCharacterIndex || i >= lineInfo.lastVisibleCharacterIndex))
                    {
                        beginHighlight = false;
                        DrawTextHighlight(highlight_start, highlight_end, ref last_vert_index, highlightState.color);
                    }
                    else if (beginHighlight && !isHighlightVisible)
                    {
                        beginHighlight = false;
                        DrawTextHighlight(highlight_start, highlight_end, ref last_vert_index, highlightState.color);
                    }
                }
                else
                {
                    // End Highlight
                    if (beginHighlight == true)
                    {
                        beginHighlight = false;
                        DrawTextHighlight(highlight_start, highlight_end, ref last_vert_index, highlightState.color);
                    }
                }
                #endregion

                lastLine = currentLine;
            }
            #endregion


            // METRICS ABOUT THE TEXT OBJECT
            m_textInfo.characterCount = m_characterCount;
            m_textInfo.spriteCount = m_spriteCount;
            m_textInfo.lineCount = lineCount;
            m_textInfo.wordCount = wordCount != 0 && m_characterCount > 0 ? wordCount : 1;
            m_textInfo.pageCount = m_pageNumber + 1;

            // Set vertex count for Underline geometry
            //m_textInfo.meshInfo[m_Underline.materialIndex].vertexCount = last_vert_index;

            #if TMP_PROFILE_ON
            // End Sampling of Phase II
            Profiler.EndSample();

            Profiler.BeginSample("TMP GenerateText() - Phase III");
            #endif

            // Phase III - Update Mesh Vertex Data
            if (m_renderMode == TextRenderFlags.Render && IsActive())
            {
                // Event to allow users to modify the content of the text info before the text is rendered.
                OnPreRenderText?.Invoke(m_textInfo);

                // Must ensure the Canvas support the additional vertex attributes used by TMP.
                // This could be optimized based on canvas render mode settings but gets complicated to handle with multiple text objects using different material presets.
                if (m_canvas.additionalShaderChannels != (AdditionalCanvasShaderChannels)25)
                    m_canvas.additionalShaderChannels |= (AdditionalCanvasShaderChannels)25;

                // Sort the geometry of the text object if needed.
                if (m_geometrySortingOrder != VertexSortingOrder.Normal)
                    m_textInfo.meshInfo[0].SortGeometry(VertexSortingOrder.Reverse);

                // Upload Mesh Data
                m_mesh.MarkDynamic();
                m_mesh.vertices = m_textInfo.meshInfo[0].vertices;
                m_mesh.uv = m_textInfo.meshInfo[0].uvs0;
                m_mesh.uv2 = m_textInfo.meshInfo[0].uvs2;
                //m_mesh.uv4 = m_textInfo.meshInfo[0].uvs4;
                m_mesh.colors32 = m_textInfo.meshInfo[0].colors32;

                // Compute Bounds for the mesh. Manual computation is more efficient then using Mesh.RecalcualteBounds.
                m_mesh.RecalculateBounds();
                //m_mesh.bounds = new Bounds(new Vector3((m_meshExtents.max.x + m_meshExtents.min.x) / 2, (m_meshExtents.max.y + m_meshExtents.min.y) / 2, 0) + offset, new Vector3(m_meshExtents.max.x - m_meshExtents.min.x, m_meshExtents.max.y - m_meshExtents.min.y, 0));

                m_canvasRenderer.SetMesh(m_mesh);

                // Cache CanvasRenderer color of the parent text object.
                Color parentBaseColor = m_canvasRenderer.GetColor();

                bool isCullTransparentMeshEnabled = m_canvasRenderer.cullTransparentMesh;

                for (int i = 1; i < m_textInfo.materialCount; i++)
                {
                    // Clear unused vertices
                    m_textInfo.meshInfo[i].ClearUnusedVertices();

                    if (m_subTextObjects[i] == null) continue;

                    // Sort the geometry of the sub-text objects if needed.
                    if (m_geometrySortingOrder != VertexSortingOrder.Normal)
                        m_textInfo.meshInfo[i].SortGeometry(VertexSortingOrder.Reverse);

                    //m_subTextObjects[i].mesh.MarkDynamic();
                    m_subTextObjects[i].mesh.vertices = m_textInfo.meshInfo[i].vertices;
                    m_subTextObjects[i].mesh.uv = m_textInfo.meshInfo[i].uvs0;
                    m_subTextObjects[i].mesh.uv2 = m_textInfo.meshInfo[i].uvs2;
                    //m_subTextObjects[i].mesh.uv4 = m_textInfo.meshInfo[i].uvs4;
                    m_subTextObjects[i].mesh.colors32 = m_textInfo.meshInfo[i].colors32;

                    m_subTextObjects[i].mesh.RecalculateBounds();

                    m_subTextObjects[i].canvasRenderer.SetMesh(m_subTextObjects[i].mesh);

                    // Set CanvasRenderer color to match the parent text object.
                    m_subTextObjects[i].canvasRenderer.SetColor(parentBaseColor);

                    // Make sure Cull Transparent Mesh of the sub objects matches the parent
                    m_subTextObjects[i].canvasRenderer.cullTransparentMesh = isCullTransparentMeshEnabled;

                    // Sync RaycastTarget property with parent text object
                    m_subTextObjects[i].raycastTarget = this.raycastTarget;
                }
            }

            // Event indicating the text has been regenerated.
            TMPro_EventManager.ON_TEXT_CHANGED(this);

            //Debug.Log("***** Done rendering text object ID " + GetInstanceID() + ". *****");

            #if TMP_PROFILE_ON
            // End Sampling of Phase III
            Profiler.EndSample();

            // End Sampling of GenerateText()
            Profiler.EndSample();
            #endif
        }


        /// <summary>
        /// Method to return the local corners of the Text Container or RectTransform.
        /// </summary>
        /// <returns></returns>
        protected override Vector3[] GetTextContainerLocalCorners()
        {
            if (m_rectTransform == null) m_rectTransform = this.rectTransform;

            m_rectTransform.GetLocalCorners(m_RectTransformCorners);

            return m_RectTransformCorners;
        }


        /// <summary>
        /// Method to Enable or Disable child SubMesh objects.
        /// </summary>
        /// <param name="state"></param>
        protected override void SetActiveSubMeshes(bool state)
        {
            for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
            {
                if (m_subTextObjects[i].enabled != state)
                    m_subTextObjects[i].enabled = state;
            }
        }


        /// <summary>
        /// Destroy Sub Mesh Objects
        /// </summary>
        protected override void DestroySubMeshObjects()
        {
            for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
                DestroyImmediate(m_subTextObjects[i]);
        }


        /// <summary>
        ///  Method returning the compound bounds of the text object and child sub objects.
        /// </summary>
        /// <returns></returns>
        protected override Bounds GetCompoundBounds()
        {
            Bounds mainBounds = m_mesh.bounds;
            Vector3 min = mainBounds.min;
            Vector3 max = mainBounds.max;

            for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
            {
                Bounds subBounds = m_subTextObjects[i].mesh.bounds;
                min.x = min.x < subBounds.min.x ? min.x : subBounds.min.x;
                min.y = min.y < subBounds.min.y ? min.y : subBounds.min.y;

                max.x = max.x > subBounds.max.x ? max.x : subBounds.max.x;
                max.y = max.y > subBounds.max.y ? max.y : subBounds.max.y;
            }

            Vector3 center = (min + max) / 2;
            Vector2 size = max - min;
            return new Bounds(center, size);
        }

        internal override Rect GetCanvasSpaceClippingRect()
        {
            if (m_canvas == null || m_canvas.rootCanvas == null || m_mesh == null)
                return Rect.zero;

            Transform rootCanvasTransform = m_canvas.rootCanvas.transform;
            Bounds compoundBounds = GetCompoundBounds();

            Vector2 position =  rootCanvasTransform.InverseTransformPoint(m_rectTransform.position);

            Vector2 canvasLossyScale = rootCanvasTransform.lossyScale;
            Vector2 lossyScale = m_rectTransform.lossyScale / canvasLossyScale;

            return new Rect(position + compoundBounds.min * lossyScale, compoundBounds.size * lossyScale);
        }

        /// <summary>
        /// Method to Update Scale in UV2
        /// </summary>
        //void UpdateSDFScale(float lossyScale)
        //{
        //    // TODO: Resolve - Underline / Strikethrough segments not getting their SDF Scale adjusted.

        //    //Debug.Log("Updating SDF Scale.");

        //    // Return if we don't have a valid reference to a Canvas.
        //    if (m_canvas == null)
        //    {
        //        m_canvas = GetCanvas();
        //        if (m_canvas == null) return;
        //    }

        //    lossyScale = lossyScale == 0 ? 1 : lossyScale;

        //    float xScale = 0;
        //    float canvasScaleFactor = m_canvas.scaleFactor;

        //    if (m_canvas.renderMode == RenderMode.ScreenSpaceOverlay)
        //        xScale = lossyScale / canvasScaleFactor;
        //    else if (m_canvas.renderMode == RenderMode.ScreenSpaceCamera)
        //        xScale = m_canvas.worldCamera != null ? lossyScale : 1;
        //    else
        //        xScale = lossyScale;

        //    // Iterate through each of the characters.
        //    for (int i = 0; i < m_textInfo.characterCount; i++)
        //    {
        //        // Only update scale for visible characters.
        //        if (m_textInfo.characterInfo[i].isVisible && m_textInfo.characterInfo[i].elementType == TMP_TextElementType.Character)
        //        {
        //            float scale = xScale * m_textInfo.characterInfo[i].scale * (1 - m_charWidthAdjDelta);
        //            if (!m_textInfo.characterInfo[i].isUsingAlternateTypeface && (m_textInfo.characterInfo[i].style & FontStyles.Bold) == FontStyles.Bold) scale *= -1;

        //            int index = m_textInfo.characterInfo[i].materialReferenceIndex;
        //            int vertexIndex = m_textInfo.characterInfo[i].vertexIndex;

        //            m_textInfo.meshInfo[index].uvs2[vertexIndex + 0].y = scale;
        //            m_textInfo.meshInfo[index].uvs2[vertexIndex + 1].y = scale;
        //            m_textInfo.meshInfo[index].uvs2[vertexIndex + 2].y = scale;
        //            m_textInfo.meshInfo[index].uvs2[vertexIndex + 3].y = scale;
        //        }
        //    }

        //    // Push the updated uv2 scale information to the meshes.
        //    for (int i = 0; i < m_textInfo.materialCount; i++)
        //    {
        //        if (i == 0)
        //        {
        //            m_mesh.uv2 = m_textInfo.meshInfo[0].uvs2;
        //            m_canvasRenderer.SetMesh(m_mesh);
        //        }
        //        else
        //        {
        //            m_subTextObjects[i].mesh.uv2 = m_textInfo.meshInfo[i].uvs2;
        //            m_subTextObjects[i].canvasRenderer.SetMesh(m_subTextObjects[i].mesh);
        //        }
        //    }
        //}

        /// <summary>
        /// Method to update the SDF Scale in UV2.
        /// </summary>
        /// <param name="scaleDelta"></param>
        void UpdateSDFScale(float scaleDelta)
        {
            if (scaleDelta == 0 || scaleDelta == float.PositiveInfinity || scaleDelta == float.NegativeInfinity)
            {
                m_havePropertiesChanged = true;
                OnPreRenderCanvas();
                return;
            }

            for (int materialIndex = 0; materialIndex < m_textInfo.materialCount; materialIndex ++)
            {
                TMP_MeshInfo meshInfo = m_textInfo.meshInfo[materialIndex];

                for (int i = 0; i < meshInfo.uvs2.Length; i++)
                {
                    meshInfo.uvs2[i].y *= Mathf.Abs(scaleDelta);
                }
            }

            // Push the updated uv2 scale information to the meshes.
            for (int i = 0; i < m_textInfo.materialCount; i++)
            {
                if (i == 0)
                {
                    m_mesh.uv2 = m_textInfo.meshInfo[0].uvs2;
                    m_canvasRenderer.SetMesh(m_mesh);
                }
                else
                {
                    m_subTextObjects[i].mesh.uv2 = m_textInfo.meshInfo[i].uvs2;
                    m_subTextObjects[i].canvasRenderer.SetMesh(m_subTextObjects[i].mesh);
                }
            }
        }

    }
}
