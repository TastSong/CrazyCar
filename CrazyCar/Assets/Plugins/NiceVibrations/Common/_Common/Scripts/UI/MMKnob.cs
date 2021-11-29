using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace MoreMountains.NiceVibrations
{
    [RequireComponent(typeof(Rect))]
    public class MMKnob : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        public RenderMode ParentCanvasRenderMode { get; protected set; }

        [Header("Bindings")]
        public Camera TargetCamera;

        [Header("Settings")]
        public float MinimumAngle = 45f;
        public float MaximumAngle = -225f;
        public float MaximumDistance = 50f;
        public Color ActiveColor;
        public Color InactiveColor;

        [Header("Output")]
        public bool Dragging = false;
        public float Value = 0f;
        public bool Active = true;

        public Image _image;
        protected PointerEventData _pointerEventData;
        protected float _distance;
        public RectTransform _rectTransform;
        protected Vector3 _rotation = Vector3.zero;
        protected Canvas _canvas;
        protected Vector2 _workPosition;

        protected virtual void Awake()
        {
            _image = this.gameObject.GetComponent<Image>();
            _canvas = GetComponentInParent<Canvas>();
            ParentCanvasRenderMode = GetComponentInParent<Canvas>().renderMode;
            _rectTransform = this.GetComponent<RectTransform>();
            SetRotation(MinimumAngle);
        }

        protected virtual void Update()
        {
            if (!Active)
            {
                Dragging = false;
                _image.color = InactiveColor;
                return;
            }
            else
            {
                _image.color = ActiveColor;
            }

            if (!Dragging)
            {
                return;
            }

            Vector2 v1 = Vector2.down;
            Vector2 v2 = this.transform.position - GetWorldPosition(_pointerEventData.position);
            
            float angle = Vector2.SignedAngle(v1, v2);

            angle = Mathf.Clamp(angle, -130f, 130f);

            _rotation.z = NiceVibrationsDemoHelpers.Remap(angle, -130f, 130f, MaximumAngle, MinimumAngle);
            _rectTransform.SetPositionAndRotation(this.transform.position, Quaternion.Euler(_rotation));

            Value = NiceVibrationsDemoHelpers.Remap(angle, -130f, 130f, 1f, 0f);
        }

        protected virtual void SetRotation(float angle)
        {
            angle = Mathf.Clamp(angle, MaximumAngle, MinimumAngle);
            _rotation.z = angle;
            _rectTransform.SetPositionAndRotation(this.transform.position, Quaternion.Euler(_rotation));
        }

        public virtual void SetActive(bool status)
        {
            Active = status;
        }

        public virtual void SetValue(float value)
        {
            SetRotation(MinimumAngle);
            Value = value;
            float angle = NiceVibrationsDemoHelpers.Remap(value, 0f, 1f, MinimumAngle, MaximumAngle);

            _rotation.z = angle;
            _rectTransform.SetPositionAndRotation(this.transform.position, Quaternion.Euler(_rotation));
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            _pointerEventData = eventData;
            Dragging = true;
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            _pointerEventData = null;
            Dragging = false;
        }
        protected virtual Vector3 GetWorldPosition(Vector3 testPosition)
        {
            if (ParentCanvasRenderMode == RenderMode.ScreenSpaceCamera)
            {
                RectTransformUtility.ScreenPointToLocalPointInRectangle(_canvas.transform as RectTransform, testPosition, _canvas.worldCamera, out _workPosition);
                return _canvas.transform.TransformPoint(_workPosition);
            }
            else
            {
                return testPosition;
            }
        }
    }
}
