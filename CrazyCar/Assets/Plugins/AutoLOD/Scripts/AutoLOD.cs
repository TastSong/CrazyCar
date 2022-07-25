#if UNITY_EDITOR
using System.IO;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using MeshDecimator;

public class AutoLODWindow : EditorWindow
{


    private enum RendererType
    {
        Default,
        Skinned,
        Unhandled,
        Unknown
    }

    private Color[] lodColors = new Color[9] {
        new Color(0.23f, 0.27f, 0.12f),
        new Color(0.18f, 0.21f, 0.26f),
        new Color(0.16f, 0.25f, 0.29f),
        new Color(0.25f, 0.14f, 0.12f),
        new Color(0.20f, 0.18f, 0.25f),
        new Color(0.32f, 0.22f, 0.11f),
        new Color(0.35f, 0.32f, 0.04f),
        new Color(0.32f, 0.27f, 0.12f),
        new Color(0.32f, 0f, 0f)
    };

    public AutoLODProperties commonSettings;
    public List<AutoLODProperties> targets;


    string currentObjectName;
    private Vector2 scrollPosition;
    public bool _clearWhenFinished = true;

    private GUIStyle centeredStyle;
    private GUIStyle titleStyle;
    private GUIStyle pathCreatedStyle;
    private GUIStyle pathInputStyle;
    private GUIStyle subHeaderStyle;
    private GUIStyle dropBoxStyle;
    private GUIStyle smallFont;

    [MenuItem("Window/AutoLOD/MeshDecimator")]
    public static void ShowWindow()
    {
        EditorWindow win = EditorWindow.GetWindow(typeof(AutoLODWindow));
        win.titleContent = new GUIContent("AutoLOD", Resources.Load<Texture>("Logo_AutoLOD_small"));
        win.minSize = new Vector2(275, 480);
    }

    [MenuItem("CONTEXT/MeshRenderer/AutoLOD...")]
    [MenuItem("CONTEXT/SkinnedMeshRenderer/AutoLOD...")]
    public static void ContextMenu(MenuCommand command)
    {
        Renderer rend = (Renderer)command.context;
        AutoLODWindow win = EditorWindow.GetWindow(typeof(AutoLODWindow)) as AutoLODWindow;
        win.titleContent = new GUIContent("AutoLOD", Resources.Load<Texture>("Logo_AutoLOD_small"));
        win.minSize = new Vector2(275, 480);
        AutoLODProperties newObject = CreateInstance<AutoLODProperties>();
        newObject._target = rend;
        if (win.targets == null)
            win.targets = new List<AutoLODProperties>();
        win.targets.Add(newObject);
    }

