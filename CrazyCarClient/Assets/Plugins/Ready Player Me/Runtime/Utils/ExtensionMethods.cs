using UnityEngine;
using System.Linq;
using System.Collections;

namespace ReadyPlayerMe
{
    public static class ExtensionMethods
    {
        #region Coroutine Runner
        [ExecuteInEditMode]
        public class CoroutineRunner : MonoBehaviour {
            ~CoroutineRunner() {
                Destroy(gameObject);
            }
        }

        private static CoroutineRunner Operation;

        private const HideFlags HIDE_FLAGS = HideFlags.DontSaveInEditor | HideFlags.HideInHierarchy |
                                             HideFlags.HideInInspector | HideFlags.NotEditable |
                                             HideFlags.DontSaveInBuild;

        public static Coroutine Run(this IEnumerator iEnumerator) {
            if (Operation != null) return Operation.StartCoroutine(iEnumerator);
            Operation = new GameObject("[CoroutineRunner]").AddComponent<CoroutineRunner>();
            Operation.hideFlags = HIDE_FLAGS;
            Operation.gameObject.hideFlags = HIDE_FLAGS;
            return Operation.StartCoroutine(iEnumerator);
        }

        public static void Stop(this Coroutine coroutine)
        {
            if (Operation != null)
            {
                Operation.StopCoroutine(coroutine);
            }
        }
        #endregion

        #region Get Picker
        private static readonly string[] HeadMeshNameFilter = { "Renderer_Head", "Renderer_Avatar" };

        private const string BEARD_MESH_NAME_FILTER = "Renderer_Beard";
        private const string TEETH_MESH_NAME_FILTER = "Renderer_Teeth";

        public static SkinnedMeshRenderer GetMeshRenderer(this GameObject gameObject, MeshType meshType) {
            SkinnedMeshRenderer mesh = null;
            var children = gameObject.GetComponentsInChildren<SkinnedMeshRenderer>().ToList();

            if (children.Count == 0) {
                Debug.Log("ExtensionMethods.GetMeshRenderer: No SkinnedMeshRenderer found on the Game Object.");
                return null;
            }
            
            switch (meshType) {
                case MeshType.BeardMesh:
                    mesh = children.FirstOrDefault(child => BEARD_MESH_NAME_FILTER == child.name);
                    break;
                case MeshType.TeethMesh:
                    mesh = children.FirstOrDefault(child => TEETH_MESH_NAME_FILTER == child.name);
                    break;
                case MeshType.HeadMesh:
                    mesh = children.FirstOrDefault(child => HeadMeshNameFilter.Contains(child.name));
                    break;
            }
            
            if (mesh == null) {
                Debug.Log($"ExtensionMethods.GetMeshRenderer: Mesh type {meshType} not found on the Game Object.");
                return null;
            }
            
            return mesh;
        }
        #endregion
    }
}
