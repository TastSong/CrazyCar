using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#mesh
	[Preserve] public class GLTFMesh {
#region Serialization
		[JsonProperty(Required = Required.Always)] public List<GLTFPrimitive> primitives;
		/// <summary> Morph target weights </summary>
		public List<float> weights;
		public string name;
		public Extras extras;

		public class Extras {
			/// <summary>
			/// Morph target names. Not part of the official spec, but pretty much a standard.
			/// Discussed here https://github.com/KhronosGroup/glTF/issues/1036
			/// </summary>
			public string[] targetNames;
		}
#endregion

#region Import
		public class ImportResult {
			public Material[] materials;
			public Mesh mesh;
		}

		public class ImportTask : Importer.ImportTask<ImportResult[]> {
			private class MeshData {
				string name;
				List<Vector3> normals = new List<Vector3>();
				List<List<int>> submeshTris = new List<List<int>>();
				List<RenderingMode> submeshTrisMode = new List<RenderingMode>();
				List<Vector3> verts = new List<Vector3>();
				List<Vector4> tangents = new List<Vector4>();
				List<Color> colors = new List<Color>();
				List<BoneWeight> weights = null;
				List<Vector2> uv1 = null;
				List<Vector2> uv2 = null;
				List<Vector2> uv3 = null;
				List<Vector2> uv4 = null;
				List<Vector2> uv5 = null;
				List<Vector2> uv6 = null;
				List<Vector2> uv7 = null;
				List<Vector2> uv8 = null;
				List<BlendShape> blendShapes = new List<BlendShape>();
				List<int> submeshVertexStart = new List<int>();

				private class BlendShape {
					public string name;
					public Vector3[] pos, norm, tan;
				}

				public MeshData(GLTFMesh gltfMesh, GLTFAccessor.ImportResult[] accessors, GLTFBufferView.ImportResult[] bufferViews) {
					name = gltfMesh.name;
					if (gltfMesh.primitives.Count == 0) {
						Debug.LogWarning("0 primitives in mesh");
					} else {
						for (int i = 0; i < gltfMesh.primitives.Count; i++) {
							GLTFPrimitive primitive = gltfMesh.primitives[i];

							int vertStartIndex = verts.Count;
							submeshVertexStart.Add(vertStartIndex);

							// Verts - (X points left in GLTF)
							if (primitive.attributes.POSITION.HasValue) {
								IEnumerable<Vector3> newVerts = accessors[primitive.attributes.POSITION.Value].ReadVec3().Select(v => { v.x = -v.x; return v; });
								verts.AddRange(newVerts);
							}

							int vertCount = verts.Count;

							// Tris - (Invert all triangles. Instead of flipping each triangle, just flip the entire array. Much easier)
							if (primitive.indices.HasValue) {
								submeshTris.Add(new List<int>(accessors[primitive.indices.Value].ReadInt().Reverse().Select(x => x + vertStartIndex)));
								submeshTrisMode.Add(primitive.mode);
							}

							/// Normals - (X points left in GLTF)
							if (primitive.attributes.NORMAL.HasValue) {
								normals.AddRange(accessors[primitive.attributes.NORMAL.Value].ReadVec3().Select(v => { v.x = -v.x; return v; }));
							}

							// Tangents - (X points left in GLTF)
							if (primitive.attributes.TANGENT.HasValue) {
								tangents.AddRange(accessors[primitive.attributes.TANGENT.Value].ReadVec4().Select(v => { v.y = -v.y; v.z = -v.z; return v; }));
							}

							// Vertex colors
							if (primitive.attributes.COLOR_0.HasValue) {
								colors.AddRange(accessors[primitive.attributes.COLOR_0.Value].ReadColor());
							}

							// Weights
							if (primitive.attributes.WEIGHTS_0.HasValue && primitive.attributes.JOINTS_0.HasValue) {
								Vector4[] weights0 = accessors[primitive.attributes.WEIGHTS_0.Value].ReadVec4();
								Vector4[] joints0 = accessors[primitive.attributes.JOINTS_0.Value].ReadVec4();
								if (joints0.Length == weights0.Length) {
									BoneWeight[] boneWeights = new BoneWeight[weights0.Length];
									for (int k = 0; k < boneWeights.Length; k++) {
										NormalizeWeights(ref weights0[k]);
										boneWeights[k].weight0 = weights0[k].x;
										boneWeights[k].weight1 = weights0[k].y;
										boneWeights[k].weight2 = weights0[k].z;
										boneWeights[k].weight3 = weights0[k].w;
										boneWeights[k].boneIndex0 = Mathf.RoundToInt(joints0[k].x);
										boneWeights[k].boneIndex1 = Mathf.RoundToInt(joints0[k].y);
										boneWeights[k].boneIndex2 = Mathf.RoundToInt(joints0[k].z);
										boneWeights[k].boneIndex3 = Mathf.RoundToInt(joints0[k].w);
									}
									if (weights == null) weights = new List<BoneWeight>(new BoneWeight[vertCount - boneWeights.Length]);
									weights.AddRange(boneWeights);
								} else Debug.LogWarning("WEIGHTS_0 and JOINTS_0 not same length. Skipped");
							} else {
								if (weights != null) weights.AddRange(new BoneWeight[vertCount - weights.Count]);
							}

							// UVs
							ReadUVs(ref uv1, accessors, primitive.attributes.TEXCOORD_0, vertCount);
							ReadUVs(ref uv2, accessors, primitive.attributes.TEXCOORD_1, vertCount);
							ReadUVs(ref uv3, accessors, primitive.attributes.TEXCOORD_2, vertCount);
							ReadUVs(ref uv4, accessors, primitive.attributes.TEXCOORD_3, vertCount);
							ReadUVs(ref uv5, accessors, primitive.attributes.TEXCOORD_4, vertCount);
							ReadUVs(ref uv6, accessors, primitive.attributes.TEXCOORD_5, vertCount);
							ReadUVs(ref uv7, accessors, primitive.attributes.TEXCOORD_6, vertCount);
							ReadUVs(ref uv8, accessors, primitive.attributes.TEXCOORD_7, vertCount);
						}

						bool hasTargetNames = gltfMesh.extras != null && gltfMesh.extras.targetNames != null;
						if (hasTargetNames) {
							if (gltfMesh.primitives.All(x => x.targets.Count != gltfMesh.extras.targetNames.Length)) {
								Debug.LogWarning("Morph target names found in mesh " + name + " but array length does not match primitive morph target array length");
								hasTargetNames = false;
							}
						}
						// Read blend shapes after knowing final vertex count
						int finalVertCount = verts.Count;

						for (int i = 0; i < gltfMesh.primitives.Count; i++) {
							GLTFPrimitive primitive = gltfMesh.primitives[i];
							if (primitive.targets != null) {
								for (int k = 0; k < primitive.targets.Count; k++) {
									BlendShape blendShape = new BlendShape();
									blendShape.pos = GetMorphWeights(primitive.targets[k].POSITION, submeshVertexStart[i], finalVertCount, accessors);
									blendShape.norm = GetMorphWeights(primitive.targets[k].NORMAL, submeshVertexStart[i], finalVertCount, accessors);
									blendShape.tan = GetMorphWeights(primitive.targets[k].TANGENT, submeshVertexStart[i], finalVertCount, accessors);
									if (hasTargetNames) blendShape.name = gltfMesh.extras.targetNames[k];
									else blendShape.name = "morph-" + blendShapes.Count;
									blendShapes.Add(blendShape);
								}
							}
						}
					}
				}

				private Vector3[] GetMorphWeights(int? accessor, int vertStartIndex, int vertCount, GLTFAccessor.ImportResult[] accessors) {
					if (accessor.HasValue) {
						if (accessors[accessor.Value] == null) {
							Debug.LogWarning("Accessor is null");
							return new Vector3[vertCount];
						}
						Vector3[] accessorData = accessors[accessor.Value].ReadVec3().Select(v => { v.x = -v.x; return v; }).ToArray();
						if (accessorData.Length != vertCount) {
							Vector3[] resized = new Vector3[vertCount];
							Array.Copy(accessorData, 0, resized, vertStartIndex, accessorData.Length);
							return resized;
						} else return accessorData;
					} else return new Vector3[vertCount];
				}

				public Mesh ToMesh() {
					Mesh mesh = new Mesh();
					if (verts.Count >= ushort.MaxValue) mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt32;
					mesh.vertices = verts.ToArray();
					mesh.subMeshCount = submeshTris.Count;
					var onlyTriangles = true;
					for (int i = 0; i < submeshTris.Count; i++) {
						switch (submeshTrisMode[i]) {
							case RenderingMode.POINTS:
								mesh.SetIndices(submeshTris[i].ToArray(), MeshTopology.Points, i);
								onlyTriangles = false;
								break;
							case RenderingMode.LINES:
								mesh.SetIndices(submeshTris[i].ToArray(), MeshTopology.Lines, i);
								onlyTriangles = false;
								break;
							case RenderingMode.LINE_STRIP:
								mesh.SetIndices(submeshTris[i].ToArray(), MeshTopology.LineStrip, i);
								onlyTriangles = false;
								break;
							case RenderingMode.TRIANGLES:
								mesh.SetTriangles(submeshTris[i].ToArray(), i);
								break;
							default:
								Debug.LogWarning("GLTF rendering mode " + submeshTrisMode[i] + " not supported.");
								return null;
						}
					}

					mesh.colors = colors.ToArray();
					if (uv1 != null) mesh.uv = uv1.ToArray();
					if (uv2 != null) mesh.uv2 = uv2.ToArray();
					if (uv3 != null) mesh.uv3 = uv3.ToArray();
					if (uv4 != null) mesh.uv4 = uv4.ToArray();
					if (uv5 != null) mesh.uv5 = uv5.ToArray();
					if (uv6 != null) mesh.uv6 = uv6.ToArray();
					if (uv7 != null) mesh.uv7 = uv7.ToArray();
					if (uv8 != null) mesh.uv8 = uv8.ToArray();
					if (weights != null) mesh.boneWeights = weights.ToArray();

					mesh.RecalculateBounds();

					// Blend shapes
					for (int i = 0; i < blendShapes.Count; i++) {
						mesh.AddBlendShapeFrame(blendShapes[i].name, 100f, blendShapes[i].pos, blendShapes[i].norm, blendShapes[i].tan);
					}

					if (normals.Count == 0 && onlyTriangles)
						mesh.RecalculateNormals();
					else
						mesh.normals = normals.ToArray();

					if (tangents.Count == 0 && onlyTriangles)
						mesh.RecalculateTangents();
					else
						mesh.tangents = tangents.ToArray();

					mesh.name = name;

					return FixBlendShapeNormals(mesh);
				}

				private Mesh FixBlendShapeNormals(Mesh selected)
				{
					Vector3[] deltaVertices = new Vector3[selected.vertexCount];
					Vector3[] deltaNormals = new Vector3[selected.vertexCount];
					Vector3[] deltaTangents = new Vector3[selected.vertexCount];

					int bsc = selected.blendShapeCount;

					Mesh newMesh = new Mesh();
					newMesh.vertices = selected.vertices;
					newMesh.uv = selected.uv;
					newMesh.normals = selected.normals;
					newMesh.colors = selected.colors;
					newMesh.tangents = selected.tangents;
					newMesh.subMeshCount = selected.subMeshCount;
					newMesh.triangles = selected.triangles;

					int subMeshes = selected.subMeshCount;
					for (int i = 0; i < subMeshes; i++)
					{
						int[] tris = selected.GetTriangles(i);
						newMesh.SetIndices(tris, MeshTopology.Triangles, i);
					}

					newMesh.name = selected.name + "_fixed";
					newMesh.boneWeights = selected.boneWeights;
					newMesh.bindposes = selected.bindposes;

					Vector3[] zero = new Vector3[selected.vertexCount];
					for (int i = 0; i < zero.Length; i++)
						zero[i] = Vector3.zero;

					for (int i = 0; i < bsc; i++)
					{
						string name = selected.GetBlendShapeName(i);
						int weightCount = selected.GetBlendShapeFrameCount(i);
						for (int j = 0; j < weightCount; j++)
						{
							float weight = selected.GetBlendShapeFrameWeight(i, j);
							selected.GetBlendShapeFrameVertices(i, j, deltaVertices, deltaNormals, deltaTangents);
							newMesh.AddBlendShapeFrame(name, weight, deltaVertices, zero, deltaTangents);
						}
					}

					return newMesh;
				}

				public void NormalizeWeights(ref Vector4 weights) {
					float total = weights.x + weights.y + weights.z + weights.w;
					float mult = 1f / total;
					weights.x *= mult;
					weights.y *= mult;
					weights.z *= mult;
					weights.w *= mult;
				}

				private void ReadUVs(ref List<Vector2> uvs, GLTFAccessor.ImportResult[] accessors, int? texcoord, int vertCount) {
					// If there are no valid texcoords
					if (!texcoord.HasValue) {
						// If there are already uvs, add some empty filler uvs so it still matches the vertex array
						if (uvs != null) uvs.AddRange(new Vector2[vertCount - uvs.Count]);
						return;
					}
					Vector2[] _uvs = accessors[texcoord.Value].ReadVec2();
					FlipY(ref _uvs);
					if (uvs == null) uvs = new List<Vector2>(_uvs);
					else uvs.AddRange(_uvs);
				}

				public void FlipY(ref Vector2[] uv) {
					for (int i = 0; i < uv.Length; i++) {
						uv[i].y = 1 - uv[i].y;
					}
				}
			}

			private MeshData[] meshData;
			private List<GLTFMesh> meshes;
			private GLTFMaterial.ImportTask materialTask;

			public ImportTask(List<GLTFMesh> meshes, GLTFAccessor.ImportTask accessorTask, GLTFBufferView.ImportTask bufferViewTask, GLTFMaterial.ImportTask materialTask, ImportSettings importSettings) : base(accessorTask, materialTask) {
				this.meshes = meshes;
				this.materialTask = materialTask;

				task = new Task(() => {
					if (meshes == null) return;

					meshData = new MeshData[meshes.Count];
					for (int i = 0; i < meshData.Length; i++) {
						meshData[i] = new MeshData(meshes[i], accessorTask.Result, bufferViewTask.Result);
					}
				});
			}

			public override IEnumerator OnCoroutine(Action<float, ImportType> onProgress = null) {
				// No mesh
				if (meshData == null) {
					if (onProgress != null) onProgress.Invoke(1f, ImportType.MESH);
					IsCompleted = true;
					yield break;
				}

				Result = new ImportResult[meshData.Length];
				for (int i = 0; i < meshData.Length; i++) {
					if (meshData[i] == null) {
						Debug.LogWarning("Mesh " + i + " import error");
						continue;
					}

					Result[i] = new ImportResult();
					Result[i].mesh = meshData[i].ToMesh();
					Result[i].materials = new Material[meshes[i].primitives.Count];
					for (int k = 0; k < meshes[i].primitives.Count; k++) {
						int? matIndex = meshes[i].primitives[k].material;
						if (matIndex.HasValue && materialTask.Result != null && materialTask.Result.Count() > matIndex.Value) {
							GLTFMaterial.ImportResult matImport = materialTask.Result[matIndex.Value];
							if (matImport != null) Result[i].materials[k] = matImport.material;
							else {
								Debug.LogWarning("Mesh[" + i + "].matIndex points to null material (index " + matIndex.Value + ")");
								Result[i].materials[k] = GLTFMaterial.defaultMaterial;
							}
						} else {
							Result[i].materials[k] = GLTFMaterial.defaultMaterial;
						}
					}
					if (string.IsNullOrEmpty(Result[i].mesh.name)) Result[i].mesh.name = "mesh" + i;
					if (onProgress != null) onProgress.Invoke((float) (i + 1) / (float) meshData.Length, ImportType.MESH);
					yield return null;
				}
				IsCompleted = true;
			}
		}
#endregion

#region Export
		public class ExportResult : GLTFMesh {
			[JsonIgnore] public Mesh mesh;
		}

		public static List<ExportResult> Export(List<GLTFNode.ExportResult> nodes) {
			List<ExportResult> results = new List<ExportResult>();
			for (int i = 0; i < nodes.Count; i++) {
				if (nodes[i].filter) {
					Mesh mesh = nodes[i].filter.sharedMesh;
					if (mesh) {
						nodes[i].mesh = results.Count;
						results.Add(Export(mesh));
					}
				}
			}
			return results;
		}

		public static ExportResult Export(Mesh mesh) {
			ExportResult result = new ExportResult();
			result.name = mesh.name;
			result.primitives = new List<GLTFPrimitive>();
			for (int i = 0; i < mesh.subMeshCount; i++) {
				GLTFPrimitive primitive = new GLTFPrimitive();
				result.primitives.Add(primitive);
			}
			return result;
		}
#endregion
	}
}