using UnityEditor;
using UnityEngine;
using System.Collections.Generic;

#if UNITY_2020_2_OR_NEWER
using UnityEditor.AssetImporters;
#else
using UnityEditor.Experimental.AssetImporters;
#endif

namespace Siccity.GLTFUtility {
	/// <summary> Contains methods for saving a gameobject as an asset </summary>
	public static class GLTFAssetUtility {
		public static void SaveToAsset(GameObject root, AnimationClip[] animations, AssetImportContext ctx) {
#if UNITY_2018_2_OR_NEWER
			ctx.AddObjectToAsset("main", root);
			ctx.SetMainObject(root);
#else
			ctx.SetMainAsset("main obj", root);
#endif
			MeshRenderer[] renderers = root.GetComponentsInChildren<MeshRenderer>(true);
			SkinnedMeshRenderer[] skinnedRenderers = root.GetComponentsInChildren<SkinnedMeshRenderer>(true);
			MeshFilter[] filters = root.GetComponentsInChildren<MeshFilter>(true);
			AddMeshes(filters, skinnedRenderers, ctx);
			AddMaterials(renderers, skinnedRenderers, ctx);
			AddAnimations(animations, ctx);
		}

		public static void AddMeshes(MeshFilter[] filters, SkinnedMeshRenderer[] skinnedRenderers, AssetImportContext ctx) {
			HashSet<Mesh> visitedMeshes = new HashSet<Mesh>();
			for (int i = 0; i < filters.Length; i++) {
				Mesh mesh = filters[i].sharedMesh;
				if (visitedMeshes.Contains(mesh)) continue;
				ctx.AddAsset(mesh.name, mesh);
				visitedMeshes.Add(mesh);
			}
			for (int i = 0; i < skinnedRenderers.Length; i++) {
				Mesh mesh = skinnedRenderers[i].sharedMesh;
				if (visitedMeshes.Contains(mesh)) continue;
				ctx.AddAsset(mesh.name, mesh);
				visitedMeshes.Add(mesh);
			}
		}

		public static void AddAnimations(AnimationClip[] animations, AssetImportContext ctx) {
			if (animations == null) return;
			HashSet<AnimationClip> visitedAnimations = new HashSet<AnimationClip>();
			for (int i = 0; i < animations.Length; i++) {
				AnimationClip clip = animations[i];
				if (visitedAnimations.Contains(clip)) continue;
				ctx.AddAsset(clip.name, clip);
				visitedAnimations.Add(clip);
			}
		}

		public static void AddMaterials(MeshRenderer[] renderers, SkinnedMeshRenderer[] skinnedRenderers, AssetImportContext ctx) {
			HashSet<Material> visitedMaterials = new HashSet<Material>();
			HashSet<Texture2D> visitedTextures = new HashSet<Texture2D>();
			for (int i = 0; i < renderers.Length; i++) {
				foreach (Material mat in renderers[i].sharedMaterials) {
					if (mat == GLTFMaterial.defaultMaterial) continue;
					if (visitedMaterials.Contains(mat)) continue;
					if (string.IsNullOrEmpty(mat.name)) mat.name = "material" + visitedMaterials.Count;
					ctx.AddAsset(mat.name, mat);
					visitedMaterials.Add(mat);

					// Add textures
					foreach (Texture2D tex in mat.AllTextures()) {
						// Dont add asset textures
						//if (images[i].isAsset) continue;
						if (visitedTextures.Contains(tex)) continue;
						if (AssetDatabase.Contains(tex)) continue;
						if (string.IsNullOrEmpty(tex.name)) tex.name = "texture" + visitedTextures.Count;
						ctx.AddAsset(tex.name, tex);
						visitedTextures.Add(tex);
					}
				}
			}
			for (int i = 0; i < skinnedRenderers.Length; i++) {
				foreach (Material mat in skinnedRenderers[i].sharedMaterials) {
					if (visitedMaterials.Contains(mat)) continue;
					if (string.IsNullOrEmpty(mat.name)) mat.name = "material" + visitedMaterials.Count;
					ctx.AddAsset(mat.name, mat);
					visitedMaterials.Add(mat);

					// Add textures
					foreach (Texture2D tex in mat.AllTextures()) {
						// Dont add asset textures
						//if (images[i].isAsset) continue;
						if (visitedTextures.Contains(tex)) continue;
						if (AssetDatabase.Contains(tex)) continue;
						if (string.IsNullOrEmpty(tex.name)) tex.name = "texture" + visitedTextures.Count;
						ctx.AddAsset(tex.name, tex);
						visitedTextures.Add(tex);
					}
				}
			}
		}

		public static void AddAsset(this AssetImportContext ctx, string identifier, Object obj) {
#if UNITY_2018_2_OR_NEWER
			ctx.AddObjectToAsset(identifier, obj);
#else
			ctx.AddSubAsset(identifier, obj);
#endif
		}

		public static IEnumerable<Texture2D> AllTextures(this Material mat) {
			int[] ids = mat.GetTexturePropertyNameIDs();
			for (int i = 0; i < ids.Length; i++) {
				Texture2D tex = mat.GetTexture(ids[i]) as Texture2D;
				if (tex != null) yield return tex;
			}
		}
	}
}