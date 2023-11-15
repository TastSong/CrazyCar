using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoroutineController : MonoBehaviour {
    public static CoroutineController manager = null;

    private void Awake() {
        if (manager == null) {
            DontDestroyOnLoad(gameObject);
            manager = this;
        } else if (manager != this) {
            Destroy(gameObject);
        }
    }
}
