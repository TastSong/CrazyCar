using UnityEngine;
using UnityEditor;
using System;
using System.IO;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro.EditorUtilities;


namespace TMPro
{
    // Suppressing warnings related to the use of private structures which are confusing the compiler as these data structures are used by .json files.
    #pragma warning disable 0649

    /// <summary>
    /// Data structure containing the target and replacement fileIDs and GUIDs which will require remapping from previous version of TextMesh Pro to the new TextMesh Pro UPM package.
    /// </summary>
    [System.Serializable]
    struct AssetConversionRecord
    {
        public string referencedResource;
        public string target;
        public string replacement;
    }


    /// <summary>
    /// Data structure containing a list of target and replacement fileID and GUID requiring remapping from previous versions of TextMesh Pro to the new TextMesh Pro UPM package.
    /// This data structure is populated with the data contained in the PackageConversionData.json file included in the package.
    /// </summary>
    [System.Serializable]
    class AssetConversionData
    {
        public List<AssetConversionRecord> assetRecords;
    }


    public class TMP_ProjectConversionUtility : EditorWindow
    {
        // Create Project Files GUID Remapping Tool window
        [MenuItem("Window/TextMeshPro/Project Files GUID Remapping Tool", false, 2100)]
        static void ShowConverterWindow()
        {
            var window = GetWindow<TMP_ProjectConversionUtility>();
            window.titleContent = new GUIContent("Conversion Tool");
            window.Focus();
        }

        private static HashSet<Type> m_IgnoreAssetTypes = new HashSet<Type>()
        {
            typeof(AnimatorOverrideController),
            typeof(AudioClip),
            typeof(AvatarMask),
            typeof(ComputeShader),
            typeof(Cubemap),
            typeof(DefaultAsset),
            typeof(Flare),
            typeof(Font),
            typeof(GUISkin),
            typeof(HumanTemplate),
            typeof(LightingDataAsset),
            typeof(Mesh),
            typeof(MonoScript),
            typeof(PhysicMaterial),
            typeof(PhysicsMaterial2D),
            typeof(RenderTexture),
            typeof(Shader),
            typeof(TerrainData),
            typeof(TextAsset),
            typeof(Texture2D),
            typeof(Texture2DArray),
            typeof(Texture3D),
            typeof(UnityEditorInternal.AssemblyDefinitionAsset),
            typeof(UnityEngine.AI.NavMeshData),
            typeof(UnityEngine.Tilemaps.Tile),
            typeof(UnityEngine.U2D.SpriteAtlas),
            typeof(UnityEngine.Video.VideoClip),
        };

        /// <summary>
        ///
        /// </summary>
        struct AssetModificationRecord
        {
            public string assetFilePath;
            public string assetDataFile;
        }

        struct AssetFileRecord
        {
            public string assetFilePath;
            public string assetMetaFilePath;

            public AssetFileRecord(string filePath, string metaFilePath)
            {
                this.assetFilePath = filePath;
                this.assetMetaFilePath = metaFilePath;
            }
        }

        private static string m_ProjectPath;
        private static string m_ProjectFolderToScan;
        private static bool m_IsAlreadyScanningProject;
        private static bool m_CancelScanProcess;
        private static string k_ProjectScanReportDefaultText = "<color=#FFFF80><b>Project Scan Results</b></color>\n";
        private static string k_ProjectScanLabelPrefix = "Scanning: ";
        private static string m_ProjectScanResults = string.Empty;
        private static Vector2 m_ProjectScanResultScrollPosition;
        private static float m_ProgressPercentage = 0;

        private static int m_ScanningTotalFiles;
        private static int m_RemainingFilesToScan;
        private static int m_ScanningCurrentFileIndex;
        private static string m_ScanningCurrentFileName;

        private static AssetConversionData m_ConversionData;

        private static List<AssetModificationRecord> m_ModifiedAssetList = new List<AssetModificationRecord>();


        void OnEnable()
        {
            // Set Editor Window Size
            SetEditorWindowSize();

            m_ProjectScanResults = k_ProjectScanReportDefaultText;
        }


