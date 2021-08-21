using UnityEngine;
using System;
using UnityEngine.UI;

namespace TMPro
{

    [DisallowMultipleComponent]
    [RequireComponent(typeof(MeshRenderer))]
    [AddComponentMenu("Mesh/TextMeshPro - Text")]
    [ExecuteAlways]
    [HelpURL("https://docs.unity3d.com/Packages/com.unity.textmeshpro@2.1")]
    public partial class TextMeshPro : TMP_Text, ILayoutElement
    {
        // Public Properties and Serializable Properties

        /// <summary>
        /// Sets the Renderer's sorting Layer ID
        /// </summary>
        public int sortingLayerID
        {
            get
            {
                if (renderer == null)
                    return 0;

                return m_renderer.sortingLayerID;
            }
            set
            {
                if (renderer == null)
                    return;

                m_renderer.sortingLayerID = value;
                _SortingLayerID = value;
            }
        }
        [SerializeField]
        internal int _SortingLayerID;

        /// <summary>
        /// Sets the Renderer's sorting order within the assigned layer.
        /// </summary>
        public int sortingOrder
        {
            get
            {
                if (renderer == null)
                    return 0;

                return m_renderer.sortingOrder;
            }
            set
            {
                if (renderer == null)
                    return;

                m_renderer.sortingOrder = value;
                _SortingOrder = value;
            }
        }
        [SerializeField]
        internal int _SortingOrder;

        /// <summary>
        /// Determines if the size of the text container will be adjusted to fit the text object when it is first created.
        /// </summary>
        public override bool autoSizeTextContainer
        {
            get { return m_autoSizeTextContainer; }

            set { if (m_autoSizeTextContainer == value) return; m_autoSizeTextContainer = value; if (m_autoSizeTextContainer) { TMP_UpdateManager.RegisterTextElementForLayoutRebuild(this); SetLayoutDirty(); } }
        }


        /// <summary>
        /// Returns a reference to the Text Container
        /// </summary>
        [Obsolete("The TextContainer is now obsolete. Use the RectTransform instead.")]
        public TextContainer textContainer
        {
            get
            {
                return null;
            }
        }


        /// <summary>
        /// Returns a reference to the Transform
        /// </summary>
        public new Transform transform
        {
            get
            {
                if (m_transform == null)
                    m_transform = GetComponent<Transform>();

                return m_transform;
            }
        }


        #pragma warning disable 0108
        /// <summary>
        /// Returns the rendered assigned to the text object.
        /// </summary>
        public Renderer renderer
        {
            get
            {
                if (m_renderer == null)
                    m_renderer = GetComponent<Renderer>();

                return m_renderer;
            }
        }


        /// <summary>
        /// Returns the mesh assigned to the text object.
        /// </summary>
        public override Mesh mesh
        {
            get
            {
                if (m_mesh == null)
                {
                    m_mesh = new Mesh();
                    m_mesh.hideFlags = HideFlags.HideAndDontSave;
                }

                return m_mesh;
            }
        }

        /// <summary>
        /// Returns the Mesh Filter of the text object.
        /// </summary>
        public MeshFilter meshFilter
        {
            get
            {
                if (m_meshFilter == null)
                {
                    m_meshFilter = GetComponent<MeshFilter>();

                    if (m_meshFilter == null)
                    {
                        m_meshFilter = gameObject.AddComponent<MeshFilter>();
                        m_meshFilter.hideFlags = HideFlags.HideInInspector | HideFlags.HideAndDontSave;
                    }
                }

                return m_meshFilter;
            }
        }

        // MASKING RELATED PROPERTIES
        /// <summary>
        /// Sets the mask type
        /// </summary>
        public MaskingTypes maskType
        {
            get { return m_maskType; }
            set { m_maskType = value; SetMask(m_maskType); }
        }


        /// <summary>
        /// Function used to set the mask type and coordinates in World Space
        /// </summary>
        /// <param name="type"></param>
        /// <param name="maskCoords"></param>
        public void SetMask(MaskingTypes type, Vector4 maskCoords)
        {
            SetMask(type);

            SetMaskCoordinates(maskCoords);
        }

