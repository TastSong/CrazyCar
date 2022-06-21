using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#skin
	[Preserve] public class GLTFSkin {
		/// <summary> Index of accessor containing inverse bind shape matrices </summary>
		public int? inverseBindMatrices;
		public int[] joints;
		public int? skeleton;
		public string name;

		public class ImportResult {
			public Matrix4x4[] inverseBindMatrices;
			public int[] joints;

#region Import
			public SkinnedMeshRenderer SetupSkinnedRenderer(GameObject go, Mesh mesh, GLTFNode.ImportResult[] nodes) {
				SkinnedMeshRenderer smr = go.AddComponent<SkinnedMeshRenderer>();
				Transform[] bones = new Transform[joints.Length];
				for (int i = 0; i < bones.Length; i++) {
					int jointNodeIndex = joints[i];
					GLTFNode.ImportResult jointNode = nodes[jointNodeIndex];
					bones[i] = jointNode.transform;
					if (string.IsNullOrEmpty(jointNode.transform.name)) jointNode.transform.name = "joint" + i;
				}
				smr.bones = bones;
				smr.rootBone = bones[0];

				// Bindposes
				if (inverseBindMatrices != null) {
					if (inverseBindMatrices.Length != joints.Length) Debug.LogWarning("InverseBindMatrices count and joints count not the same");
					Matrix4x4 m = nodes[0].transform.localToWorldMatrix;
					Matrix4x4[] bindPoses = new Matrix4x4[joints.Length];
					for (int i = 0; i < joints.Length; i++) {
						bindPoses[i] = inverseBindMatrices[i];
					}
					mesh.bindposes = bindPoses;
				} else {
					Matrix4x4 m = nodes[0].transform.localToWorldMatrix;
					Matrix4x4[] bindPoses = new Matrix4x4[joints.Length];
					for (int i = 0; i < joints.Length; i++) {
						bindPoses[i] = nodes[joints[i]].transform.worldToLocalMatrix * m;
					}
					mesh.bindposes = bindPoses;
				}
				smr.sharedMesh = mesh;
				return smr;
			}
		}

		public ImportResult Import(GLTFAccessor.ImportResult[] accessors) {
			ImportResult result = new ImportResult();
			result.joints = joints;

			// Inverse bind matrices
			if (inverseBindMatrices.HasValue) {
				result.inverseBindMatrices = accessors[inverseBindMatrices.Value].ReadMatrix4x4();
				for (int i = 0; i < result.inverseBindMatrices.Length; i++) {
					// Flip the matrix from GLTF (right handed) to Unity (left handed) format.
					// This was done through comparing the GLTF matrix to
					// the correctly imported matrix from the source model,
					// and flipping the values where needed.
					// Notice how the rows become collumns
					Matrix4x4 m = result.inverseBindMatrices[i];

					Vector4 row0 = m.GetRow(0);
					row0.y = -row0.y;
					row0.z = -row0.z;
					Vector4 row1 = m.GetRow(1);
					row1.x = -row1.x;
					Vector4 row2 = m.GetRow(2);
					row2.x = -row2.x;
					Vector4 row3 = m.GetRow(3);
					row3.x = -row3.x;
					m.SetColumn(0, row0);
					m.SetColumn(1, row1);
					m.SetColumn(2, row2);
					m.SetColumn(3, row3);
					result.inverseBindMatrices[i] = m;
				}
			}
			return result;
		}

		public class ImportTask : Importer.ImportTask<ImportResult[]> {
			public ImportTask(List<GLTFSkin> skins, GLTFAccessor.ImportTask accessorTask) : base(accessorTask) {
				task = new Task(() => {
					if (skins == null) return;

					Result = new ImportResult[skins.Count];
					for (int i = 0; i < Result.Length; i++) {
						Result[i] = skins[i].Import(accessorTask.Result);
					}
				});
			}
		}
#endregion
	}
}