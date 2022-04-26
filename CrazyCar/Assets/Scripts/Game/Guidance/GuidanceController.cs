using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using System;
using UnityEngine.UI;
using Utils;

public enum GuidanceType {
    Circle = 0,
    Rect
}

[Serializable]
public class GuidanceInfo {
    public GuidanceType guidanceType;
	public Image image;
    public string content;
    public Color contentColor;
    public bool isClick;
}

public class GuidanceController : MonoBehaviour, IController {
	public GuidanceCanvasType canvasType = GuidanceCanvasType.UIController;
	public GuidanceInfo[] guidanceInfos;
	public int index = 0;
	public Text contentText;
	private GuidanceEventPenetrate _eventPenetrate;

	private Canvas _canvas;
	private Vector3[] _corners = new Vector3[4];
	private float _radius;
	private float _currentRadius;

	private float _targetOffsetX = 0f;
	private float _targetOffsetY = 0f;
	private Material _material;
	private float _currentOffsetX = 0f;
	private float _currentOffsetY = 0f;
	private float _shrinkTime = 0.1f;

	private float _shrinkVelocityX = 0f;
	private float _shrinkVelocityY = 0f;
	private float _shrinkVelocity = 0f;

	private bool isInit = false;

	private void Awake() {
		gameObject.SetActiveFast(!this.GetModel<IUserModel>().IsCompleteGuidance);
    }

	private void Start() {
		_material = GetComponent<Image>().material;
		_material.SetFloat("_SliderX", 0);
		_material.SetFloat("_SliderY", 0);
		_material.SetFloat("_Slider", 0);
		contentText.gameObject.SetActiveFast(false);
		Util.DelayExecuteWithSecond(0.5f, () => {
			_canvas = this.GetSystem<IGuidanceSystem>().GetTargetCanvas(canvasType);
			_eventPenetrate = GetComponent<GuidanceEventPenetrate>();
			_eventPenetrate.maxIndex = guidanceInfos.Length;
			_eventPenetrate.shrinkTime = _shrinkTime;
			if (guidanceInfos.Length > 0) {
				SetTaget(guidanceInfos[0]);
			}

			isInit = true;
		});		
	}

	private void Update() {
		if (!isInit) {
			return;
        }

		//从当前偏移值到目标偏移值差值显示收缩动画
		if (guidanceInfos[index].guidanceType == GuidanceType.Rect) {
			float valueX = Mathf.SmoothDamp(_currentOffsetX, _targetOffsetX, ref _shrinkVelocityX, _shrinkTime);
			float valueY = Mathf.SmoothDamp(_currentOffsetY, _targetOffsetY, ref _shrinkVelocityY, _shrinkTime);
			if (!Mathf.Approximately(valueX, _currentOffsetX)) {
				_currentOffsetX = valueX;
				_material.SetFloat("_SliderX", _currentOffsetX);
			}

			if (!Mathf.Approximately(valueY, _currentOffsetY)) {
				_currentOffsetY = valueY;
				_material.SetFloat("_SliderY", _currentOffsetY);
			}
		} else {
			//从当前半径到目标半径差值显示收缩动画
			float value = Mathf.SmoothDamp(_currentRadius, _radius, ref _shrinkVelocity, _shrinkTime);
			if (!Mathf.Approximately(value, _currentRadius)) {
				_currentRadius = value;
				_material.SetFloat("_Slider", _currentRadius);
			}
		}

		if (_eventPenetrate != null && _eventPenetrate.index != index) {
			if (_eventPenetrate.index == guidanceInfos.Length) {
				gameObject.SetActiveFast(false);
            } else {
				SetTaget(guidanceInfos[_eventPenetrate.index]);
				index = _eventPenetrate.index;
			}			
		}
	}

	private void SetTaget(GuidanceInfo guidanceInfo) {
		if (guidanceInfo.guidanceType == GuidanceType.Rect) {
			SetRectTaget(guidanceInfo);
		} else {
			SetCircleTaget(guidanceInfo);
		}
    }

