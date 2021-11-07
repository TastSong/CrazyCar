using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeMaterialBasePropertyDrawer : MaterialPropertyDrawer
        {
            public Material targetMaterial;
            
            public void Init(MaterialEditor editor)
            {
                targetMaterial = editor.target as Material;
            }

            public void ModifyKeyWords(string[] _keywords, string _newKeyword)
            {
                List<string> newKeywords = targetMaterial.shaderKeywords.ToList();

                newKeywords = newKeywords.Except(_keywords).ToList();

                if (string.IsNullOrEmpty(_newKeyword.Trim()) == false)
                    newKeywords.Add(_newKeyword);

                targetMaterial.shaderKeywords = newKeywords.ToArray();
            }

            public void LoadParameters(ref MaterialProperty _prop, string _name)
            {
                Material[] mats = new Material[] { targetMaterial };

                _prop = MaterialEditor.GetMaterialProperty(mats, _name);
            }
        }
    }
}