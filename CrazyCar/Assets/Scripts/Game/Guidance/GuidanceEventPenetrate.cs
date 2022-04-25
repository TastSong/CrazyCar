using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;

public class GuidanceEventPenetrate : MonoBehaviour, IPointerClickHandler {
	public int index = 0;
    public int maxIndex = 0;
    public float shrinkTime = 0;

    private Image _targetImage;
    private bool clicking = false;
    private bool _isCanClick;

	public void SetTargetImage(Image target, bool isCanClick) {
		_targetImage = target;
        this._isCanClick = isCanClick;
    }

    public void OnPointerClick(PointerEventData eventData) {
        if (!RectTransformUtility.RectangleContainsScreenPoint(_targetImage.rectTransform, Input.mousePosition, Camera.main)) {
            if (!clicking) {
                clicking = true;
                Util.DelayExecuteWithSecond(shrinkTime, () => { clicking = false; });
                index = Mathf.Min(index + 1, maxIndex);
                if (_isCanClick) {
                    Psss(eventData, ExecuteEvents.pointerClickHandler);
                }  
            }
		} 
    }

    private bool hasPassedEvent = false;
    public void Psss<T>(PointerEventData data, ExecuteEvents.EventFunction<T> function)
        where T : IEventSystemHandler {
        if (hasPassedEvent) {
            return;
        }
        hasPassedEvent = true;
        List<RaycastResult> results = new List<RaycastResult>();
        EventSystem.current.RaycastAll(data, results);
        GameObject current = data.pointerCurrentRaycast.gameObject;

        for (int i = 0; i < results.Count; i++) {
            
            if (current != results[i].gameObject) {
                if (ExecuteEvents.Execute(results[i].gameObject, data, function)) {
                    break;
                }
            }
        }
        results.Clear();
        hasPassedEvent = false;
    }
}
