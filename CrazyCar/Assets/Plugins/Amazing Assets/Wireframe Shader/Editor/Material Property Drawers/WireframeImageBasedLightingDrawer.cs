using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeImageBasedLightingDrawer : WireframeMaterialPropertyDrawer
        {
            public WireframeImageBasedLightingDrawer() : base(new string[] { "", "WIREFRAME_IMAGE_BASED_LIGHTING_ON" },
                                                         new string[] { "Off", "On" })
            {

            }
                        

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                int keywordID = DrawBaseGUI(position, "Image Based Lighting", editor);
                if (keywordID == 0)
                    return;


                #region Load
                MaterialProperty _Wireframe_IBL_Cube_Intensity = null;
                MaterialProperty _Wireframe_IBL_Cube_Contrast = null;
                MaterialProperty _Wireframe_IBL_Cube = null;
                MaterialProperty _Wireframe_IBL_Light_Strength = null;
                MaterialProperty _Wireframe_IBL_Roughness = null;
                
                LoadParameters(ref _Wireframe_IBL_Cube_Intensity, "_Wireframe_IBL_Cube_Intensity");
                LoadParameters(ref _Wireframe_IBL_Cube_Contrast, "_Wireframe_IBL_Cube_Contrast");
                LoadParameters(ref _Wireframe_IBL_Cube, "_Wireframe_IBL_Cube");
                LoadParameters(ref _Wireframe_IBL_Light_Strength, "_Wireframe_IBL_Light_Strength");
                LoadParameters(ref _Wireframe_IBL_Roughness, "_Wireframe_IBL_Roughness");
                #endregion


                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    editor.FloatProperty(_Wireframe_IBL_Cube_Intensity, "Intensity");
                    editor.FloatProperty(_Wireframe_IBL_Cube_Contrast, "Contrast");
                    editor.RangeProperty(_Wireframe_IBL_Light_Strength, "Strength");
                    editor.TextureProperty(_Wireframe_IBL_Cube, "Cubemap", false);                    
                }
         
                #endregion
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {                
                return 17;
            }
        }
    }
}