using System;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility.Converters {
	/// <summary>
	/// Converts from float array to Quaternion during deserialization, and back.
	/// Compensates for differing coordinate systems as well.
	/// </summary>
	[Preserve] public class QuaternionConverter : JsonConverter {
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) {
			Quaternion q = (Quaternion) value;
			writer.WriteStartArray();
			writer.WriteValue(q.x);
			writer.WriteValue(-q.y);
			writer.WriteValue(-q.z);
			writer.WriteValue(q.w);
			writer.WriteEndArray();
		}

		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) {
			float[] floatArray = serializer.Deserialize<float[]>(reader);
			return new Quaternion(floatArray[0], -floatArray[1], -floatArray[2], floatArray[3]);
		}

		public override bool CanConvert(Type objectType) {
			return objectType == typeof(Quaternion);
		}
	}
}