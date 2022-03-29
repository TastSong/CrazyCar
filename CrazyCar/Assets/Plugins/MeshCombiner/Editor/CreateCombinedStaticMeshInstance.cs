using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace LylekGames {
	public class CreateCombinedStaticMeshInstance {
        
        [MenuItem("Tools/Combine/Static Meshes")]
        private static void CombineStaticMeshesNewCollider()
        {
            //MY OBJECT
            Object selectedObject = Selection.activeObject;
            GameObject myObject = (GameObject)selectedObject;

            CombineMeshes myCombine;
            if (!myObject.GetComponent<CombineMeshes>())
                myCombine = myObject.AddComponent<CombineMeshes>();
            else
                myCombine = myObject.GetComponent<CombineMeshes>();
            myCombine.Start();
            myCombine.EnableMeshNewCollider();
        }
    }
}