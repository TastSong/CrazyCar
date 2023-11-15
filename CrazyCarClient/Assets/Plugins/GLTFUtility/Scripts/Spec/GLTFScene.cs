using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#scene
	[Preserve] public class GLTFScene {
		/// <summary> Indices of nodes </summary>
		public List<int> nodes;
		public string name;
	}
}