        void OnGUI()
        {
            GUILayout.BeginVertical();
            {
                // Scan project files and resources
                GUILayout.BeginVertical(EditorStyles.helpBox);
                {
                    GUILayout.Label("Scan Project Files", EditorStyles.boldLabel);
                    GUILayout.Label("Press the <i>Scan Project Files</i> button to begin scanning your project for files & resources that were created with a previous version of TextMesh Pro.", TMP_UIStyleManager.label);
                    GUILayout.Space(10f);
                    GUILayout.Label("Project folder to be scanned. Example \"Assets/TextMesh Pro\"");
                    m_ProjectFolderToScan = EditorGUILayout.TextField("Folder Path:      Assets/", m_ProjectFolderToScan);
                    GUILayout.Space(5f);

                    GUI.enabled = m_IsAlreadyScanningProject == false ? true : false;
                    if (GUILayout.Button("Scan Project Files"))
                    {
                        m_CancelScanProcess = false;

                        // Make sure Asset Serialization mode is set to ForceText and Version Control mode to Visible Meta Files.
                        if (CheckProjectSerializationAndSourceControlModes() == true)
                        {
                            m_ProjectPath = Path.GetFullPath("Assets/..");
                            TMP_EditorCoroutine.StartCoroutine(ScanProjectFiles());
                        }
                        else
                        {
                            EditorUtility.DisplayDialog("Project Settings Change Required", "In menu options \"Edit - Project Settings - Editor\", please change Asset Serialization Mode to ForceText and Source Control Mode to Visible Meta Files.", "OK", string.Empty);
                        }
                    }
                    GUI.enabled = true;

                    // Display progress bar
                    Rect rect = GUILayoutUtility.GetRect(0f, 20f, GUILayout.ExpandWidth(true));
                    EditorGUI.ProgressBar(rect, m_ProgressPercentage, "Scan Progress (" + m_ScanningCurrentFileIndex + "/" + m_ScanningTotalFiles + ")");

                    // Display cancel button and name of file currently being scanned.
                    if (m_IsAlreadyScanningProject)
                    {
                        Rect cancelRect = new Rect(rect.width - 20, rect.y + 2, 20, 16);
                        if (GUI.Button(cancelRect, "X"))
                        {
                            m_CancelScanProcess = true;
                        }
                        GUILayout.Label(k_ProjectScanLabelPrefix + m_ScanningCurrentFileName, TMP_UIStyleManager.label);
                    }
                    else
                        GUILayout.Label(string.Empty);

                    GUILayout.Space(5);

                    // Creation Feedback
                    GUILayout.BeginVertical(TMP_UIStyleManager.textAreaBoxWindow, GUILayout.ExpandHeight(true));
                    {
                        m_ProjectScanResultScrollPosition = EditorGUILayout.BeginScrollView(m_ProjectScanResultScrollPosition, GUILayout.ExpandHeight(true));
                        EditorGUILayout.LabelField(m_ProjectScanResults, TMP_UIStyleManager.label);
                        EditorGUILayout.EndScrollView();
                    }
                    GUILayout.EndVertical();
                    GUILayout.Space(5f);
                }
                GUILayout.EndVertical();

                // Scan project files and resources
                GUILayout.BeginVertical(EditorStyles.helpBox);
                {
                    GUILayout.Label("Save Modified Project Files", EditorStyles.boldLabel);
                    GUILayout.Label("Pressing the <i>Save Modified Project Files</i> button will update the files in the <i>Project Scan Results</i> listed above. <color=#FFFF80>Please make sure that you have created a backup of your project first</color> as these file modifications are permanent and cannot be undone.", TMP_UIStyleManager.label);
                    GUILayout.Space(5f);

                    GUI.enabled = m_IsAlreadyScanningProject == false && m_ModifiedAssetList.Count > 0 ? true : false;
                    if (GUILayout.Button("Save Modified Project Files"))
                    {
                        UpdateProjectFiles();
                    }
                    GUILayout.Space(10f);
                }
                GUILayout.EndVertical();

            }
            GUILayout.EndVertical();
            GUILayout.Space(5f);
        }

        void OnInspectorUpdate()
        {
            Repaint();
        }


        /// <summary>
        /// Limits the minimum size of the editor window.
        /// </summary>
        void SetEditorWindowSize()
        {
            EditorWindow editorWindow = this;

            Vector2 currentWindowSize = editorWindow.minSize;

            editorWindow.minSize = new Vector2(Mathf.Max(640, currentWindowSize.x), Mathf.Max(420, currentWindowSize.y));
        }


        /// <summary>
        ///
        /// </summary>
        /// <param name="filePath"></param>
        /// <returns></returns>
        private static bool ShouldIgnoreFile(string filePath)
        {
            string fileExtension = Path.GetExtension(filePath);
            Type fileType = AssetDatabase.GetMainAssetTypeAtPath(filePath);

            if (m_IgnoreAssetTypes.Contains(fileType))
                return true;

            // Exclude FBX
            if (fileType == typeof(GameObject) && (fileExtension.ToLower() == ".fbx" || fileExtension.ToLower() == ".blend"))
                return true;

            return false;
        }


