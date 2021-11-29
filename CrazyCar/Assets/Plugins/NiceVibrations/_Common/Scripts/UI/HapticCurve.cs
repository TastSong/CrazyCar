using UnityEngine;
using System.Collections;
using System;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.Events;

namespace MoreMountains.NiceVibrations
{
    public class HapticCurve : MonoBehaviour
    {
        [Range(0f, 1f)]
        public float Intensity = 1f;
        [Range(0f, 1f)]
        public float Sharpness = 0f;
        public int PointsCount = 50;
        public float AmplitudeFactor = 3;
        public int Period = 4;
        public RectTransform StartPoint;
        public RectTransform EndPoint;

        [Header("Movement")]
        public bool Move = false;
        public float MovementSpeed = 1f;

        protected LineRenderer _targetLineRenderer;
        protected List<Vector3> Points;

        protected Canvas _canvas;
        protected Camera _camera;

        protected Vector3 _startPosition;
        protected Vector3 _endPosition;
        protected Vector3 _workPoint;
        
        protected virtual void Awake()
        {
            Initialization();
        }

        protected virtual void Initialization()
        {
            Points = new List<Vector3>();
            _canvas = this.gameObject.GetComponentInParent<Canvas>();
            _targetLineRenderer = this.gameObject.GetComponent<LineRenderer>();
            _camera = _canvas.worldCamera;
            DrawCurve();
        }

        protected virtual void DrawCurve()
        {
            _startPosition = StartPoint.transform.position;
            _startPosition.z -= 0.1f;
            _endPosition = EndPoint.transform.position;
            _endPosition.z -= 0.1f;

            Points.Clear();
            
            for (int i = 0; i < PointsCount; i++)
            {
                float t = NiceVibrationsDemoHelpers.Remap(i, 0, PointsCount, 0f, 1f);
                float sinValue = MMSignal.GetValue(t, MMSignal.SignalType.Sine, 1f, AmplitudeFactor, Period, 0f, false);
                float triangleValue = MMSignal.GetValue(t, MMSignal.SignalType.Triangle, 1f, AmplitudeFactor, Period, 0f, false);

                if (Move)
                {                                        
                    sinValue = MMSignal.GetValue(t + Time.time * MovementSpeed, MMSignal.SignalType.Sine, 1f, AmplitudeFactor, Period, 0f, false);
                    triangleValue = MMSignal.GetValue(t + Time.time * MovementSpeed, MMSignal.SignalType.Triangle, 1f, AmplitudeFactor, Period, 0f, false);
                }

                float finalValue = Mathf.Lerp(sinValue, triangleValue, Sharpness);


                _workPoint.x = Mathf.Lerp(_startPosition.x, _endPosition.x, t);
                _workPoint.y = finalValue * Intensity + _startPosition.y;
                _workPoint.z = _startPosition.z;
                Points.Add(_workPoint);
            }

            _targetLineRenderer.positionCount = PointsCount ;
            _targetLineRenderer.SetPositions(Points.ToArray());
        }

        protected virtual void Update()
        {
            UpdateCurve(Intensity, Sharpness);
        }

        public virtual void UpdateCurve(float intensity, float sharpness)
        {
            Intensity = intensity;
            Sharpness = sharpness;
            DrawCurve();
        }
    }
}
