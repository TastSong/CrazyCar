using System;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility.Converters {
	/// <summary> Converts from float array to Matrix4x4 during deserialization, and back </summary>
	[Preserve] public class Matrix4x4Converter : JsonConverter {
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) {
			Matrix4x4 m = (Matrix4x4) value;
			writer.WriteStartArray();
			for (int i = 0; i < 16; i++) {
				writer.WriteValue(m[i]);
			}
			writer.WriteEndArray();
		}

		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) {
			float[] floatArray = serializer.Deserialize<float[]>(reader);
			return new Matrix4x4(
				new Vector4(floatArray[0], floatArray[1], floatArray[2], floatArray[3]),
				new Vector4(floatArray[4], floatArray[5], floatArray[6], floatArray[7]),
				new Vector4(floatArray[8], floatArray[9], floatArray[10], floatArray[11]),
				new Vector4(floatArray[12], floatArray[13], floatArray[14], floatArray[15])
			);;
		}

		public override bool CanConvert(Type objectType) {
			return objectType == typeof(Matrix4x4);
		}
	}
}