    void OnGUI()
    {
        if (targets == null)
            targets = new List<AutoLODProperties>();
        if (commonSettings == null)
            commonSettings = CreateInstance<AutoLODProperties>();

        if(centeredStyle == null)
        {
            centeredStyle = new GUIStyle();
            centeredStyle.alignment = TextAnchor.MiddleCenter;
        }

        if (titleStyle == null)
        {
            titleStyle = EditorStyles.boldLabel;
            titleStyle.alignment = TextAnchor.MiddleLeft;
        }

        if (pathCreatedStyle == null)
        {
            pathCreatedStyle = new GUIStyle(EditorStyles.label);
            pathCreatedStyle.normal.textColor = Color.green;
            pathCreatedStyle.fontSize = 10;
            pathCreatedStyle.alignment = TextAnchor.MiddleCenter;
        }

        if (pathInputStyle == null)
        {
            pathInputStyle = new GUIStyle(EditorStyles.textField);
            pathInputStyle.focused.textColor = pathInputStyle.normal.textColor;
            pathInputStyle.hover.textColor = pathInputStyle.normal.textColor;
        }

        if (subHeaderStyle == null)
        {
            subHeaderStyle = EditorStyles.foldoutHeader;
            subHeaderStyle.fontStyle = FontStyle.Normal;
            subHeaderStyle.stretchWidth = true;
        }

        if (dropBoxStyle == null)
        {
            dropBoxStyle = new GUIStyle(GUI.skin.box);
            dropBoxStyle.alignment = TextAnchor.MiddleCenter;
            dropBoxStyle.fontSize = 10;
            dropBoxStyle.hover.textColor = Color.green;
        }

        if(smallFont == null)
            smallFont = new GUIStyle
            {
                fontSize = 8,
                alignment = TextAnchor.LowerRight
            };

        EditorGUI.DrawRect(new Rect(0, 0, Screen.width, Screen.height), new Color(0.156f, 0.156f, 0.156f));


        GUILayout.Label(Resources.Load<Texture>("Logo_AutoLOD"), centeredStyle, GUILayout.Height(64f), GUILayout.ExpandWidth(true));
        EditorGUILayout.Separator();

        SerializedProperty property;

        List<int> indexesToRemove = new List<int>();
        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("Targets", titleStyle, GUILayout.Width(64), GUILayout.Height(30));

        EditorGUILayout.BeginHorizontal(EditorStyles.helpBox);
        Rect myRect = GUILayoutUtility.GetRect(0, 16, GUILayout.Height(24), GUILayout.ExpandWidth(true));
        
        
        GUI.skin.box = dropBoxStyle;
        GUI.SetNextControlName("DragDropBox");
        GUI.Box(myRect, "Drag and Drop renderers here", dropBoxStyle);
        EditorGUILayout.EndHorizontal();

        if (GUILayout.Button(EditorGUIUtility.IconContent("CreateAddNew"), GUILayout.Width(30), GUILayout.Height(30)))
        {
            targets.Add(CreateInstance<AutoLODProperties>());
        }

        EditorGUILayout.EndHorizontal();
        if(targets.Count > 0)
            EditorGUILayout.Separator();

        if (myRect.Contains(Event.current.mousePosition))
        {
            if (Event.current.type == EventType.DragUpdated)
            {
                GUI.FocusControl("DragDropBox");
                DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                Event.current.Use();
            }
            else if (Event.current.type == EventType.DragPerform)
            {
                for (int i = 0; i < DragAndDrop.objectReferences.Length; i++)
                {
                    if ((DragAndDrop.objectReferences[i] as GameObject).GetComponent<Renderer>() != null)
                    {
                        bool found = false;
                        for (int j = 0; j < targets.Count; ++j)
                        {
                            if (targets[j]._target == null)
                            {
                                targets[j]._target = (DragAndDrop.objectReferences[i] as GameObject).GetComponent<Renderer>();
                                found = true;
                                break;
                            }
                        }
                        if (!found)
                        {
                            targets.Add(CreateInstance<AutoLODProperties>());
                            targets[targets.Count - 1]._target = (DragAndDrop.objectReferences[i] as GameObject).GetComponent<Renderer>();
                        }
                    }
                }
                Event.current.Use();
            }
        }
        else
        {
            if (GUI.GetNameOfFocusedControl() == "DragDropBox")
            {
                GUI.FocusControl(null);
            }
        }
        Editor commonEditor = Editor.CreateEditor(commonSettings);
        scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition, GUIStyle.none, GUI.skin.verticalScrollbar);
        for (int i = 0; i < targets.Count; ++i)
        {
            if (targets[i] == null)
                targets[i] = CreateInstance<AutoLODProperties>();
            string name;
            name = targets[i]._target != null ? targets[i]._target.name : "Target " + i;
            EditorGUILayout.BeginHorizontal();
            if (name.Length > Screen.width / 20f)
                name = name.Substring(0, (int)(Screen.width / 20f)) + "...";
            if (targets[i]._customSettings)
                name += " [custom]";

            
            targets[i]._foldout = EditorGUILayout.BeginFoldoutHeaderGroup(targets[i]._foldout, name, subHeaderStyle);

            Editor subEditor = Editor.CreateEditor(targets[i]);
            property = subEditor.serializedObject.FindProperty("_target");
            EditorGUILayout.PropertyField(property, new GUIContent(""), GUILayout.Width(32), GUILayout.ExpandWidth(true));
            EditorGUILayout.Space(2, false);
            if (GUILayout.Button(EditorGUIUtility.IconContent("d_Toolbar Minus@2x"), GUILayout.Width(24), GUILayout.Height(18)))
                indexesToRemove.Add(i);
            EditorGUILayout.EndHorizontal();

            if (targets[i]._foldout)
            {
                EditorGUILayout.BeginVertical(EditorStyles.inspectorDefaultMargins);

                if (subEditor)
                {
                    property = subEditor.serializedObject.FindProperty("_customSettings");
                    EditorGUILayout.PropertyField(property);
                    if (targets[i]._customSettings)
                    {
                        pathInputStyle.normal.textColor = !Directory.Exists(Application.dataPath + "/" + targets[i]._filePath) ? Color.yellow : Color.green;
                        pathInputStyle.hover.textColor = !Directory.Exists(Application.dataPath + "/" + targets[i]._filePath) ? Color.yellow : Color.green;
                        pathInputStyle.focused.textColor = !Directory.Exists(Application.dataPath + "/" + targets[i]._filePath) ? Color.yellow : Color.green;

                        property = subEditor.serializedObject.FindProperty("_lodLevels");
                        EditorGUILayout.IntSlider(property, 1, 8);
                        property = subEditor.serializedObject.FindProperty("_reductionRate");
                        EditorGUILayout.Slider(property, 1.1f, 6);
                        if (targets[i]._lodGroupFoldout = EditorGUILayout.Foldout(targets[i]._lodGroupFoldout, "LODGroup Settings"))
                        {
                            EditorGUILayout.BeginVertical(EditorStyles.helpBox);
                            property = subEditor.serializedObject.FindProperty("_performance");
                            EditorGUILayout.Slider(property, 0.025f, 0.6f, new GUIContent("Seamless / Performant"));
                            property = subEditor.serializedObject.FindProperty("_relativeHeightCulling");
                            EditorGUILayout.Slider(property, 0.0001f, 0.02f, new GUIContent("Size Culling", "Proportion of the screen height below which the mesh should be culled"));
                            Rect lodPreview = GUILayoutUtility.GetRect(0, 28, GUILayout.ExpandWidth(true));
                            EditorGUI.DrawRect(lodPreview, lodColors[0]);
                            EditorGUI.LabelField(lodPreview, "LOD 0" + "\n100%", EditorStyles.miniBoldLabel);
                            float fullWidth = lodPreview.width;
                            float ratio = Mathf.Sqrt(targets[i]._performance);
                            float xInit = lodPreview.x;
                            lodPreview.width *= ratio;
                            lodPreview.x = xInit + (1f - ratio) * fullWidth;
                            for (int lvl = 1; lvl < targets[i]._lodLevels; ++lvl)
                            {
                                Color lodColor = lodColors[lvl];
                                EditorGUI.DrawRect(lodPreview, lodColor);
                                EditorGUI.LabelField(lodPreview, "LOD " + lvl + "\n" + Mathf.Round(100f * Mathf.Pow(targets[i]._performance, lvl)) + "%", EditorStyles.miniBoldLabel);
                                lodPreview.x += (1f - ratio) * lodPreview.width;
                                lodPreview.width *= ratio;
                            }
                            lodPreview.width = fullWidth * (Mathf.Sqrt(targets[i]._relativeHeightCulling));
                            lodPreview.x = xInit + fullWidth - lodPreview.width;
                            EditorGUI.DrawRect(lodPreview, lodColors[8]);
                            EditorGUI.LabelField(lodPreview, "Culled" + "\n" + Mathf.Round(100f * targets[i]._relativeHeightCulling) + "%", EditorStyles.miniBoldLabel);
                            EditorGUILayout.Separator();
                            EditorGUILayout.EndVertical();
                        }
                        property = subEditor.serializedObject.FindProperty("_optimizeSourceMesh");
                        EditorGUILayout.PropertyField(property, new GUIContent("Optimize Source Mesh", "Removes unnecessary vertices in the source mesh, as seamless as possible"));
                        property = subEditor.serializedObject.FindProperty("_flatShading");
                        EditorGUILayout.PropertyField(property, new GUIContent("Flat shading", "If enabled, generated mesh will be flat shaded. Will not modify the source mesh."));
                        property = subEditor.serializedObject.FindProperty("_writeMeshOnDisk");
                        EditorGUILayout.PropertyField(property, new GUIContent("Save meshes to Assets", "Useful if you want to save the scene object as a prefab later"));

                        

                        if (targets[i]._writeMeshOnDisk)
                        {
                            EditorGUILayout.BeginHorizontal();
                            EditorGUILayout.LabelField("Assets/", GUILayout.Width(42));
                            targets[i]._filePath = EditorGUILayout.TextField(targets[i]._filePath, pathInputStyle);

                            if (GUILayout.Button(EditorGUIUtility.IconContent("Folder Icon"), GUILayout.Width(24), GUILayout.Height(18)))
                            {
                                GUI.FocusControl(null);
                                string absPath = EditorUtility.SaveFolderPanel("Save Path", "Assets/" + targets[i]._filePath, "Assets/" + targets[i]._filePath);

                                if (absPath.Contains(Application.dataPath))
                                {
                                    targets[i]._filePath = absPath.Substring(Application.dataPath.Length);
                                    if (targets[i]._filePath.StartsWith("/"))
                                        targets[i]._filePath = targets[i]._filePath.Substring(1);
                                }
                                else
                                {
                                    if (absPath != "")
                                        Debug.LogWarning("Invalid path: " + absPath + ". Please save the file under the Assets/ folder");
                                }
                            }
                            EditorGUILayout.EndHorizontal();
                            if (!Directory.Exists(Application.dataPath + "/" + targets[i]._filePath))
                            {
                                EditorGUILayout.LabelField("The path will be created.", pathCreatedStyle);
                            }
                        }
                    }
                }
                EditorGUILayout.EndVertical();
            }
            subEditor.serializedObject.ApplyModifiedProperties();
            EditorGUILayout.EndFoldoutHeaderGroup();
            EditorGUILayout.Separator();
        }
        EditorGUILayout.EndScrollView();
        Editor editor = Editor.CreateEditor(this);
        EditorGUILayout.EndVertical();
        EditorGUILayout.Separator();
        EditorGUILayout.BeginHorizontal(EditorStyles.helpBox);
        property = editor.serializedObject.FindProperty("_clearWhenFinished");
        EditorGUILayout.PropertyField(property, new GUIContent("Clear when finished"));
        editor.serializedObject.ApplyModifiedProperties();
        EditorGUILayout.EndVertical();

