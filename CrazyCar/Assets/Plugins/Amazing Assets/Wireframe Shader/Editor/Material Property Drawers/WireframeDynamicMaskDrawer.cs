using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeDynamicMaskDrawer : WireframeMaterialPropertyDrawer
        {

            public WireframeDynamicMaskDrawer() : base(new string[] { "", "WIREFRAME_DYNAMIC_MASK_PLANE", "WIREFRAME_DYNAMIC_MASK_SPHERE", "WIREFRAME_DYNAMIC_MASK_BOX" },
                                                       new string[] { "None", "Plane", "Sphere", "Box" })
            {

            }

            static string[] baseTexKeywords = new string[] { "", "WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON" };
            static string[] baseTexKeywordNames = new string[] { "Off", "On" };
            static int[] baseTexIntValues = new int[] { 0, 1 };



            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                int keywordID = DrawBaseGUI(position, "Type", editor);
                if (keywordID == 0)
                    return;
                

                #region Load                
                MaterialProperty _Wireframe_DynamicMaskEdgeSmooth = null;
                MaterialProperty _Wireframe_DynamicMaskInvert = null;
                MaterialProperty _Wireframe_DynamicMaskEffectsBaseTexInvert = null;

                
                LoadParameters(ref _Wireframe_DynamicMaskEdgeSmooth, "_Wireframe_DynamicMaskEdgeSmooth");
                LoadParameters(ref _Wireframe_DynamicMaskInvert, "_Wireframe_DynamicMaskInvert");
                LoadParameters(ref _Wireframe_DynamicMaskEffectsBaseTexInvert, "_Wireframe_DynamicMaskEffectsBaseTexInvert");
                #endregion


                #region Draw
                //0 - default, 1 - Invert
                bool isInvert = targetMaterial.GetFloat("_Wireframe_DynamicMaskInvert") > 0 ? true : false;

                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    EditorGUI.BeginChangeCheck();
                    editor.ShaderProperty(_Wireframe_DynamicMaskEdgeSmooth, "Edge Smooth");

                    isInvert = EditorGUILayout.Toggle("Invert", isInvert);
                    if (EditorGUI.EndChangeCheck())
                    {
                        if (_Wireframe_DynamicMaskEdgeSmooth.floatValue < 0)
                            _Wireframe_DynamicMaskEdgeSmooth.floatValue = 0;

                        targetMaterial.SetFloat("_Wireframe_DynamicMaskInvert", isInvert ? 1 : 0);
                    }
                }
               
                 

                if (targetMaterial.shader.name.Contains("Wire Only") == false)
                {
                    bool isStandardNonOpaque = false;
                    if (targetMaterial.shader.name.Contains("Standard")) //Only Cutout(1) and Fade(2)
                        isStandardNonOpaque = targetMaterial.GetFloat("_Mode") > 0.5f && targetMaterial.GetFloat("_Mode") < 2.5f;


                    if (targetMaterial.shader.name.Contains("Addative") ||
                        targetMaterial.shader.name.Contains("Multiply") ||
                        targetMaterial.shader.name.Contains("Transparent") ||
                        targetMaterial.shader.name.Contains("Cutout") ||
                        isStandardNonOpaque)
                    {
                        if (targetMaterial.HasProperty("_Wireframe_DynamicMaskEffectsBaseTexEnumID"))
                        {
                            int effectBaseTex = targetMaterial.shaderKeywords.Contains("WIREFRAME_DYNAMIC_MASK_BASE_TEX_ON") ? 1 : 0;

                            EditorGUI.BeginChangeCheck();
                            effectBaseTex = EditorGUILayout.IntPopup(" ", effectBaseTex, baseTexKeywordNames, baseTexIntValues);
                            EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Effect Base Texture");
                            if (EditorGUI.EndChangeCheck())
                            {
                                targetMaterial.SetFloat("_Wireframe_DynamicMaskEffectsBaseTexEnumID", effectBaseTex);

                                ModifyKeyWords(baseTexKeywords, baseTexKeywords[effectBaseTex == 0 ? 0 : 1]);
                            }

                            if (effectBaseTex == 1 && targetMaterial.shader.name.Contains("Standard") == false)
                            {
                                isInvert = targetMaterial.GetInt("_Wireframe_DynamicMaskEffectsBaseTexInvert") == 0 ? false : true;
                                EditorGUI.BeginChangeCheck();
                                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                                {
                                    isInvert = EditorGUILayout.Toggle("Invert", isInvert);
                                }
                                if (EditorGUI.EndChangeCheck())
                                {
                                    targetMaterial.SetFloat("_Wireframe_DynamicMaskEffectsBaseTexInvert", isInvert ? 1 : 0);
                                }
                            }
                        }
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