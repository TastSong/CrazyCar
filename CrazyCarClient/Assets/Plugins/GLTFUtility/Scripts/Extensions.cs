using System;
using System.Collections;
using UnityEngine;

namespace Siccity.GLTFUtility {
	public static class Extensions {

		public class CoroutineRunner : MonoBehaviour { }
		private static CoroutineRunner coroutineRunner;
		public static Coroutine RunCoroutine(this IEnumerator ienum) {
			if (coroutineRunner == null) {
				coroutineRunner = new GameObject("[CoroutineRunner]").AddComponent<CoroutineRunner>();
				coroutineRunner.hideFlags = HideFlags.DontSaveInEditor | HideFlags.HideInHierarchy | HideFlags.HideInInspector | HideFlags.NotEditable | HideFlags.DontSaveInBuild;
				coroutineRunner.gameObject.hideFlags = HideFlags.DontSaveInEditor | HideFlags.HideInHierarchy | HideFlags.HideInInspector | HideFlags.NotEditable | HideFlags.DontSaveInBuild;
			}
			return coroutineRunner.StartCoroutine(ienum);
		}

		public static T[] SubArray<T>(this T[] data, int index, int length) {
			T[] result = new T[length];
			Array.Copy(data, index, result, 0, length);
			return result;
		}

		public static void UnpackTRS(this Matrix4x4 trs, ref Vector3 position, ref Quaternion rotation, ref Vector3 scale) {
			position = trs.GetColumn(3);
			position.x = -position.x;
			rotation = trs.rotation;
			rotation = new Quaternion(rotation.x, -rotation.y, -rotation.z, rotation.w);
			scale = trs.lossyScale;
		}
	}
}