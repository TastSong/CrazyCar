using UnityEngine;
using System.Collections;
using System.Linq;
using StatusIndicators.Services;
using StatusIndicators;

namespace StatusIndicators.Components {
	public abstract class Splat : MonoBehaviour {

		// Interface

		/// <summary>
		/// Determine if the Scaling should be uniform or length only.
		/// </summary>
		public abstract ScalingType Scaling { get; }

		// Fields

		/// <summary>
		/// Mutable projectors of the Splat.
		/// </summary>
		public Projector[] Projectors { get { return GetComponentsInChildren<Projector>(); } }

		/// <summary>
		/// Set the progress bar of Spell Indicator.
		/// </summary>
		[SerializeField]
		[Range(0, 1)]
		protected float progress = 0;

		/// <summary>
		/// Size of the Splat in Length, or Length and Width depending on Scaling Type
		/// </summary>
		[SerializeField]
		protected float scale = 7f;

		/// <summary>
		/// Width of the Splat, when Scaling Type is Length Only
		/// </summary>
		[SerializeField]
		protected float width;

		// Properties

		/// <summary>
		/// The manager should contain all the splats for the character.
		/// </summary>
		public SplatManager Manager { get; set; }

		/// <summary>
		/// Set the progress bar of Spell Indicator.
		/// </summary>
		public float Progress {
			get { return progress; }
			set { 
				this.progress = value;
				OnValueChanged();
			}
		}

		/// <summary>
		/// Size of the Splat in Length, or Length and Width depending on Scaling Type
		/// </summary>
		public float Scale {
			get { return scale; }
			set { 
				this.scale = value;
				OnValueChanged();
			}
		}

		/// <summary>
		/// Width of the Splat, when Scaling Type is Length Only
		/// </summary>
		public float Width {
			get { return width; }
			set { 
				this.width = value;
				OnValueChanged();
			}
		}

		/// <summary>
		/// We don't use Start() to avoid race conditions. Call this method from the Splat Manager.
		/// </summary>
		public virtual void Initialize() {
			// Clone all projector materials so that they don't get modified in Editor mode
			foreach(Projector p in Projectors)
				p.material = new Material(p.material);

			// Reset Position
			transform.localPosition = Vector3.zero;
		}

		public virtual void Update() {
		}

		/// <summary>
		/// For updating the Splat whenever a value is changed.
		/// </summary>
		public virtual void OnValueChanged() {
			ProjectorScaler.Resize(Projectors, Scaling, scale, width);
			UpdateProgress(progress);
		}

		/// <summary>
		/// Procedure when splat is set active
		/// </summary>
		public virtual void OnShow() {
		}

		/// <summary>
		/// Cleanup procedure when set inactive
		/// </summary>
		public virtual void OnHide() {
		}

		/// <summary>
		/// Update the progress attributes in Shader/Material.
		/// </summary>
		protected void UpdateProgress(float progress) {
			SetShaderFloat("_Fill", progress);
		}

		/// <summary>
		/// Helper method for setting float property on all projectors/shaders for splat.
		/// </summary>
		protected void SetShaderFloat(string property, float value) {
			foreach(Projector p in Projectors)
				if(p.material.HasProperty(property))
					p.material.SetFloat(property, value);
		}
	}
}