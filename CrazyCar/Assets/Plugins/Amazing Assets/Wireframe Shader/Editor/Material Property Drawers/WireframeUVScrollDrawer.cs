using UnityEngine;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        class WireframeUVScrollDrawer : WireframeMaterialBasePropertyDrawer
        {
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                Init(editor);

                position.xMin += 17;
                 position.width -= targetMaterial.shader.name.Contains("Standard") ? 52 : 66;
                position.yMin -= 4;

                Vector2 vector = prop.vectorValue;
                float labelWidth = 63;
                float left = position.x + labelWidth;
                float x = position.x + EditorGUI.indentLevel * 16f;

                Rect totalPosition = new Rect(x, position.y, labelWidth, 16f);
                Rect rect2 = new Rect(left, position.y, position.width - labelWidth, 16f);
                EditorGUI.PrefixLabel(totalPosition, new GUIContent(label + "Scroll"));

                EditorGUI.BeginChangeCheck();
                vector = EditorGUI.Vector2Field(rect2, GUIContent.none, vector);
                if (EditorGUI.EndChangeCheck())
                {
                    prop.vectorValue = vector;
                }
            }

            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 17;
            }
        }
    }
}