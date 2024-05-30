using UnityEngine;
using System.Linq;
using StatusIndicators.Services;
using System.Collections;

namespace StatusIndicators.Components {
	public class AngleMissile : SpellIndicator {

		// Properties

		public override ScalingType Scaling { get { return ScalingType.LengthAndHeight; } }

		// Methods

		public override void Update() {
			if(Manager != null) {
				Vector3 v = FlattenVector(Manager.Get3DPosition()) - Manager.transform.position;
				if(v != Vector3.zero) {
					Manager.transform.rotation = Quaternion.LookRotation(v);
				}
			}
		}
	}
}
