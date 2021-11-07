using System;
using System.Linq;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEngine.SceneManagement;
using System.Diagnostics;

namespace AmazingAssets
{
    namespace WireframeShader
    {
        public class WireframeShaderEditorWindow : EditorWindow
        {
            public enum TAB { GenerateMesh, GenerateTexture, ShaderGraphNodes, About }
            static string[] preferencesNames = new string[] { "Generate Mesh", "Generate Texture", "Shader Graph Nodes", "About" };

            enum SAVE_LOCATION { SameAsSourceAsset, SameAsSourceAssetButInSubfolder, CustomFolder }
            enum CONTEX_MENU_DATA { Reset, UseSelectedMesh, HighlightLastSavedFile, OpenSaveFolder }
            enum SAVE_MESH_DATA { Default, Custom }
            enum TEXTURE_SAVE_FORMAT { JPG, PNG, TGA }

            static char[] unsupported = new char[] { '\\', '|', '/', ':', '*', '?', '\'', '<', '>' };
            static string defaultSubFolderName = "Wireframe";



            //Generate Mesh
            Dictionary<string, List<Mesh>> generateMeshBatchObjects;
            int generateMeshBatchObjectsMeshCount = 0;
            static List<UnityEngine.Object> generateMeshPickerObjects;

            bool generateMeshNormalizeEdges = true;
            bool generateMeshTryQuad = false;

            SAVE_LOCATION generateMeshSaveLocation = SAVE_LOCATION.SameAsSourceAsset;
            string generateMeshSaveFolderCustomPath = string.Empty;
            string generateMeshLastSavedFilePath = string.Empty;
            string generateMeshFilePrefix = "Wireframe_";
            string generateMeshFileSuffix = string.Empty;
            string generateMeshSubfolderName = string.Empty;
            bool generateMeshRootObjectFolder = true;
            bool generateMeshReplaceSceneMeshes;

            ModelImporterMeshCompression generateMeshCompression = ModelImporterMeshCompression.Off;
            SAVE_MESH_DATA generateMeshSaveWithMesh = SAVE_MESH_DATA.Default;
            bool generateMeshOptimizeUV0 = true, generateMeshOptimizeUV2 = true, generateMeshOptimizeUV3 = true,  
                 generateMeshOptimizeUV5 = true, generateMeshOptimizeUV6 = true, generateMeshOptimizeUV7 = true, generateMeshOptimizeUV8 = true,
                 generateMeshOptimizeNormal = true, generateMeshOptimizeTangent = true, generateMeshOptimizeColor = true, generateMeshOptimizeSkin = true;
            static GUIContent[] generateMeshOptimizeNames = new GUIContent[] { new GUIContent("UV0"), new GUIContent("UV2"), new GUIContent("UV3"), new GUIContent("UV4", "Wireframe mesh data is saved in this UV4 buffer"),
                                                                               new GUIContent("UV5"), new GUIContent("UV6"), new GUIContent("UV7"), new GUIContent("UV8"),
                                                                               new GUIContent("Normal"), new GUIContent("Tangent"), new GUIContent("Color"), new GUIContent("Skin")};
           
            int generateMeshPickerID = 123456789;
            Vector2 generateMeshObjectsScroll;


            //Export Texture
            static int exportTexturePreviewResolution = 1024;
            static Texture2D exportTexturePreview = null;

            public Mesh exportTextureMesh;
            int exportTextureSubmesh = 0;
            bool exportTextureUseGeometryShader = true;
            bool exportTextureNormalizeEdges = true;
            bool exportTextureTryQuad = false;
            float exportTextureThickness = 0.01f;
            float exportTextureSmoothness = 0;
            float exportTextureDiameter = 1;
            int exportTextureSaveResolution = 1024;
            TEXTURE_SAVE_FORMAT exportTextureSaveFormat = TEXTURE_SAVE_FORMAT.PNG;
            string exportTextureLastSavedFilePath;


             
            //Editor
            TAB gTab;
            static bool isDataLoaded;
            static GUIStyle guiStyleOptionsHeader;
            static int guiStyleOptionsHeaderHeight = 0;

            static Vector2 scroll;
             
            static GUIStyle guiStyleButtonTab;
            static GUIStyle boxStyle;

            
            static Texture iconRemoveItem;            
            static Texture iconWireframe;
            static Texture iconDistanceFade;
            static Texture iconMaskPlane;
            static Texture iconMaskSphere;
            static Texture iconMaskBox;
            static Texture iconDocumentation;
            static Texture iconForum;
            static Texture iconSupport;
            static Texture iconRateAsset;



            [MenuItem("Window/Amazing Assets/Wireframe Shader", false, 311)]
            static public void ShowWindow()
            {
                EditorWindow window = EditorWindow.GetWindow(typeof(WireframeShaderEditorWindow));
                window.titleContent = new GUIContent("Wireframe Shader");

                window.minSize = new Vector2(630, 420);
            }

            void OnFocus()
            {
                UnityEditor.EditorUtility.ClearProgressBar();

                LoadEditorSettings();
            }

            void OnLostFocus()
            {
                SaveEditorSettings();
            }

            void OnDestroy()
            {
                if (exportTexturePreview != null)
                    DestroyImmediate(exportTexturePreview);

                isDataLoaded = false;
                SaveEditorSettings();
            }

            void OnGUI()
            {
                LoadResources();

                GUILayout.Space(10);
                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                {
                    GUILayout.Space(5);
                    DrawTabs();

                    GUILayout.Space(5);
                    scroll = EditorGUILayout.BeginScrollView(scroll);
                    DrawSelectedTabs();
                    EditorGUILayout.EndScrollView();
                }
            }


            void LoadResources()
            {
                if (generateMeshBatchObjects == null)
                    generateMeshBatchObjects = new Dictionary<string, List<Mesh>>();


                if (guiStyleOptionsHeader == null)
                {
                    guiStyleOptionsHeader = new GUIStyle((GUIStyle)"SettingsHeader");
                }

                if (guiStyleOptionsHeaderHeight == 0)
                    guiStyleOptionsHeaderHeight = Mathf.CeilToInt(guiStyleOptionsHeader.CalcSize(new GUIContent("Manage")).y);


                if (guiStyleButtonTab == null)
                    guiStyleButtonTab = new GUIStyle(GUIStyle.none);
                if (UnityEditor.EditorGUIUtility.isProSkin)
                    guiStyleButtonTab.normal.textColor = Color.white * 0.95f;

                if (boxStyle == null)
                    boxStyle = new GUIStyle("Box");


                if (iconRemoveItem == null)
                    iconRemoveItem = UnityEditor.EditorGUIUtility.IconContent("P4_DeletedLocal").image;

                if (iconWireframe == null)
                    iconWireframe = UnityEditor.EditorGUIUtility.IconContent("Mesh Icon").image;
                if (iconDistanceFade == null)
                    iconDistanceFade = UnityEditor.EditorGUIUtility.IconContent("DistanceJoint2D Icon").image;
                if (iconMaskPlane == null)
                    iconMaskPlane = UnityEditor.EditorGUIUtility.IconContent("PreMatQuad").image;
                if (iconMaskSphere == null)
                    iconMaskSphere = UnityEditor.EditorGUIUtility.IconContent("PreMatSphere@2x").image;
                if (iconMaskBox == null)
                    iconMaskBox = UnityEditor.EditorGUIUtility.IconContent("PreMatCube@2x").image;

                if (iconDocumentation == null)
                    iconDocumentation = UnityEditor.EditorGUIUtility.IconContent("vcs_document").image;
                if (iconForum == null)
                    iconForum = UnityEditor.EditorGUIUtility.IconContent("BuildSettings.Web.Small").image;
                if (iconSupport == null)
                    iconSupport = UnityEditor.EditorGUIUtility.IconContent("NetworkLobbyPlayer Icon").image;
                if (iconRateAsset == null)
                    iconRateAsset = UnityEditor.EditorGUIUtility.IconContent("Favorite").image;


                if (isDataLoaded == false)
                    LoadEditorSettings();
            }

            void ResetEditorSettings()
            {
                generateMeshNormalizeEdges = true;
                generateMeshTryQuad = false;
                generateMeshSaveLocation = SAVE_LOCATION.SameAsSourceAsset;
                generateMeshSaveFolderCustomPath = string.Empty;
                generateMeshRootObjectFolder = true;
                generateMeshLastSavedFilePath = string.Empty;
                generateMeshFilePrefix = "Wireframe_";
                generateMeshFileSuffix = string.Empty;
                generateMeshSubfolderName = string.Empty;
                generateMeshReplaceSceneMeshes = false;

                generateMeshCompression = ModelImporterMeshCompression.Off;
                generateMeshSaveWithMesh = SAVE_MESH_DATA.Default;

                generateMeshOptimizeUV0 = generateMeshOptimizeUV2 = generateMeshOptimizeUV3 = generateMeshOptimizeUV5 = generateMeshOptimizeUV6 = generateMeshOptimizeUV7 = generateMeshOptimizeUV8 = true;
                generateMeshOptimizeNormal = generateMeshOptimizeTangent = generateMeshOptimizeColor = generateMeshOptimizeSkin = true;


                exportTextureSubmesh = 0;
                exportTextureUseGeometryShader = true;
                exportTextureNormalizeEdges = true;
                exportTextureTryQuad = false;
                exportTextureThickness = 0.01f;
                exportTextureSmoothness = 0;
                exportTextureDiameter = 1;
                exportTextureSaveResolution = 1024;
                exportTextureSaveFormat = TEXTURE_SAVE_FORMAT.PNG;
                exportTextureLastSavedFilePath = string.Empty;
            }

