using System.Collections;
using System.Collections.Generic;
using UnityEngine;



namespace AmazingAssets.WireframeShader.Example
{
    [ExecuteAlways]
    public class UpdateGlobalIllumination : MonoBehaviour
    {
        new public Renderer renderer;
        public Material wireframeMaterial;

        void Start()
        {
            if (UnityEngine.Rendering.GraphicsSettings.renderPipelineAsset != null)
            {
                //Dynamic globlal illumination is not supported in Universal and High Definition render pipelines, only in Built-in(Standard).

                this.gameObject.SetActive(false);
            }

        }


        public void OnUIColorChange(float value)
        {
            if (wireframeMaterial != null)
                wireframeMaterial.SetColor("_Wireframe_Color", Color.HSVToRGB(value, 1, 1));

            if (renderer != null)
                RendererExtensions.UpdateGIMaterials(renderer);
        }
    }
}