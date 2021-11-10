using System;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        internal class WireframeVector3Drawer : MaterialPropertyDrawer
        {
            protected bool positiveValuesOnly;

            // Draw the property inside the given rect
            public override void OnGUI(Rect position, MaterialProperty prop, String label, MaterialEditor editor)
            {
                // Setup
                Vector3 value = prop.vectorValue;


                EditorGUI.BeginChangeCheck();

                //Setup Editor
                EditorGUI.showMixedValue = prop.hasMixedValue;

                bool wideMode = UnityEditor.EditorGUIUtility.wideMode;
                UnityEditor.EditorGUIUtility.wideMode = true;

                float labelWidth = UnityEditor.EditorGUIUtility.labelWidth;
                UnityEditor.EditorGUIUtility.labelWidth = 0f;


                // Show control
                value = EditorGUI.Vector3Field(position, label, value);


                //Restore
                EditorGUI.showMixedValue = false;
                UnityEditor.EditorGUIUtility.wideMode = wideMode;
                UnityEditor.EditorGUIUtility.labelWidth = labelWidth;

                if (EditorGUI.EndChangeCheck())
                {
                    // Set the new value if it has changed
                    if (positiveValuesOnly)
                    {
                        if (value.x < 0) value.x = 0;
                        if (value.y < 0) value.y = 0;
                        if (value.z < 0) value.z = 0;
                    }

                    prop.vectorValue = value;
                }
            }

            public override float GetPropertyHeight(MaterialProperty prop, string label, MaterialEditor editor)
            {
                return base.GetPropertyHeight(prop, label, editor);
            }
        }

        internal class WireframeVector3PositiveDrawer : WireframeVector3Drawer
        {
            public WireframeVector3PositiveDrawer() : base()
            {
                positiveValuesOnly = true;
            }
        }
    }
}
