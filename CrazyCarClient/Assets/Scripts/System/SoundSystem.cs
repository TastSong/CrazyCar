using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public enum SoundType {
    Button_Low,
    Close,
    Lose,
    SpinWheel,
    WheelEngine,
    Win
}

public interface ISoundSystem : ISystem {
    public void PlayBackgroundMusic();
    public void PlaySound(SoundType type);
    public void StopAllSound();
    public void SetSound(bool isOn);
    public void SetBackgroundMusic(bool isOn);
}

public class SoundSystem : AbstractSystem, ISoundSystem {
    private string path = "Sounds/";
    
    public void PlaySound(SoundType soundType) {
        AudioKit.PlaySound(path + soundType.ToString());
    }

    public void PlayBackgroundMusic() {
        AudioKit.PlayMusic(path + "BackgroundMusic");
    }

    public void StopAllSound() {
        AudioKit.StopAllSound();
    }

    public void SetBackgroundMusic(bool isOn) {
        AudioKit.Settings.IsMusicOn.Value = isOn;
        if (isOn) {
            PlayBackgroundMusic();
        }
    }

    public void SetSound(bool isOn) {
        AudioKit.Settings.IsSoundOn.Value = isOn;
    }


    protected override void OnInit() {
        this.RegisterEvent<ChangeSettingEvent>((e) => {
            SetSound(this.GetModel<ISettingsModel>().IsOnSound);
            SetBackgroundMusic(this.GetModel<ISettingsModel>().IsOnMusic);
        });
    }
}
