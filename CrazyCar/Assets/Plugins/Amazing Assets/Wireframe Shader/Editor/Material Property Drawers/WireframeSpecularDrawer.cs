using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeSpecularDrawer : WireframeMaterialBasePropertyDrawer 
        {
            static string[] keywordNames = new string[] { "Off", "On" };
            static int[] intValues = new int[] { 0, 1 };
                        


            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);

                #region Keywords
                int keywordID = targetMaterial.shader.name.Contains("Specular") ? 1 : 0;

                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, " ", keywordID, keywordNames, intValues);
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Specular");
                if (EditorGUI.EndChangeCheck())
                {
                    Shader newShader = null;

                    if (targetMaterial.shader.name == "Amazing Assets/Wireframe Shader/One Directional Light")
                    {
                        if(keywordID == 1)
                            newShader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/One Directional Light/Opaque/Specular");
                    }
                    else
                    {
                        string shaderName = targetMaterial.shader.name;
                        if (keywordID == 1)
                        {
                            if (targetMaterial.shader.name.Contains("Bumped"))
                                shaderName = shaderName.Replace("Bumped", "Bumped Specular");
                            else
                                shaderName = shaderName.Replace("Diffuse", "Specular");
                        }
                        else
                        {
                            if (targetMaterial.shader.name.Contains("Bumped"))
                                shaderName = shaderName.Replace("Bumped Specular", "Bumped");
                            else
                                shaderName = shaderName.Replace("Specular", "Diffuse");
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
                MaterialProperty _Wireframe_Specular_Lookup = null;
                LoadParameters(ref _Wireframe_Specular_Lookup, "_Wireframe_Specular_Lookup");
                #endregion

                #region Draw
                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                {
                    editor.TextureProperty(_Wireframe_Specular_Lookup, "Lookup map", false);
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