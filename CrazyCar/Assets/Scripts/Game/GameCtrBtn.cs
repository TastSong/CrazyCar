using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Utils;

public class GameCtrBtn : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {
    private Action clickDown;
    private Action clickUp;
    private bool isClickDown = false;

    private void Update() {
        if (isClickDown) {
            clickDown?.Invoke();
        }
    }

    public void SetClick(Action clickDown = null, Action clickUp = null) {
        this.clickDown = clickDown;
        this.clickUp = clickUp;
    }

    public void OnPointerDown(PointerEventData eventData) {
        isClickDown = true;
    }

    public void OnPointerUp(PointerEventData eventData) {
        isClickDown = false;
        clickUp?.Invoke();
    }
}
