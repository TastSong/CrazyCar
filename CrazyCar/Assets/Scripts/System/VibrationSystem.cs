using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public interface IVibrationSystem : ISystem {
    void Haptic();
}

public class VibrationSystem : AbstractSystem, IVibrationSystem {
    public void Haptic() {
#if !UNITY_EDITOR
        if (this.GetModel<ISettingsModel>().IsOnVibration) {
            Handheld.Vibrate();
        }
#endif
    }

    protected override void OnInit() {
    }
}
