using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#buffer
	/// <summary> Contains raw binary data </summary>
	[Preserve] public class GLTFBuffer {
		[JsonProperty(Required = Required.Always)] public int byteLength;
		public string uri;
		public string name;

		[JsonIgnore] private const string embeddedPrefix = "data:application/octet-stream;base64,";
		[JsonIgnore] private const string embeddedPrefix2 = "data:application/gltf-buffer;base64,";

		public class ImportResult {
			public Stream stream;
			public long startOffset;

			public void Dispose() {
				stream.Dispose();
			}
		}

#region Import
		/// <param name="filepath">Filepath if loading from a file</param>
		/// <param name="bytefile">bytes if loading from raw bytes</param>
		public ImportResult Import(string filepath, byte[] bytefile, long binChunkStart) {
			ImportResult result = new ImportResult();

			if (uri == null) {
				// Load entire file
				if (string.IsNullOrEmpty(filepath)) result.stream = new MemoryStream(bytefile);
				else result.stream = File.OpenRead(filepath);
				result.startOffset = binChunkStart + 8;
				result.stream.Position = result.startOffset;
			} else if (uri.StartsWith(embeddedPrefix)) {
				// Load embedded
				string b64 = uri.Substring(embeddedPrefix.Length, uri.Length - embeddedPrefix.Length);
				byte[] bytes = Convert.FromBase64String(b64);
				result.stream = new MemoryStream(bytes);
			} else if (uri.StartsWith(embeddedPrefix2)) {
				// Load embedded
				string b64 = uri.Substring(embeddedPrefix2.Length, uri.Length - embeddedPrefix2.Length);
				byte[] bytes = Convert.FromBase64String(b64);
				result.stream = new MemoryStream(bytes);
			} else {
				// Load URI
				string directoryRoot = Directory.GetParent(filepath).ToString() + "/";
				result.stream = File.OpenRead(directoryRoot + uri);
				result.startOffset = result.stream.Length - byteLength;
			}

			return result;
		}

		public class ImportTask : Importer.ImportTask<ImportResult[]> {
			/// <param name="filepath">Filepath if loading from a file</param>
			/// <param name="bytefile">bytes if loading from raw bytes</param>
			public ImportTask(List<GLTFBuffer> buffers, string filepath, byte[] bytefile, long binChunkStart) : base() {
				task = new Task(() => {
					Result = new ImportResult[buffers.Count];
					for (int i = 0; i < Result.Length; i++) {
						Result[i] = buffers[i].Import(filepath, bytefile, binChunkStart);
					}
				});
			}
		}
#endregion
	}
}