            void SaveEditorSettings()
            {
                string saveData = string.Format("{0},{1},{2},{3},{4},{5},{6},{7},{8},{9},{10},{11},{12},{13},{14},{15},{16},{17},{18},{19},{20},{21},{22},{23},{24},{25},{26},{27},{28},{29},{30},{31},{32}",
                                                 generateMeshNormalizeEdges ? 1 : 0, generateMeshTryQuad ? 1 : 0,
                                                 (int)generateMeshSaveLocation, generateMeshSaveFolderCustomPath, generateMeshRootObjectFolder ? 1 : 0, generateMeshLastSavedFilePath, generateMeshFilePrefix, generateMeshFileSuffix, generateMeshSubfolderName, generateMeshReplaceSceneMeshes ? 1 : 0,
                                                 (int)generateMeshCompression, (int)generateMeshSaveWithMesh,
                                                 generateMeshOptimizeUV0 ? 1 : 0, generateMeshOptimizeUV2 ? 1 : 0, generateMeshOptimizeUV3 ? 1 : 0, generateMeshOptimizeUV5 ? 1 : 0, generateMeshOptimizeUV6 ? 1 : 0, generateMeshOptimizeUV7 ? 1 : 0, generateMeshOptimizeUV8 ? 1 : 0,
                                                 generateMeshOptimizeNormal ? 1 : 0, generateMeshOptimizeTangent ? 1 : 0, generateMeshOptimizeColor ? 1 : 0, generateMeshOptimizeSkin ? 1 : 0,

                                                 (int)exportTextureSubmesh, exportTextureUseGeometryShader ? 1 : 0, exportTextureNormalizeEdges ? 1 : 0, exportTextureTryQuad ? 1 : 0, exportTextureThickness.ToString("f6"), exportTextureSmoothness.ToString("f6"), exportTextureDiameter.ToString("f6"), 
                                                 (int)exportTextureSaveResolution, (int)exportTextureSaveFormat, exportTextureLastSavedFilePath);


                PlayerPrefs.SetString("WireframeMeshGeneratorEditor", saveData);
            }

