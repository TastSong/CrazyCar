using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeBumpODLDrawer : WireframeMaterialBasePropertyDrawer
        {
            static string[] keywordNames = new string[] { "Off", "On" };
            static int[] intValues = new int[] { 0, 1 };
            

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);


                #region Keywords
                int keywordID = targetMaterial.shader.name.Contains("Bumped") ? 1 : 0;

                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, " ", keywordID, keywordNames, intValues);
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Bump");
                if (EditorGUI.EndChangeCheck())
                {
                    Shader newShader = null;

                    if (targetMaterial.shader.name == "Amazing Assets/Wireframe Shader/One Directional Light")
                    {
                        if(keywordID == 1)
                            newShader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/One Directional Light/Opaque/Bumped");
                    }
                    else
                    {
                        string shaderName = targetMaterial.shader.name;
                        if (keywordID == 1)
                        {
                            if (targetMaterial.shader.name.Contains("Specular"))
                                shaderName = shaderName.Replace("Specular", "Bumped Specular");
                            else
                                shaderName = shaderName.Replace("Diffuse", "Bumped");
                        }
                        else
                        {
                            if (targetMaterial.shader.name.Contains("Specular"))
                                shaderName = shaderName.Replace("Bumped Specular", "Specular");
                            else
                                shaderName = shaderName.Replace("Bumped", "Diffuse");
                        }

                        newShader = Shader.Find(shaderName);
                    }


                    if (newShader == null)
                        newShader = Shader.Find("Amazing Assets/Wireframe Shader/One Directional Light");

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
                MaterialProperty _Wireframe_NormalMap = null;
                LoadParameters(ref _Wireframe_NormalMap, "_Wireframe_NormalMap");
                #endregion

                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    editor.TextureProperty(_Wireframe_NormalMap, "Normal Map", false);
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