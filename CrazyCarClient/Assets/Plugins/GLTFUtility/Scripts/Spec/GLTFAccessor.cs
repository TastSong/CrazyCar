using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Siccity.GLTFUtility.Converters;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#accessor
	/// <summary> Reads data from BufferViews </summary>
	[Preserve] public class GLTFAccessor {
#region Serialized fields
		public int? bufferView;
		public int byteOffset = 0;
		[JsonProperty(Required = Required.Always), JsonConverter(typeof(EnumConverter))] public AccessorType type;
		[JsonProperty(Required = Required.Always)] public GLType componentType;
		[JsonProperty(Required = Required.Always)] public int count;
		public float[] min;
		public float[] max;
		public Sparse sparse;
#endregion

		// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#sparse
		[Preserve] public class Sparse {
			[JsonProperty(Required = Required.Always)] public int count;
			[JsonProperty(Required = Required.Always)] public Indices indices;
			[JsonProperty(Required = Required.Always)] public Values values;

			// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#values
			[Preserve] public class Values {
				[JsonProperty(Required = Required.Always)] public int bufferView;
				public int byteOffset = 0;
			}

			// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#indices
			[Preserve] public class Indices {
				[JsonProperty(Required = Required.Always)] public int bufferView;
				[JsonProperty(Required = Required.Always)] public GLType componentType;
				public int byteOffset = 0;
			}
		}

#region Import
		public class ImportResult {
			public GLTFBufferView.ImportResult bufferView;
			public int? byteStride;
			public int count;
			public GLType componentType;
			public AccessorType type;
			public int byteOffset;
			public Sparse sparse;

			public class Sparse {
				public int count;
				public Indices indices;
				public Values values;

				public class Values {
					public GLTFBufferView.ImportResult bufferView;
					public int byteOffset = 0;
				}

				public class Indices {
					public GLTFBufferView.ImportResult bufferView;
					public GLType componentType;
					public int byteOffset = 0;
				}
			}

			public Matrix4x4[] ReadMatrix4x4() {
				if (!ValidateAccessorType(type, AccessorType.MAT4)) return new Matrix4x4[count];

				Func<BufferedBinaryReader, float> floatReader = GetFloatReader(componentType);

				Matrix4x4[] m = new Matrix4x4[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					for (int i = 0; i < count; i++) {
						m[i].m00 = floatReader(reader);
						m[i].m01 = floatReader(reader);
						m[i].m02 = floatReader(reader);
						m[i].m03 = floatReader(reader);
						m[i].m10 = floatReader(reader);
						m[i].m11 = floatReader(reader);
						m[i].m12 = floatReader(reader);
						m[i].m13 = floatReader(reader);
						m[i].m20 = floatReader(reader);
						m[i].m21 = floatReader(reader);
						m[i].m22 = floatReader(reader);
						m[i].m23 = floatReader(reader);
						m[i].m30 = floatReader(reader);
						m[i].m31 = floatReader(reader);
						m[i].m32 = floatReader(reader);
						m[i].m33 = floatReader(reader);
						reader.Skip(byteSkip);
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					indexReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					for (int i = 0; i < sparse.count; i++) {
						int index = indices[i];
						m[index].m00 = floatReader(valueReader);
						m[index].m01 = floatReader(valueReader);
						m[index].m02 = floatReader(valueReader);
						m[index].m03 = floatReader(valueReader);
						m[index].m10 = floatReader(valueReader);
						m[index].m11 = floatReader(valueReader);
						m[index].m12 = floatReader(valueReader);
						m[index].m13 = floatReader(valueReader);
						m[index].m20 = floatReader(valueReader);
						m[index].m21 = floatReader(valueReader);
						m[index].m22 = floatReader(valueReader);
						m[index].m23 = floatReader(valueReader);
						m[index].m30 = floatReader(valueReader);
						m[index].m31 = floatReader(valueReader);
						m[index].m32 = floatReader(valueReader);
						m[index].m33 = floatReader(valueReader);
					}
				}
				return m;
			}

			public Vector4[] ReadVec4() {
				if (!ValidateAccessorType(type, AccessorType.VEC4)) return new Vector4[count];

				Func<BufferedBinaryReader, float> floatReader = GetFloatReader(componentType);

				Vector4[] v = new Vector4[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					for (int i = 0; i < count; i++) {
						v[i].x = floatReader(reader);
						v[i].y = floatReader(reader);
						v[i].z = floatReader(reader);
						v[i].w = floatReader(reader);
						reader.Skip(byteSkip);
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					indexReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					for (int i = 0; i < sparse.count; i++) {
						int index = indices[i];
						v[index].x = floatReader(valueReader);
						v[index].y = floatReader(valueReader);
						v[index].z = floatReader(valueReader);
						v[index].w = floatReader(valueReader);
					}
				}
				return v;
			}

			public Color[] ReadColor() {
				if (!ValidateAccessorTypeAny(type, AccessorType.VEC3, AccessorType.VEC4)) return new Color[count];

				Func<BufferedBinaryReader, float> floatReader = GetFloatReader(componentType);

				Color[] c = new Color[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					if (type == AccessorType.VEC3) {
						for (int i = 0; i < count; i++) {
							c[i].r = floatReader(reader);
							c[i].g = floatReader(reader);
							c[i].b = floatReader(reader);
							reader.Skip(byteSkip);
						}
					} else if (type == AccessorType.VEC4) {
						for (int i = 0; i < count; i++) {
							c[i].r = floatReader(reader);
							c[i].g = floatReader(reader);
							c[i].b = floatReader(reader);
							c[i].a = floatReader(reader);
							reader.Skip(byteSkip);
						}
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					indexReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					if (type == AccessorType.VEC3) {
						for (int i = 0; i < sparse.count; i++) {
							int index = indices[i];
							c[index].r = floatReader(valueReader);
							c[index].g = floatReader(valueReader);
							c[index].b = floatReader(valueReader);
						}
					} else if (type == AccessorType.VEC4) {
						for (int i = 0; i < sparse.count; i++) {
							int index = indices[i];
							c[index].r = floatReader(valueReader);
							c[index].g = floatReader(valueReader);
							c[index].b = floatReader(valueReader);
							c[index].a = floatReader(valueReader);
						}
					}
				}
				return c;
			}

			public Vector3[] ReadVec3() {
				if (!ValidateAccessorType(type, AccessorType.VEC3)) return new Vector3[count];

				Func<BufferedBinaryReader, float> floatReader = GetFloatReader(componentType);

				Vector3[] v = new Vector3[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					for (int i = 0; i < count; i++) {
						v[i].x = floatReader(reader);
						v[i].y = floatReader(reader);
						v[i].z = floatReader(reader);
						reader.Skip(byteSkip);
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					valueReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					for (int i = 0; i < sparse.count; i++) {
						int index = indices[i];
						v[index].x = floatReader(valueReader);
						v[index].y = floatReader(valueReader);
						v[index].z = floatReader(valueReader);
					}
				}
				return v;
			}

			public Vector2[] ReadVec2() {
				if (!ValidateAccessorType(type, AccessorType.VEC2)) return new Vector2[count];

				Func<BufferedBinaryReader, float> floatReader = GetFloatReader(componentType);

				Vector2[] v = new Vector2[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					for (int i = 0; i < count; i++) {
						v[i].x = floatReader(reader);
						v[i].y = floatReader(reader);
						reader.Skip(byteSkip);
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					indexReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					for (int i = 0; i < sparse.count; i++) {
						int index = indices[i];
						v[index].x = floatReader(valueReader);
						v[index].y = floatReader(valueReader);
					}
				}
				return v;
			}

			public float[] ReadFloat() {
				if (!ValidateAccessorType(type, AccessorType.SCALAR)) return new float[count];

				Func<BufferedBinaryReader, float> floatReader = GetFloatReader(componentType);

				float[] f = new float[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					for (int i = 0; i < count; i++) {
						f[i] = floatReader(reader);
						reader.Skip(byteSkip);
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					indexReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					for (int i = 0; i < sparse.count; i++) {
						int index = indices[i];
						f[index] = floatReader(valueReader);
					}
				}
				return f;
			}

			public int[] ReadInt() {
				if (!ValidateAccessorType(type, AccessorType.SCALAR)) return new int[count];

				Func<BufferedBinaryReader, int> intReader = GetIntReader(componentType);

				int[] v = new int[count];
				if (bufferView != null) {
					BufferedBinaryReader reader = new BufferedBinaryReader(bufferView.stream, 1024);
					reader.Position = bufferView.byteOffset + byteOffset;
					int byteSkip = byteStride.HasValue ? byteStride.Value - GetComponentSize() : 0;
					for (int i = 0; i < count; i++) {
						v[i] = intReader(reader);
						reader.Skip(byteSkip);
					}
				}
				if (sparse != null) {
					Func<BufferedBinaryReader, int> indexIntReader = GetIntReader(sparse.indices.componentType);
					BufferedBinaryReader indexReader = new BufferedBinaryReader(sparse.indices.bufferView.stream, 1024);
					indexReader.Position = sparse.indices.bufferView.byteOffset + sparse.indices.byteOffset;
					int[] indices = new int[sparse.count];
					for (int i = 0; i < sparse.count; i++) {
						indices[i] = indexIntReader(indexReader);
					}
					BufferedBinaryReader valueReader = new BufferedBinaryReader(sparse.values.bufferView.stream, 1024);
					indexReader.Position = sparse.values.bufferView.byteOffset + sparse.values.byteOffset;
					for (int i = 0; i < sparse.count; i++) {
						int index = indices[i];
						v[index] = intReader(valueReader);
					}
				}
				return v;
			}

			public Func<BufferedBinaryReader, int> GetIntReader(GLType componentType) {
				Func<BufferedBinaryReader, int> readMethod;
				switch (componentType) {
					case GLType.BYTE:
						return x => x.ReadSByte();
					case GLType.UNSIGNED_BYTE:
						return readMethod = x => x.ReadByte();
					case GLType.FLOAT:
						return readMethod = x => (int) x.ReadSingle();
					case GLType.SHORT:
						return readMethod = x => x.ReadInt16();
					case GLType.UNSIGNED_SHORT:
						return readMethod = x => x.ReadUInt16();
					case GLType.UNSIGNED_INT:
						return readMethod = x => (int) x.ReadUInt32();
					default:
						Debug.LogWarning("No componentType defined");
						return readMethod = x => x.ReadInt32();
				}
			}

			public Func<BufferedBinaryReader, float> GetFloatReader(GLType componentType) {
				Func<BufferedBinaryReader, float> readMethod;
				switch (componentType) {
					case GLType.BYTE:
						return x => x.ReadSByte();
					case GLType.UNSIGNED_BYTE:
						return readMethod = x => x.ReadByte();
					case GLType.FLOAT:
						return readMethod = x => x.ReadSingle();
					case GLType.SHORT:
						return readMethod = x => x.ReadInt16();
					case GLType.UNSIGNED_SHORT:
						return readMethod = x => x.ReadUInt16();
					case GLType.UNSIGNED_INT:
						return readMethod = x => x.ReadUInt32();
					default:
						Debug.LogWarning("No componentType defined");
						return readMethod = x => x.ReadSingle();
				}
			}

			/// <summary> Get the size of the attribute type, in bytes </summary>
			public int GetComponentSize() {
				return type.ComponentCount() * componentType.ByteSize();
			}

			public static bool ValidateByteStride(int byteStride) {
				if (byteStride >= 4 && byteStride <= 252 && byteStride % 4 == 0) return true;
				Debug.Log("ByteStride of " + byteStride + " is invalid. Ignoring.");
				return false;
			}

			private static bool ValidateAccessorType(AccessorType type, AccessorType expected) {
				if (type == expected) return true;
				else {
					Debug.LogError("Type mismatch! Expected " + expected + " got " + type);
					return false;
				}
			}

			public static bool ValidateAccessorTypeAny(AccessorType type, params AccessorType[] expected) {
				for (int i = 0; i < expected.Length; i++) {
					if (type == expected[i]) return true;
				}
				Debug.Log("Type mismatch! Expected " + string.Join("or ", expected) + ", got " + type);
				return false;
			}
		}

		public ImportResult Import(GLTFBufferView.ImportResult[] bufferViews) {

			ImportResult result = new ImportResult();
			result.bufferView = bufferView.HasValue ? bufferViews[bufferView.Value] : null;
			result.componentType = componentType;
			result.type = type;
			result.count = count;
			result.byteOffset = byteOffset;
			result.byteStride = result.bufferView != null ? result.bufferView.byteStride : null;
			// Sparse accessor works by overwriting specified indices instead of defining a full data set. This can save space, especially for morph targets
			if (sparse != null) {
				result.sparse = new ImportResult.Sparse() {
					count = sparse.count,
						indices = new ImportResult.Sparse.Indices() {
							bufferView = bufferViews[sparse.indices.bufferView],
								componentType = sparse.indices.componentType,
								byteOffset = sparse.indices.byteOffset
						},
						values = new ImportResult.Sparse.Values() {
							bufferView = bufferViews[sparse.values.bufferView],
								byteOffset = sparse.values.byteOffset
						}
				};
			}
			return result;
		}

		public class ImportTask : Importer.ImportTask<ImportResult[]> {
			public ImportTask(List<GLTFAccessor> accessors, GLTFBufferView.ImportTask bufferViewTask) : base(bufferViewTask) {
				task = new Task(() => {
					Result = new ImportResult[accessors.Count];
					for (int i = 0; i < Result.Length; i++) {
						Result[i] = accessors[i].Import(bufferViewTask.Result);
					}
				});
			}
		}
#endregion
	}
}