        private IEnumerator ScanProjectFiles()
        {
            m_IsAlreadyScanningProject = true;
            string packageFullPath = EditorUtilities.TMP_EditorUtility.packageFullPath;

            // List containing assets that have been modified.
            m_ProjectScanResults = k_ProjectScanReportDefaultText;
            m_ModifiedAssetList.Clear();
            m_ProgressPercentage = 0;

            // Read Conversion Data from Json file.
            if (m_ConversionData == null)
                m_ConversionData = JsonUtility.FromJson<AssetConversionData>(File.ReadAllText(packageFullPath + "/PackageConversionData.json"));

            // Get list of GUIDs for assets that might contain references to previous GUIDs that require updating.
            string searchFolder = string.IsNullOrEmpty(m_ProjectFolderToScan) ? "Assets" : ("Assets/" + m_ProjectFolderToScan);
            string[] guids = AssetDatabase.FindAssets("t:Object", new string[] { searchFolder }).Distinct().ToArray();

            k_ProjectScanLabelPrefix = "<b>Phase 1 - Filtering:</b> ";
            m_ScanningTotalFiles = guids.Length;
            m_ScanningCurrentFileIndex = 0;

            List<AssetFileRecord> projectFilesToScan = new List<AssetFileRecord>();

            foreach (var guid in guids)
            {
                if (m_CancelScanProcess)
                    break;

                string assetFilePath = AssetDatabase.GUIDToAssetPath(guid);

                m_ScanningCurrentFileIndex += 1;
                m_ScanningCurrentFileName = assetFilePath;
                m_ProgressPercentage = (float)m_ScanningCurrentFileIndex / m_ScanningTotalFiles;

                // Filter out file types we have no interest in searching
                if (ShouldIgnoreFile(assetFilePath))
                    continue;

                string assetMetaFilePath = AssetDatabase.GetTextMetaFilePathFromAssetPath(assetFilePath);

                projectFilesToScan.Add(new AssetFileRecord(assetFilePath, assetMetaFilePath));

                yield return null;
            }

            m_RemainingFilesToScan = m_ScanningTotalFiles = projectFilesToScan.Count;

            k_ProjectScanLabelPrefix = "<b>Phase 2 - Scanning:</b> ";

            for (int i = 0; i < m_ScanningTotalFiles; i++)
            {
                if (m_CancelScanProcess)
                    break;

                AssetFileRecord fileRecord = projectFilesToScan[i];

                ThreadPool.QueueUserWorkItem(Task =>
                {
                    ScanProjectFileAsync(fileRecord);

                    m_ScanningCurrentFileName = fileRecord.assetFilePath;

                    int completedScans = m_ScanningTotalFiles - Interlocked.Decrement(ref m_RemainingFilesToScan);

                    m_ScanningCurrentFileIndex = completedScans;
                    m_ProgressPercentage = (float)completedScans / m_ScanningTotalFiles;
                });

                if (i % 64 == 0)
                    yield return new WaitForSeconds(2.0f);

            }

            while (m_RemainingFilesToScan > 0 && !m_CancelScanProcess)
                yield return null;

            m_IsAlreadyScanningProject = false;
            m_ScanningCurrentFileName = string.Empty;
        }


        static void ScanProjectFileAsync(AssetFileRecord fileRecord)
        {
            if (m_CancelScanProcess)
                return;

            // Read the asset data file
            string assetDataFile = string.Empty;
            bool hasFileChanged = false;

            try
            {
                assetDataFile = File.ReadAllText(m_ProjectPath + "/" + fileRecord.assetFilePath);
            }
            catch
            {
                // Continue to the next asset if we can't read the current one.
                return;
            }

            // Read the asset meta data file
            string assetMetaFile = File.ReadAllText(m_ProjectPath + "/" + fileRecord.assetMetaFilePath);
            bool hasMetaFileChanges = false;

            foreach (AssetConversionRecord record in m_ConversionData.assetRecords)
            {
                if (assetDataFile.Contains(record.target))
                {
                    hasFileChanged = true;

                    assetDataFile = assetDataFile.Replace(record.target, record.replacement);
                }

                //// Check meta file
                if (assetMetaFile.Contains(record.target))
                {
                    hasMetaFileChanges = true;

                    assetMetaFile = assetMetaFile.Replace(record.target, record.replacement);
                }
            }

            if (hasFileChanged)
            {
                AssetModificationRecord modifiedAsset;
                modifiedAsset.assetFilePath = fileRecord.assetFilePath;
                modifiedAsset.assetDataFile = assetDataFile;

                m_ModifiedAssetList.Add(modifiedAsset);

                m_ProjectScanResults += fileRecord.assetFilePath + "\n";
            }

            if (hasMetaFileChanges)
            {
                AssetModificationRecord modifiedAsset;
                modifiedAsset.assetFilePath = fileRecord.assetMetaFilePath;
                modifiedAsset.assetDataFile = assetMetaFile;

                m_ModifiedAssetList.Add(modifiedAsset);

                m_ProjectScanResults += fileRecord.assetMetaFilePath + "\n";
            }
        }


