using UnityEngine;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframePositiveFloatDrawer : MaterialPropertyDrawer
        {
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {                                
                EditorGUI.BeginChangeCheck();
                prop.floatValue = EditorGUI.FloatField(position, label, prop.floatValue);
                if(EditorGUI.EndChangeCheck())
                {
                    if(prop.floatValue < 0)
                        prop.floatValue = 0;
                }
            }

            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 18;
            }
        }
    }
}