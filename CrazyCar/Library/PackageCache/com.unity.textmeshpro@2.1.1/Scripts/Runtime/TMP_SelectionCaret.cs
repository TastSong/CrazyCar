using UnityEngine;
using UnityEngine.UI;


namespace TMPro
{
    /// <summary>
    /// A simple component that can be added to a newly created object where inheriting from MaskableGraphic is needed.
    /// </summary>
    public class TMP_SelectionCaret : MaskableGraphic
    {
        /// <summary>
        /// Override to Cull function of MaskableGraphic to prevent Culling.
        /// </summary>
        /// <param name="clipRect"></param>
        /// <param name="validRect"></param>
        public override void Cull(Rect clipRect, bool validRect)
        {
            //Debug.Log("***** Cull (" + clipRect + ")   Valid Rect: " + validRect + "   Cull: " + canvasRenderer.cull + " *****");

            if (validRect)
            {
                canvasRenderer.cull = false;
                CanvasUpdateRegistry.RegisterCanvasElementForGraphicRebuild(this);
                return;
            }

            base.Cull(clipRect, validRect);
        }

        protected override void UpdateGeometry()
        {
            // Function overridden as Caret and text Selection Highlight is controlled by the Input Field.
        }
    }
}
