using Newtonsoft.Json;
using Siccity.GLTFUtility.Converters;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	/// <summary>
	/// KHR_texture_transform textureInfo extension
	/// glTF extension that enables shifting and scaling UV coordinates on a per-texture basis
	/// see: https://github.com/KhronosGroup/glTF/blob/master/extensions/2.0/Khronos/KHR_texture_transform/schema/KHR_texture_transform.textureInfo.schema.json
	/// </summary>
	[Preserve] public class KHR_texture_transform : GLTFMaterial.TextureInfo.IExtension {
		/// <summary>
		/// The offset of the UV coordinate origin as a factor of the texture dimensions.
		/// </summary>
		[JsonConverter(typeof(Vector2Converter))] public Vector2 offset = Vector2.zero;

		/// <summary>
		/// Rotate the UVs by this many radians counter-clockwise around the origin.
		/// </summary>
		public float rotation = 0.0f;

		/// <summary>
		/// The scale factor applied to the components of the UV coordinates.
		/// </summary>
		[JsonConverter(typeof(Vector2Converter))] public Vector2 scale = Vector2.one;

		/// <summary>
		/// Overrides the textureInfo texCoord value if supplied, and if this extension is supported.
		/// </summary>
		public int texCoord = 0;

		public void Apply(GLTFMaterial.TextureInfo texInfo, Material material, string textureSamplerName) {
			material.SetTextureOffset(textureSamplerName, offset);
			// TODO rotation
			material.SetTextureScale(textureSamplerName, scale);
			// TODO texCoord
		}
	}
}