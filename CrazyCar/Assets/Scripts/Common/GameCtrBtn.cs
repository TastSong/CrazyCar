using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Utils;

public class GameCtrBtn : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {
    private Action<float> clickDown;
    private Action clickUp;
    private bool isClickDown = false;
    private float curTime;

    private void Update() {
        if (isClickDown) {
            clickDown?.Invoke(curTime);
        }
    }

    public void SetClick(Action<float> clickDown, Action clickUp) {
        this.clickDown = clickDown;
        this.clickUp = clickUp;
    }

    public void OnPointerDown(PointerEventData eventData) {
        isClickDown = true;
        curTime = Time.fixedTime;
    }

    public void OnPointerUp(PointerEventData eventData) {
        isClickDown = false;
        curTime = 0;
        clickUp.Invoke();
    }
}
