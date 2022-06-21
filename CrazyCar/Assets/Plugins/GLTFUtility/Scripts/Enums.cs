using UnityEngine;

namespace Siccity.GLTFUtility {
	public enum AlphaMode { OPAQUE, MASK, BLEND }
	public enum AccessorType { SCALAR, VEC2, VEC3, VEC4, MAT2, MAT3, MAT4 }
	public enum RenderingMode { POINTS = 0, LINES = 1, LINE_LOOP = 2, LINE_STRIP = 3, TRIANGLES = 4, TRIANGLE_STRIP = 5, TRIANGLE_FAN = 6 }
	public enum GLType { UNSET = -1, BYTE = 5120, UNSIGNED_BYTE = 5121, SHORT = 5122, UNSIGNED_SHORT = 5123, UNSIGNED_INT = 5125, FLOAT = 5126 }
	public enum Format { AUTO, GLTF, GLB }
	public enum CameraType { perspective, orthographic }
	public enum InterpolationMode { ImportFromFile = -1, LINEAR = 0, STEP = 1, CUBICSPLINE = 2 }
	public enum ImportType {MESH, MATERIAL, NODE }

	public static class EnumExtensions {
		public static int ByteSize(this GLType gltype) {
			switch (gltype) {
				case GLType.BYTE:
					return sizeof(sbyte);
				case GLType.UNSIGNED_BYTE:
					return sizeof(byte);
				case GLType.SHORT:
					return sizeof(short);
				case GLType.UNSIGNED_SHORT:
					return sizeof(ushort);
				case GLType.FLOAT:
					return sizeof(float);
				case GLType.UNSIGNED_INT:
					return sizeof(uint);
				default:
					Debug.LogError("GLType " + (int) gltype + " not supported!");
					return 0;
			}
		}

		public static int ComponentCount(this AccessorType accessorType) {
			switch (accessorType) {
				case AccessorType.SCALAR:
					return 1;
				case AccessorType.VEC2:
					return 2;
				case AccessorType.VEC3:
					return 3;
				case AccessorType.VEC4:
					return 4;
				case AccessorType.MAT2:
					return 4;
				case AccessorType.MAT3:
					return 9;
				case AccessorType.MAT4:
					return 16;
				default:
					Debug.LogError("AccessorType " + accessorType + " not supported!");
					return 0;
			}
		}
	}
}