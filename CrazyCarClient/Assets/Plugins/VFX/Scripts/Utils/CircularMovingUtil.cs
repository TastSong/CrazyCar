using System;
using UnityEngine;

namespace VFX
{
	internal sealed class CircularMovingUtil : MonoBehaviour
	{
		public float Freq;
		public float Omega;

		private float _unit;

		private void Update()
		{
			var transformPosition = transform.position;

			transformPosition.x += (float)(_unit * Math.Sin(Time.time * Freq) * Omega);
			transformPosition.z += (float)(_unit * Math.Cos(Time.time * Freq) * Omega);

			_unit += Time.deltaTime;

			transform.position = transformPosition;
		}
	}
}