using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeBumpPBRDrawer : WireframeMaterialBasePropertyDrawer 
        {
            static string[] keywordNames = new string[] { "Off", "On" };
            static int[] intValues = new int[] { 0, 1 };
            
           
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);


                string shaderCoreName = "Physically Based";
                if (targetMaterial.shader.name.Contains("Geometry Shader"))
                    shaderCoreName = "Dynamic (SM5)/Geometry Shader";
                else if (targetMaterial.shader.name.Contains("Tessellation"))
                    shaderCoreName = "Dynamic (SM5)/Tessellation";


                #region Keywords
                int keywordID = targetMaterial.shader.name.Contains("Bumped") ? 1 : 0;

                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, " ", keywordID, keywordNames, intValues); 
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Bump");
                if (EditorGUI.EndChangeCheck())
                { 
                    Shader newShader = null;

                    if (targetMaterial.shader.name == "Amazing Assets/Wireframe Shader/" + shaderCoreName)
                    {
                        if(keywordID == 1)
                            newShader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/" + shaderCoreName + "/Opaque/Bumped");                        
                    }
                    else
                    {
                        string shaderName = targetMaterial.shader.name;
                        if (keywordID == 1)
                        {
                            shaderName = shaderName.Replace("Diffuse", "Bumped");
                                
                        }
                        else
                        {
                            shaderName = shaderName.Replace("Bumped", "Diffuse");
                        }

                        newShader = Shader.Find(shaderName);

                        //if (newShader == null)
                        //    Debug.LogWarning("Shader not found:/n" + shaderName + "/n");
                    }


                    if (newShader == null)
                        newShader = Shader.Find("Amazing Assets/Wireframe Shader/" + shaderCoreName);

                    if (newShader != null)
                    {
                        Undo.RecordObject(targetMaterial, "Change shader");

                        targetMaterial.shader = newShader;
                        UnityEditor.EditorUtility.SetDirty(editor);
                    }

                }

                if (keywordID == 0)
                    return;
                #endregion

                #region Load
                MaterialProperty _Wireframe_NormalScale = null;
                MaterialProperty _Wireframe_NormalMap = null;

                LoadParameters(ref _Wireframe_NormalScale, "_Wireframe_NormalScale");
                LoadParameters(ref _Wireframe_NormalMap, "_Wireframe_NormalMap");
                #endregion

                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    editor.FloatProperty(_Wireframe_NormalScale, "Scale");
                    editor.TextureProperty(_Wireframe_NormalMap, "Normal Map", false);
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