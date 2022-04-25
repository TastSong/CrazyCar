using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RectGuidanceController : MonoBehaviour
{
	public Image[] Target;
	public Button but;

	public int index = 0;
	
	// 区域范围缓存
	private Vector3[] _corners = new Vector3[4];

	// 镂空区域中心
	private Vector4 _center;

	private float _targetOffsetX = 0f;
	private float _targetOffsetY = 0f;

	// 遮罩材质
	private Material _material;
	
	private float _currentOffsetX = 0f;
	private float _currentOffsetY = 0f;

	private float _shrinkTime = 0.5f;
	private GuidanceEventPenetrate _eventPenetrate;

	private Vector2 WorldToCanvasPos(Canvas canvas, Vector3 world)
	{
		Vector2 position;
		RectTransformUtility.ScreenPointToLocalPointInRectangle(canvas.transform as RectTransform, world,
			canvas.GetComponent<Camera>(), out position);
		return position;
	}

	private void Awake()
	{
		_eventPenetrate = GetComponent<GuidanceEventPenetrate>();

		_eventPenetrate.maxIndex = (Target.Length - 1);
		if (Target.Length > 0) {
			SetTaget(Target[0]);
		}

		but.onClick.AddListener(() => {
			Debug.LogError("_+++++ 点击");
		});
	}

	private void SetTaget(Image image) {
		if (_eventPenetrate != null)
			_eventPenetrate.SetTargetImage(image);
		Canvas canvas = GameObject.Find("Canvas").GetComponent<Canvas>();
		//获取高亮区域四个顶点的世界坐标
		image.rectTransform.GetWorldCorners(_corners);
		//计算高亮显示区域咋画布中的范围
		_targetOffsetX = Vector2.Distance(WorldToCanvasPos(canvas, _corners[0]), WorldToCanvasPos(canvas, _corners[3])) / 2f;
		_targetOffsetY = Vector2.Distance(WorldToCanvasPos(canvas, _corners[0]), WorldToCanvasPos(canvas, _corners[1])) / 2f;
		//计算高亮显示区域的中心
		float x = _corners[0].x + ((_corners[3].x - _corners[0].x) / 2f);
		float y = _corners[0].y + ((_corners[1].y - _corners[0].y) / 2f);
		Vector3 centerWorld = new Vector3(x, y, 0);
		Vector2 center = WorldToCanvasPos(canvas, centerWorld);
		//设置遮罩材料中中心变量
		Vector4 centerMat = new Vector4(center.x, center.y, 0, 0);
		_material = GetComponent<Image>().material;
		_material.SetVector("_Center", centerMat);
		//计算当前偏移的初始值
		RectTransform canvasRectTransform = (canvas.transform as RectTransform);
		if (canvasRectTransform != null) {
			//获取画布区域的四个顶点
			canvasRectTransform.GetWorldCorners(_corners);
			//求偏移初始值
			for (int i = 0; i < _corners.Length; i++) {
				if (i % 2 == 0)
					_currentOffsetX = Mathf.Max(Vector3.Distance(WorldToCanvasPos(canvas, _corners[i]), center), _currentOffsetX);
				else
					_currentOffsetY = Mathf.Max(Vector3.Distance(WorldToCanvasPos(canvas, _corners[i]), center), _currentOffsetY);
			}
		}
		//设置遮罩材质中当前偏移的变量
		_material.SetFloat("_SliderX", _currentOffsetX);
		_material.SetFloat("_SliderY", _currentOffsetY);
	}

	private float _shrinkVelocityX = 0f;
	private float _shrinkVelocityY = 0f;

	private void Update()
	{
		//从当前偏移值到目标偏移值差值显示收缩动画
		float valueX = Mathf.SmoothDamp(_currentOffsetX, _targetOffsetX, ref _shrinkVelocityX, _shrinkTime);
		float valueY = Mathf.SmoothDamp(_currentOffsetY, _targetOffsetY, ref _shrinkVelocityY, _shrinkTime);
		if (!Mathf.Approximately(valueX, _currentOffsetX))
		{
			_currentOffsetX = valueX;
			_material.SetFloat("_SliderX",_currentOffsetX);
		}

		if (!Mathf.Approximately(valueY, _currentOffsetY))
		{
			_currentOffsetY = valueY;
			_material.SetFloat("_SliderY",_currentOffsetY);
		}

		if (_eventPenetrate != null && _eventPenetrate.index != index) {
			SetTaget(Target[_eventPenetrate.index]);
			index = _eventPenetrate.index;
        }
	}
}