        /// <summary>
        /// Function used to set the mask type, coordinates and softness
        /// </summary>
        /// <param name="type"></param>
        /// <param name="maskCoords"></param>
        /// <param name="softnessX"></param>
        /// <param name="softnessY"></param>
        public void SetMask(MaskingTypes type, Vector4 maskCoords, float softnessX, float softnessY)
        {
            SetMask(type);

            SetMaskCoordinates(maskCoords, softnessX, softnessY);
        }


        /// <summary>
        /// Schedule rebuilding of the text geometry.
        /// </summary>
        public override void SetVerticesDirty()
        {
            //Debug.Log("***** SetVerticesDirty() called on object [" + this.name + "] at frame [" + Time.frameCount + "] *****");

            if (this == null || !this.IsActive())
                return;

            TMP_UpdateManager.RegisterTextElementForGraphicRebuild(this);
        }


        /// <summary>
        ///
        /// </summary>
        public override void SetLayoutDirty()
        {
            m_isPreferredWidthDirty = true;
            m_isPreferredHeightDirty = true;

            if (this == null || !this.IsActive())
                return;

            LayoutRebuilder.MarkLayoutForRebuild(this.rectTransform);

            m_isLayoutDirty = true;
        }


        /// <summary>
        /// Schedule updating of the material used by the text object.
        /// </summary>
        public override void SetMaterialDirty()
        {
            //Debug.Log("SetMaterialDirty()");

            //if (!this.IsActive())
            //    return;

            //m_isMaterialDirty = true;
            UpdateMaterial();
            //TMP_UpdateManager.RegisterTextElementForGraphicRebuild(this);
        }


