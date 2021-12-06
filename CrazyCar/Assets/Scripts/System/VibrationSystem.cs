using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using MoreMountains.NiceVibrations;

public interface IVibrationSystem : ISystem {
    void SetHapticsActive(bool isOn);
    void Haptic(HapticTypes hapticTypes);
}

public class VibrationSystem : AbstractSystem, IVibrationSystem {
    public void Haptic(HapticTypes hapticTypes) {
        MMVibrationManager.Haptic(hapticTypes);
    }

    public void SetHapticsActive(bool isOn) {
        MMVibrationManager.SetHapticsActive(isOn);
    }

    protected override void OnInit() {
        this.RegisterEvent<ChangeSettingEvent>((e) => {
            SetHapticsActive(this.GetModel<ISettingsModel>().IsOnVibration);
        });
    }
}
