using UnityEngine;
using System.Collections.Generic;
using System.Linq;

using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeFresnelDrawer : WireframeMaterialPropertyDrawer
        {

            public WireframeFresnelDrawer() : base(new string[] { "", "WIREFRAME_FRESNEL_ON" }, new string[] { "Off", "On" })
            {

            }

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                int keywordID = DrawBaseGUI(position, "Fresnel", editor);
                if (keywordID == 0)
                    return;

               

                #region Load Properties
                MaterialProperty _Wireframe_FresnelInvert = null;
                MaterialProperty _Wireframe_FresnelBias = null;
                MaterialProperty _Wireframe_FresnelPow = null;

                LoadParameters(ref _Wireframe_FresnelInvert, "_Wireframe_FresnelInvert");
                LoadParameters(ref _Wireframe_FresnelPow, "_Wireframe_FresnelPow");
                LoadParameters(ref _Wireframe_FresnelBias, "_Wireframe_FresnelBias");
                #endregion


                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    bool isInvert = targetMaterial.GetInt("_Wireframe_FresnelInvert") == 0 ? false : true;
                    EditorGUI.BeginChangeCheck();
                    isInvert = EditorGUILayout.Toggle("Invert", isInvert);
                    if (EditorGUI.EndChangeCheck())
                    {
                        targetMaterial.SetFloat("_Wireframe_FresnelInvert", isInvert ? 1 : 0);
                    }

                    editor.RangeProperty(_Wireframe_FresnelBias, "Bias");

                    if (targetMaterial.shader.name.Contains("Unlit") == false &&
                        targetMaterial.shader.name.Contains("One Directional Light") == false)
                    {
                        editor.RangeProperty(_Wireframe_FresnelPow, "Power");
                    }
                   
                } 
                #endregion
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {                
                return 18;
            }
        }
    }
}