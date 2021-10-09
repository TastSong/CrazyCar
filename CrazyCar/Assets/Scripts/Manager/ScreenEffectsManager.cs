using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenEffectsManager : MonoBehaviour {
    public static ScreenEffectsManager manager;
    public MotionBlurEffects motionBlurEffects;

    private void Awake() {
        if (manager == null) {
            manager = this;
        } else if (manager != this) {
            Destroy(this);
        }
    }
}
