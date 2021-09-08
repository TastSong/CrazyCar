using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Utils;

public class GameCtrBtn : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {
    private Util.NoneParamFunction clickDown;
    private bool isClickDown = false;

    private void Update() {
        if (isClickDown) {
            clickDown?.Invoke();
        }
    }

    public void SetClickDown(Util.NoneParamFunction clickDown) {
        this.clickDown = clickDown;
    }

    public void OnPointerDown(PointerEventData eventData) {
        isClickDown = true;
    }

    public void OnPointerUp(PointerEventData eventData) {
        isClickDown = false;
    }
}
