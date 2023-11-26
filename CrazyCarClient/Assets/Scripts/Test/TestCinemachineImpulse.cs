using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class TestCinemachineImpulse : MonoBehaviour{
    private CinemachineImpulseSource MyInpulse;

    private void Start() {
        MyInpulse = GetComponent<CinemachineImpulseSource>();
    }

    private void Update() {
        //按下右键产生相机抖动，抖动方式依照上面CM vcam1 Raw Signal内配置信息
        if (Input.GetMouseButtonDown(1))
            MyInpulse.GenerateImpulse();
    }
}
