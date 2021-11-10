using UnityEngine;
using System.Collections.Generic;
using System.Linq;

using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeTextureTransparencyDrawer : WireframeMaterialPropertyDrawer 
        {         
            public WireframeTextureTransparencyDrawer() : base(new string[] { "", "WIREFRAME_COLOR_TEXTURE_TRANSPARENCY_ON" }, new string[] { "Off", "On" })
            {

            }

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                int keywordID = DrawBaseGUI(position, "Use Color Texture Alpha", editor);
                if (keywordID == 0)
                    return;


                #region Load Properties
                MaterialProperty _Wireframe_TransparentTex_Alpha_Offset = null;
                
                LoadParameters(ref _Wireframe_TransparentTex_Alpha_Offset, "_Wireframe_TransparentTex_Alpha_Offset");
                #endregion


                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    bool isInvert = targetMaterial.GetInt("_Wireframe_TransparentTex_Invert") == 0 ? false : true;
                    EditorGUI.BeginChangeCheck();
                    isInvert = EditorGUILayout.Toggle("Invert", isInvert);
                    if(EditorGUI.EndChangeCheck())
                    {
                        Undo.RecordObject(targetMaterial, "Change shader");
                        targetMaterial.SetFloat("_Wireframe_TransparentTex_Invert", isInvert ? 1 : 0);
                    }

                    editor.RangeProperty(_Wireframe_TransparentTex_Alpha_Offset, "Value Offset");                    
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