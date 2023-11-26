using System;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using Siccity.GLTFUtility.Converters;
using UnityEngine;
using UnityEngine.Scripting;

namespace Siccity.GLTFUtility {
	// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#animation
	/// <summary> Contains info for a single animation clip </summary>
	[Preserve] public class GLTFAnimation {
		/// <summary> Connects the output values of the key frame animation to a specific node in the hierarchy </summary>
		[JsonProperty(Required = Required.Always)] public Channel[] channels;
		[JsonProperty(Required = Required.Always)] public Sampler[] samplers;
		public string name;

#region Classes
		// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#animation-sampler
		[Preserve] public class Sampler {
			/// <summary> The index of an accessor containing keyframe input values, e.g., time. </summary>
			[JsonProperty(Required = Required.Always)] public int input;
			/// <summary> The index of an accessor containing keyframe output values. </summary>
			[JsonProperty(Required = Required.Always)] public int output;
			/// <summary> Valid names include: "LINEAR", "STEP", "CUBICSPLINE" </summary>
			[JsonConverter(typeof(EnumConverter))] public InterpolationMode interpolation = InterpolationMode.LINEAR;
		}

		// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#channel
		/// <summary> Connects the output values of the key frame animation to a specific node in the hierarchy </summary>
		[Preserve] public class Channel {
			/// <summary> Target sampler index </summary>
			[JsonProperty(Required = Required.Always)] public int sampler;
			/// <summary> Target sampler index </summary>
			[JsonProperty(Required = Required.Always)] public Target target;
		}

		// https://github.com/KhronosGroup/glTF/blob/master/specification/2.0/README.md#target
		/// <summary> Identifies which node and property to animate </summary>
		[Preserve] public class Target {
			/// <summary> Target node index.</summary>
			public int? node;
			/// <summary> Which property to animate. Valid names are: "translation", "rotation", "scale", "weights" </summary>
			[JsonProperty(Required = Required.Always)] public string path;
		}

		[Preserve] public class ImportResult {
			public AnimationClip clip;
		}
#endregion

		public ImportResult Import(GLTFAccessor.ImportResult[] accessors, GLTFNode.ImportResult[] nodes, ImportSettings importSettings) {
			bool multiRoots = nodes.Where(x => x.IsRoot).Count() > 1;

			ImportResult result = new ImportResult();
			result.clip = new AnimationClip();
			result.clip.name = name;

			if (importSettings.useLegacyClips) {
				result.clip.legacy = true;
			}

			for (int i = 0; i < channels.Length; i++) {
				Channel channel = channels[i];
				if (samplers.Length <= channel.sampler) {
					Debug.LogWarning($"GLTFUtility: Animation channel points to sampler at index {channel.sampler} which doesn't exist. Skipping animation clip.");
					continue;
				}
				Sampler sampler = samplers[channel.sampler];

				// Get interpolation mode
				InterpolationMode interpolationMode = importSettings.interpolationMode;
				if (interpolationMode == InterpolationMode.ImportFromFile) {
					interpolationMode = sampler.interpolation;
				}
				if (interpolationMode == InterpolationMode.CUBICSPLINE) Debug.LogWarning("Animation interpolation mode CUBICSPLINE not fully supported, result might look different.");

				string relativePath = "";

				GLTFNode.ImportResult node = nodes[channel.target.node.Value];
				while (node != null && !node.IsRoot) {
					if (string.IsNullOrEmpty(relativePath)) relativePath = node.transform.name;
					else relativePath = node.transform.name + "/" + relativePath;

					if (node.parent.HasValue) node = nodes[node.parent.Value];
					else node = null;
				}

				// If file has multiple root nodes, a new parent will be created for them as a final step of the import process. This parent fucks up the curve relative paths.
				// Add node.transform.name to path if there are multiple roots. This is not the most elegant fix but it works.
				// See GLTFNodeExtensions.GetRoot
				if (multiRoots) relativePath = node.transform.name + "/" + relativePath;

				System.Threading.Thread.CurrentThread.CurrentCulture = System.Globalization.CultureInfo.InvariantCulture;
				float[] keyframeInput = accessors[sampler.input].ReadFloat().ToArray();
				switch (channel.target.path) {
					case "translation":
						Vector3[] pos = accessors[sampler.output].ReadVec3().ToArray();
						AnimationCurve posX = new AnimationCurve();
						AnimationCurve posY = new AnimationCurve();
						AnimationCurve posZ = new AnimationCurve();
						for (int k = 0; k < keyframeInput.Length; k++) {
							posX.AddKey(CreateKeyframe(k, keyframeInput, pos, x => -x.x, interpolationMode));
							posY.AddKey(CreateKeyframe(k, keyframeInput, pos, x => x.y, interpolationMode));
							posZ.AddKey(CreateKeyframe(k, keyframeInput, pos, x => x.z, interpolationMode));
						}
						result.clip.SetCurve(relativePath, typeof(Transform), "localPosition.x", posX);
						result.clip.SetCurve(relativePath, typeof(Transform), "localPosition.y", posY);
						result.clip.SetCurve(relativePath, typeof(Transform), "localPosition.z", posZ);
						break;
					case "rotation":
						Vector4[] rot = accessors[sampler.output].ReadVec4().ToArray();
						AnimationCurve rotX = new AnimationCurve();
						AnimationCurve rotY = new AnimationCurve();
						AnimationCurve rotZ = new AnimationCurve();
						AnimationCurve rotW = new AnimationCurve();
						for (int k = 0; k < keyframeInput.Length; k++) {
							// The Animation window in Unity shows keyframes incorrectly converted to euler. This is only to deceive you. The quaternions underneath work correctly
							rotX.AddKey(CreateKeyframe(k, keyframeInput, rot, x => x.x, interpolationMode));
							rotY.AddKey(CreateKeyframe(k, keyframeInput, rot, x => -x.y, interpolationMode));
							rotZ.AddKey(CreateKeyframe(k, keyframeInput, rot, x => -x.z, interpolationMode));
							rotW.AddKey(CreateKeyframe(k, keyframeInput, rot, x => x.w, interpolationMode));
						}
						result.clip.SetCurve(relativePath, typeof(Transform), "localRotation.x", rotX);
						result.clip.SetCurve(relativePath, typeof(Transform), "localRotation.y", rotY);
						result.clip.SetCurve(relativePath, typeof(Transform), "localRotation.z", rotZ);
						result.clip.SetCurve(relativePath, typeof(Transform), "localRotation.w", rotW);
						break;
					case "scale":
						Vector3[] scale = accessors[sampler.output].ReadVec3().ToArray();
						AnimationCurve scaleX = new AnimationCurve();
						AnimationCurve scaleY = new AnimationCurve();
						AnimationCurve scaleZ = new AnimationCurve();
						for (int k = 0; k < keyframeInput.Length; k++) {
							scaleX.AddKey(CreateKeyframe(k, keyframeInput, scale, x => x.x, interpolationMode));
							scaleY.AddKey(CreateKeyframe(k, keyframeInput, scale, x => x.y, interpolationMode));
							scaleZ.AddKey(CreateKeyframe(k, keyframeInput, scale, x => x.z, interpolationMode));
						}
						result.clip.SetCurve(relativePath, typeof(Transform), "localScale.x", scaleX);
						result.clip.SetCurve(relativePath, typeof(Transform), "localScale.y", scaleY);
						result.clip.SetCurve(relativePath, typeof(Transform), "localScale.z", scaleZ);
						break;
					case "weights":
						Debug.LogWarning("GLTFUtility: Morph weights in animation is not supported");
						break;
				}
			}
			return result;
		}

		public static Keyframe CreateKeyframe<T>(int index, float[] timeArray, T[] valueArray, Func<T, float> getValue, InterpolationMode interpolationMode) {
			float time = timeArray[index];
			Keyframe keyframe;
#pragma warning disable CS0618
			if (interpolationMode == InterpolationMode.STEP) {
				keyframe = new Keyframe(time, getValue(valueArray[index]), float.PositiveInfinity, float.PositiveInfinity, 1, 1);
			} else if (interpolationMode == InterpolationMode.CUBICSPLINE) {
				// @TODO: Find out what the right math is to calculate the tangent/weight values.
				float inTangent = getValue(valueArray[index * 3]);
				float outTangent = getValue(valueArray[(index * 3) + 2]);
				keyframe = new Keyframe(time, getValue(valueArray[(index * 3) + 1]), inTangent, outTangent, 1, 1);
			} else { // LINEAR
				keyframe = new Keyframe(time, getValue(valueArray[index]), 0, 0, 0, 0);
			}
#pragma warning restore CS0618
			return keyframe;
		}
	}

	public static class GLTFAnimationExtensions {
		public static GLTFAnimation.ImportResult[] Import(this List<GLTFAnimation> animations, GLTFAccessor.ImportResult[] accessors, GLTFNode.ImportResult[] nodes, ImportSettings importSettings) {
			if (animations == null) return null;

			GLTFAnimation.ImportResult[] results = new GLTFAnimation.ImportResult[animations.Count];
			for (int i = 0; i < results.Length; i++) {
				results[i] = animations[i].Import(accessors, nodes, importSettings);
				if (string.IsNullOrEmpty(results[i].clip.name)) results[i].clip.name = "animation" + i;
			}
			return results;
		}
	}
}