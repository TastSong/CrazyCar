using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndexCar : MonoBehaviour
{
    public static IndexCar manager = null;
    public GameObject carGO;

    private void Awake() {
        if (manager == null) {
            manager = this;
        } else if (manager != this) {
            Destroy(gameObject);
        }
    }

    
}
