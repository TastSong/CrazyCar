using System;
using System.Linq;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


namespace AmazingAssets
{
    namespace WireframeShader
    {
        public static class EditorUtilities
        {
            public enum EXTENSTION { cginc, 
                                     UnityShaderGraphCore, UnityShaderGraphMaskPlane, UnityShaderGraphMaskSphere, UnityShaderGraphMaskBox, UnityShaderGraphDistanceFade,
                                     AmplifyShaderEditorCore, AmplifyShaderEditorMaskPlane, AmplifyShaderEditorMaskSphere, AmplifyShaderEditorMaskBox, AmplifyShaderEditorDistanceFade
                                    }
            public enum RENDER_PIPELINE { Builtin, Universal, HighDefinition }


            public static string version = " ";
            public static string assetStorePath = " ";
            public static string assetStorePathShortLink = " ";
            public static string assetForumPath = " ";
            public static string assetSupportMail = " ";



            static string wireframeShaderEditorFolderPath;
            static string wireframeShaderCGINCFilePath;

            static string amplifyShaderEditorWindowPath;


            static public string GetWireframeShaderEditorFolderPath()
            {
                if (string.IsNullOrEmpty(wireframeShaderEditorFolderPath))
                {
                    wireframeShaderEditorFolderPath = Path.Combine(AmazingAssets.EditorUtility.GetAmazingAssetsFolderPath(), "Wireframe Shader");
                }

                return wireframeShaderEditorFolderPath;
            }

            static public string GetWireframeShaderCGINCFilePath()
            {
                if (string.IsNullOrEmpty(wireframeShaderCGINCFilePath) || File.Exists(wireframeShaderCGINCFilePath) == false)
                {
                    wireframeShaderCGINCFilePath = GetWireframeShaderEditorFolderPath();

                    wireframeShaderCGINCFilePath = Path.Combine(wireframeShaderCGINCFilePath, "Shaders");
                    wireframeShaderCGINCFilePath = Path.Combine(wireframeShaderCGINCFilePath, "cginc");
                    wireframeShaderCGINCFilePath = Path.Combine(wireframeShaderCGINCFilePath, "WireframeShader");
                    wireframeShaderCGINCFilePath += ".cginc";
                }

                return wireframeShaderCGINCFilePath;
            }

            static public string GetWireframeShaderCGINCFilePathForShader()
            {
                string pathToTransformCGINC = "\"" + GetWireframeShaderCGINCFilePath() + "\"";
                pathToTransformCGINC = pathToTransformCGINC.Replace(Path.DirectorySeparatorChar, '/');
                pathToTransformCGINC = pathToTransformCGINC.Replace('\\', '/');

                return "#include " + pathToTransformCGINC;
            }

            static public string GetSubGraphFileLocation(EXTENSTION extenstion)
            {
                switch (extenstion)
                {
                    case EXTENSTION.cginc: 
                        return GetWireframeShaderCGINCFilePath();

                    case EXTENSTION.UnityShaderGraphCore: 
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Unity Shader Graph", "Read Wireframe.shadersubgraph");                        
                    case EXTENSTION.UnityShaderGraphMaskPlane:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Unity Shader Graph", "Mask (Plane).shadersubgraph");                      
                    case EXTENSTION.UnityShaderGraphMaskSphere:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Unity Shader Graph", "Mask (Sphere).shadersubgraph");
                    case EXTENSTION.UnityShaderGraphMaskBox:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Unity Shader Graph", "Mask (Box).shadersubgraph");
                    case EXTENSTION.UnityShaderGraphDistanceFade:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Unity Shader Graph", "Distance Fade.shadersubgraph");

                    case EXTENSTION.AmplifyShaderEditorCore:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Amplify Shader Editor", "Read Wireframe.asset");
                    case EXTENSTION.AmplifyShaderEditorMaskPlane:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Amplify Shader Editor", "Mask (Plane).asset");
                    case EXTENSTION.AmplifyShaderEditorMaskSphere:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Amplify Shader Editor", "Mask (Sphere).asset");
                    case EXTENSTION.AmplifyShaderEditorMaskBox:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Amplify Shader Editor", "Mask (Box).asset");
                    case EXTENSTION.AmplifyShaderEditorDistanceFade:
                        return Path.Combine(GetWireframeShaderEditorFolderPath(), "Shaders", "Amplify Shader Editor", "Distance Fade.asset");

                    default:
                        return string.Empty;
                }
            }

            static public RENDER_PIPELINE GetCurrentRenderPipeline()
            {
                var renderPipelineAsset = UnityEngine.Rendering.GraphicsSettings.renderPipelineAsset;

                if (renderPipelineAsset == null)
                    return RENDER_PIPELINE.Builtin;
                else
                {
                    if (renderPipelineAsset.name.Contains("Universal") || renderPipelineAsset.name.Contains("URP"))
                        return RENDER_PIPELINE.Universal;
                    else
                        return RENDER_PIPELINE.HighDefinition;
                }
            }

            static public bool IsPathProjectRelative(string path)
            {
                if (string.IsNullOrEmpty(path))
                    return false;


                if (path.IndexOf("Assets") == 0)
                    return true;


                path = path.Replace("\\", "/").Replace("\"", "/");
                return path.StartsWith(Application.dataPath);
            }

            static public bool ConvertFullPathToProjectRelative(string path, out string newPath)
            {
                if (string.IsNullOrEmpty(path))
                {
                    newPath = string.Empty;
                    return false;
                }


                if (path.IndexOf("Assets") == 0)
                {
                    newPath = path;
                    return true;
                }


                path = path.Replace("\\", "/").Replace("\"", "/");
                if (path.StartsWith(Application.dataPath))
                {
                    newPath = "Assets" + path.Substring(Application.dataPath.Length);
                    return true;
                }
                else
                {
                    newPath = path;
                    return false;
                }
            }
        }
    }
}