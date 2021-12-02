using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public interface ISoundSystem : ISystem {
    AudioSource ClickAudio { get; set; }
    AudioSource CloseAudio { get; set; }
    AudioSource LoseAudio { get; set; }
    AudioSource WinAudio { get; set; }
    AudioSource BackgroundMusic { get; set; }
    AudioSource SpinWheelAudio { get; set; }
    AudioSource WheelEngineAudio { get; set; }

    void PlayClickSound();
    void PlayCloseSound();
    void PlayLoseSound();
    void PlayWinSound();
    void PlayBackgroundMusic();
    void PlaySpinWheekSound();
    void PlayWheelEngineSound();
    void StopWheelEngineSound();
    void SetSound(bool isOn);
    void SetBackgroundMusic(bool isOn);
}

public class SoundSystem : AbstractSystem, ISoundSystem {
    public AudioSource ClickAudio { get; set; } = new AudioSource();
    public AudioSource CloseAudio { get; set; } = new AudioSource();
    public AudioSource LoseAudio { get; set; } = new AudioSource();
    public AudioSource WinAudio { get; set; } = new AudioSource();
    public AudioSource BackgroundMusic { get; set; } = new AudioSource();
    public AudioSource SpinWheelAudio { get; set; } = new AudioSource();
    public AudioSource WheelEngineAudio { get; set; } = new AudioSource();

    public void PlayBackgroundMusic() {
        BackgroundMusic.Play();
    }

    public void PlayClickSound() {
        ClickAudio.Play();
    }

    public void PlayCloseSound() {
        CloseAudio.Play();
    }

    public void PlayLoseSound() {
        LoseAudio.Play();
    }

    public void PlaySpinWheekSound() {
        SpinWheelAudio.Play();
    }

    public void PlayWheelEngineSound() {
        WheelEngineAudio.Play();
    }

    public void PlayWinSound() {
        WinAudio.Play();
    }

    public void SetBackgroundMusic(bool isOn) {
        if (isOn) {
            BackgroundMusic.volume = 1;
            BackgroundMusic.Play();
        } else {
            BackgroundMusic.volume = 0;
            BackgroundMusic.Pause();
        }
    }

    public void SetSound(bool isOn) {
        if (isOn) {
            ClickAudio.volume = 1;
            CloseAudio.volume = 1;
            LoseAudio.volume = 1;
            WinAudio.volume = 1;
            SpinWheelAudio.volume = 1;
        } else {
            ClickAudio.volume = 0;
            CloseAudio.volume = 0;
            LoseAudio.volume = 0;
            WinAudio.volume = 0;
            SpinWheelAudio.volume = 0;
        }
    }

    public void StopWheelEngineSound() {
        WheelEngineAudio.Pause();
    }

    protected override void OnInit() {
        this.RegisterEvent<ChangeSettingEvent>((e) => {
            SetSound(this.GetModel<ISettingsModel>().IsOnSound);
            SetBackgroundMusic(this.GetModel<ISettingsModel>().IsOnMusic);
        });
    }
}
