using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class TestGuidance : MonoBehaviour, IController {
    private void Awake() {
        this.GetSystem<IGuidanceSystem>().TestCanvas = GetComponent<Canvas>();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
