using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class GuidanceEventPenetrate : MonoBehaviour, IPointerClickHandler {
	public int index = 0;
    public int maxIndex = 0;

	private Image _targetImage;

	public void SetTargetImage(Image target)
	{
		_targetImage = target;
	}

    public void OnPointerClick(PointerEventData eventData) {
        if (!RectTransformUtility.RectangleContainsScreenPoint(_targetImage.rectTransform, Input.mousePosition, Camera.main)) {
            index = Mathf.Min(index + 1, maxIndex);
			Psss(eventData, ExecuteEvents.pointerClickHandler);
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
            Debug.LogError("++++ " + results[i].gameObject.name);
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
