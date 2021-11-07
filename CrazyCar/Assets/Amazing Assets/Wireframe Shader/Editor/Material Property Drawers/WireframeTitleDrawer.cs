using UnityEngine;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeTitleDrawer : MaterialPropertyDrawer 
        {
            static GUIStyle guiStyle = null;

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                position.xMin += 1;
                position.height = 18;

                using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(UnityEditor.EditorGUIUtility.isProSkin ? Color.grey * 0.9f : Color.grey))
                {
                    if (guiStyle == null)
                    {
                        guiStyle = new GUIStyle(EditorStyles.boldLabel);
                        guiStyle.alignment = TextAnchor.MiddleCenter;
                        guiStyle.normal.textColor = Color.white * 0.9f;
                    }

                    GUI.Box(position, string.Empty);
                    GUI.Label(position, label, guiStyle);
                }
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return 22;
            }
        }
    }
}