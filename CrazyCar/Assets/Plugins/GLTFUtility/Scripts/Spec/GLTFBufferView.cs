using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#bufferview
	/// <summary> Defines sections within the Buffer </summary>
	[Preserve] public class GLTFBufferView {
		[JsonProperty(Required = Required.Always)] public int buffer;
		[JsonProperty(Required = Required.Always)] public int byteLength;
		public int byteOffset = 0;
		public int? byteStride;
		/// <summary> OpenGL buffer target </summary>
		public int? target;
		public string name;

		public class ImportResult {
			public Stream stream;
			public int byteOffset;
			public int byteLength;
			public int? byteStride;
		}

		public class ImportTask : Importer.ImportTask<ImportResult[]> {
			public ImportTask(List<GLTFBufferView> bufferViews, GLTFBuffer.ImportTask bufferTask) : base(bufferTask) {
				task = new Task(() => {
					Result = new ImportResult[bufferViews.Count];
					for (int i = 0; i < Result.Length; i++) {
						GLTFBuffer.ImportResult buffer = bufferTask.Result[bufferViews[i].buffer];
						ImportResult result = new ImportResult();
						result.stream = buffer.stream;
						result.byteOffset = bufferViews[i].byteOffset;
						result.byteOffset += (int)buffer.startOffset;
						result.byteLength = bufferViews[i].byteLength;
						result.byteStride = bufferViews[i].byteStride;
						Result[i] = result;
					}
				});
			}
		}
	}
}