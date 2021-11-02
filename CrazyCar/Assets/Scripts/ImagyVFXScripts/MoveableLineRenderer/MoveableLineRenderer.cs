using System.Linq;
using UnityEngine;

namespace Assets.ImagyVFX.Scripts.MoveableLineRenderer
{
    internal sealed class MoveableLineRenderer : MonoBehaviour
    {
        public GameObject LineRendererPrefab;
        public float MinVertexDistance = 1f;
        public float LifeTime = 0.3f;
        public float Scale = 1.0f;
        public float Speed = 1f;
        public float Height = 1f;
        public float Gravity;

        private LineRenderer _lineRenderer;
        private Point[] _points;
        private int _pointsCount;

        private void Start()
        {
            _lineRenderer = Instantiate(LineRendererPrefab).GetComponent<UnityEngine.LineRenderer>();
            _lineRenderer.enabled = true;
            _lineRenderer.transform.parent = transform;

            _points = new Point[100];
        }

        private void Update()
        {
            RemoveOutdatedPoints();

            if (_pointsCount == 0)
            {
                _points[_pointsCount++] = new Point(transform.position);
                _points[_pointsCount++] = new Point(transform.position);
            }

            bool needAdd = false;

            var sqrDistance = (_points[1].Position - transform.position).sqrMagnitude;
            if (sqrDistance > MinVertexDistance * MinVertexDistance)
            {
                if (sqrDistance > MinVertexDistance * MinVertexDistance)
                    needAdd = true;
            }

            if (needAdd)
            {
                if (_pointsCount == _points.Length)
                    System.Array.Resize(ref _points, _points.Length + 50);

                InsertPoint();
            }

            ApplyTurbulence();

            _lineRenderer.positionCount = _pointsCount;

            //todo
            _lineRenderer.SetPositions(_points.Where(t => t != null).Select(t => t.Position).ToArray());
        }

        private void InsertPoint()
        {
            for (int i = _pointsCount; i > 0; i--)
                _points[i] = _points[i - 1];

            _points[0] = new Point(transform.position);

            _pointsCount++;
        }

        private void RemoveOutdatedPoints()
        {
            if (_pointsCount == 0)
                return;

            for (int i = _pointsCount - 1; i >= 0; i--)
            {
                var point = _points[i];
                if (point == null || point.TimeAlive >= LifeTime)
                {
                    _points[i] = null;
                    _pointsCount--;
                }
            }
        }

        private void ApplyTurbulence()
        {
            for (int i = _pointsCount - 1; i >= 0; i--)
            {
                if (_points[i] == null)
                    continue;

                var pointPosition = _points[i].Position;

                _points[i].Position = TurbulenceUtil.Calc(pointPosition, Speed, Scale, Height, Gravity);
            }
        }
    }
}