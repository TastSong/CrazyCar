using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public interface ISoundSystem : ISystem {
    void PlayClickSound();
    void PlayCloseSound();
    void PlayLoseSound();
    void PlayWinSound();
    void PlayBackgroundMusic();
    void PlaySpinWheekSound();
    void PlayWheelEngineSound();
    void SetSound(bool isOn);
    void SetBackgroundMusic(bool isOn);
}

public class SoundSystem : AbstractSystem, ISoundSystem {
    private string path = "Sounds/";

    public void PlayBackgroundMusic() {
        AudioKit.PlayMusic(path + "BackgroundMusic");
    }

    public void PlayClickSound() {
        AudioKit.PlaySound(path + "Button_Low");
    }

    public void PlayCloseSound() {
        AudioKit.PlaySound(path + "Close");
    }

    public void PlayLoseSound() {
        AudioKit.PlaySound(path + "Lose");
    }

    public void PlaySpinWheekSound() {
        AudioKit.PlaySound(path + "SpinWheel");
    }

    public void PlayWheelEngineSound() {
        AudioKit.PlaySound(path + "WheelEngine");
    }

    public void PlayWinSound() {
        AudioKit.PlaySound(path + "Win");
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
