using System;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility.Converters {
	/// <summary>
	/// Converts from float array to Vector3 during deserialization, and back.
	/// Compensates for differing coordinate systems as well.
	/// </summary>
	[Preserve] public class TranslationConverter : JsonConverter {
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) {
			Vector3 pos = (Vector3) value;
			writer.WriteStartArray();
			writer.WriteValue(-pos.x);
			writer.WriteValue(pos.y);
			writer.WriteValue(pos.z);
			writer.WriteEndArray();
		}

		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) {
			float[] floatArray = serializer.Deserialize<float[]>(reader);
			return new Vector3(-floatArray[0], floatArray[1], floatArray[2]);
		}

		public override bool CanConvert(Type objectType) {
			return objectType == typeof(Vector3);
		}
	}
}