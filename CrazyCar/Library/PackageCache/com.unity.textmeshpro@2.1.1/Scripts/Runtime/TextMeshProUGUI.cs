using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;

#pragma warning disable 0414 // Disabled a few warnings related to serialized variables not used in this script but used in the editor.


namespace TMPro
{
    [DisallowMultipleComponent]
    [RequireComponent(typeof(RectTransform))]
    [RequireComponent(typeof(CanvasRenderer))]
    [AddComponentMenu("UI/TextMeshPro - Text (UI)", 11)]
    [ExecuteAlways]
    [HelpURL("https://docs.unity3d.com/Packages/com.unity.textmeshpro@2.1")]
    public partial class TextMeshProUGUI : TMP_Text, ILayoutElement
    {
        /// <summary>
        /// Get the material that will be used for rendering.
        /// </summary>
        public override Material materialForRendering
        {
            get { return TMP_MaterialManager.GetMaterialForRendering(this, m_sharedMaterial); }
        }


        /// <summary>
        /// Determines if the size of the text container will be adjusted to fit the text object when it is first created.
        /// </summary>
        public override bool autoSizeTextContainer
        {
            get { return m_autoSizeTextContainer; }

            set { if (m_autoSizeTextContainer == value) return; m_autoSizeTextContainer = value; if (m_autoSizeTextContainer) { CanvasUpdateRegistry.RegisterCanvasElementForLayoutRebuild(this); SetLayoutDirty(); } }
        }


        /// <summary>
        /// Reference to the Mesh used by the text object.
        /// </summary>
        public override Mesh mesh
        {
            get { return m_mesh; }
        }


        /// <summary>
        /// Reference to the CanvasRenderer used by the text object.
        /// </summary>
        public new CanvasRenderer canvasRenderer
        {
            get
            {
                if (m_canvasRenderer == null) m_canvasRenderer = GetComponent<CanvasRenderer>();

                return m_canvasRenderer;
            }
        }


        /// <summary>
        /// Anchor dampening prevents the anchor position from being adjusted unless the positional change exceeds about 40% of the width of the underline character. This essentially stabilizes the anchor position.
        /// </summary>
        //public bool anchorDampening
        //{
        //    get { return m_anchorDampening; }
        //    set { if (m_anchorDampening != value) { havePropertiesChanged = true; m_anchorDampening = value; /* ScheduleUpdate(); */ } }
        //}

        #if !UNITY_2019_3_OR_NEWER
        [SerializeField]
        private bool m_Maskable = true;
        #endif

        private bool m_isRebuildingLayout = false;
        private Coroutine m_DelayedGraphicRebuild;
        private Coroutine m_DelayedMaterialRebuild;

        /// <summary>
        /// Function called by Unity when the horizontal layout needs to be recalculated.
        /// </summary>
        public void CalculateLayoutInputHorizontal()
        {
            //Debug.Log("*** CalculateLayoutHorizontal() on Object ID: " + GetInstanceID() + " at frame: " + Time.frameCount + "***");
        }


        /// <summary>
        /// Function called by Unity when the vertical layout needs to be recalculated.
        /// </summary>
        public void CalculateLayoutInputVertical()
        {
            //Debug.Log("*** CalculateLayoutInputVertical() on Object ID: " + GetInstanceID() + " at frame: " + Time.frameCount + "***");
        }


        public override void SetVerticesDirty()
        {
            if (this == null || !this.IsActive())
                return;

            if (CanvasUpdateRegistry.IsRebuildingGraphics())
            {
                if (m_DelayedGraphicRebuild == null)
                    m_DelayedGraphicRebuild = StartCoroutine(DelayedGraphicRebuild());

                return;
            }

            CanvasUpdateRegistry.RegisterCanvasElementForGraphicRebuild((ICanvasElement)this);

            if (m_OnDirtyVertsCallback != null)
                m_OnDirtyVertsCallback();
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

            if (m_OnDirtyLayoutCallback != null)
                m_OnDirtyLayoutCallback();
        }


        /// <summary>
        ///
        /// </summary>
        public override void SetMaterialDirty()
        {
            if (this == null || !this.IsActive())
                return;

            if (CanvasUpdateRegistry.IsRebuildingGraphics())
            {
                if (m_DelayedMaterialRebuild == null)
                    m_DelayedMaterialRebuild = StartCoroutine(DelayedMaterialRebuild());

                return;
            }

            m_isMaterialDirty = true;
            CanvasUpdateRegistry.RegisterCanvasElementForGraphicRebuild((ICanvasElement)this);

            if (m_OnDirtyMaterialCallback != null)
                m_OnDirtyMaterialCallback();
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
        /// Delay registration of text object for graphic rebuild by one frame.
        /// </summary>
        /// <returns></returns>
        IEnumerator DelayedGraphicRebuild()
        {
            yield return null;

            CanvasUpdateRegistry.RegisterCanvasElementForGraphicRebuild(this);

            if (m_OnDirtyVertsCallback != null)
                m_OnDirtyVertsCallback();
        }


        /// <summary>
        /// Delay registration of text object for graphic rebuild by one frame.
        /// </summary>
        /// <returns></returns>
        IEnumerator DelayedMaterialRebuild()
        {
            yield return null;

            m_isMaterialDirty = true;
            CanvasUpdateRegistry.RegisterCanvasElementForGraphicRebuild(this);

            if (m_OnDirtyMaterialCallback != null)
                m_OnDirtyMaterialCallback();
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
                OnPreRenderCanvas();

                if (!m_isMaterialDirty) return;

                UpdateMaterial();
                m_isMaterialDirty = false;
            }
        }


