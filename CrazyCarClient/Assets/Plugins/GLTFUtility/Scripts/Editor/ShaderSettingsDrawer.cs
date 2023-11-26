using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;

namespace Siccity.GLTFUtility {
	[CustomPropertyDrawer(typeof(ShaderSettings))]
	public class ShaderSettingsDrawer : PropertyDrawer {
		private static SerializedObject serializedGraphicsSettings;
		private bool hasShaders;

		public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
			EditorGUI.BeginProperty(position, label, property);


			// Get shader properties
			SerializedProperty metalicProp = property.FindPropertyRelative("metallic");
			SerializedProperty metallicBlendProp = property.FindPropertyRelative("metallicBlend");
			SerializedProperty specularProp = property.FindPropertyRelative("specular");
			SerializedProperty specularBlendProp = property.FindPropertyRelative("specularBlend");

			hasShaders = HasShaders(metalicProp, metallicBlendProp, specularProp, specularBlendProp);
			EditorGUI.PropertyField(position, property, true);

			// Show shader warning
			if (!hasShaders && property.isExpanded) {
				GUIContent content = new GUIContent("Shaders not found in 'GraphicSettings/Always Included Shaders'.\nShaders might not be available for runtime import.");
				float baseHeight = EditorGUI.GetPropertyHeight(property, true);
				Rect warningRect = new Rect(position.x, position.y + baseHeight + 2, position.width, 50);
				EditorGUI.HelpBox(warningRect, content.text, MessageType.Warning);
				/* Rect buttonRect = new Rect(warningRect.xMax - 150, warningRect.yMax + 2, 150, 18);
				if (GUI.Button(buttonRect, "Open GraphicsSettings")) {

				} */
			}
			EditorGUI.EndProperty();
		}

		public override float GetPropertyHeight(SerializedProperty property, GUIContent label) {
			float height = EditorGUI.GetPropertyHeight(property, true);
			if (!hasShaders && property.isExpanded) height += 40;
			return height;
		}

		public bool HasShaders(params SerializedProperty[] shaders) {

			if (serializedGraphicsSettings == null) {
				GraphicsSettings graphicsSettings = AssetDatabase.LoadAssetAtPath<GraphicsSettings>("ProjectSettings/GraphicsSettings.asset");
				serializedGraphicsSettings = new SerializedObject(graphicsSettings);
			}

			SerializedProperty arrayProp = serializedGraphicsSettings.FindProperty("m_AlwaysIncludedShaders");
			bool[] hasShaders = new bool[shaders.Length];
			for (int i = 0; i < arrayProp.arraySize; ++i) {
				SerializedProperty arrayElem = arrayProp.GetArrayElementAtIndex(i);
				for (int k = 0; k < shaders.Length; k++) {
					if (shaders[k].objectReferenceValue == arrayElem.objectReferenceValue) hasShaders[k] = true;
				}
			}
			return hasShaders.All(x => x);
		}
	}
}