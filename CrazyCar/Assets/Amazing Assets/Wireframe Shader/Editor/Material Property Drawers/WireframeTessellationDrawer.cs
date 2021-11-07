using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeTessellationDrawer : WireframeMaterialBasePropertyDrawer
        {
            static string[] keywords = new string[] { "_", "WIREFRAME_TESSELLATION_DISTANCE_BASED", "WIREFRAME_TESSELLATION_EDGE_LENGTH" };
            static string[] keywordNames = new string[] { "Fixed", "Distance Based", "Edge Length" };
            static int[] intValues = new int[] { 0, 1, 2 };
            
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);


                #region Keywords
                int keywordID = 0;
                if (targetMaterial.shaderKeywords.Contains("WIREFRAME_TESSELLATION_DISTANCE_BASED")) keywordID = 1;
                else if (targetMaterial.shaderKeywords.Contains("WIREFRAME_TESSELLATION_EDGE_LENGTH")) keywordID = 2;

                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, " ", keywordID, keywordNames, intValues);
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Mode");
                if (EditorGUI.EndChangeCheck())
                {
                    Undo.RecordObject(targetMaterial, "Change tessellation type");
                    targetMaterial.SetFloat("_Wireframe_TessellationEnumID", keywordID);

                    ModifyKeyWords(keywords, keywords[keywordID]);
                }
                
                #endregion


                #region Load
                MaterialProperty _Wireframe_Tessellation = null;
                MaterialProperty _Wireframe_Tessellation_MinDistance = null;
                MaterialProperty _Wireframe_Tessellation_MaxDistance = null;
                MaterialProperty _Wireframe_Tessellation_EdgeLength = null;
                MaterialProperty _Wireframe_Tessellation_DispTex = null;
                MaterialProperty _Wireframe_Tessellation_DispTex_Scroll = null;
                MaterialProperty _Wireframe_Tessellation_DispStrength = null;

                LoadParameters(ref _Wireframe_Tessellation, "_Wireframe_Tessellation");
                LoadParameters(ref _Wireframe_Tessellation_MinDistance, "_Wireframe_Tessellation_MinDistance");
                LoadParameters(ref _Wireframe_Tessellation_MaxDistance, "_Wireframe_Tessellation_MaxDistance");
                LoadParameters(ref _Wireframe_Tessellation_EdgeLength, "_Wireframe_Tessellation_EdgeLength");
                LoadParameters(ref _Wireframe_Tessellation_DispTex, "_Wireframe_Tessellation_DispTex");
                LoadParameters(ref _Wireframe_Tessellation_DispTex_Scroll, "_Wireframe_Tessellation_DispTex_Scroll");
                LoadParameters(ref _Wireframe_Tessellation_DispStrength, "_Wireframe_Tessellation_DispStrength");
                #endregion


                #region Draw
                float scrollOffset = 54;

                switch (keywordID)
                {
                    case 0:
                        editor.RangeProperty(_Wireframe_Tessellation, "Tessellation");
                        break;

                    case 1:
                        editor.RangeProperty(_Wireframe_Tessellation, "Tessellation");
                        editor.FloatProperty(_Wireframe_Tessellation_MinDistance, "Min Distance");
                        editor.FloatProperty(_Wireframe_Tessellation_MaxDistance, "Max Distance");


                        if (_Wireframe_Tessellation_MinDistance.floatValue < 0)
                            _Wireframe_Tessellation_MinDistance.floatValue = 0;

                        if (_Wireframe_Tessellation_MinDistance.floatValue > _Wireframe_Tessellation_MaxDistance.floatValue)
                            _Wireframe_Tessellation_MaxDistance.floatValue = _Wireframe_Tessellation_MinDistance.floatValue;


                        if (_Wireframe_Tessellation_MaxDistance.floatValue < 0)
                            _Wireframe_Tessellation_MaxDistance.floatValue = 0;
                        if (_Wireframe_Tessellation_MaxDistance.floatValue < _Wireframe_Tessellation_MinDistance.floatValue)
                            _Wireframe_Tessellation_MinDistance.floatValue = _Wireframe_Tessellation_MaxDistance.floatValue;


                        scrollOffset += 36;
                        break; 

                    case 2:
                        editor.RangeProperty(_Wireframe_Tessellation_EdgeLength, "Edge Length");
                        break;
                }

                editor.TextureProperty(_Wireframe_Tessellation_DispTex, "Displace Texture (R)");
                editor.ShaderProperty(_Wireframe_Tessellation_DispTex_Scroll, string.Empty);
               

                editor.FloatProperty(_Wireframe_Tessellation_DispStrength, "Displacement Strength");

                #endregion

            }

            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 18;
            }
        }
    }
}