using UnityEngine;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeRenderingOptionsVertexLitDrawer : WireframeMaterialBasePropertyDrawer
        {
            static string[] renderingOptions = new string[] { "Opaque", "Transparent", "Cutout" };
            static int[] renderingOptionsValues = new int[] { 0, 1, 2 };

            enum RENDERING_MODE { Opaque, Transparent, Cutout }
            
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);


                #region Keywords
                RENDERING_MODE renderingModeID = RENDERING_MODE.Opaque;
                if (targetMaterial.shader.name.Contains("Transparent")) renderingModeID = RENDERING_MODE.Transparent;
                else if(targetMaterial.shader.name.Contains("Cutout")) renderingModeID = RENDERING_MODE.Cutout;

                bool wireOnlyMode = targetMaterial.shader.name.Contains("Wire Only");


                EditorGUI.BeginChangeCheck();
                renderingModeID = (RENDERING_MODE)EditorGUI.EnumPopup(position, " ", renderingModeID);
                EditorGUI.LabelField(position, "Rendering Mode");
               
                if(renderingModeID != 0)
                {
                    wireOnlyMode = EditorGUILayout.Toggle("Render Only Wire", wireOnlyMode);
                }

                if (EditorGUI.EndChangeCheck())
                {
                    Shader newShader = null;

                    if (renderingModeID == 0)
                        newShader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Vertex Lit");
                    else
                    {
                        string shaderName = "Hidden/Amazing Assets/Wireframe Shader/Vertex Lit/";

                        shaderName += renderingOptions[(int)renderingModeID] + "/";

                        shaderName += wireOnlyMode ? "Wire Only" : "Full";

                        newShader = Shader.Find(shaderName);
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