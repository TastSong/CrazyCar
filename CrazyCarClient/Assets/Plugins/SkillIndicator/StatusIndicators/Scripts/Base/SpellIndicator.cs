using UnityEngine;
using System.Collections;
using System.Linq;
using StatusIndicators.Services;

namespace StatusIndicators.Components {
	public abstract class SpellIndicator : Splat {

		// Fields

		/// <summary>
		/// Special indicator for displaying range, unselectable.
		/// </summary>
		public RangeIndicator RangeIndicator;

		/// <summary>
		/// Set the size of the Range Indicator and bounds of Spell Cursor.
		/// </summary>
		[SerializeField]
		protected float range = 5f;

		/// <summary>
		/// Set the size of the Range Indicator and bounds of Spell Cursor.
		/// </summary>
		public float Range {
			get { return range; }
			set { SetRange(value); }
		}

		public override void OnShow() {
			UpdateRangeIndicatorSize();
		}

		/// <summary>
		/// Set the size of the Range Indicator and bounds of Spell Cursor.
		/// </summary>
		/// <param name="range">Range of spell</param>
		public void SetRange(float range) {
			this.range = range;
			UpdateRangeIndicatorSize();
		}

		/// <summary>
		/// Get the vector that is on the same y position as the subject to get a more accurate angle.
		/// </summary>
		/// <param name="target">The target point which we are trying to adjust against</param>
		protected Vector3 FlattenVector(Vector3 target) {
			return new Vector3(target.x, Manager.transform.position.y, target.z);
		}

		/// <summary>
		/// Scale Range Indicator to be same as Splat Range.
		/// </summary>
		private void UpdateRangeIndicatorSize() {
			if(RangeIndicator != null)
				RangeIndicator.Scale = range * 2.1f;
		}
	}
}