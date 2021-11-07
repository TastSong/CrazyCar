using UnityEngine;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeCurvedWorldTitleDrawer : MaterialPropertyDrawer 
        {
            static GUIStyle guiStyle = null;

            public override void OnGUI(Rect position, MaterialProperty prop, string label, MaterialEditor editor)
            {
                if (CanDraw(editor))
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
                        GUI.Label(position, "Curved World", guiStyle);
                    }
                }
            }


            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return CanDraw(editor) ? 22 : 0;
            }

            bool CanDraw(MaterialEditor editor)
            {
                return (editor.target as Material).HasProperty("_CurvedWorldBendSettings");
            }
        }
    }
}