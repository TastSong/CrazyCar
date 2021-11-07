using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AmazingAssets.WireframeShader.Example
{
    public class MaterialTryQuad : MonoBehaviour
    {
        public Material wireframeMaterial;

        public void OnUIToggleTryQuad(bool value)
        {
            if (wireframeMaterial != null)
            {
                if (value)
                    wireframeMaterial.EnableKeyword("WIREFRAME_TRY_QUAD_ON");
                else
                    wireframeMaterial.DisableKeyword("WIREFRAME_TRY_QUAD_ON");
            }
        }
    }
}
