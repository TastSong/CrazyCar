using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;
using System.Collections.Generic;

namespace ReadyPlayerMe
{
    public class Postprocessor : AssetPostprocessor
    {
        static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
        {
            foreach (string item in importedAssets)
            {
                if (item.Contains("RPM_EditorImage_"))
                {
                    AvatarLoaderEditorWindow.ShowWindow(false);
                    UpdateAlwaysIncludedShaderList();
                    AddRpmDefineSymbol();
                    return;
                }
            }
        }

        #region Environment Settings

        private const string RPM_SYMBOL = "READY_PLAYER_ME";
        
        private static void AddRpmDefineSymbol()
        {
            var target = EditorUserBuildSettings.selectedBuildTargetGroup;
            var defineString = PlayerSettings.GetScriptingDefineSymbolsForGroup(target);
            var symbols = new HashSet<string>(defineString.Split(';')) { RPM_SYMBOL };
            var newDefineString = string.Join(";", symbols.ToArray());
            PlayerSettings.SetScriptingDefineSymbolsForGroup(target, newDefineString);
        }
        #endregion
        
        #region Animation Settings
        private const string AnimationAssetPath = "Assets/Plugins/Ready Player Me/Resources/Animations";

        private void OnPreprocessModel()
        {
            ModelImporter modelImporter = assetImporter as ModelImporter;
            UpdateAnimationFileSettings(modelImporter);
        }

        private void UpdateAnimationFileSettings(ModelImporter modelImporter)
        {
            void SetModelImportData()
            {
                if (modelImporter is null) return;
                modelImporter.useFileScale = false;
                modelImporter.animationType = ModelImporterAnimationType.Human;
            }

            if (assetPath.Contains(AnimationAssetPath))
            {
                SetModelImportData();
            }
        }
        #endregion

        #region Shader Settings
        private const string UrpAssetName = "UniversalRenderPipelineAsset";
        private const string IncludeShaderProperty = "m_AlwaysIncludedShaders";
        private const string GraphicsSettingPath = "ProjectSettings/GraphicsSettings.asset";

        private static readonly string[] AlwaysIncludeShader = new string[4];

        private static readonly string[] ShaderNames = {
            "Standard (Specular)",
            "Standard Transparent (Specular)",
            "Standard (Metallic)",
            "Standard Transparent (Metallic)"
        };

        private static string GetShaderRoot()
        {
            var pipeline = GraphicsSettings.renderPipelineAsset;
            return pipeline?.GetType().Name == UrpAssetName ? "GLTFUtility/URP" : "GLTFUtility";
        }

        private static void UpdateAlwaysIncludedShaderList()
        {
            for (int i = 0; i < AlwaysIncludeShader.Length; i++)
            {
                AlwaysIncludeShader[i] = $"{GetShaderRoot()}/{ShaderNames[i]}";
            }

            var graphicsSettings = AssetDatabase.LoadAssetAtPath<GraphicsSettings>(GraphicsSettingPath);
            var serializedGraphicsObject = new SerializedObject(graphicsSettings);
            var shaderIncludeArray = serializedGraphicsObject.FindProperty(IncludeShaderProperty);
            var includesShader = false;

            foreach (var includeShaderName in AlwaysIncludeShader)
            {
                var shader = Shader.Find(includeShaderName);
                if (shader == null)
                {
                    break;
                }

                for (int i = 0; i < shaderIncludeArray.arraySize; ++i)
                {
                    var shaderInArray = shaderIncludeArray.GetArrayElementAtIndex(i);
                    if (shader == shaderInArray.objectReferenceValue)
                    {
                        includesShader = true;
                        break;
                    }
                }

                if (!includesShader)
                {
                    int newArrayIndex = shaderIncludeArray.arraySize;
                    shaderIncludeArray.InsertArrayElementAtIndex(newArrayIndex);
                    var shaderInArray = shaderIncludeArray.GetArrayElementAtIndex(newArrayIndex);
                    shaderInArray.objectReferenceValue = shader;
                    serializedGraphicsObject.ApplyModifiedProperties();
                }
            }

            AssetDatabase.SaveAssets();
        }
        #endregion
    }
}
