using UnityEditor;
using UnityEngine;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeHeaderDrawer : MaterialPropertyDrawer
        {
            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                position.y += 4;

                GUI.Label(position, label, EditorStyles.boldLabel);

                GUI.Box(new Rect(position.xMin, position.yMax - 4, position.width, 1), string.Empty);
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 26;
            }
        }
    }
}
