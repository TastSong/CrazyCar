using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeLightInteractionDrawer : WireframeMaterialBasePropertyDrawer
        {
            static public string[] keywordNames = new string[] { "", "WIREFRAME_LIGHT_ATTENTION_ON" };


            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
               Init(editor);


                int keywordID = targetMaterial.shaderKeywords.Contains("WIREFRAME_LIGHT_ATTENTION_ON") ? 1 : 0;
              

                #region Keywords                

                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, "Light Attention", keywordID, new string[] { "Off", "On" }, new int[] { 0, 1 });

                if (EditorGUI.EndChangeCheck())
                {
                    Undo.RecordObject(targetMaterial, "Change lighting option");
                    targetMaterial.SetFloat("_Wireframe_IncludeLightEnumID", keywordID);

                    ModifyKeyWords(keywordNames, keywordNames[keywordID]);


                    #region Fixed Physically Based
                    if (targetMaterial.shader.name.Contains("The Amazing Wireframe/Physically Based/"))
                    {
                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped");
                        }
                    }
                    #endregion

                    #region Fixed Geometry Shader
                    if (targetMaterial.shader.name.Contains("The Amazing Wireframe/Dynamic (SM5)/Geometry Shader/"))
                    {
                        #region Geometry Shader
                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped");
                        }
                        #endregion
                    }
                    #endregion

                    #region Fixed Tessellation
                    if (targetMaterial.shader.name.Contains("The Amazing Wireframe/Dynamic (SM5)/Tessellation/"))
                    {
                        #region Geometry Shader
                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped");
                        }
                        #endregion
                    }
                    #endregion


                }
                else
                {
                    #region Fixed Physically Based
                    if (targetMaterial.shader.name.Contains("The Amazing Wireframe/Physically Based/"))
                    {
                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/Simple/Bumped");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Physically Based/Cutout/2 Sided/Bumped");
                        }
                    }
                    #endregion

                    #region Fixed Geometry Shader
                    if (targetMaterial.shader.name.Contains("The Amazing Wireframe/Dynamic (SM5)/Geometry Shader/"))
                    {
                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/Simple/Bumped");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Cutout/2 Sided/Bumped");
                        }
                    }
                    #endregion

                    #region Fixed Tessellation
                    if (targetMaterial.shader.name.Contains("The Amazing Wireframe/Dynamic (SM5)/Tessellation/"))
                    {
                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped" &&
                            keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/Simple/Bumped");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Diffuse");
                        }

                        if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped" &&
                           keywordID == 0)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped (Fixed)");
                        }
                        else if (targetMaterial.shader.name == "Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped (Fixed)" &&
                            keywordID == 1)
                        {
                            targetMaterial.shader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Tessellation/Cutout/2 Sided/Bumped");
                        }
                    }
                    #endregion
                }
                #endregion


                if (keywordID == 0)
                {
                    if (targetMaterial.shader.name.Contains("Physically Based") || targetMaterial.shader.name.Contains("Tessellation") || targetMaterial.shader.name.Contains("Geometry Shader"))
                    {
                        GUILayout.Space(3);
                        EditorGUILayout.HelpBox("Always enabled in deferred rendering path", MessageType.Warning);
                    }
                }
                    




                if (keywordID == 1 && targetMaterial.shader.name.Contains("Wire Only"))
                {
                    if (targetMaterial.shader.name.Contains("Physically Based") || targetMaterial.shader.name.Contains("Tessellation") || targetMaterial.shader.name.Contains("Geometry Shader"))
                    {
                        MaterialProperty _Glossiness = null;
                        MaterialProperty _Metallic = null;

                        LoadParameters(ref _Glossiness, "_Glossiness");
                        LoadParameters(ref _Metallic, "_Metallic");


                        using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                        {
                            editor.ShaderProperty(_Glossiness, "Smoothness");
                            editor.ShaderProperty(_Metallic, "Metallic");
                        }
                    }
                }
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 18;
            }
        }
    }
}