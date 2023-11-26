using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#texture
	[Preserve] public class GLTFTexture {
		public int? sampler;
		public int? source;
		public string name;

		public class ImportResult {
			private GLTFImage.ImportResult image;
			private Texture2D cache;

			/// <summary> Constructor </summary>
			public ImportResult(GLTFImage.ImportResult image) {
				this.image = image;
			}

			/// <summary> Create or return cached texture </summary>
			public IEnumerator GetTextureCached(bool linear, Action<Texture2D> onFinish, Action<float> onProgress = null) {
				if (cache == null) {
					IEnumerator en = image.CreateTextureAsync(linear, x => cache = x, onProgress);
					while (en.MoveNext()) { yield return null; };
				}
				onFinish(cache);
			}
		}

		public ImportResult Import(GLTFImage.ImportResult[] images) {
			if (source.HasValue) {
				ImportResult result = new ImportResult(images[source.Value]);
				return result;
			}
			return null;
		}

		public class ImportTask : Importer.ImportTask<ImportResult[]> {
			public ImportTask(List<GLTFTexture> textures, GLTFImage.ImportTask imageTask) : base(imageTask) {
				task = new Task(() => {
					if (textures == null) return;

					Result = new ImportResult[textures.Count];
					for (int i = 0; i < Result.Length; i++) {
						Result[i] = textures[i].Import(imageTask.Result);
					}
				});
			}
		}
	}
}