	private void SetRectTaget(GuidanceInfo guidanceInfo) {
		if (_eventPenetrate != null) {
			_eventPenetrate.SetTargetImage(guidanceInfo.image, guidanceInfo.isClick, _canvas);
		}

		guidanceInfo.image.rectTransform.GetWorldCorners(_corners);
		_targetOffsetX = Vector2.Distance(Util.WorldToCanvasPos(_canvas, _corners[0]), Util.WorldToCanvasPos(_canvas, _corners[3])) / 2f;
		_targetOffsetY = Vector2.Distance(Util.WorldToCanvasPos(_canvas, _corners[0]), Util.WorldToCanvasPos(_canvas, _corners[1])) / 2f;
		float x = _corners[0].x + ((_corners[3].x - _corners[0].x) / 2f);
		float y = _corners[0].y + ((_corners[1].y - _corners[0].y) / 2f);
		Vector3 centerWorld = new Vector3(x, y, 0);
		Vector2 center = Util.WorldToCanvasPos(_canvas, centerWorld);
		Vector4 centerMat = new Vector4(center.x, center.y, 0, 0);
		_material.SetVector("_Center", centerMat);
		_material.SetFloat("_IsRect", 1);

		RectTransform canvasRectTransform = (_canvas.transform as RectTransform);
		if (canvasRectTransform != null) {
			canvasRectTransform.GetWorldCorners(_corners);
			for (int i = 0; i < _corners.Length; i++) {
				if (i % 2 == 0)
					_currentOffsetX = Mathf.Max(Vector3.Distance(Util.WorldToCanvasPos(_canvas, _corners[i]), center), _currentOffsetX);
				else
					_currentOffsetY = Mathf.Max(Vector3.Distance(Util.WorldToCanvasPos(_canvas, _corners[i]), center), _currentOffsetY);
			}
		}

		_material.SetFloat("_SliderX", _currentOffsetX);
		_material.SetFloat("_SliderY", _currentOffsetY);

		SetContent(guidanceInfo, center, _targetOffsetY);
	}

	private void SetCircleTaget(GuidanceInfo guidanceInfo) {
		if (_eventPenetrate != null) {
			_eventPenetrate.SetTargetImage(guidanceInfo.image, guidanceInfo.isClick, _canvas);
		}

		guidanceInfo.image.rectTransform.GetWorldCorners(_corners);
		_radius = Vector2.Distance(Util.WorldToCanvasPos(_canvas, _corners[0]), Util.WorldToCanvasPos(_canvas, _corners[2])) / 2f;
		float x = _corners[0].x + ((_corners[3].x - _corners[0].x) / 2f);
		float y = _corners[0].y + ((_corners[1].y - _corners[0].y) / 2f);
		Vector3 centerWorld = new Vector3(x, y, 0);
		Vector2 center = Util.WorldToCanvasPos(_canvas, centerWorld);
		Vector4 centerMat = new Vector4(center.x, center.y, 0, 0);		
		_material.SetVector("_Center", centerMat);
		_material.SetFloat("_IsRect", 0);
		RectTransform canRectTransform = _canvas.transform as RectTransform;
		if (canRectTransform != null) {
			canRectTransform.GetWorldCorners(_corners);
			foreach (Vector3 corner in _corners) {
				_currentRadius = Mathf.Max(Vector3.Distance(Util.WorldToCanvasPos(_canvas, corner), center), _currentRadius);
			}
		}
		_material.SetFloat("_Slider", _currentRadius);

		SetContent(guidanceInfo, center, _radius);
	}

	private void SetContent(GuidanceInfo guidanceInfo, Vector2 center, float offset) {
		contentText.text = guidanceInfo.content;
		contentText.color = guidanceInfo.contentColor;
		contentText.GetComponent<RectTransform>().localPosition = (center - new Vector2(0, offset));
		contentText.gameObject.SetActiveFast(true);
	}

	public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
