using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        class WireframeSourceProjectorDrawer : WireframeMaterialBasePropertyDrawer
        {
            static string[] keywordSourceNames = new string[] { "Baked (Barycentric Coordinates)", "Dynamic (Geometry Shader)" };
            static int[] intValues = new int[] { 0, 1 };


            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);

                int shaderID = targetMaterial.shader.name.Contains("Geometry Shader") ? 1 : 0;


                EditorGUI.BeginChangeCheck();
                shaderID = EditorGUI.IntPopup(position, " ", shaderID, keywordSourceNames, intValues);
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Source");
                if (EditorGUI.EndChangeCheck())
                {
                    Shader newShader = null;
                    if (shaderID == 0)
                    {
                        newShader = Shader.Find("Amazing Assets/Wireframe Shader/Projector");                        
                    }
                    else if(shaderID == 1)
                        newShader = Shader.Find("Hidden/Amazing Assets/Wireframe Shader/Dynamic (SM5)/Geometry Shader/Projector");


                    if (newShader != null)
                    {
                        Undo.RecordObject(targetMaterial, "Change shader");
                        targetMaterial.shader = newShader;
                    }
                }
            }
        }
    }
}