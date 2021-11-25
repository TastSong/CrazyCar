using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TFramework;

public class CarControl : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IController {
    private Transform targetTransform;
    public bool isTouch;
    private void Start() {
        targetTransform = this.GetSystem<IIndexCarSystem>().CarGO.transform;
    }

    // Update is called once per frame
    private void Update() {
        if (targetTransform != null && Input.mousePosition.x > (Screen.width / 2) && isTouch) {
            CameraRotate();
        }
    }

    // 摄像机围绕目标旋转操作
    private void CameraRotate() {
#if UNITY_EDITOR||UNITY_STANDALONE
        if (!Input.GetKey(KeyCode.Mouse0)) return;
        var mouseX = Input.GetAxis("Mouse X"); //获取鼠标X轴移动
#else
        if (Input.touchCount != 1) return;
        var mouseX = Input.GetTouch(0).deltaPosition.x;
#endif
        var vector3 = targetTransform.position;
        targetTransform.RotateAround(vector3, Vector3.up, -mouseX * 4.5f);
    }

    public void SetTarget(Transform target) {
        targetTransform = target;
    }

    public void OnPointerEnter(PointerEventData eventData) {
        isTouch = true;
    }

    public void OnPointerExit(PointerEventData eventData) {
        isTouch = false;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}