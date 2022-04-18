using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 矩形引导组件
/// </summary>
public class RectGuidanceController : MonoBehaviour
{

	/// <summary>
	/// 高亮显示的目标
	/// </summary>
	public Image Target;
	
	/// <summary>
	/// 区域范围缓存
	/// </summary>
	private Vector3[] _corners = new Vector3[4];

	/// <summary>
	/// 镂空区域中心
	/// </summary>
	private Vector4 _center;

	/// <summary>
	/// 最终的偏移值X
	/// </summary>
	private float _targetOffsetX = 0f;

	/// <summary>
	/// 最终的偏移值Y
	/// </summary>
	private float _targetOffsetY = 0f;

	/// <summary>
	/// 遮罩材质
	/// </summary>
	private Material _material;
	
	/// <summary>
	/// 当前的偏移值X
	/// </summary>
	private float _currentOffsetX = 0f;

	/// <summary>
	/// 当前的偏移值Y
	/// </summary>
	private float _currentOffsetY = 0f;

	/// <summary>
	/// 动画收缩时间
	/// </summary>
	private float _shrinkTime = 0.5f;

	/// <summary>
	/// 时间渗透组件
	/// </summary>
	private GuidanceEventPenetrate _eventPenetrate;

	/// <summary>
	/// 世界坐标到画布坐标的转换
	/// </summary>
	/// <param name="canvas">画布</param>
	/// <param name="world">世界坐标</param>
	/// <returns>转换后在画布的坐标</returns>
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
		if(_eventPenetrate != null)
			_eventPenetrate.SetTargetImage(Target);
		//获取画布
		Canvas canvas = GameObject.Find("Canvas").GetComponent<Canvas>();
		//获取高亮区域四个顶点的世界坐标
		Target.rectTransform.GetWorldCorners(_corners);
		//计算高亮显示区域咋画布中的范围
		_targetOffsetX = Vector2.Distance(WorldToCanvasPos(canvas, _corners[0]), WorldToCanvasPos(canvas, _corners[3])) / 2f;
		_targetOffsetY = Vector2.Distance(WorldToCanvasPos(canvas, _corners[0]), WorldToCanvasPos(canvas, _corners[1])) / 2f;
		//计算高亮显示区域的中心
		float x = _corners[0].x + ((_corners[3].x - _corners[0].x) / 2f);
		float y = _corners[0].y + ((_corners[1].y - _corners[0].y) / 2f);
		Vector3 centerWorld = new Vector3(x,y,0);
		Vector2 center = WorldToCanvasPos(canvas, centerWorld);
		//设置遮罩材料中中心变量
		Vector4 centerMat = new Vector4(center.x,center.y,0,0);
		_material = GetComponent<Image>().material;
		_material.SetVector("_Center",centerMat);
		//计算当前偏移的初始值
		RectTransform canvasRectTransform = (canvas.transform as RectTransform);
		if (canvasRectTransform != null)
		{
			//获取画布区域的四个顶点
			canvasRectTransform.GetWorldCorners(_corners);
			//求偏移初始值
			for (int i = 0; i < _corners.Length; i++)
			{
				if (i % 2 == 0)
					_currentOffsetX = Mathf.Max(Vector3.Distance(WorldToCanvasPos(canvas, _corners[i]), center), _currentOffsetX);
				else
					_currentOffsetY = Mathf.Max(Vector3.Distance(WorldToCanvasPos(canvas, _corners[i]), center), _currentOffsetY);
			}
		}
		//设置遮罩材质中当前偏移的变量
		_material.SetFloat("_SliderX",_currentOffsetX);
		_material.SetFloat("_SliderY",_currentOffsetY);
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
	}
}
