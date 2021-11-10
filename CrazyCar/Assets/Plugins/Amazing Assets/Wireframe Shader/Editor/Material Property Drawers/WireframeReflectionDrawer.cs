using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeReflectionDrawer : WireframeMaterialPropertyDrawer
        {
            public WireframeReflectionDrawer() : base(new string[] { "", "WIREFRAME_REFLECTION_CUBE_SIMPLE", "WIREFRAME_REFLECTION_CUBE_ADVANED", "WIREFRAME_REFLECTION_UNITY_REFLECTION_PROBES" },
                                                     new string[] { "Off", "Cubemap (Simple)", "Cubemap (Advanced)", "Unity Reflection Probe" })
            {

            }

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {                        
                int keywordID = DrawBaseGUI(position, "Reflection", editor);
                if (keywordID == 0)
                    return;


                #region Load
                MaterialProperty _Cube = null;
                MaterialProperty _ReflectColor = null;
                MaterialProperty _Wireframe_Reflection_Strength = null;
                MaterialProperty _Wireframe_Reflection_Pow = null;
                MaterialProperty _Wireframe_Reflection_Fresnel_Bias = null;
                MaterialProperty _Wireframe_Reflection_Roughness = null;

                LoadParameters(ref _Cube, "_Cube");
                LoadParameters(ref _ReflectColor, "_ReflectColor");
                LoadParameters(ref _Wireframe_Reflection_Strength, "_Wireframe_Reflection_Strength");
                LoadParameters(ref _Wireframe_Reflection_Pow, "_Wireframe_Reflection_Pow");
                LoadParameters(ref _Wireframe_Reflection_Fresnel_Bias, "_Wireframe_Reflection_Fresnel_Bias");
                LoadParameters(ref _Wireframe_Reflection_Roughness, "_Wireframe_Reflection_Roughness");
                #endregion


                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    editor.ColorProperty(_ReflectColor, "Color (RGB)");
                    editor.RangeProperty(_Wireframe_Reflection_Strength, "Strength");

                    editor.RangeProperty(_Wireframe_Reflection_Fresnel_Bias, "Fresnel Bias");

                    if (keywordID == 1 || keywordID == 2)
                    {
                        editor.TextureProperty(_Cube, "Cubemap", false);

                        if (keywordID == 2)
                        {
                            if (_Cube.textureValue != null && ((Cubemap)_Cube.textureValue).mipmapCount == 1)
                                EditorGUILayout.HelpBox("Cubemap has no mipmaps.", MessageType.Warning);
                            
                            editor.RangeProperty(_Wireframe_Reflection_Roughness, "Roughness");
                        }
                    }
                    else if (keywordID == 3)
                    {
                        editor.RangeProperty(_Wireframe_Reflection_Roughness, "Roughness");
                    }
                }
                #endregion
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {                
                return 19;
            }
        }
    }
}