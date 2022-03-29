using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.Reflection;
using System.IO;

namespace LylekGames {
[CustomEditor(typeof(CombineMeshes))]
	public class CombineMeshesEditor : Editor {
		CombineMeshes myCombine;

        public void OnEnable()
        {
            myCombine = (CombineMeshes)target;
            myCombine.Start();
        }
        public override void OnInspectorGUI() {
			myCombine = (CombineMeshes)target;
			DrawDefaultInspector();
            if (myCombine.myMeshFilter.sharedMesh == null)
            {
                if (GUILayout.Button("Combine Meshes"))
                    myCombine.EnableMeshNewCollider();
            }
            if (myCombine.myMeshFilter.sharedMesh != null)
            {
                if (GUILayout.Button("Save As Prefab (DESTRUCTIVE)"))
                    SaveMeshData(true);
                if (GUILayout.Button("Save As Prefab (Non-Destructive)"))
                    SaveMeshData(false);
                if (GUILayout.Button("Disable Meshes"))
                {
                    myCombine.DisableMesh();
                    EditorGUIUtility.ExitGUI();
                }
            }
        }
        public void SaveMeshData(bool destructive = false)
        {
            if (PrefabUtility.GetPrefabInstanceStatus(myCombine.gameObject) == PrefabInstanceStatus.Connected)
                PrefabUtility.UnpackPrefabInstance(myCombine.gameObject, PrefabUnpackMode.Completely, InteractionMode.AutomatedAction);
            if (!Directory.Exists(Application.dataPath + "/Plugins/MeshCombiner/Prefabs/"))
                Directory.CreateDirectory(Application.dataPath + "/Plugins/MeshCombiner/Prefabs/");
            if (!Directory.Exists(Application.dataPath + "/Plugins/MeshCombiner/MesheData/"))
                Directory.CreateDirectory(Application.dataPath + "/Plugins/MeshCombiner/MesheData/");
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();

            //SAVE MESH AND CREATE PREFAB
            SaveMesh(myCombine.myMeshFilter, destructive);
            Debug.Log("Data saved successfully.");
        }
        public void SaveMesh(MeshFilter meshFilter, bool destructive = false)
        {
            //SAVE MESH DATA
            AssetDatabase.CreateAsset(meshFilter.sharedMesh, "Assets/Plugins/MeshCombiner/MesheData/" + meshFilter.gameObject.name + ".asset");
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
            //SET OUR GAMEOBJECT'S MESH DATA AS OUR NEW SAVED MESH DATA
            meshFilter.sharedMesh = (Mesh)AssetDatabase.LoadAssetAtPath("Assets/Plugins/MeshCombiner/MesheData/" + meshFilter.gameObject.name + ".asset", typeof(Mesh));
            //REMOVE OUR CHILD OBJECTS
            if (destructive)
            {
                int childCount = meshFilter.gameObject.transform.childCount;
                for (int i = 0; i < childCount; i++)
                    DestroyImmediate(meshFilter.transform.GetChild(0).gameObject);
            }
            MeshCollider meshCollider = null;
            if (!meshFilter.gameObject.GetComponent<MeshCollider>())
                meshCollider = meshFilter.gameObject.AddComponent<MeshCollider>();
            else
                meshCollider = meshFilter.gameObject.GetComponent<MeshCollider>();
            meshCollider.sharedMesh = meshFilter.sharedMesh;
            //------------------CREATE A PREFAB OF THIS GAMEOBJECT------------------//
            PrefabUtility.SaveAsPrefabAssetAndConnect(myCombine.gameObject, "Assets/Plugins/MeshCombiner/Prefabs/" + meshFilter.gameObject.name + ".prefab", InteractionMode.UserAction);
            DestroyImmediate(myCombine);
            //REMOVE THE COMBINE SCRIPT FROM OUR PREFAB, WE WON'T BE NEEDING IT ANYMORE
            GameObject prefab = (GameObject)AssetDatabase.LoadAssetAtPath("Assets/Plugins/MeshCombiner/Prefabs/" + meshFilter.gameObject.name + ".prefab", typeof(GameObject));
            if (prefab != null)
                if (prefab.GetComponent<CombineMeshes>())
                    DestroyImmediate(prefab.GetComponent<CombineMeshes>(), true);
        }
    }
}
