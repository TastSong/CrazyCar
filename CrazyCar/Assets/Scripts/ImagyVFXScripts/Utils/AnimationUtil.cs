using UnityEngine;

namespace Assets.ImagyVFX.Scripts.Utils
{
	public class AnimationUtil : MonoBehaviour
	{
		public bool RotationOverLifeTime;
		public float RotationSpeed;
		public bool RotateZAxis;

		void Start()
		{
		}

		void Update()
		{
			if (!RotationOverLifeTime)
				return;

			if (RotateZAxis)
				transform.Rotate(Vector3.forward * RotationSpeed * Time.deltaTime);
		}
	}
}