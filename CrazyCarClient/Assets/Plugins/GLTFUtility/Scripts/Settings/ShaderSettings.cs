using System;
using UnityEngine;
using UnityEngine.Rendering;

namespace Siccity.GLTFUtility {
	/// <summary> Defines which shaders to use in the gltf import process </summary>
	[Serializable]
	public class ShaderSettings {
		[SerializeField] private Shader metallic;
		public Shader Metallic { get { return metallic != null ? metallic : GetDefaultMetallic(); } }

		[SerializeField] private Shader metallicBlend;
		public Shader MetallicBlend { get { return metallicBlend != null ? metallicBlend : GetDefaultMetallicBlend(); } }

		[SerializeField] private Shader specular;
		public Shader Specular { get { return specular != null ? specular : GetDefaultSpecular(); } }

		[SerializeField] private Shader specularBlend;
		public Shader SpecularBlend { get { return specularBlend != null ? specularBlend : GetDefaultSpecularBlend(); } }

		/// <summary> Caches default shaders so that async import won't try to search for them while on a separate thread </summary>
		public void CacheDefaultShaders() {
			metallic = Metallic;
			metallicBlend = MetallicBlend;
			specular = Specular;
			specularBlend = SpecularBlend;
		}

		public Shader GetDefaultMetallic() {
#if UNITY_2019_1_OR_NEWER
			if (GraphicsSettings.renderPipelineAsset)
				return Shader.Find("GLTFUtility/URP/Standard (Metallic)");
			else
#endif
				return Shader.Find("GLTFUtility/Standard (Metallic)");
		}

		public Shader GetDefaultMetallicBlend() {
#if UNITY_2019_1_OR_NEWER
			if (GraphicsSettings.renderPipelineAsset)
				return Shader.Find("GLTFUtility/URP/Standard Transparent (Metallic)");
			else
#endif
				return Shader.Find("GLTFUtility/Standard Transparent (Metallic)");
		}

		public Shader GetDefaultSpecular() {
#if UNITY_2019_1_OR_NEWER
			if (GraphicsSettings.renderPipelineAsset)
				return Shader.Find("GLTFUtility/URP/Standard (Specular)");
			else
#endif
				return Shader.Find("GLTFUtility/Standard (Specular)");
		}

		public Shader GetDefaultSpecularBlend() {
#if UNITY_2019_1_OR_NEWER
			if (GraphicsSettings.renderPipelineAsset)
				return Shader.Find("GLTFUtility/URP/Standard Transparent (Specular)");
			else
#endif
				return Shader.Find("GLTFUtility/Standard Transparent (Specular)");
		}
	}
}