        /// <summary>
        ///
        /// </summary>
        public override void SetAllDirty()
        {
            m_isInputParsingRequired = true;

            SetLayoutDirty();
            SetVerticesDirty();
            SetMaterialDirty();
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="update"></param>
        public override void Rebuild(CanvasUpdate update)
        {
            if (this == null) return;

            if (update == CanvasUpdate.Prelayout)
            {
                if (m_autoSizeTextContainer)
                {
                    m_rectTransform.sizeDelta = GetPreferredValues(Mathf.Infinity, Mathf.Infinity);
                }
            }
            else if (update == CanvasUpdate.PreRender)
            {
                this.OnPreRenderObject();

                if (!m_isMaterialDirty) return;

                UpdateMaterial();
                m_isMaterialDirty = false;
            }
        }


        /// <summary>
        ///
        /// </summary>
        protected override void UpdateMaterial()
        {
            //Debug.Log("***** UpdateMaterial() called on object ID " + GetInstanceID() + ". *****");

            //if (!this.IsActive())
            //    return;

            if (renderer == null || m_sharedMaterial == null)
                return;

            // Only update the material if it has changed.
            if (m_renderer.sharedMaterial == null || m_renderer.sharedMaterial.GetInstanceID() != m_sharedMaterial.GetInstanceID())
                m_renderer.sharedMaterial = m_sharedMaterial;
        }


        /// <summary>
        /// Function to be used to force recomputing of character padding when Shader / Material properties have been changed via script.
        /// </summary>
        public override void UpdateMeshPadding()
        {
            m_padding = ShaderUtilities.GetPadding(m_sharedMaterial, m_enableExtraPadding, m_isUsingBold);
            m_isMaskingEnabled = ShaderUtilities.IsMaskingEnabled(m_sharedMaterial);
            m_havePropertiesChanged = true;
            checkPaddingRequired = false;

            // Return if text object is not awake yet.
            if (m_textInfo == null) return;

            // Update sub text objects
            for (int i = 1; i < m_textInfo.materialCount; i++)
                m_subTextObjects[i].UpdateMeshPadding(m_enableExtraPadding, m_isUsingBold);
        }


        /// <summary>
        /// Function to force regeneration of the text object before its normal process time. This is useful when changes to the text object properties need to be applied immediately.
        /// </summary>
        /// <param name="ignoreActiveState">Ignore Active State of text objects. Inactive objects are ignored by default.</param>
        /// <param name="forceTextReparsing">Force re-parsing of the text.</param>
        public override void ForceMeshUpdate(bool ignoreActiveState = false, bool forceTextReparsing = false)
        {
            m_havePropertiesChanged = true;
            m_ignoreActiveState = ignoreActiveState;
            m_isInputParsingRequired = m_isInputParsingRequired ? true : forceTextReparsing;
            OnPreRenderObject();
        }


        /// <summary>
        /// Function used to evaluate the length of a text string.
        /// </summary>
        /// <param name="text"></param>
        /// <returns></returns>
        public override TMP_TextInfo GetTextInfo(string text)
        {
            StringToInternalParsingBuffer(text, ref m_InternalParsingBuffer);
            SetArraySizes(m_InternalParsingBuffer);

            m_renderMode = TextRenderFlags.DontRender;

            ComputeMarginSize();

            GenerateTextMesh();

            m_renderMode = TextRenderFlags.Render;

            return this.textInfo;
        }


        /// <summary>
        /// Function to clear the geometry of the Primary and Sub Text objects.
        /// </summary>
        public override void ClearMesh(bool updateMesh)
        {
            if (m_textInfo.meshInfo[0].mesh == null) m_textInfo.meshInfo[0].mesh = m_mesh;

            m_textInfo.ClearMeshInfo(updateMesh);
        }


        /// <summary>
        /// Event to allow users to modify the content of the text info before the text is rendered.
        /// </summary>
        public override event Action<TMP_TextInfo> OnPreRenderText;


        /// <summary>
        /// Function to update the geometry of the main and sub text objects.
        /// </summary>
        /// <param name="mesh"></param>
        /// <param name="index"></param>
        public override void UpdateGeometry(Mesh mesh, int index)
        {
            mesh.RecalculateBounds();
        }


        /// <summary>
        /// Function to upload the updated vertex data and renderer.
        /// </summary>
        public override void UpdateVertexData(TMP_VertexDataUpdateFlags flags)
        {
            int materialCount = m_textInfo.materialCount;

            for (int i = 0; i < materialCount; i++)
            {
                Mesh mesh;

                if (i == 0)
                    mesh = m_mesh;
                else
                {
                    // Clear unused vertices
                    // TODO: Causes issues when sorting geometry as last vertex data attribute get wiped out.
                    //m_textInfo.meshInfo[i].ClearUnusedVertices();

                    mesh = m_subTextObjects[i].mesh;
                }

                //mesh.MarkDynamic();

                if ((flags & TMP_VertexDataUpdateFlags.Vertices) == TMP_VertexDataUpdateFlags.Vertices)
                    mesh.vertices = m_textInfo.meshInfo[i].vertices;

                if ((flags & TMP_VertexDataUpdateFlags.Uv0) == TMP_VertexDataUpdateFlags.Uv0)
                    mesh.uv = m_textInfo.meshInfo[i].uvs0;

                if ((flags & TMP_VertexDataUpdateFlags.Uv2) == TMP_VertexDataUpdateFlags.Uv2)
                    mesh.uv2 = m_textInfo.meshInfo[i].uvs2;

                //if ((flags & TMP_VertexDataUpdateFlags.Uv4) == TMP_VertexDataUpdateFlags.Uv4)
                //    mesh.uv4 = m_textInfo.meshInfo[i].uvs4;

                if ((flags & TMP_VertexDataUpdateFlags.Colors32) == TMP_VertexDataUpdateFlags.Colors32)
                    mesh.colors32 = m_textInfo.meshInfo[i].colors32;

                mesh.RecalculateBounds();
            }
        }


        /// <summary>
        /// Function to upload the updated vertex data and renderer.
        /// </summary>
        public override void UpdateVertexData()
        {
            int materialCount = m_textInfo.materialCount;

            for (int i = 0; i < materialCount; i++)
            {
                Mesh mesh;

                if (i == 0)
                    mesh = m_mesh;
                else
                {
                    // Clear unused vertices
                    m_textInfo.meshInfo[i].ClearUnusedVertices();

                    mesh = m_subTextObjects[i].mesh;
                }


                //mesh.MarkDynamic();
                mesh.vertices = m_textInfo.meshInfo[i].vertices;
                mesh.uv = m_textInfo.meshInfo[i].uvs0;
                mesh.uv2 = m_textInfo.meshInfo[i].uvs2;
                //mesh.uv4 = m_textInfo.meshInfo[i].uvs4;
                mesh.colors32 = m_textInfo.meshInfo[i].colors32;

                mesh.RecalculateBounds();
            }
        }

        public void UpdateFontAsset()
        {
            LoadFontAsset();
        }


        private bool m_currentAutoSizeMode;


        public void CalculateLayoutInputHorizontal() { }

        public void CalculateLayoutInputVertical() { }
    }
}
