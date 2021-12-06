using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class IndexCar : MonoBehaviour, IController {
    public GameObject carGO;
    public MPlayerStyle mPlayerStyle;

    private void Awake() {
        this.GetSystem<IIndexCarSystem>().MPlayerStyle = mPlayerStyle;
        this.GetSystem<IIndexCarSystem>().CarGO = carGO;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
