using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class SoundController : MonoBehaviour, IController {
    public AudioSource clickAudio;
    public AudioSource closeAudio;
    public AudioSource loseAudio;
    public AudioSource winAudio;
    public AudioSource backgroundMusic;
    public AudioSource spinWheelAudio;
    public AudioSource wheelEngineAudio;

    private void Awake() {
        DontDestroyOnLoad(gameObject);
        this.GetSystem<ISoundSystem>().ClickAudio = clickAudio;
        this.GetSystem<ISoundSystem>().CloseAudio = closeAudio;
        this.GetSystem<ISoundSystem>().LoseAudio = loseAudio;
        this.GetSystem<ISoundSystem>().WinAudio = winAudio;
        this.GetSystem<ISoundSystem>().BackgroundMusic = backgroundMusic;
        this.GetSystem<ISoundSystem>().SpinWheelAudio = spinWheelAudio;
        this.GetSystem<ISoundSystem>().WheelEngineAudio = wheelEngineAudio;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
