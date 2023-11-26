using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Siccity.GLTFUtility.Converters;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#camera
	[Preserve] public class GLTFCamera {
#region Serialization
		public Orthographic orthographic;
		public Perspective perspective;
		[JsonProperty(Required = Required.Always), JsonConverter(typeof(EnumConverter))] public CameraType type;
		public string name;

		[Preserve] public class Orthographic {
			[JsonProperty(Required = Required.Always)] public float xmag;
			[JsonProperty(Required = Required.Always)] public float ymag;
			[JsonProperty(Required = Required.Always)] public float zfar;
			[JsonProperty(Required = Required.Always)] public float znear;
		}

		[Preserve] public class Perspective {
			public float? aspectRatio;
			[JsonProperty(Required = Required.Always)] public float yfov;
			public float? zfar;
			[JsonProperty(Required = Required.Always)] public float znear;
		}
#endregion
	}
}