        indexesToRemove.Reverse();

        foreach(int index in indexesToRemove){
            targets.RemoveAt(index);
        }

        EditorGUILayout.Separator();

        pathInputStyle.normal.textColor = !Directory.Exists(Application.dataPath + "/" + commonSettings._filePath) ? Color.yellow : Color.green;
        pathInputStyle.hover.textColor = !Directory.Exists(Application.dataPath + "/" + commonSettings._filePath) ? Color.yellow : Color.green;
        pathInputStyle.focused.textColor = !Directory.Exists(Application.dataPath + "/" + commonSettings._filePath) ? Color.yellow : Color.green;

        EditorGUILayout.BeginVertical(EditorStyles.helpBox);

        EditorGUILayout.LabelField("Common Settings", titleStyle);

        EditorGUILayout.Separator();
        property = commonEditor.serializedObject.FindProperty("_lodLevels");
        EditorGUILayout.IntSlider(property, 1, 8);
        property = commonEditor.serializedObject.FindProperty("_reductionRate");
        EditorGUILayout.Slider(property, 1.1f, 6);

        if (commonSettings._lodGroupFoldout = EditorGUILayout.Foldout(commonSettings._lodGroupFoldout, "LODGroup Settings"))
        {
            EditorGUILayout.BeginVertical(EditorStyles.helpBox);
            property = commonEditor.serializedObject.FindProperty("_performance");
            EditorGUILayout.Slider(property, 0.025f, 0.6f, new GUIContent("Seamless / Performant"));
            property = commonEditor.serializedObject.FindProperty("_relativeHeightCulling");
            EditorGUILayout.Slider(property, 0.0001f, 0.02f, new GUIContent("Size Culling", "Proportion of the screen height below which the mesh should be culled"));
            Rect lodPreview = GUILayoutUtility.GetRect(0, 28, GUILayout.ExpandWidth(true));
            EditorGUI.DrawRect(lodPreview, lodColors[0]);
            EditorGUI.LabelField(lodPreview, "LOD 0" + "\n100%", EditorStyles.miniBoldLabel);
            float fullWidth = lodPreview.width;
            float ratio = Mathf.Sqrt(commonSettings._performance);
            float xInit = lodPreview.x;
            lodPreview.width *= ratio;
            lodPreview.x = xInit + (1f - ratio) * fullWidth;
            for (int lvl = 1; lvl < commonSettings._lodLevels; ++lvl)
            {
                Color lodColor = lodColors[lvl];
                EditorGUI.DrawRect(lodPreview, lodColor);
                EditorGUI.LabelField(lodPreview, "LOD " + lvl + "\n" + Mathf.Round(100f * Mathf.Pow(commonSettings._performance, lvl)) + "%", EditorStyles.miniBoldLabel);
                lodPreview.x += (1f - ratio) * lodPreview.width;
                lodPreview.width *= ratio;
            }
            lodPreview.width = fullWidth * (Mathf.Sqrt(commonSettings._relativeHeightCulling));
            lodPreview.x = xInit + fullWidth - lodPreview.width;
            EditorGUI.DrawRect(lodPreview, lodColors[8]);
            EditorGUI.LabelField(lodPreview, "Culled" + "\n" + Mathf.Round(100f * commonSettings._relativeHeightCulling) + "%", EditorStyles.miniBoldLabel);
            EditorGUILayout.Separator();
            EditorGUILayout.EndVertical();
        }

