using UnityEngine;
using System.Collections;
using System.Linq;
using StatusIndicators.Services;

namespace StatusIndicators.Components {
	public class Point : SpellIndicator {

		public override ScalingType Scaling { get { return ScalingType.LengthAndHeight; } }

		/// <summary>
		/// Determine if you want the Splat to be restricted to the Range Indicator bounds. Applies to "Point" Splats only.
		/// </summary>
		[SerializeField]
		protected bool restrictCursorToRange = false;

		/// <summary>
		/// Restrict splat position bound to range from player
		/// </summary>
		private void RestrictCursorToRange() {
			if(Manager != null) {
				if(Vector3.Distance(Manager.transform.position, transform.position) > range)
					transform.position = Manager.transform.position + Vector3.ClampMagnitude(transform.position - Manager.transform.position, range);
			}
		}

		public override void Update() {
			transform.position = Manager.Get3DPosition();
			if(restrictCursorToRange)
				RestrictCursorToRange();
		}

		void LateUpdate() {
			// Prevent Splat from spinning due to player rotation
			transform.eulerAngles = new Vector3(90, 0, 0);
		}
	}
}