            void LoadEditorSettings()
            {
                isDataLoaded = true;

                ResetEditorSettings();


                string key = PlayerPrefs.GetString("WireframeMeshGeneratorEditor", string.Empty);
                if (string.IsNullOrEmpty(key))
                    return;

                string[] data = key.Split(',');
                if (data.Length != 33)
                    return;


                int index = 0;
                int iOut;
                float fOut;
                 

                if (int.TryParse(data[index++], out iOut)) generateMeshNormalizeEdges = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshTryQuad = iOut == 1 ? true : false;

                if (int.TryParse(data[index++], out iOut)) generateMeshSaveLocation = (SAVE_LOCATION)iOut;
                generateMeshSaveFolderCustomPath = data[index++];
                if (int.TryParse(data[index++], out iOut)) generateMeshRootObjectFolder = iOut == 1 ? true : false;
                generateMeshLastSavedFilePath = data[index++];
                generateMeshFilePrefix = data[index++];
                generateMeshFileSuffix = data[index++];
                generateMeshSubfolderName = data[index++];
                if (int.TryParse(data[index++], out iOut)) generateMeshReplaceSceneMeshes = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshCompression = (ModelImporterMeshCompression)iOut;
                if (int.TryParse(data[index++], out iOut)) generateMeshSaveWithMesh = (SAVE_MESH_DATA)iOut;

                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV0 = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV2 = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV3 = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV5 = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV6 = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV7 = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeUV8 = iOut == 1 ? true : false;

                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeNormal = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeTangent = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeColor = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) generateMeshOptimizeSkin = iOut == 1 ? true : false;

                 
                if (int.TryParse(data[index++], out iOut)) exportTextureSubmesh = iOut;
                if (int.TryParse(data[index++], out iOut)) exportTextureUseGeometryShader = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) exportTextureNormalizeEdges = iOut == 1 ? true : false;
                if (int.TryParse(data[index++], out iOut)) exportTextureTryQuad = iOut == 1 ? true : false;
                if (float.TryParse(data[index++], out fOut)) exportTextureThickness = fOut;
                if (float.TryParse(data[index++], out fOut)) exportTextureSmoothness = fOut;
                if (float.TryParse(data[index++], out fOut)) exportTextureDiameter = fOut;
                if (int.TryParse(data[index++], out iOut)) exportTextureSaveResolution = iOut;
                if (int.TryParse(data[index++], out iOut)) exportTextureSaveFormat = (TEXTURE_SAVE_FORMAT)iOut;
                exportTextureLastSavedFilePath = data[index++];
            }
             
             
            void DrawTabs()
            {
                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(GUILayout.MaxWidth(100)))
                {

                    for (int i = 0; i < preferencesNames.Length; i++)
                    {
                        EditorGUILayout.LabelField(string.Empty);
                        Rect rc = GUILayoutUtility.GetLastRect();


                        EditorGUI.DrawRect(rc, gTab == (TAB)i ? (EditorWindow.focusedWindow == this ? GUI.skin.settings.selectionColor : (UnityEditor.EditorGUIUtility.isProSkin ? Color.white * 0.45f : Color.gray * 0.1f)) : Color.clear);
                        if (GUI.Button(rc, " " + preferencesNames[i], guiStyleButtonTab))
                        {
                            gTab = (TAB)i;
                        }
                    }


                    EditorGUI.DrawRect(new Rect(GUILayoutUtility.GetLastRect().xMax, 0, 1, this.position.height), Color.gray * 0.2f);
                }
            }

            void DrawSelectedTabs()
            {
                CatchContextMenu();


                EditorGUILayout.BeginVertical();

                switch (gTab)
                {
                    case TAB.GenerateMesh: DrawTab_GenerateMesh(); break;
                    case TAB.GenerateTexture: DrawTab_ExportTexture(); break;
                    case TAB.ShaderGraphNodes: DrawTab_ShaderGraphNodes(); break;
                    case TAB.About: Draw_AboutTab(); break;

                    default: break;
                }


                EditorGUILayout.EndVertical();
            }

            void DrawTab_GenerateMesh()
            {
                EditorGUILayout.LabelField(preferencesNames[(int)TAB.GenerateMesh], guiStyleOptionsHeader, GUILayout.Height(guiStyleOptionsHeaderHeight));
                GUILayout.Space(15);


                using (new AmazingAssets.EditorGUIUtility.GUILayoutBeginHorizontal())
                {
                    EditorGUILayout.LabelField(string.Empty, GUILayout.MaxWidth(1));

                    using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical())
                    {
                        MeshGeneratorDrawMeshObjcetsArray();

                        MeshGeneratorDrawSaveOptions();
                    }

                    EditorGUILayout.LabelField(string.Empty, GUILayout.MaxWidth(3));
                }

                MeshGeneratorDrawGenerateButton();



                CatchMeshDragAndDrop(TAB.GenerateMesh);

                if (generateMeshPickerObjects != null)
                {
                    AddMeshDrops(generateMeshPickerObjects.ToArray());

                    generateMeshPickerObjects.Clear();
                    generateMeshPickerObjects = null;
                }

                CatchMeshPicker();
            }  

            void DrawTab_ExportTexture()
            {
                EditorGUILayout.LabelField(preferencesNames[(int)TAB.GenerateTexture], guiStyleOptionsHeader, GUILayout.Height(guiStyleOptionsHeaderHeight));
                GUILayout.Space(15);


                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                {
                    //Source Mesh
                    EditorGUI.BeginChangeCheck();
                    exportTextureMesh = (Mesh)EditorGUILayout.ObjectField("Mesh", exportTextureMesh, typeof(Mesh), true);
                    if (EditorGUI.EndChangeCheck())
                    {
                        TextureExporterMeshChanged();
                    }

                    if (exportTextureMesh != null)
                    {
                        if (IsTextureExporterReady() && exportTextureMesh.subMeshCount > 1)
                        {
                            //Submesh
                            EditorGUI.BeginChangeCheck();
                            exportTextureSubmesh = EditorGUILayout.IntSlider("Submesh", exportTextureSubmesh, 0, exportTextureMesh.subMeshCount - 1);
                            if (EditorGUI.EndChangeCheck())
                            {
                                RedrawTextureExporterWindow();
                            }
                        }
                        else
                        {
                            using (new AmazingAssets.EditorGUIUtility.GUIEnabled(false))
                            {
                                EditorGUILayout.IntSlider("Submesh", 0, 0, 1);
                            }
                        }



                        using (new AmazingAssets.EditorGUIUtility.GUIEnabled(IsTextureExporterReady()))
                        {
                            GUILayout.Space(5);
                            EditorGUI.BeginChangeCheck();
                            int renderMode = exportTextureUseGeometryShader ? 1 : 0;
                            renderMode = EditorGUILayout.IntPopup("Render Mode", renderMode, new string[] { "Read From Mesh", "Use Geometry Shader" }, new int[] { 0, 1 });
                            exportTextureUseGeometryShader = renderMode == 1;


                            using (new AmazingAssets.EditorGUIUtility.GUIEnabled(exportTextureUseGeometryShader))
                            {
                                EditorGUILayout.LabelField("Wireframe Style");
                                Rect drawRect = UnityEngine.GUILayoutUtility.GetLastRect();
                                drawRect.xMin += UnityEditor.EditorGUIUtility.labelWidth;

                                using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor((IsTextureExporterReady() && exportTextureUseGeometryShader && exportTextureNormalizeEdges) ? Color.green : Color.white))
                                {
                                    exportTextureNormalizeEdges = GUI.Toggle(new Rect(drawRect.xMin + 2, drawRect.yMin, drawRect.width / 2f - 2, drawRect.height), exportTextureNormalizeEdges, "Normalize Edges", "Button");
                                }

                                using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor((IsTextureExporterReady() && exportTextureUseGeometryShader && exportTextureTryQuad) ? Color.green : Color.white))
                                {
                                    exportTextureTryQuad = GUI.Toggle(new Rect(drawRect.xMin + 2 + drawRect.width / 2f + 2, drawRect.yMin, drawRect.width / 2f - 4, drawRect.height), exportTextureTryQuad, "Try Quad", "Button");
                                }
                            }

                            exportTextureThickness = EditorGUILayout.Slider("Thickness", exportTextureThickness, 0, 1f);
                            exportTextureSmoothness = EditorGUILayout.Slider("Smoothness", exportTextureSmoothness, 0f, 1f);
                            exportTextureDiameter = EditorGUILayout.Slider("Diameter", exportTextureDiameter, 0f, 1);


                            if (EditorGUI.EndChangeCheck())
                            {
                                RedrawTextureExporterWindow();
                            }
                        }
                    }
                }
                 

                Rect rect = UnityEditor.EditorGUILayout.GetControlRect();


                if (IsTextureExporterReady())
                {
                    if (exportTexturePreview == null)
                    {
                        TextureExporterMeshChanged();
                        Repaint();
                    }
                    else
                    {                       
                        rect.yMin += 5;
                        rect.height = this.position.height - rect.yMax - 55;

                        //EditorGUI.LabelField(rect, string.Empty, string.Empty, "Box");
                        EditorGUI.LabelField(rect, string.Empty, EditorStyles.helpBox);


                        float offset = 5;
                        Rect textureRect = new Rect(rect.xMin + offset, rect.yMin + offset, rect.width - offset * 2, rect.height - offset * 2);
                        if(rect.width > rect.height)
                        {
                            float size = textureRect.height;
                            textureRect = new Rect(textureRect.xMin + textureRect.width / 2 - size / 2, textureRect.yMin, size, size);
                        }
                        else
                        {
                            float size = textureRect.width;
                            textureRect = new Rect(textureRect.xMin + textureRect.width / 2 - size / 2, textureRect.yMin + textureRect.height / 2 - size / 2, size, size);
                        }

                        EditorGUI.DrawPreviewTexture(textureRect, exportTexturePreview);
                        EditorGUI.TextField(new Rect(textureRect.xMin, textureRect.yMax - 24, textureRect.width, 20), textureRect.width + " x " + textureRect.height, EditorStyles.centeredGreyMiniLabel);
                 



                        string buttonName = "Generate Wireframe Texture";
                        if (exportTextureMesh != null && exportTextureMesh.subMeshCount > 1)
                            buttonName = "Generate (" + exportTextureMesh.subMeshCount + ") Wireframe Textures";



                        if (GUI.Button(new Rect(rect.xMin, this.position.height - 59, rect.width - 65, 40), buttonName))
                        {
                            string savePath = exportTextureLastSavedFilePath;
                            savePath = UnityEditor.EditorUtility.SaveFilePanel("Save Texture", string.IsNullOrEmpty(exportTextureLastSavedFilePath) ? Application.dataPath : System.IO.Path.GetDirectoryName(exportTextureLastSavedFilePath), exportTextureMesh.name, exportTextureSaveFormat.ToString().ToLower());

                            if (string.IsNullOrEmpty(savePath) == false)
                            {                                 

                                for (int i = 0; i < exportTextureMesh.subMeshCount; i++)
                                {
                                    Texture2D saveTexture = exportTextureMesh.GenerateWireframeTexture(exportTextureUseGeometryShader, i, exportTextureNormalizeEdges, exportTextureTryQuad, exportTextureThickness, exportTextureSmoothness, exportTextureDiameter, exportTextureSaveResolution);

                                    string savefileName = savePath;
                                    if (exportTextureMesh.subMeshCount > 1)
                                        savefileName = savePath.Substring(0, savePath.Length - 4) + "_Submesh_" + (i + 1) + "." + exportTextureSaveFormat.ToString().ToLower();

                                    if (saveTexture)
                                    { 
                                        switch (exportTextureSaveFormat)
                                        {
                                            case TEXTURE_SAVE_FORMAT.JPG: System.IO.File.WriteAllBytes(savefileName, saveTexture.EncodeToJPG()); break;
                                            case TEXTURE_SAVE_FORMAT.PNG: System.IO.File.WriteAllBytes(savefileName, saveTexture.EncodeToPNG()); break;
                                            case TEXTURE_SAVE_FORMAT.TGA: System.IO.File.WriteAllBytes(savefileName, saveTexture.EncodeToTGA()); break;
                                        }

                                        DestroyImmediate(saveTexture);
                                    }


                                    exportTextureLastSavedFilePath = savefileName;
                                }
                                  
                                
                                Repaint();

                                AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
                            }

                            SaveEditorSettings();
                        }


                        exportTextureSaveResolution = EditorGUI.IntPopup(new Rect(rect.width - 60, this.position.height - 59, 60, 18), exportTextureSaveResolution, new string[] { "32", "64", "128", "256", "512", "1024", "2048", "4096", "8192" }, new int[] { 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192 });
                        exportTextureSaveFormat = (TEXTURE_SAVE_FORMAT)EditorGUI.EnumPopup(new Rect(rect.width - 60, this.position.height - 59 + 21, 60, 18), exportTextureSaveFormat);
                    }
                }
                else
                {
                    GUILayout.Space(-19);
                    EditorGUILayout.HelpBox("Drag and drop Mesh asset from Hierarchy and Project windows here.", MessageType.Info);
                }
            }

            void DrawTab_ShaderGraphNodes()
            {
                EditorGUILayout.LabelField(preferencesNames[(int)TAB.ShaderGraphNodes], guiStyleOptionsHeader, GUILayout.Height(guiStyleOptionsHeaderHeight));
                GUILayout.Space(15);


                bool smallWindow = this.position.width < 810;


                //Hand Written
                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                {
                    EditorGUILayout.LabelField("Hand Written", EditorStyles.miniLabel);
                  // using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                    {
                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.ObjectField("CGINC File", AssetDatabase.LoadAssetAtPath(EditorUtilities.GetWireframeShaderCGINCFilePath(), typeof(UnityEngine.Object)), typeof(UnityEngine.Object), false);

                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(GUI.skin.settings.selectionColor))
                            {
                                if (GUILayout.Button("Copy Path", GUILayout.MaxWidth(100)))
                                {
                                    TextEditor te = new TextEditor();
                                    te.text = EditorUtilities.GetWireframeShaderCGINCFilePathForShader();
                                    te.SelectAll();
                                    te.Copy();
                                }
                            }
                        }

                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.TextField("Read Wireframe", "WireframeShaderReadTrangleMassFromUV");

                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(GUI.skin.settings.selectionColor))
                            {
                                if (GUILayout.Button("Copy", GUILayout.MaxWidth(100)))
                                {
                                    TextEditor te = new TextEditor();
                                    te.text = "WireframeShaderReadTrangleMassFromUV(/*float3*/ uv, /*float*/ thickness, /*float*/ smoothness, /*float*/ diameter)";
                                    te.SelectAll();
                                    te.Copy();
                                }
                            }
                        }

                        GUILayout.Space(5);
                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.TextField("Distance Fade", "WireframeShaderDistanceFade");

                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(GUI.skin.settings.selectionColor))
                            {
                                if (GUILayout.Button("Copy", GUILayout.MaxWidth(100)))
                                {
                                    TextEditor te = new TextEditor();
                                    te.text = "WireframeShaderDistanceFade(/*float3*/ cameraPositionWS, /*float3*/ vertexPositionWS, /*float*/ startDistance, /*float*/ endDistance)";
                                    te.SelectAll();
                                    te.Copy();
                                }
                            }
                        }

                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.TextField("Mask Plane", "WireframeShaderMaskPlane");

                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(GUI.skin.settings.selectionColor))
                            {
                                if (GUILayout.Button("Copy", GUILayout.MaxWidth(100)))
                                {
                                    TextEditor te = new TextEditor();
                                    te.text = "WireframeShaderMaskPlane(/*float3*/ vertexPositionWS, /*float*/ edgeFalloff, /*float*/ invert)";
                                    te.SelectAll();
                                    te.Copy();
                                }
                            }
                        }

                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.TextField("Mask Sphere", "WireframeShaderMaskSphere");

                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(GUI.skin.settings.selectionColor))
                            {
                                if (GUILayout.Button("Copy", GUILayout.MaxWidth(100)))
                                {
                                    TextEditor te = new TextEditor();
                                    te.text = "WireframeShaderMaskSphere(/*float3*/ vertexPositionWS, /*float*/ edgeFalloff, /*float*/ invert)";
                                    te.SelectAll();
                                    te.Copy();
                                }
                            }
                        }

                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.TextField("Mask Box", "WireframeShaderMaskBox");

                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(GUI.skin.settings.selectionColor))
                            {
                                if (GUILayout.Button("Copy", GUILayout.MaxWidth(100)))
                                {
                                    TextEditor te = new TextEditor();
                                    te.text = "WireframeShaderMaskBox(/*float3*/ vertexPositionWS, /*float*/ edgeFalloff, /*float*/ invert)";
                                    te.SelectAll();
                                    te.Copy();
                                }
                            }
                        }
                    }
                }

                //Unity Shader Graph
                GUILayout.Space(5);
                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                {
                    EditorGUILayout.LabelField("Unity Shader Graph", EditorStyles.miniLabel);

                    using (new AmazingAssets.EditorGUIUtility.GUIEnabled(EditorUtilities.GetCurrentRenderPipeline() != EditorUtilities.RENDER_PIPELINE.Builtin))
                    {
                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            if (GUILayout.Button(new GUIContent(" Read Wireframe", iconWireframe), GUILayout.MaxHeight(24)))
                            {
                                string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.UnityShaderGraphCore);

                                if (File.Exists(subGrapFileLocation))
                                {
                                    PingObject(subGrapFileLocation);
                                }
                            }

                            GUILayout.Space(1);
                            if (GUILayout.Button(new GUIContent("Distance Fade", iconDistanceFade), GUILayout.MaxHeight(24)))
                            {
                                string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.UnityShaderGraphDistanceFade);

                                if (File.Exists(subGrapFileLocation))
                                {
                                    PingObject(subGrapFileLocation);
                                }
                            }



                            if (smallWindow)
                                EditorGUILayout.BeginVertical();

                            GUILayout.Space(1);
                            if (GUILayout.Button(new GUIContent(" Mask Plane", iconMaskPlane), GUILayout.MaxHeight(24)))
                            {
                                string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.UnityShaderGraphMaskPlane);

                                if (File.Exists(subGrapFileLocation))
                                {
                                    PingObject(subGrapFileLocation);
                                }
                            }

                            if (GUILayout.Button(new GUIContent(" Mask Sphere", iconMaskSphere), GUILayout.MaxHeight(24)))
                            {
                                string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.UnityShaderGraphMaskSphere);

                                if (File.Exists(subGrapFileLocation))
                                {
                                    PingObject(subGrapFileLocation);
                                }
                            }

                            if (GUILayout.Button(new GUIContent(" Mask Box", iconMaskBox), GUILayout.MaxHeight(24)))
                            {
                                string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.UnityShaderGraphMaskBox);

                                if (File.Exists(subGrapFileLocation))
                                {
                                    PingObject(subGrapFileLocation);
                                }
                            }

                            if (smallWindow)
                                EditorGUILayout.EndVertical();
                        }
                    }

                    GUILayout.Space(5);
                }

                //Amplify Shader Editor
                GUILayout.Space(5);
                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                {
                    EditorGUILayout.LabelField("Amplify Shader Function", EditorStyles.miniLabel);

                    using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                    {
                        if (GUILayout.Button(new GUIContent(" Read Wireframe", iconWireframe), GUILayout.MaxHeight(24)))
                        {
                            string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.AmplifyShaderEditorCore);

                            if (File.Exists(subGrapFileLocation))
                            {
                                PingObject(subGrapFileLocation);
                            }
                        }

                        GUILayout.Space(1);
                        if (GUILayout.Button(new GUIContent("Distance Fade", iconDistanceFade), GUILayout.MaxHeight(24)))
                        {
                            string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.AmplifyShaderEditorDistanceFade);

                            if (File.Exists(subGrapFileLocation))
                            {
                                PingObject(subGrapFileLocation);
                            }
                        }


                        if (smallWindow)
                            EditorGUILayout.BeginVertical();

                        GUILayout.Space(1);
                        if (GUILayout.Button(new GUIContent(" Mask Plane", iconMaskPlane), GUILayout.MaxHeight(24)))
                        {
                            string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.AmplifyShaderEditorMaskPlane);

                            if (File.Exists(subGrapFileLocation))
                            {
                                PingObject(subGrapFileLocation);
                            }
                        }

                        if (GUILayout.Button(new GUIContent(" Mask Sphere", iconMaskSphere), GUILayout.MaxHeight(24)))
                        {
                            string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.AmplifyShaderEditorMaskSphere);

                            if (File.Exists(subGrapFileLocation))
                            {
                                PingObject(subGrapFileLocation);
                            }
                        }

                        if (GUILayout.Button(new GUIContent(" Mask Box", iconMaskBox), GUILayout.MaxHeight(24)))
                        {
                            string subGrapFileLocation = EditorUtilities.GetSubGraphFileLocation(EditorUtilities.EXTENSTION.AmplifyShaderEditorMaskBox);

                            if (File.Exists(subGrapFileLocation))
                            {
                                PingObject(subGrapFileLocation);
                            }
                        }

                        if (smallWindow)
                            EditorGUILayout.EndVertical();
                    }

                    GUILayout.Space(5);
                }
            }

            void Draw_AboutTab()
            {
                EditorGUILayout.LabelField("Wireframe Shader", guiStyleOptionsHeader, GUILayout.Height(guiStyleOptionsHeaderHeight));
                EditorGUILayout.LabelField("Installed Version: " + EditorUtilities.version, EditorStyles.miniLabel);
                GUILayout.Space(15);


                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                {
                    string filePath = Path.Combine(EditorUtilities.GetWireframeShaderEditorFolderPath(), "Documentation", "Manual.pdf");
                    using (new AmazingAssets.EditorGUIUtility.GUIEnabled(File.Exists(filePath)))
                    {
                        if (GUILayout.Button(new GUIContent("Manual", iconDocumentation), GUILayout.MaxHeight(24)))
                        {
                            filePath = filePath.Replace('/', Path.DirectorySeparatorChar);

                            System.Diagnostics.Process fileopener = new System.Diagnostics.Process();
                            fileopener.StartInfo.FileName = "explorer";
                            fileopener.StartInfo.Arguments = "\"" + filePath + "\"";
                            fileopener.Start();
                        }
                    }

                    if (GUILayout.Button(new GUIContent("Forum", iconForum), GUILayout.MaxHeight(24)))
                    {
                        Application.OpenURL(EditorUtilities.assetForumPath);
                    }


                    if (GUILayout.Button(new GUIContent("Support", iconSupport, EditorUtilities.assetSupportMail + "\nRight click to copy to the clipboard"), GUILayout.MaxHeight(24)))
                    {
                        if(Event.current.button == 1)   //Right click
                        {
                            TextEditor te = new TextEditor();
                            te.text = EditorUtilities.assetSupportMail;
                            te.SelectAll();
                            te.Copy();

                            this.ShowNotification(new GUIContent(EditorUtilities.assetSupportMail), 2);

                        }
                        else
                            Application.OpenURL("mailto:" + EditorUtilities.assetSupportMail);
                    }


                    if (GUILayout.Button(new GUIContent("Rate Asset", iconRateAsset), GUILayout.MaxHeight(24)))
                    {
                        UnityEditorInternal.AssetStore.Open(EditorUtilities.assetStorePath);
                    }
                }

            }


            void MeshGeneratorDrawMeshObjcetsArray()
            {
                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                {
                    using (new AmazingAssets.EditorGUIUtility.GUIEnabled((Selection.objects == null || Selection.objects.Length == 0) ? false : true))
                    {
                        if (GUILayout.Button("Add Selected", GUILayout.Height(30)))
                        {
                            AddMeshDrops(Selection.objects);
                        }
                    }

                    if (GUILayout.Button("Add All Scene Meshes", GUILayout.Height(30)))
                    {
                        List<UnityEngine.Object> objectsInScene = new List<UnityEngine.Object>();

                        foreach (GameObject go in Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[])
                        {
                            if (!UnityEditor.EditorUtility.IsPersistent(go.transform.root.gameObject) && !(go.hideFlags == HideFlags.NotEditable || go.hideFlags == HideFlags.HideAndDontSave))
                                objectsInScene.Add(go);
                        }

                        AddMeshDrops(objectsInScene.ToArray());
                    }

                    if (GUILayout.Button("Add Custom", GUILayout.Height(30)))
                    {
                        UnityEditor.EditorGUIUtility.ShowObjectPicker<Mesh>(null, true, string.Empty, generateMeshPickerID);
                    }

                    using (new AmazingAssets.EditorGUIUtility.GUIEnabled(generateMeshBatchObjects != null && generateMeshBatchObjects.Count > 0))
                    {
                        if (GUILayout.Button("Remove All", GUILayout.Height(30)))
                        {
                            if (generateMeshBatchObjects != null)
                                generateMeshBatchObjects.Clear();

                            generateMeshBatchObjects = null;

                            Repaint();
                        }
                    }
                }

                if (generateMeshBatchObjects == null || generateMeshBatchObjects.Count == 0)
                {
                    EditorGUILayout.HelpBox("Drag and drop Mesh assets from Hierarchy and Project windows here.", MessageType.Info);
                }
                else
                {
                    GUILayout.Space(8);
                    using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                    {

                        if (this.position.height < 450)
                        {
                            EditorGUILayout.LabelField("Mesh Assets (" + generateMeshBatchObjectsMeshCount + ")");
                        }
                        else
                        {
                            float scrollHeightMax = (generateMeshBatchObjectsMeshCount + generateMeshBatchObjects.Count) * 20 + 4;

                            generateMeshObjectsScroll = EditorGUILayout.BeginScrollView(generateMeshObjectsScroll, GUILayout.MaxHeight(scrollHeightMax));


                            bool containsNULL = false;

                            foreach (KeyValuePair<string, List<Mesh>> entry in generateMeshBatchObjects)
                            {
                                if (entry.Value == null || entry.Value.Count == 0)
                                    continue;

                                string labelName = string.Empty;
                                if (string.IsNullOrEmpty(entry.Key) == false)
                                    labelName = Path.GetFileName(entry.Key);
                                else if (entry.Value[0] != null && string.IsNullOrEmpty(entry.Value[0].name) == false)
                                    labelName = entry.Value[0].name;


                                EditorGUILayout.LabelField(labelName, EditorStyles.miniLabel);

                                using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(entry.Value.Count > 1 ? 1 : 0))
                                {
                                    for (int i = 0; i < entry.Value.Count; i++)
                                    {
                                        if (entry.Value[i] == null)
                                        {
                                            containsNULL = true;
                                            continue;                                            
                                        }
                                        else
                                        {
                                            bool using32bitIndexBuffer = entry.Value[i].triangles.Length > (65535 / 3);

                                            using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                                            {
                                                Rect drawRect = EditorGUILayout.GetControlRect(GUILayout.MaxWidth(32));
                                                using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(using32bitIndexBuffer ? Color.yellow : Color.green))
                                                {
                                                    GUI.Box(drawRect, string.Empty);
                                                    GUI.Box(drawRect, using32bitIndexBuffer ? "32 bit" : "16 bit", EditorStyles.miniLabel);
                                                }

                                                using (new AmazingAssets.EditorGUIUtility.GUIEnabled(false))
                                                {
                                                    EditorGUILayout.ObjectField(entry.Value[i], typeof(Mesh), false);
                                                }

                                                if(GUILayout.Button(new GUIContent(iconRemoveItem, "Remove: " + entry.Value[i].name), GUILayout.MaxWidth(24), GUILayout.MaxHeight(18)))
                                                {
                                                    entry.Value[i] = null;
                                                    containsNULL = true;
                                                    continue;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            EditorGUILayout.EndScrollView();



                            //Remove null elements
                            if (containsNULL)
                            {
                                foreach (string key in generateMeshBatchObjects.Keys.ToList())
                                {
                                    generateMeshBatchObjects[key] = generateMeshBatchObjects[key].Where(c => c != null).ToList();
                                }

                                generateMeshBatchObjects = generateMeshBatchObjects.Where(f => f.Value.Count > 0).ToDictionary(x => x.Key, x => x.Value);

                                generateMeshBatchObjectsMeshCount = generateMeshBatchObjects.Values.Sum(list => list.Count);

                                Repaint();
                            }
                        }
                    }


                    GUILayout.Space(3);
                }
            }

            void MeshGeneratorDrawSaveOptions()
            {
                if (generateMeshBatchObjects == null || generateMeshBatchObjects.Count == 0)
                    return;


                GUILayout.Space(5);

                #region Settings & Save Options
                Rect controlRect;

                using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical(EditorStyles.helpBox))
                {
                    GUILayout.Space(5);
                    EditorGUILayout.LabelField("Wireframe Style");
                    Rect drawRect = UnityEngine.GUILayoutUtility.GetLastRect();
                    drawRect.xMin += UnityEditor.EditorGUIUtility.labelWidth;

                    using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                    {
                        using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(generateMeshNormalizeEdges ? Color.green : Color.white))
                        {
                            generateMeshNormalizeEdges = GUI.Toggle(new Rect(drawRect.xMin, drawRect.yMin, drawRect.width / 2f - 2, drawRect.height), generateMeshNormalizeEdges, "Normliaze Edges", "Button");
                        }

                        using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(generateMeshTryQuad ? Color.green : Color.white))
                        {
                            generateMeshTryQuad = GUI.Toggle(new Rect(drawRect.xMin + drawRect.width / 2f + 2, drawRect.yMin, drawRect.width / 2f - 4, drawRect.height), generateMeshTryQuad, "Try Quad", "Button");
                        }
                    }


                    EditorGUILayout.LabelField("File Name");
                    drawRect = UnityEngine.GUILayoutUtility.GetLastRect();
                    drawRect.xMin += UnityEditor.EditorGUIUtility.labelWidth;

                    using (new AmazingAssets.EditorGUIUtility.EditorGUIUtilityLabelWidth(35))
                    {
                        using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(generateMeshFilePrefix.IndexOfAny(unsupported) == -1 ? Color.white : Color.red))
                        {
                            generateMeshFilePrefix = EditorGUI.TextField(new Rect(drawRect.xMin, drawRect.yMin, drawRect.width / 2f - 2, drawRect.height), "Prefix", generateMeshFilePrefix);
                        }

                        using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(generateMeshFileSuffix.IndexOfAny(unsupported) == -1 ? Color.white : Color.red))
                        {
                            generateMeshFileSuffix = EditorGUI.TextField(new Rect(drawRect.xMin + drawRect.width / 2f + 2, drawRect.yMin, drawRect.width / 2f - 4, drawRect.height), "Suffix", generateMeshFileSuffix);
                        }
                    }

                    generateMeshSaveLocation = (SAVE_LOCATION)EditorGUILayout.EnumPopup("Save Location", generateMeshSaveLocation);
                    using (new AmazingAssets.EditorGUIUtility.EditorGUIIndentLevel(1))
                    {
                        if (generateMeshSaveLocation == SAVE_LOCATION.SameAsSourceAssetButInSubfolder)
                        {
                            if (generateMeshSubfolderName == null) generateMeshSubfolderName = string.Empty;
                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(generateMeshSubfolderName.IndexOfAny(unsupported) == -1 ? Color.white : Color.red))
                            {
                                generateMeshSubfolderName = EditorGUILayout.TextField("Subfolder Name", generateMeshSubfolderName);
                            }

                            if (string.IsNullOrEmpty(generateMeshSubfolderName.Trim()))
                                generateMeshSubfolderName = defaultSubFolderName;
                        }
                        else if (generateMeshSaveLocation == SAVE_LOCATION.CustomFolder)
                        {
                            using (new AmazingAssets.EditorGUIUtility.GUIBackgroundColor(Directory.Exists(generateMeshSaveFolderCustomPath) ? Color.white : Color.red))
                            {
                                EditorGUILayout.LabelField("Path");
                                controlRect = UnityEngine.GUILayoutUtility.GetLastRect();

                                using (new AmazingAssets.EditorGUIUtility.GUIEnabled(false))
                                {
                                    generateMeshSaveFolderCustomPath = EditorGUI.TextField(new Rect(controlRect.xMin, controlRect.yMin, controlRect.width - 33, controlRect.height), " ", generateMeshSaveFolderCustomPath);
                                }
                            }

                            if (GUI.Button(new Rect(controlRect.xMax - 30, controlRect.yMin, 30, controlRect.height), "..."))
                            {
                                string newPathName = generateMeshSaveFolderCustomPath;
                                newPathName = UnityEditor.EditorUtility.OpenFolderPanel("Select Folder", Directory.Exists(generateMeshSaveFolderCustomPath) ? generateMeshSaveFolderCustomPath : Application.dataPath, string.Empty);
                                if (string.IsNullOrEmpty(newPathName) == false)
                                {
                                    generateMeshSaveFolderCustomPath = newPathName;

                                    SaveEditorSettings();
                                }
                            }
                        }

                        generateMeshRootObjectFolder = EditorGUILayout.Toggle("Root Object Folder", generateMeshRootObjectFolder);
                    }

                    GUILayout.Space(5);
                    generateMeshCompression = (ModelImporterMeshCompression)EditorGUILayout.EnumPopup("Mesh Compression", generateMeshCompression);

                    generateMeshSaveWithMesh = (SAVE_MESH_DATA)EditorGUILayout.EnumPopup("Save Mesh Data", generateMeshSaveWithMesh);

                    if (generateMeshSaveWithMesh == SAVE_MESH_DATA.Custom)
                    {
                        using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginHorizontal())
                        {
                            EditorGUILayout.LabelField(string.Empty, GUILayout.MaxWidth(UnityEditor.EditorGUIUtility.labelWidth));

                            using (new AmazingAssets.EditorGUIUtility.EditorGUILayoutBeginVertical())
                            {
                                int buttonsCountHorizontal = 4;

                                Rect rc1 = EditorGUILayout.GetControlRect();
                                Rect rc4 = EditorGUILayout.GetControlRect();
                                rc4 = EditorGUILayout.GetControlRect();

                                Rect position = new Rect(rc1.xMin, rc1.yMin, rc1.width, (rc4.yMax - rc1.yMin));


                                Rect[] rectArray = CalcButtonRects(position, generateMeshOptimizeNames, buttonsCountHorizontal);

                                int i = 0;
                                generateMeshOptimizeUV0 = GUI.Toggle(rectArray[i], generateMeshOptimizeUV0, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeUV2 = GUI.Toggle(rectArray[++i], generateMeshOptimizeUV2, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeUV3 = GUI.Toggle(rectArray[++i], generateMeshOptimizeUV3, generateMeshOptimizeNames[i], "Button");

                                using (new AmazingAssets.EditorGUIUtility.GUIEnabled(false))    //Wireframe data is save here. Always On
                                {
                                    GUI.Toggle(rectArray[++i], true, generateMeshOptimizeNames[i], "Button");
                                }

                                generateMeshOptimizeUV5 = GUI.Toggle(rectArray[++i], generateMeshOptimizeUV5, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeUV6 = GUI.Toggle(rectArray[++i], generateMeshOptimizeUV6, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeUV7 = GUI.Toggle(rectArray[++i], generateMeshOptimizeUV7, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeUV8 = GUI.Toggle(rectArray[++i], generateMeshOptimizeUV8, generateMeshOptimizeNames[i], "Button");

                                generateMeshOptimizeNormal = GUI.Toggle(rectArray[++i], generateMeshOptimizeNormal, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeTangent = GUI.Toggle(rectArray[++i], generateMeshOptimizeTangent, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeColor = GUI.Toggle(rectArray[++i], generateMeshOptimizeColor, generateMeshOptimizeNames[i], "Button");
                                generateMeshOptimizeSkin = GUI.Toggle(rectArray[++i], generateMeshOptimizeSkin, generateMeshOptimizeNames[i], "Button");
                            }
                        }
                    }

                    bool canReplaceSceneMeshes = true;
                    if (generateMeshSaveLocation == SAVE_LOCATION.CustomFolder)
                        canReplaceSceneMeshes = EditorUtilities.IsPathProjectRelative(generateMeshSaveFolderCustomPath);

                    if (canReplaceSceneMeshes)
                        generateMeshReplaceSceneMeshes = EditorGUILayout.Toggle("Replace Scene Meshes", generateMeshReplaceSceneMeshes);
                    else
                    {
                        using (new AmazingAssets.EditorGUIUtility.GUIEnabled(false))
                        {
                            EditorGUILayout.Toggle("Replace Scene Meshes", false);
                        }
                    }
                }
                #endregion


                //Reserve for 
                EditorGUILayout.GetControlRect(GUILayout.Height(50));
            }

            void MeshGeneratorDrawGenerateButton()
            {
                if (generateMeshBatchObjects == null || generateMeshBatchObjects.Count == 0)
                    return;


                using (new AmazingAssets.EditorGUIUtility.GUIEnabled(IsMeshGeneratorReady()))
                {
                    Rect controlRect = EditorGUILayout.GetControlRect();

                    string buttonName = "Generate Wireframe Mesh";
                    if (generateMeshBatchObjectsMeshCount > 1)
                        buttonName = "Generate (" + generateMeshBatchObjectsMeshCount + ") Wireframe Meshes";

                    if (GUI.Button(new Rect(controlRect.xMin + 4, this.position.height - 59 + scroll.y, controlRect.width - 10, 40), buttonName))
                    {

                        float currentIndex = 0;


                        Dictionary<Mesh, Mesh> generatedMeshInfo = new Dictionary<Mesh, Mesh>();


                        foreach (KeyValuePair<string, List<Mesh>> entry in generateMeshBatchObjects)
                        {
                            if (entry.Key == null || entry.Value == null || entry.Value.Count == 0 || entry.Value.Where(a => a != null).Count() == 0)
                                continue;



                            string saveFolderName = string.Empty;
                            switch (generateMeshSaveLocation)
                            {
                                case SAVE_LOCATION.SameAsSourceAsset:
                                    {
                                        try
                                        {
                                            saveFolderName = Path.GetDirectoryName(entry.Key);
                                        }
                                        catch (Exception)
                                        {
                                            saveFolderName = string.Empty;
                                        }


                                        if (string.IsNullOrEmpty(saveFolderName) || saveFolderName.IndexOf("Assets") != 0)
                                            saveFolderName = "Assets";
                                            
                                    }
                                    break;

                                case SAVE_LOCATION.SameAsSourceAssetButInSubfolder:
                                    {
                                        try
                                        {
                                            saveFolderName = Path.GetDirectoryName(entry.Key);
                                        }
                                        catch (Exception)
                                        {
                                            saveFolderName = string.Empty;
                                        }


                                        if (string.IsNullOrEmpty(saveFolderName) || saveFolderName.IndexOf("Assets") != 0)
                                            saveFolderName = "Assets";
                                        

                                        saveFolderName = Path.Combine(saveFolderName, string.IsNullOrEmpty(generateMeshSubfolderName.Trim()) ? defaultSubFolderName : generateMeshSubfolderName.Trim());

                                        if (Directory.Exists(saveFolderName) == false)
                                            Directory.CreateDirectory(saveFolderName);
                                    }
                                    break;

                                case SAVE_LOCATION.CustomFolder:
                                    {
                                        saveFolderName = generateMeshSaveFolderCustomPath;

                                        if (Directory.Exists(saveFolderName) == false)
                                            Directory.CreateDirectory(saveFolderName);
                                    }
                                    break;
                            }

                            if (generateMeshRootObjectFolder)
                            {
                                string rootAssetName = string.Empty;
                                if (string.IsNullOrEmpty(entry.Key))
                                    rootAssetName = "Unity Built-in Resources";
                                else
                                    rootAssetName = Path.GetFileName(entry.Key).Replace(".", "_");


                                saveFolderName = Path.Combine(saveFolderName, rootAssetName);
                                if (Directory.Exists(saveFolderName) == false)
                                    Directory.CreateDirectory(saveFolderName);
                            }


                            for (int i = 0; i < entry.Value.Count; i++)
                            {
                                if (entry.Value[i] == null)
                                    continue;


                                UnityEditor.EditorUtility.DisplayProgressBar("Hold On", entry.Value[i].name, (currentIndex++) / generateMeshBatchObjectsMeshCount);


                                //Is mesh readable?
                                if (entry.Value[i].isReadable == false)
                                {
                                    ModelImporter modelImporter = AssetImporter.GetAtPath(entry.Key) as ModelImporter;
                                    if (modelImporter != null)
                                    {
                                        modelImporter.isReadable = true;

                                        AssetDatabase.ImportAsset(entry.Key);

                                        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
                                    }
                                }



                                Mesh wireframeMesh = entry.Value[i].GenerateWireframeMesh(generateMeshNormalizeEdges, generateMeshTryQuad);
                                if (wireframeMesh != null)
                                {
                                    string meshName = entry.Value[i].name;
                                    if (string.IsNullOrEmpty(meshName.Trim()))
                                        meshName = entry.Value[i].GetInstanceID() + "_Wireframe";

                                    string saveAssetName = (string.IsNullOrEmpty(generateMeshFilePrefix.Trim()) ? string.Empty : generateMeshFilePrefix.Trim()) + meshName + (string.IsNullOrEmpty(generateMeshFileSuffix.Trim()) ? string.Empty : generateMeshFileSuffix.Trim()) + ".asset";
                                    string saveAssetPath = Path.Combine(saveFolderName, saveAssetName);

                                    #region Optimize
                                    if (generateMeshSaveWithMesh == SAVE_MESH_DATA.Custom)
                                    {
                                        if (generateMeshOptimizeUV0 == false)
                                            wireframeMesh.uv = null;
                                        if (generateMeshOptimizeUV2 == false)
                                            wireframeMesh.uv2 = null;
                                        if (generateMeshOptimizeUV3 == false)
                                            wireframeMesh.uv3 = null;
                                        if (generateMeshOptimizeUV5 == false)
                                            wireframeMesh.uv5 = null;
                                        if (generateMeshOptimizeUV6 == false)
                                            wireframeMesh.uv6 = null;
                                        if (generateMeshOptimizeUV7 == false)
                                            wireframeMesh.uv7 = null;
                                        if (generateMeshOptimizeUV8 == false)
                                            wireframeMesh.uv8 = null;
                                        if (generateMeshOptimizeNormal == false)
                                            wireframeMesh.normals = null;
                                        if (generateMeshOptimizeTangent == false)
                                            wireframeMesh.tangents = null;
                                        if (generateMeshOptimizeColor == false)
                                            wireframeMesh.colors = null;
                                        if (generateMeshOptimizeSkin == false)
                                        {
                                            wireframeMesh.boneWeights = null;
                                            wireframeMesh.bindposes = null;
                                        }
                                    }
                                    #endregion


                                    //Compression
                                    if (generateMeshCompression != ModelImporterMeshCompression.Off)
                                        MeshUtility.SetMeshCompression(wireframeMesh, generateMeshCompression);

                                    if(EditorUtilities.ConvertFullPathToProjectRelative(saveAssetPath, out saveAssetPath))
                                        AssetDatabase.CreateAsset(wireframeMesh, saveAssetPath);
                                    else
                                    {
                                        //Generate assets in temp folder and then copy to the final destination
                                        string tempFolderPath = Path.Combine(Application.dataPath, "Wireframe_TEMP");
                                        if (Directory.Exists(tempFolderPath) == false)
                                            Directory.CreateDirectory(tempFolderPath);


                                        string tempFilePath = Path.Combine("Assets", "Wireframe_TEMP", saveAssetName);
                                        AssetDatabase.CreateAsset(wireframeMesh, tempFilePath);

                                        //File.Move method fails if destination file already exists. It is nessesary to delete previus file first.
                                        if (File.Exists(saveAssetPath))
                                            File.Delete(saveAssetPath);


                                        File.Move(Path.Combine(tempFolderPath, saveAssetName), saveAssetPath);


                                        //Delete .meta file
                                        string metaFilePath = tempFilePath + ".meta";
                                        if (File.Exists(metaFilePath))
                                            File.Delete(metaFilePath); 
                                    }


                                    generatedMeshInfo.Add(entry.Value[i], wireframeMesh);


                                    generateMeshLastSavedFilePath = saveAssetPath;
                                }
                            }
                        }

                        
                        AssetDatabase.SaveAssets();
                        AssetDatabase.Refresh();


                        if(generateMeshReplaceSceneMeshes && EditorUtilities.IsPathProjectRelative(generateMeshLastSavedFilePath))
                        {
                            List<GameObject> rootObjects = new List<GameObject>();
                            Scene scene = SceneManager.GetActiveScene();
                            scene.GetRootGameObjects(rootObjects);

                            Undo.IncrementCurrentGroup();
                            Undo.SetCurrentGroupName("Replace Wireframe Mesh");
                            var undoGroupIndex = Undo.GetCurrentGroup();

                            // iterate root objects and do something
                            for (int r = 0; r < rootObjects.Count; ++r)
                            {
                                MeshFilter[] meshFilters = rootObjects[r].GetComponentsInChildren<MeshFilter>(true);
                                SkinnedMeshRenderer[] skinnedMeshRenderers = rootObjects[r].GetComponentsInChildren<SkinnedMeshRenderer>(true);


                                foreach (KeyValuePair<string, List<Mesh>> entry in generateMeshBatchObjects)
                                {
                                    if (entry.Key == null)
                                        continue;


                                    for (int e = 0; e < entry.Value.Count; e++)
                                    {
                                        if (entry.Value[e] == null)
                                            continue;


                                        for (int m = 0; m < meshFilters.Length; m++)
                                        {
                                            if(meshFilters[m].sharedMesh == entry.Value[e])
                                            {
                                                Undo.RecordObject(meshFilters[m], " ");
                                                meshFilters[m].sharedMesh = generatedMeshInfo[entry.Value[e]];
                                            }
                                        }


                                        for (int s = 0; s < skinnedMeshRenderers.Length; s++)
                                        {
                                            if (skinnedMeshRenderers[s].sharedMesh == entry.Value[e])
                                            {
                                                Undo.RecordObject(skinnedMeshRenderers[s], " ");
                                                skinnedMeshRenderers[s].sharedMesh = generatedMeshInfo[entry.Value[e]];
                                            }
                                        }
                                    }
                                }
                            }

                            Undo.CollapseUndoOperations(undoGroupIndex);
                        }

                        SaveEditorSettings();


                        generatedMeshInfo.Clear();

                        UnityEditor.EditorUtility.ClearProgressBar();
                    }
                }
            }


            void TextureExporterMeshChanged()
            {
                if (exportTexturePreview != null)
                    DestroyImmediate(exportTexturePreview);

                if (IsTextureExporterReady())
                {
                    exportTextureSubmesh = 0;

                    RedrawTextureExporterWindow();
                }
            }

            void RedrawTextureExporterWindow()
            {
                if (exportTexturePreview != null)
                    DestroyImmediate(exportTexturePreview);

                exportTexturePreview = exportTextureMesh.GenerateWireframeTexture(exportTextureUseGeometryShader, exportTextureSubmesh, exportTextureNormalizeEdges, exportTextureTryQuad, exportTextureThickness, exportTextureSmoothness, exportTextureDiameter, exportTexturePreviewResolution);
            }



            bool IsMeshGeneratorReady()
            {
                if ((generateMeshBatchObjects == null || generateMeshBatchObjects.Count == 0) ||
                   (generateMeshFilePrefix.IndexOfAny(unsupported) != -1 || generateMeshFileSuffix.IndexOfAny(unsupported) != -1) ||
                   (generateMeshSaveLocation == SAVE_LOCATION.SameAsSourceAssetButInSubfolder && generateMeshSubfolderName.IndexOfAny(unsupported) != -1) ||
                   (generateMeshSaveLocation == SAVE_LOCATION.CustomFolder && Directory.Exists(generateMeshSaveFolderCustomPath) == false))
                {
                    return false;
                }

                return true;
            }

            bool IsTextureExporterReady()
            {
                if (exportTextureMesh == null || exportTextureMesh.vertices == null || exportTextureMesh.vertexCount < 3 || exportTextureMesh.triangles == null || exportTextureMesh.triangles.Length < 3)
                {
                    return false;
                }

                return true;
            }




            void CatchMeshDragAndDrop(TAB tab)
            {
                Rect drop_area = new Rect(0, 0, this.position.width, this.position.height);

                Event evt = Event.current;
                switch (evt.type)
                {
                    case EventType.DragUpdated:
                    case EventType.DragPerform:
                        if (!drop_area.Contains(evt.mousePosition))
                            return;

                        DragAndDrop.visualMode = DragAndDropVisualMode.Copy;

                        if (evt.type == EventType.DragPerform)
                        {
                            DragAndDrop.AcceptDrag();

                            if(tab == TAB.GenerateMesh)
                                AddMeshDrops(DragAndDrop.objectReferences);
                            else if(tab == TAB.GenerateTexture)
                            {

                            }
                        }
                        break;
                }
            }

            void CatchMeshPicker()
            {
                if (Event.current.commandName == "ObjectSelectorUpdated")
                {
                    if (UnityEditor.EditorGUIUtility.GetObjectPickerControlID() == generateMeshPickerID)
                    {
                        if (UnityEditor.EditorGUIUtility.GetObjectPickerObject() != null)
                        {
                            if (generateMeshPickerObjects == null)
                                generateMeshPickerObjects = new List<UnityEngine.Object>();

                            generateMeshPickerObjects.Add(UnityEditor.EditorGUIUtility.GetObjectPickerObject());
                        }
                    }
                }
            }

            void AddMeshDrops(UnityEngine.Object[] drops)
            {
                if (drops == null || drops.Length == 0)
                    return;


                if (generateMeshBatchObjects == null)
                    generateMeshBatchObjects = new Dictionary<string, List<Mesh>>();


                for (int i = 0; i < drops.Length; i++)
                {
                    if (drops[i] == null)
                        continue;


                    GameObject gameObj = drops[i] as GameObject;

                    if (gameObj != null)
                    {
                        AddObjectToObjectsArray(gameObj);
                    }
                    else
                    {
                        Mesh meshData = drops[i] as Mesh;

                        if (meshData != null)
                        {
                            AddMeshToObjectsArray(meshData);
                        }
                        else
                        {
                            //May be it is a folder?
                            string path = AssetDatabase.GetAssetPath(drops[i].GetInstanceID());

                            AddObjectToObjectsArray(path);
                        }
                    }
                }

                generateMeshBatchObjectsMeshCount = generateMeshBatchObjects.Values.SelectMany(list => list).Distinct().Count();

                Repaint();
            }

            void AddObjectToObjectsArray(string folderPath)
            {
                if (string.IsNullOrEmpty(folderPath) == false && Directory.Exists(folderPath))
                {
                    //Get all files from folder by filter
                    //https://stackoverflow.com/questions/163162/can-you-call-directory-getfiles-with-multiple-filters

                    string[] assets = Directory.GetFiles(folderPath, "*.*", SearchOption.AllDirectories).
                        Where(s => s.EndsWith(".asset", StringComparison.OrdinalIgnoreCase) || s.EndsWith(".fbx", StringComparison.OrdinalIgnoreCase) || s.EndsWith(".obj", StringComparison.OrdinalIgnoreCase)).ToArray();

                    if (assets != null && assets.Length > 0)
                    {
                        for (int j = 0; j < assets.Length; j++)
                        {
                            UnityEditor.EditorUtility.DisplayProgressBar("Hold On", assets[j], (float)j / assets.Length);

                            AddObjectToObjectsArray(AssetDatabase.LoadAssetAtPath(assets[j], typeof(UnityEngine.Object)));
                        }

                        UnityEditor.EditorUtility.ClearProgressBar();
                    }
                }
            }

            void AddObjectToObjectsArray(UnityEngine.Object obj)
            {
                GameObject gameObj = obj as GameObject;

                if (gameObj != null)
                {
                    foreach (MeshFilter mf in gameObj.GetComponentsInChildren<MeshFilter>())
                    {
                        if (mf != null && mf.sharedMesh != null)
                        {
                            AddMeshToObjectsArray(mf.sharedMesh);
                        }
                    }

                    foreach (SkinnedMeshRenderer smr in gameObj.GetComponentsInChildren<SkinnedMeshRenderer>())
                    {
                        if (smr != null && smr.sharedMesh != null)
                        {
                            AddMeshToObjectsArray(smr.sharedMesh);
                        }
                    }
                }
                else //May be it is an .asset file
                {
                    Mesh assetMesh = obj as Mesh;

                    if(assetMesh != null)
                        AddMeshToObjectsArray(assetMesh);
                }
            }

            void AddMeshToObjectsArray(Mesh mesh)
            {
                if (mesh == null)
                    return;

                string rootAssetPath = AssetDatabase.GetAssetPath(mesh);

                if (generateMeshBatchObjects.ContainsKey(rootAssetPath) == false)
                    generateMeshBatchObjects.Add(rootAssetPath, new List<Mesh>());

                if (generateMeshBatchObjects[rootAssetPath].Contains(mesh) == false)
                    generateMeshBatchObjects[rootAssetPath].Add(mesh);
            }



            void CatchContextMenu()
            {
                if (gTab == TAB.GenerateMesh || gTab == TAB.GenerateTexture)
                {

                    var evt = Event.current;
                    var contextRect = new Rect(10, 10, this.position.width, this.position.height);
                    if (evt.type == EventType.ContextClick)
                    {
                        var mousePos = evt.mousePosition;
                        if (contextRect.Contains(mousePos))
                        {
                            if (generateMeshBatchObjects != null && generateMeshBatchObjects.Count >= 0)
                            {
                                GenericMenu menu = new GenericMenu();


                                #region Use Selected Mesh
                                if (gTab == TAB.GenerateMesh)
                                {
                                    if (Selection.activeObject == null)
                                        menu.AddDisabledItem(new GUIContent("Use Selected Object"), false);
                                    else
                                        menu.AddItem(new GUIContent("Use Selected Object"), false, CallbackContextMenu, CONTEX_MENU_DATA.UseSelectedMesh);
                                }
                                else if (gTab == TAB.GenerateTexture)
                                {
                                    if (GetMeshFromSelection() == null)
                                        menu.AddDisabledItem(new GUIContent("Use Selected Mesh"), false);
                                    else
                                        menu.AddItem(new GUIContent("Use Selected Mesh"), false, CallbackContextMenu, CONTEX_MENU_DATA.UseSelectedMesh);
                                }
                                #endregion


                                #region Highlight
                                if (gTab == TAB.GenerateMesh)
                                {
                                    if (File.Exists(generateMeshLastSavedFilePath))
                                        menu.AddItem(new GUIContent("Highlight Last Saved File"), false, CallbackContextMenu, CONTEX_MENU_DATA.HighlightLastSavedFile);
                                    else
                                        menu.AddDisabledItem(new GUIContent("Highlight Last Saved File"));
                                }
                                else if (gTab == TAB.GenerateTexture)
                                {
                                    if (File.Exists(exportTextureLastSavedFilePath))
                                        menu.AddItem(new GUIContent("Highlight Last Saved File"), false, CallbackContextMenu, CONTEX_MENU_DATA.HighlightLastSavedFile);
                                    else
                                        menu.AddDisabledItem(new GUIContent("Highlight Last Saved File"));

                                }
                                #endregion


                                #region Open Save Folder
                                if (gTab == TAB.GenerateMesh)
                                {
                                    if (generateMeshSaveLocation == SAVE_LOCATION.CustomFolder)
                                    {
                                        if (Directory.Exists(generateMeshSaveFolderCustomPath))
                                            menu.AddItem(new GUIContent("Open Save Folder"), false, CallbackContextMenu, CONTEX_MENU_DATA.OpenSaveFolder);
                                        else
                                            menu.AddDisabledItem(new GUIContent("Open Save Folder"));
                                    }
                                }
                                else
                                {

                                }
                                #endregion

                                menu.AddSeparator(string.Empty);
                                menu.AddItem(new GUIContent("Reset"), false, CallbackContextMenu, CONTEX_MENU_DATA.Reset);


                                menu.ShowAsContext();
                            }
                        }
                    }
                }
            }

            void CallbackContextMenu(object obj)
            {
                switch ((CONTEX_MENU_DATA)obj)
                {
                    case CONTEX_MENU_DATA.UseSelectedMesh:
                        {
                            if(gTab == TAB.GenerateMesh)
                            {
                                AddMeshDrops(Selection.objects);
                            }
                            else if(gTab == TAB.GenerateTexture)
                            {
                                exportTextureMesh = GetMeshFromSelection();

                                TextureExporterMeshChanged();
                                Repaint();
                            }
                        }
                        break;

                    case CONTEX_MENU_DATA.HighlightLastSavedFile:
                        {
                            if (gTab == TAB.GenerateMesh)
                            {
                                if (generateMeshLastSavedFilePath.StartsWith(Application.dataPath))
                                {
                                    string filePath = "Assets" + generateMeshLastSavedFilePath.Substring(Application.dataPath.Length);

                                    UnityEngine.Object mesh = AssetDatabase.LoadAssetAtPath(filePath, typeof(Mesh));
                                    if (mesh != null)
                                        PingObject(mesh);
                                }
                                else if (generateMeshLastSavedFilePath.IndexOf("Assets") == 0)
                                {
                                    UnityEngine.Object mesh = AssetDatabase.LoadAssetAtPath(generateMeshLastSavedFilePath, typeof(Mesh));
                                    if (mesh != null)
                                        PingObject(mesh);
                                }
                                else
                                {
                                    if (File.Exists(generateMeshLastSavedFilePath))
                                    {
                                        string argument = "/select, \"" + generateMeshLastSavedFilePath.Replace("/", "\\") + "\"";

                                        System.Diagnostics.Process.Start("explorer.exe", argument);
                                    }
                                }
                            }
                            else if(gTab == TAB.GenerateTexture)
                            {
                                if (exportTextureLastSavedFilePath.StartsWith(Application.dataPath))
                                {
                                    string filePath = "Assets" + exportTextureLastSavedFilePath.Substring(Application.dataPath.Length);

                                    UnityEngine.Object texture = AssetDatabase.LoadAssetAtPath(filePath, typeof(Texture));
                                    if (texture != null)
                                        PingObject(texture);
                                }
                                else if(exportTextureLastSavedFilePath.IndexOf("Assets") == 0)
                                {
                                    UnityEngine.Object texture = AssetDatabase.LoadAssetAtPath(exportTextureLastSavedFilePath, typeof(Texture));
                                    if (texture != null)
                                        PingObject(texture);
                                }
                                else
                                {
                                    if (File.Exists(exportTextureLastSavedFilePath))
                                    {
                                        string argument = "/select, \"" + exportTextureLastSavedFilePath.Replace("/", "\\") + "\"";

                                        System.Diagnostics.Process.Start("explorer.exe", argument);
                                    }
                                }
                            }

                        }
                        break;

                    case CONTEX_MENU_DATA.OpenSaveFolder:
                        {
                            if (gTab == TAB.GenerateMesh)
                                Process.Start("file://" + generateMeshSaveFolderCustomPath);
                        }
                        break;

                    case CONTEX_MENU_DATA.Reset:
                        {
                            ResetEditorSettings();
                        }
                        break;

                    default:
                        break;
                }
            }


            Mesh GetMeshFromSelection()
            {
                if (Selection.activeGameObject != null)
                {
                    MeshFilter mf = null;
                    SkinnedMeshRenderer smr = null;

                    mf = Selection.activeGameObject.GetComponent<MeshFilter>();
                    if (mf == null)
                    {
                        smr = Selection.activeGameObject.GetComponent<SkinnedMeshRenderer>();
                        if (smr != null)
                            return smr.sharedMesh;
                    }
                    else
                    {
                        return mf.sharedMesh;
                    }
                }
                else if (Selection.activeObject != null)
                {
                    return Selection.activeObject as Mesh;
                }

                return null;
            }


            static Rect[] CalcButtonRects(Rect position, GUIContent[] contents, int xCount)
            {
                GUIStyle style = GUI.skin.button;
                GUI.ToolbarButtonSize buttonSize = GUI.ToolbarButtonSize.Fixed;



                int length = contents.Length;
                int num1 = length / xCount;
                if ((uint)(length % xCount) > 0U)
                    ++num1;
                float num2 = (float)CalcTotalHorizSpacing(xCount, style, style, style, style);
                float num3 = (float)(Mathf.Max(style.margin.top, style.margin.bottom) * (num1 - 1));
                float elemWidth = (position.width - num2) / (float)xCount;
                float elemHeight = (position.height - num3) / (float)num1;
                if ((double)style.fixedWidth != 0.0)
                    elemWidth = style.fixedWidth;
                if ((double)style.fixedHeight != 0.0)
                    elemHeight = style.fixedHeight;


                int num = 0;
                float x = position.xMin;
                float yMin = position.yMin;
                GUIStyle guiStyle1 = style;
                Rect[] rectArray = new Rect[length];
                if (length > 1)
                    guiStyle1 = style;
                for (int index = 0; index < length; ++index)
                {
                    float width = 0.0f;
                    switch (buttonSize)
                    {
                        case GUI.ToolbarButtonSize.Fixed:
                            width = elemWidth;
                            break;
                        case GUI.ToolbarButtonSize.FitToContents:
                            width = guiStyle1.CalcSize(contents[index]).x;
                            break;
                    }
                    rectArray[index] = new Rect(x, yMin, width, elemHeight);
                    rectArray[index] = GUIUtility.AlignRectToDevice(rectArray[index]);
                    GUIStyle guiStyle2 = style;
                    if (index == length - 2 || index == xCount - 2)
                        guiStyle2 = style;
                    x = rectArray[index].xMax + (float)Mathf.Max(guiStyle1.margin.right, guiStyle2.margin.left);
                    ++num;
                    if (num >= xCount)
                    {
                        num = 0;
                        yMin += elemHeight + (float)Mathf.Max(style.margin.top, style.margin.bottom);
                        x = position.xMin;
                        guiStyle2 = style;
                    }
                    guiStyle1 = guiStyle2;
                }
                return rectArray;
            }
            static int CalcTotalHorizSpacing(int xCount, GUIStyle style, GUIStyle firstStyle, GUIStyle midStyle, GUIStyle lastStyle)
            {
                if (xCount < 2)
                    return 0;
                if (xCount == 2)
                    return Mathf.Max(firstStyle.margin.right, lastStyle.margin.left);

                int num = Mathf.Max(midStyle.margin.left, midStyle.margin.right);
                return Mathf.Max(firstStyle.margin.right, midStyle.margin.left) + Mathf.Max(midStyle.margin.right, lastStyle.margin.left) + num * (xCount - 3);
            }


            void PingObject(string assetPath)
            {
                // Load object
                UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Object));


                if (obj == null)
                {
                     assetPath = Path.GetDirectoryName(assetPath);

                     obj = AssetDatabase.LoadAssetAtPath(assetPath, typeof(UnityEngine.Object));
                }
                
                
                PingObject(obj);                
            }
            void PingObject(UnityEngine.Object obj)
            {
                if (obj != null)
                {
                    // Select the object in the project folder
                    Selection.activeObject = obj;

                    // Also flash the folder yellow to highlight it
                    UnityEditor.EditorGUIUtility.PingObject(obj);
                }
            }

        }
    }
}