        property = commonEditor.serializedObject.FindProperty("_optimizeSourceMesh");
        EditorGUILayout.PropertyField(property, new GUIContent("Optimize Source Mesh", "Removes unnecessary vertices in the source mesh, as seamless as possible"));

        property = commonEditor.serializedObject.FindProperty("_flatShading");
        EditorGUILayout.PropertyField(property, new GUIContent("Flat shading", "If enabled, generated mesh will be flat shaded. Will not modify the source mesh."));
        property = commonEditor.serializedObject.FindProperty("_writeMeshOnDisk");
        EditorGUILayout.PropertyField(property, new GUIContent("Save meshes to Assets", "Useful if you want to save the scene object as a prefab later"));
        commonEditor.serializedObject.ApplyModifiedProperties();
        if(commonSettings._writeMeshOnDisk)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField("Assets/", GUILayout.Width(42));
            commonSettings._filePath = EditorGUILayout.TextField(commonSettings._filePath, pathInputStyle);

            if (GUILayout.Button(EditorGUIUtility.IconContent("Folder Icon"), GUILayout.Width(24), GUILayout.Height(18)))
            {
                GUI.FocusControl(null);
                string absPath = EditorUtility.SaveFolderPanel("Save Path", "Assets/" + commonSettings._filePath, "Assets/" + commonSettings._filePath);

                if (absPath.Contains(Application.dataPath))
                {
                    commonSettings._filePath = absPath.Substring(Application.dataPath.Length);
                    if (commonSettings._filePath.StartsWith("/"))
                        commonSettings._filePath = commonSettings._filePath.Substring(1);
                }
                else
                {
                    if (absPath != "")
                        Debug.LogWarning("Invalid path: " + absPath + ". Please save the file under the Assets/ folder");
                }
            }
            EditorGUILayout.EndHorizontal();
            if (!Directory.Exists(Application.dataPath + "/" + commonSettings._filePath))
            {
                EditorGUILayout.LabelField("The path will be created.", pathCreatedStyle);
            }
        }
        EditorGUILayout.Separator();
        EditorGUILayout.EndVertical();
        EditorGUILayout.Separator();
        GUILayout.BeginHorizontal(GUILayout.ExpandWidth(true));
        GUILayout.FlexibleSpace();
        if (GUILayout.Button(new GUIContent("Generate LOD", Resources.Load<Texture>("Logo_AutoLOD_small")), GUILayout.Height(42), GUILayout.Width(225)))
        {
            GenerateLOD();
        }
        GUILayout.FlexibleSpace();
        GUILayout.EndHorizontal();

        GUILayout.FlexibleSpace();
        EditorGUILayout.Separator();
        GUILayout.BeginHorizontal();
        
        smallFont.normal.textColor = new Color(0.8f, 0.8f, 0.8f);
        if (GUILayout.Button(EditorGUIUtility.IconContent("BuildSettings.Web.Small"), GUILayout.Height(20)))
        {
            Help.BrowseURL("https://www.leochaumartin.com/");
        }
        if (GUILayout.Button(Resources.Load<Texture>("instagram"), GUILayout.Height(20), GUILayout.Width(24)))
        {
            Help.BrowseURL("https://www.instagram.com/leochaumartin/");
        }
        if (GUILayout.Button(Resources.Load<Texture>("youtube"), GUILayout.Height(20), GUILayout.Width(24)))
        {
            Help.BrowseURL("https://www.youtube.com/channel/UCTGysKJUd9Njaxqju4-c6_w");
        }
        if (GUILayout.Button(Resources.Load<Texture>("twitter"), GUILayout.Height(20), GUILayout.Width(24)))
        {
            Help.BrowseURL("https://twitter.com/LeoChaumartin");
        }
        if (GUILayout.Button(EditorGUIUtility.IconContent("_Help"), GUILayout.Height(20)))
        {
            Help.BrowseURL("mailto:chaumartinleo@gmail.com");
        }
        GUILayout.FlexibleSpace();
        GUILayout.BeginVertical();
        GUILayout.Label("AutoLOD v3.2 ", smallFont, GUILayout.Height(8));
        GUILayout.Label("© 2020-2022 ", smallFont, GUILayout.Height(8));
        GUILayout.Label("Léo Chaumartin ", smallFont, GUILayout.Height(8));
        GUILayout.EndVertical();
        GUILayout.EndHorizontal();
        EditorGUILayout.Separator();
    }

    void ReportProgress(string message, float value)
    {
        string prefix = currentObjectName != "" ? currentObjectName + " - " : "";
        EditorUtility.DisplayProgressBar("AutoLOD", prefix + message, value);
    }

    void ReportDecimationStatus(string message, int start, int current, int end)
    {
        // From Unity 2020, DisplayProgressBar runs way faster
#if UNITY_2020
        double progress = (current - Mathf.Min(start, end)) / (double)Mathf.Abs(start - end);
        message += ": " + ((int)(100 * progress)).ToString() + "%";
        ReportProgress(message, (float)progress);
#endif
    }

    RendererType GetRendererType(GameObject go)
    {
        if (go.GetComponent<ReflectionProbe>())
            return RendererType.Unhandled;
        if (go.GetComponent<SkinnedMeshRenderer>())
            return RendererType.Skinned;
        if (go.GetComponent<Renderer>())
        {
            if (go.GetComponent<MeshFilter>())
                return RendererType.Default;
            return RendererType.Unhandled;
        }
        return RendererType.Unknown;
    }

    private void ProcessMeshRenderer(AutoLODProperties properties, int count)
    {
        GameObject go = properties._target.gameObject;
        float currentProgress = 0f;
        Undo.RecordObject(go, "Source GameObject modified");
        currentObjectName = go.name + "_LOD0";
        ReportProgress("", currentProgress);
        GameObject detailedMesh = (GameObject)Instantiate(go, go.transform.position, go.transform.rotation);
        Undo.RegisterCreatedObjectUndo(detailedMesh, "Created LOD0");

        foreach (MonoBehaviour mb in detailedMesh.GetComponents<MonoBehaviour>())
            DestroyImmediate(mb);

        // Preventing from children duplication
        Transform[] children = detailedMesh.GetComponentsInChildren<Transform>();
        foreach (Transform child in children)
            if (child.gameObject != detailedMesh)
                Undo.DestroyObjectImmediate(child.gameObject);

        GameObject parentGo = go;
        Undo.SetTransformParent(detailedMesh.transform, parentGo.transform, "LOD0 New Parent");
        Undo.RecordObject(detailedMesh.transform, "LOD0 scale)");
        detailedMesh.transform.localScale = Vector3.one;
        LODGroup lodGroup = Undo.AddComponent<LODGroup>(parentGo);
        Undo.DestroyObjectImmediate(parentGo.GetComponent<MeshFilter>());
        Undo.DestroyObjectImmediate(parentGo.GetComponent<MeshRenderer>());
        bool hasCollider = false;
        if (parentGo.GetComponent<Collider>())
        {
            Undo.DestroyObjectImmediate(parentGo.GetComponent<Collider>());
            hasCollider = true;
        }
        LOD[] lods = new LOD[properties._lodLevels];
        UnityEngine.Mesh lodMesh;
        lodMesh = detailedMesh.GetComponent<MeshFilter>().sharedMesh;

        bool hasBones = lodMesh.boneWeights.Length > 0;

        MeshDecimator.Mesh meshDecimator = MeshDecimatorUnityEngineAPI.Mesh2DecMesh(lodMesh);

        MeshDecimator.Algorithms.DecimationAlgorithm decimationAlgorithm = MeshDecimation.CreateAlgorithm(Algorithm.Default);
        decimationAlgorithm.StatusReport += ReportDecimationStatus;

        //Using the existing mesh as LOD0
        {
            if (properties._optimizeSourceMesh)
            {
                meshDecimator = MeshDecimator.MeshDecimation.DecimateMeshLossless(decimationAlgorithm, meshDecimator);
                lodMesh = MeshDecimatorUnityEngineAPI.DecMesh2Mesh(meshDecimator, hasBones);
                lodMesh.name = go.name + "_LOD0";
                Undo.RecordObject(detailedMesh.GetComponent<MeshFilter>().sharedMesh, "LOD0 optimized mesh");
                if (properties._flatShading)
                {
                    AutoLODMeshUtility.Smooth2FlatShading(lodMesh);
                }
                detailedMesh.GetComponent<MeshFilter>().sharedMesh = lodMesh;
                if (properties._writeMeshOnDisk)
                {
                    AssetDatabase.CreateAsset(lodMesh, AssetDatabase.GenerateUniqueAssetPath("Assets/" + properties._filePath + "/" + go.name + "_LOD0.asset"));
                }
            }
            LOD lod = new LOD
            {
                renderers = new Renderer[1] { detailedMesh.GetComponent<Renderer>() },
                screenRelativeTransitionHeight = (properties._lodLevels == 1 ? properties._relativeHeightCulling : properties._performance)
            };
            lods[0] = lod;
            Undo.RecordObject(detailedMesh, "LOD0 Optimized Name");
            detailedMesh.name = go.name + "_LOD0";
        }

        currentProgress = (float)(count * properties._lodLevels) / (float)(targets.Count * properties._lodLevels);
        ReportProgress("", currentProgress);

        for (int l = 1; l < properties._lodLevels; ++l)
        {

            currentObjectName = go.name + "_LOD" + l;
            GameObject clone = new GameObject(go.name + "_LOD" + l);
            Undo.RegisterCreatedObjectUndo(clone, "Created LOD0");

            int triangleTargetCount = (int)(lodMesh.triangles.Length / (3 * properties._reductionRate));
            meshDecimator = MeshDecimator.MeshDecimation.DecimateMesh(decimationAlgorithm, meshDecimator, triangleTargetCount);
            lodMesh = MeshDecimatorUnityEngineAPI.DecMesh2Mesh(meshDecimator, hasBones);
            lodMesh.name = go.name + "_LOD" + l;
            if (properties._flatShading)
            {
                AutoLODMeshUtility.Smooth2FlatShading(lodMesh);
            }
            if (properties._writeMeshOnDisk)
            {
                AssetDatabase.CreateAsset(lodMesh, AssetDatabase.GenerateUniqueAssetPath("Assets/" + properties._filePath + "/" + go.name + "_LOD" + l.ToString() + ".asset"));
            }
            clone.transform.parent = parentGo.transform;
            clone.transform.localPosition = Vector3.zero;
            clone.transform.localRotation = Quaternion.identity;
            clone.transform.localScale = Vector3.one;
            clone.AddComponent<MeshFilter>().sharedMesh = lodMesh;
            clone.AddComponent<MeshRenderer>().sharedMaterials = detailedMesh.GetComponent<Renderer>().sharedMaterials;

            if (hasCollider)
            {
                clone.AddComponent<MeshCollider>().sharedMesh = clone.GetComponent<MeshFilter>().sharedMesh;
            }

            LOD lod = new LOD
            {
                renderers = new Renderer[1] { clone.GetComponent<Renderer>() },
            };
            if (l < properties._lodLevels - 1)
            {
                if (Mathf.Pow(properties._performance, l + 1) > properties._relativeHeightCulling)
                    lod.screenRelativeTransitionHeight = Mathf.Pow(properties._performance, l + 1);
                else
                {
                    lod.screenRelativeTransitionHeight = (lods[l - 1].screenRelativeTransitionHeight + properties._relativeHeightCulling) / 2f;
                }
            }
            else
                lod.screenRelativeTransitionHeight = properties._relativeHeightCulling;
            lods[l] = lod;

            currentProgress = (float)(count * properties._lodLevels + l) / (float)(targets.Count * properties._lodLevels);
            ReportProgress("", currentProgress);
        }
        if (properties._writeMeshOnDisk)
            AssetDatabase.SaveAssets();
        lodGroup.SetLODs(lods);
        lodGroup.animateCrossFading = true;
        lodGroup.fadeMode = LODFadeMode.CrossFade;
        LODGroup.crossFadeAnimationDuration = 0.1f;
    }

    private void ProcessSkinnedMeshRenderer(AutoLODProperties properties, int count)
    {
        GameObject go = properties._target.gameObject;
        float currentProgress = 0f;
        Undo.RecordObject(go, "Source GameObject modified");
        currentObjectName = go.name + "_LOD0";
        //ReportProgress("", currentProgress);
        GameObject detailedMesh = (GameObject)Instantiate(go, go.transform.position, go.transform.rotation);

        foreach (MonoBehaviour mb in detailedMesh.GetComponents<MonoBehaviour>())
            DestroyImmediate(mb);

        detailedMesh.GetComponent<SkinnedMeshRenderer>().sharedMesh = go.GetComponent<SkinnedMeshRenderer>().sharedMesh;
        Undo.RegisterCreatedObjectUndo(detailedMesh, "Created LOD0");

        // Preventing from children duplication
        Transform[] children = detailedMesh.GetComponentsInChildren<Transform>();
        foreach (Transform child in children)
            if (child.gameObject != detailedMesh)
                Undo.DestroyObjectImmediate(child.gameObject);

        GameObject parentGo = go;
        Undo.SetTransformParent(detailedMesh.transform, parentGo.transform, "LOD0 New Parent");
        Undo.RecordObject(detailedMesh.transform, "LOD0 scale)");
        detailedMesh.transform.localScale = Vector3.one;
        Transform bones = detailedMesh.GetComponent<SkinnedMeshRenderer>().rootBone;
        detailedMesh.GetComponent<SkinnedMeshRenderer>().rootBone = null;
        detailedMesh.GetComponent<SkinnedMeshRenderer>().rootBone = bones;
        LODGroup lodGroup = Undo.AddComponent<LODGroup>(parentGo);
        Undo.DestroyObjectImmediate(parentGo.GetComponent<SkinnedMeshRenderer>());
        bool hasCollider = false;
        if (parentGo.GetComponent<Collider>())
        {
            Undo.DestroyObjectImmediate(parentGo.GetComponent<Collider>());
            hasCollider = true;
        }
        LOD[] lods = new LOD[properties._lodLevels];
        UnityEngine.Mesh lodMesh;
        lodMesh = detailedMesh.GetComponent<SkinnedMeshRenderer>().sharedMesh;
        bool hasBones = lodMesh.boneWeights.Length > 0;
        Matrix4x4[] bindposes = lodMesh.bindposes;
        MeshDecimator.Mesh meshDecimator = MeshDecimatorUnityEngineAPI.Mesh2DecMesh(lodMesh);

        MeshDecimator.Algorithms.DecimationAlgorithm decimationAlgorithm = MeshDecimation.CreateAlgorithm(Algorithm.Default);
        decimationAlgorithm.StatusReport += this.ReportDecimationStatus;


        //Using the existing mesh as LOD0
        {
            if (properties._optimizeSourceMesh)
            {
                meshDecimator = MeshDecimator.MeshDecimation.DecimateMeshLossless(decimationAlgorithm, meshDecimator);
                lodMesh = MeshDecimatorUnityEngineAPI.DecMesh2Mesh(meshDecimator, hasBones);
                lodMesh.RecalculateBounds();
                Undo.RecordObject(detailedMesh.GetComponent<SkinnedMeshRenderer>().sharedMesh, "LOD0 optimized mesh");
                lodMesh.name = go.name + "_LOD0";
                if (properties._flatShading)
                {
                    AutoLODMeshUtility.Smooth2FlatShading(lodMesh);
                }
                lodMesh.bindposes = bindposes;
                detailedMesh.GetComponent<SkinnedMeshRenderer>().sharedMesh = lodMesh;
                if (properties._writeMeshOnDisk)
                {
                    AssetDatabase.CreateAsset(lodMesh, AssetDatabase.GenerateUniqueAssetPath("Assets/" + properties._filePath + "/" + go.name + "_LOD0.asset"));
                }
            }
            LOD lod = new LOD
            {
                renderers = new Renderer[1] { detailedMesh.GetComponent<SkinnedMeshRenderer>() },
                screenRelativeTransitionHeight = (properties._lodLevels == 1 ? properties._relativeHeightCulling : properties._performance)
            };
            lods[0] = lod;
            Undo.RecordObject(detailedMesh, "LOD0 Optimized Name");
            detailedMesh.name = go.name + "_LOD0";
        }

        currentProgress = (float)(count * properties._lodLevels) / (float)(targets.Count * properties._lodLevels);
        ReportProgress("", currentProgress);

        for (int l = 1; l < properties._lodLevels; ++l)
        {
            currentObjectName = go.name + "_LOD" + l;
            GameObject clone = new GameObject(go.name + "_LOD" + l);
            Undo.RegisterCreatedObjectUndo(clone, "Created LOD0");
            int triangleTargetCount = Mathf.Min((int)(lodMesh.triangles.Length / (3 * properties._reductionRate)), 100000);
            meshDecimator = MeshDecimator.MeshDecimation.DecimateMesh(decimationAlgorithm, meshDecimator, triangleTargetCount);
            lodMesh = MeshDecimatorUnityEngineAPI.DecMesh2Mesh(meshDecimator, hasBones);
            lodMesh.name = go.name + "_LOD" + l;
            if (properties._flatShading)
            {
                AutoLODMeshUtility.Smooth2FlatShading(lodMesh);
            }
            lodMesh.bindposes = bindposes;
            if (properties._writeMeshOnDisk)
            {
                AssetDatabase.CreateAsset(lodMesh, AssetDatabase.GenerateUniqueAssetPath("Assets/" + properties._filePath + "/" + go.name + "_LOD" + l.ToString() + ".asset"));
            }
            clone.transform.parent = parentGo.transform;
            clone.transform.localPosition = Vector3.zero;
            clone.transform.localRotation = Quaternion.identity;
            clone.transform.localScale = Vector3.one;
            clone.AddComponent<SkinnedMeshRenderer>().bones = detailedMesh.GetComponent<SkinnedMeshRenderer>().bones;


            clone.GetComponent<SkinnedMeshRenderer>().sharedMesh = lodMesh;
            clone.GetComponent<SkinnedMeshRenderer>().sharedMaterials = detailedMesh.GetComponent<SkinnedMeshRenderer>().sharedMaterials;

            if (hasCollider)
            {
                clone.AddComponent<MeshCollider>().sharedMesh = clone.GetComponent<SkinnedMeshRenderer>().sharedMesh;
            }

            LOD lod = new LOD
            {
                renderers = new Renderer[1] { clone.GetComponent<Renderer>() },
            };
            if (l < properties._lodLevels - 1)
            {
                if (Mathf.Pow(properties._performance, l + 1) > properties._relativeHeightCulling)
                    lod.screenRelativeTransitionHeight = Mathf.Pow(properties._performance, l + 1);
                else
                {
                    lod.screenRelativeTransitionHeight = (lods[l - 1].screenRelativeTransitionHeight + properties._relativeHeightCulling) / 2f;
                }
            }
            else
                lod.screenRelativeTransitionHeight = properties._relativeHeightCulling;
            lods[l] = lod;

            currentProgress = (float)(count * properties._lodLevels + l) / (float)(targets.Count * properties._lodLevels);
            ReportProgress("", currentProgress);
        }
        if (properties._writeMeshOnDisk)
            AssetDatabase.SaveAssets();
        lodGroup.SetLODs(lods);
        lodGroup.animateCrossFading = true;
        lodGroup.fadeMode = LODFadeMode.CrossFade;
        LODGroup.crossFadeAnimationDuration = 0.1f;
    }

    public void GenerateLOD()
    {
        int count = 0;

        Undo.IncrementCurrentGroup();
        Undo.SetCurrentGroupName("AutoLOD");

        foreach (AutoLODProperties a in targets)
        {
            if (a._target == null)
                continue;
            if(a._target.gameObject.scene.name == null)
            {
                Debug.LogWarning(a._target.name + " is a Prefab. You must instantiate the prefab in a scene and work on the instance instead. Ignoring this object.");
                continue;
            }
            if (!a._customSettings)
            {
                a.Apply(commonSettings);
            }

            if (a._writeMeshOnDisk && (!Directory.Exists(Application.dataPath + "/" + a._filePath)))
            {
                Directory.CreateDirectory(Application.dataPath + "/" + a._filePath);
            }

            GameObject go = a._target.gameObject;
            RendererType meshType = GetRendererType(go);
            switch (meshType)
            {
                case RendererType.Default:
                    {
                        ProcessMeshRenderer(a, count);
                        break;
                    }
                case RendererType.Skinned:
                    {
                        ProcessSkinnedMeshRenderer(a, count);
                        break;
                    }

                case RendererType.Unhandled:
                    {
                        Debug.LogWarning(go.name + ": This renderer is not handled yet. Ignoring this object.");
                        break;
                    }
                case RendererType.Unknown:
                default:
                    {
                        Debug.LogWarning(go.name + ": No valid renderer found. Ignoring this object.");
                        break;
                    }
            }
            count++;
        }
        if (_clearWhenFinished)
            targets.Clear();
        EditorUtility.ClearProgressBar();
    }
}
#endif