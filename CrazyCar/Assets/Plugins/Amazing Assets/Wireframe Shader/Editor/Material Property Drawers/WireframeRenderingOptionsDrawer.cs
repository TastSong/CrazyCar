using UnityEngine;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeRenderingOptionsDrawer : WireframeMaterialBasePropertyDrawer
        {
            static string[] renderingOptionNames = new string[] { "Opaque",
                                                                  "Transparent/Simple", "Transparent/ZWrite", "Transparent/2 Sided",
                                                                  "Cutout/Simple", "Cutout/2 Sided",
                                                                  "Addative/Simple", "Addative/ZWrite",
                                                                  "Multiply/Simple", "Multiply/ZWrite" };
            static int[] renderingOptionValues = new int[] { 0,
                                                             1, 2, 3,
                                                             4, 5,
                                                             6, 7,
                                                             8, 9 };



            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);

                #region Keywords

                int renderingModeID = 0;
                for (int i = 1; i < renderingOptionNames.Length; i++)
                {
                    if (targetMaterial.shader.name.Contains(renderingOptionNames[i]))
                    {
                        renderingModeID = i;
                        break;
                    }
                }

                bool wireOnlyMode = targetMaterial.shader.name.Contains("Wire Only");



                EditorGUI.BeginChangeCheck();
                renderingModeID = EditorGUI.IntPopup(position, " ", renderingModeID, renderingOptionNames, renderingOptionValues);
                EditorGUI.LabelField(position, "Rendering Mode");

                if (renderingModeID != 0)
                {
                    wireOnlyMode = EditorGUILayout.Toggle("Render Only Wire", wireOnlyMode);
                }

                
               
                bool isUnlit = false;
                bool isODL = false;
                bool isPBR = false;


                string baseName = "Physically Based";
                if (targetMaterial.shader.name.Contains("Unlit"))
                {
                    baseName = "Unlit";
                    isUnlit = true;
                }
                else if (targetMaterial.shader.name.Contains("One Directional Light"))
                {
                    baseName = "One Directional Light";
                    isODL = true;
                }
                else if (targetMaterial.shader.name.Contains("Physically Based"))
                {
                    baseName = "Physically Based";
                    isODL = true;
                }
                else if (targetMaterial.shader.name.Contains("Geometry Shader"))
                {
                    baseName = "Dynamic (SM5)/Geometry Shader";
                    isPBR = true;
                }
                else if (targetMaterial.shader.name.Contains("Tessellation"))
                {
                    baseName = "Dynamic (SM5)/Tessellation";
                    isPBR = true;
                }



                if (EditorGUI.EndChangeCheck())
                {
                    Shader newShader = null;

                    if (renderingModeID == 0)
                    {
                        string fullName = "";
                        if (isPBR)
                        {
                            if (targetMaterial.shader.name.Contains("Bumped"))
                                fullName = "/Opaque/Bumped";
                        }
                        else if(isODL)
                        {
                            bool isBumped = targetMaterial.shader.name.Contains("Bumped");
                            bool isSpecular = targetMaterial.shader.name.Contains("Specular");
                            if (isBumped && isSpecular)
                                fullName = "/Opaque/Bumped Specular";
                            else if (isBumped) fullName = "/Opaque/Bumped";
                            else if (isSpecular) fullName = "/Opaque/Specular";
                        }

                        fullName = (string.IsNullOrEmpty(fullName) ? "" : "Hidden/") + "Amazing Assets/Wireframe Shader/" + baseName + fullName;


                        newShader = Shader.Find(fullName);

                        if (newShader == null)
                            Debug.LogError(fullName);
                    }
                    else
                    {
                        string shaderName = "Hidden/Amazing Assets/Wireframe Shader/" + baseName + "/";

                        string fullName = "";
                        if (renderingModeID >= 6)   //Addative & Multiply
                        {
                            fullName = "Full";
                        }
                        else
                        {
                            if (isPBR)
                            {
                                fullName = "Diffuse";
                                if (targetMaterial.shader.name.Contains("Bumped"))
                                    fullName = "Bumped";
                            }
                            else if (isODL)
                            {
                                bool isBumped = targetMaterial.shader.name.Contains("Bumped");
                                bool isSpecular = targetMaterial.shader.name.Contains("Specular");
                                if (isBumped && isSpecular)
                                    fullName = "Bumped Specular";
                                else if (isBumped) fullName = "Bumped";
                                else if (isSpecular) fullName = "Specular";
                                else fullName = "Diffuse";
                            }
                            else if (isUnlit)
                            {
                                fullName = "Full";
                            }
                        }



                        shaderName += renderingOptionNames[renderingModeID] + "/" + (wireOnlyMode ? "Wire Only" : fullName);

                        newShader = Shader.Find(shaderName);

                        if (newShader == null)
                            Debug.LogWarning("Shader not found:/n" + shaderName + "/n");
                    }

                    if (newShader != null)
                    {
                        Undo.RecordObject(targetMaterial, "Change shader");

                        targetMaterial.shader = newShader;
                        UnityEditor.EditorUtility.SetDirty(editor);
                    }
                }

                if (renderingModeID == 0)
                    return;

                #endregion
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 18;
            }
        }
    }
}

