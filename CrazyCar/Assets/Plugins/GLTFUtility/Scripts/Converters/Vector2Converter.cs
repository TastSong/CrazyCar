using System;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility.Converters {
	/// <summary> Converts from float array to Vector2 during deserialization, and back </summary>
	[Preserve] public class Vector2Converter : JsonConverter {
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer) {
			Vector2 pos = (Vector2) value;
			writer.WriteStartArray();
			writer.WriteValue(pos.x);
			writer.WriteValue(pos.y);
			writer.WriteEndArray();
		}

		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer) {
			float[] floatArray = null;
			try {
				floatArray = serializer.Deserialize<float[]>(reader);
			} catch (System.Exception e) {
				floatArray = new float[] { serializer.Deserialize<float>(reader) };
				Debug.LogWarning(e);
			}

			switch (floatArray.Length) {
				case 1:
					return new Vector2(floatArray[0], floatArray[0]); // just copy float
				case 2:
					return new Vector2(floatArray[0], floatArray[1]);
				case 3:
					return new Vector2(floatArray[0], floatArray[1]); // we dont need third float
				default:
					return new Vector2(1, 1);
			}
		}

		public override bool CanConvert(Type objectType) {
			return objectType == typeof(Vector2);
		}
	}
}