using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndexCar : MonoBehaviour
{
    public static IndexCar manager = null;
    public Transform carTrans;

    private void Awake() {
        if (manager == null) {
            manager = this;
            DontDestroyOnLoad(gameObject);
        } else if (manager != this) {
            Destroy(gameObject);
        }
    }
}
