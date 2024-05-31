using UnityEngine;
using System.Collections;
using System.Linq;
using StatusIndicators.Services;

namespace StatusIndicators.Components {
	public class StatusIndicator : Splat {
		public override ScalingType Scaling { get { return ScalingType.LengthAndHeight; } }

		public int ProgressSteps;

		public override void OnValueChanged() {
			ProjectorScaler.Resize(Projectors, Scaling, scale, width);

			if(ProgressSteps == 0) {
				UpdateProgress(progress);
			} else {
				UpdateProgress(StepProgress());
			}
		}

		/// <summary>
		/// For a staggered fill, such as dotted circles.
		/// </summary>
		private float StepProgress() {
			float stepSize = 1.0f / ProgressSteps;
			int currentStep = Mathf.RoundToInt(progress / stepSize);
			return (currentStep * stepSize) - (stepSize / 15);
		}
	}
}