        /// <summary>
        ///
        /// </summary>
        private static void ResetScanProcess()
        {
            m_IsAlreadyScanningProject = false;
            m_ScanningCurrentFileName = string.Empty;
            m_ProgressPercentage = 0;
            m_ScanningCurrentFileIndex = 0;
            m_ScanningTotalFiles = 0;
        }


        /// <summary>
        ///
        /// </summary>
        private static void UpdateProjectFiles()
        {
            // Make sure Asset Serialization mode is set to ForceText with Visible Meta Files.
            CheckProjectSerializationAndSourceControlModes();

            string projectPath = Path.GetFullPath("Assets/..");

            // Display dialogue to show user a list of project files that will be modified upon their consent.
            if (EditorUtility.DisplayDialog("Save Modified Asset(s)?", "Are you sure you want to save all modified assets?", "YES", "NO"))
            {
                for (int i = 0; i < m_ModifiedAssetList.Count; i++)
                {
                    // Make sure all file streams that might have been opened by Unity are closed.
                    //AssetDatabase.ReleaseCachedFileHandles();

                    //Debug.Log("Writing asset file [" + m_ModifiedAssetList[i].assetFilePath + "].");

                    File.WriteAllText(projectPath + "/" + m_ModifiedAssetList[i].assetFilePath, m_ModifiedAssetList[i].assetDataFile);
                }
            }

            AssetDatabase.Refresh();

            m_ProgressPercentage = 0;
            m_ProjectScanResults = k_ProjectScanReportDefaultText;
        }


        /// <summary>
        /// Check project Asset Serialization and Source Control modes
        /// </summary>
        private static bool CheckProjectSerializationAndSourceControlModes()
        {
            // Check Project Asset Serialization and Visible Meta Files mode.
            if (EditorSettings.serializationMode != SerializationMode.ForceText || EditorSettings.externalVersionControl != "Visible Meta Files")
            {
                return false;
            }

            return true;
        }
    }



    public class TMP_PackageUtilities : Editor
    {

        enum SaveAssetDialogueOptions { Unset = 0, Save = 1, SaveAll = 2, DoNotSave = 3 };

        private static SerializationMode m_ProjectAssetSerializationMode;
        private static string m_ProjectExternalVersionControl;

        struct AssetRemappingRecord
        {
            public string oldGuid;
            public string newGuid;
            public string assetPath;
        }

        struct AssetModificationRecord
        {
            public string assetFilePath;
            public string assetDataFile;
        }

        /// <summary>
        ///
        /// </summary>
        [MenuItem("Window/TextMeshPro/Import TMP Essential Resources", false, 2050)]
        public static void ImportProjectResourcesMenu()
        {
            ImportEssentialResources();
        }


        /// <summary>
        ///
        /// </summary>
        [MenuItem("Window/TextMeshPro/Import TMP Examples and Extras", false, 2051)]
        public static void ImportExamplesContentMenu()
        {
            ImportExamplesAndExtras();
        }


        private static void GetVersionInfo()
        {
            string version = TMP_Settings.version;
            Debug.Log("The version of this TextMesh Pro UPM package is (" + version + ").");
        }


        /// <summary>
        ///
        /// </summary>
        private static void ImportExamplesAndExtras()
        {
            string packageFullPath = TMP_EditorUtility.packageFullPath;

            AssetDatabase.ImportPackage(packageFullPath + "/Package Resources/TMP Examples & Extras.unitypackage", true);
        }

        private static string k_SettingsFilePath;
        private static byte[] k_SettingsBackup;

        /// <summary>
        ///
        /// </summary>
        private static void ImportEssentialResources()
        {
            // Check if the TMP Settings asset is already present in the project.
            string[] settings = AssetDatabase.FindAssets("t:TMP_Settings");

            if (settings.Length > 0)
            {
                // Save assets just in case the TMP Setting were modified before import.
                AssetDatabase.SaveAssets();

                // Copy existing TMP Settings asset to a byte[]
                k_SettingsFilePath = AssetDatabase.GUIDToAssetPath(settings[0]);
                k_SettingsBackup = File.ReadAllBytes(k_SettingsFilePath);

                RegisterResourceImportCallback();
            }

            string packageFullPath = TMP_EditorUtility.packageFullPath;

            AssetDatabase.ImportPackage(packageFullPath + "/Package Resources/TMP Essential Resources.unitypackage", true);
        }

        private static void RegisterResourceImportCallback()
        {
            AssetDatabase.importPackageCompleted += ImportCallback;
        }

        private static void ImportCallback(string packageName)
        {
            // Restore backup of TMP Settings from byte[]
            File.WriteAllBytes(k_SettingsFilePath, k_SettingsBackup);

            AssetDatabase.Refresh();

            AssetDatabase.importPackageCompleted -= ImportCallback;
        }
    }
}
