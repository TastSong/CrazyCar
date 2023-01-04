using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#specifying-extensions
	// https://github.com/KhronosGroup/glTF/issues/1628
	/// <summary> Will eventually become the base class of all gltf classes to enable extensions, but this isn't supported yet </summary>
	[Preserve] public class GLTFProperty {
		public object extensions;
		public object extras;
	}
}