using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Utils;

public class GameCtrBtn : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {
    private Action clickDown;
    private Action clickUp;

    public void SetClick(Action clickDown = null, Action clickUp = null) {
        this.clickDown = clickDown;
        this.clickUp = clickUp;
    }

    public void OnPointerDown(PointerEventData eventData) {
        clickDown?.Invoke();
    }

    public void OnPointerUp(PointerEventData eventData) {
        clickUp?.Invoke();
    }
}
