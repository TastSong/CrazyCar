using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeMaterialPropertyDrawer : WireframeMaterialBasePropertyDrawer
        {
            protected readonly string[] keywords;
            protected readonly string[] keywordNames;
            protected readonly int[] intValues;



            public WireframeMaterialPropertyDrawer(string[] keywords, string[] keywordNames)
            {
                this.keywords = keywords;
                this.keywordNames = keywordNames;

                this.intValues = new int[keywords.Length];
                for (int i = 0; i < keywords.Length; i++)
                {
                    this.intValues[i] = i;
                }
            }

            public int DrawBaseGUI(Rect position, string label, MaterialEditor editor)
            {
                Init(editor);


                int keywordID = KeywordIndex(targetMaterial.shaderKeywords);


                EditorGUI.BeginChangeCheck();
                keywordID = EditorGUI.IntPopup(position, " ", keywordID, keywordNames, intValues);
                EditorGUI.LabelField(GUILayoutUtility.GetLastRect(), label);
                if (EditorGUI.EndChangeCheck())
                {
                    Undo.RecordObject(targetMaterial, "Change" + label);

                    ModifyKeyWords(keywords, keywords[keywordID]);
                }

                return keywordID;
            }

            int KeywordIndex(string [] array)
            {
                for (int i = 0; i < keywords.Length; i++)
                {
                    for (int j = 0; j < array.Length; j++)
                    {
                        if (keywords[i] == array[j])
                            return i;
                    }
                }

                return 0;
            }
        }
    }
}