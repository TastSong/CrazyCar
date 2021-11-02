using System;
using UnityEngine;

namespace Assets.ImagyVFX.Scripts.CollisionUtils
{
    internal sealed class CollisionDetector : MonoBehaviour
    {
        public float CollisionDistance;

        private Transform _transform;

        public event Action<Vector3> CollisionDetected;

        private void Start()
        {
            _transform = transform;
        }

        private void FixedUpdate()
        {
            RaycastHit hit;
            if (!Physics.Raycast(_transform.position, -transform.up, out hit, CollisionDistance))
                return;

            var distance = Vector3.Distance(_transform.position, hit.point);

            if (distance > CollisionDistance)
                return;

            if (CollisionDetected != null)
                CollisionDetected.Invoke(hit.point);
        }
    }
}
