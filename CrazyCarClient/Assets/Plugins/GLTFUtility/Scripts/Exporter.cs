using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using UnityEngine;

namespace Siccity.GLTFUtility {
	/// <summary> API used for exporting .gltf and .glb files </summary>
	public static class Exporter {
#if UNITY_EDITOR
		[UnityEditor.MenuItem("File/Export Selection/.glb")]
		public static void ExportSelectedGLB() {
			ExportGLB(UnityEditor.Selection.activeGameObject);
		}
#endif

		public static void ExportGLB(GameObject root) {
			GLTFObject gltfObject = CreateGLTFObject(root.transform);
			Debug.Log(JsonConvert.SerializeObject(gltfObject, new JsonSerializerSettings() { NullValueHandling = NullValueHandling.Ignore }));
		}

		public static void ExportGLTF(GameObject root) {
			Debug.Log("Not implemented yet");
		}

		public static GLTFObject CreateGLTFObject(Transform root) {
			GLTFObject gltfObject = new GLTFObject();
			GLTFAsset asset = new GLTFAsset() {
				generator = "GLTFUtility by Siccity https: //github.com/Siccity/GLTFUtility",
					version = "2.0"
			};
			//List<GLTFAccessor.ExportResult> accessors
			List<GLTFNode.ExportResult> nodes = GLTFNode.Export(root);
			List<GLTFMesh.ExportResult> meshes = GLTFMesh.Export(nodes);

			gltfObject.scene = 0;
			gltfObject.asset = asset;
			gltfObject.nodes = nodes.Cast<GLTFNode>().ToList();
			gltfObject.meshes = meshes.Cast<GLTFMesh>().ToList();
			return gltfObject;
		}
	}
}