        /// <summary>
        /// Method to keep the pivot of the sub text objects in sync with the parent pivot.
        /// </summary>
        private void UpdateSubObjectPivot()
        {
            if (m_textInfo == null) return;

            for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
            {
                m_subTextObjects[i].SetPivotDirty();
            }
            //m_isPivotDirty = false;
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="baseMaterial"></param>
        /// <returns></returns>
        public override Material GetModifiedMaterial(Material baseMaterial)
        {
            Material mat = baseMaterial;

            if (m_ShouldRecalculateStencil)
            {
                var rootCanvas = MaskUtilities.FindRootSortOverrideCanvas(transform);
                m_StencilValue = maskable ? MaskUtilities.GetStencilDepth(transform, rootCanvas) : 0;
                m_ShouldRecalculateStencil = false;
            }

            if (m_StencilValue > 0)
            {
                var maskMat = StencilMaterial.Add(mat, (1 << m_StencilValue) - 1, StencilOp.Keep, CompareFunction.Equal, ColorWriteMask.All, (1 << m_StencilValue) - 1, 0);
                StencilMaterial.Remove(m_MaskMaterial);
                m_MaskMaterial = maskMat;
                mat = m_MaskMaterial;
            }

            return mat;
        }


        /// <summary>
        ///
        /// </summary>
        protected override void UpdateMaterial()
        {
            //Debug.Log("*** UpdateMaterial() ***");

            //if (!this.IsActive())
            //    return;

            if (m_sharedMaterial == null || canvasRenderer == null) return;

            m_canvasRenderer.materialCount = 1;
            m_canvasRenderer.SetMaterial(materialForRendering, 0);
            //m_canvasRenderer.SetTexture(m_sharedMaterial.mainTexture);
        }


        //public override void OnRebuildRequested()
        //{
        //    //Debug.Log("OnRebuildRequested");

        //    base.OnRebuildRequested();
        //}



        //public override bool Raycast(Vector2 sp, Camera eventCamera)
        //{
        //    //Debug.Log("Raycast Event. ScreenPoint: " + sp);
        //    return base.Raycast(sp, eventCamera);
        //}


        // MASKING RELATED PROPERTIES
        /// <summary>
        /// Sets the masking offset from the bounds of the object
        /// </summary>
        public Vector4 maskOffset
        {
            get { return m_maskOffset; }
            set { m_maskOffset = value; UpdateMask(); m_havePropertiesChanged = true; }
        }


        //public override Material defaultMaterial
        //{
        //    get { Debug.Log("Default Material called."); return m_sharedMaterial; }
        //}



        //protected override void OnCanvasHierarchyChanged()
        //{
        //    //Debug.Log("OnCanvasHierarchyChanged...");
        //}


        // IClippable implementation
        /// <summary>
        /// Method called when the state of a parent changes.
        /// </summary>
        public override void RecalculateClipping()
        {
            //Debug.Log("***** RecalculateClipping() *****");

            base.RecalculateClipping();
        }


        // IMaskable Implementation
        /// <summary>
        /// Method called when Stencil Mask needs to be updated on this element and parents.
        /// </summary>
        // public override void RecalculateMasking()
        // {
        //     //Debug.Log("***** RecalculateMasking() *****");
        //
        //     this.m_ShouldRecalculateStencil = true;
        //     SetMaterialDirty();
        // }


        //public override void SetClipRect(Rect clipRect, bool validRect)
        //{
        //    //Debug.Log("***** SetClipRect (" + clipRect + ", " + validRect + ") *****");

        //    base.SetClipRect(clipRect, validRect);
        //}


        /// <summary>
        /// Override of the Cull function to provide for the ability to override the culling of the text object.
        /// </summary>
        /// <param name="clipRect"></param>
        /// <param name="validRect"></param>
        public override void Cull(Rect clipRect, bool validRect)
        {
            // Delay culling check in the event the text layout is dirty and geometry has to be updated.
            if (m_isLayoutDirty)
            {
                TMP_UpdateManager.RegisterTextElementForCullingUpdate(this);
                m_ClipRect = clipRect;
                m_ValidRect = validRect;
                return;
            }

            // Get compound rect for the text object and sub text objects in local canvas space.
            Rect rect = GetCanvasSpaceClippingRect();

            // No point culling if geometry bounds have no width or height.
            if (rect.width == 0 || rect.height == 0)
                return;

            var cull = !validRect || !clipRect.Overlaps(rect, true);
            if (m_canvasRenderer.cull != cull)
            {
                m_canvasRenderer.cull = cull;
                onCullStateChanged.Invoke(cull);
                OnCullingChanged();

                // Update any potential sub mesh objects
                for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
                {
                    m_subTextObjects[i].canvasRenderer.cull = cull;
                }
            }
        }

        private Rect m_ClipRect;
        private bool m_ValidRect;

        /// <summary>
        /// Internal function to allow delay of culling until the text geometry has been updated.
        /// </summary>
        internal override void UpdateCulling()
        {
            // Get compound rect for the text object and sub text objects in local canvas space.
            Rect rect = GetCanvasSpaceClippingRect();

            // No point culling if geometry bounds have no width or height.
            if (rect.width == 0 || rect.height == 0)
                return;

            var cull = !m_ValidRect || !m_ClipRect.Overlaps(rect, true);
            if (m_canvasRenderer.cull != cull)
            {
                m_canvasRenderer.cull = cull;
                onCullStateChanged.Invoke(cull);
                OnCullingChanged();

                // Update any potential sub mesh objects
                for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
                {
                    m_subTextObjects[i].canvasRenderer.cull = cull;
                }
            }
        }


        /*
        /// <summary>
        /// Sets the mask type
        /// </summary>
        public MaskingTypes mask
        {
            get { return m_mask; }
            set { m_mask = value; havePropertiesChanged = true; isMaskUpdateRequired = true; }
        }


        /// <summary>
        /// Set the masking offset mode (as percentage or pixels)
        /// </summary>
        public MaskingOffsetMode maskOffsetMode
        {
            get { return m_maskOffsetMode; }
            set { m_maskOffsetMode = value; havePropertiesChanged = true; isMaskUpdateRequired = true; }
        }
        */


        /*
        /// <summary>
        /// Sets the softness of the mask
        /// </summary>
        public Vector2 maskSoftness
        {
            get { return m_maskSoftness; }
            set { m_maskSoftness = value; havePropertiesChanged = true; isMaskUpdateRequired = true; }
        }


        /// <summary>
        /// Allows to move / offset the mesh vertices by a set amount
        /// </summary>
        public Vector2 vertexOffset
        {
            get { return m_vertexOffset; }
            set { m_vertexOffset = value; havePropertiesChanged = true; isMaskUpdateRequired = true; }
        }
        */


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
        /// Tweens the CanvasRenderer color associated with this Graphic.
        /// </summary>
        /// <param name="targetColor">Target color.</param>
        /// <param name="duration">Tween duration.</param>
        /// <param name="ignoreTimeScale">Should ignore Time.scale?</param>
        /// <param name="useAlpha">Should also Tween the alpha channel?</param>
        protected override void InternalCrossFadeColor(Color targetColor, float duration, bool ignoreTimeScale, bool useAlpha)
        {
            if (m_textInfo == null)
                return;

            int materialCount = m_textInfo.materialCount;

            for (int i = 1; i < materialCount; i++)
            {
                m_subTextObjects[i].CrossFadeColor(targetColor, duration, ignoreTimeScale, useAlpha);
            }
        }


        /// <summary>
        /// Tweens the alpha of the CanvasRenderer color associated with this Graphic.
        /// </summary>
        /// <param name="alpha">Target alpha.</param>
        /// <param name="duration">Duration of the tween in seconds.</param>
        /// <param name="ignoreTimeScale">Should ignore Time.scale?</param>
        protected override void InternalCrossFadeAlpha(float alpha, float duration, bool ignoreTimeScale)
        {
            if (m_textInfo == null)
                return;

            int materialCount = m_textInfo.materialCount;

            for (int i = 1; i < materialCount; i++)
            {
                m_subTextObjects[i].CrossFadeAlpha(alpha, duration, ignoreTimeScale);
            }
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

            // Special handling in the event the Canvas is only disabled
            if (m_canvas == null)
                m_canvas = GetComponentInParent<Canvas>();

            OnPreRenderCanvas();
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

            // Need to make sure we have a valid reference to a Canvas.
            if (m_canvas == null) m_canvas = this.canvas;

            GenerateTextMesh();

            m_renderMode = TextRenderFlags.Render;

            return this.textInfo;
        }


        /// <summary>
        /// Function to clear the geometry of the Primary and Sub Text objects.
        /// </summary>
        public override void ClearMesh()
        {
            m_canvasRenderer.SetMesh(null);

            for (int i = 1; i < m_subTextObjects.Length && m_subTextObjects[i] != null; i++)
                m_subTextObjects[i].canvasRenderer.SetMesh(null);

            //if (m_linkedTextComponent != null)
            //   m_linkedTextComponent.ClearMesh();
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

            if (index == 0)
            {
                m_canvasRenderer.SetMesh(mesh);
            }
            else
            {
                m_subTextObjects[index].canvasRenderer.SetMesh(mesh);
            }
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

                if (i == 0)
                    m_canvasRenderer.SetMesh(mesh);
                else
                    m_subTextObjects[i].canvasRenderer.SetMesh(mesh);
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

                if (i == 0)
                    m_canvasRenderer.SetMesh(mesh);
                else
                    m_subTextObjects[i].canvasRenderer.SetMesh(mesh);
            }
        }


        public void UpdateFontAsset()
        {
            LoadFontAsset();
        }

    }
}
