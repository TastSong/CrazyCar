using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeImprovedBlendDrawer : WireframeMaterialBasePropertyDrawer 
        {

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);


                #region Keywords
                int keywordID = targetMaterial.shader.name.Contains("Improved") ? 1 : 0;

                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, "Improved Edge Blending (2 Pass)", keywordID, new string[] { "Off", "On" }, new int[] { 0 , 1 });
                if (EditorGUI.EndChangeCheck())                    
                {
                    Shader newShader = null;
                    if (keywordID == 1)
                        newShader = Shader.Find(targetMaterial.shader.name + " Improved");
                    else
                        newShader = Shader.Find(targetMaterial.shader.name.Replace(" Improved", string.Empty));

                    if (newShader != null)
                    {
                        Undo.RecordObject(targetMaterial, "Change shader");

                        targetMaterial.shader = newShader;
                        UnityEditor.EditorUtility.SetDirty(editor);
                    }
                    
                }
                #endregion
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {                
                return 16;
            }
        }
    }
}