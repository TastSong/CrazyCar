using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeAmbientOcclusionDrawer : WireframeMaterialBasePropertyDrawer 
        {
            static string[] keywordNames = new string[] { "Off", "On" };
            static int[] intValues = new int[] { 0, 1 };
            
           
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);
             

                #region Load
                MaterialProperty _Wireframe_AmbientOcclusionStrength = null;
                MaterialProperty _Wireframe_AmbientOcclusionMap = null;

                LoadParameters(ref _Wireframe_AmbientOcclusionStrength, "_Wireframe_AmbientOcclusionStrength");
                LoadParameters(ref _Wireframe_AmbientOcclusionMap, "_Wireframe_AmbientOcclusionMap");
                #endregion

                int enabled = targetMaterial.GetFloat("_Wireframe_AmbientOcclusion") > 0.5f ? 1 : 0;
                EditorGUI.BeginChangeCheck();
                enabled = EditorGUI.IntPopup(position, " ", enabled, keywordNames, intValues);
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), "Ambient Occlusion");
                if (EditorGUI.EndChangeCheck())
                {
                    targetMaterial.SetFloat("_Wireframe_AmbientOcclusion", enabled);
                }

                #region Draw
                if (enabled == 1)
                {
                    using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                    {
                        editor.FloatProperty(_Wireframe_AmbientOcclusionStrength, "Strength");
                        if (_Wireframe_AmbientOcclusionStrength.floatValue < 0)
                            _Wireframe_AmbientOcclusionStrength.floatValue = 0;

                        editor.TextureProperty(_Wireframe_AmbientOcclusionMap, "Map", false);
                    }
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