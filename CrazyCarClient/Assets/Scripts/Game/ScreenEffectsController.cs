using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Cinemachine;

public class ScreenEffectsController : MonoBehaviour, IController {
    public CinemachineImpulseSource cinemachineImpulseSource;
    public MotionBlurEffects motionBlurEffects;

    private void Awake() {
        this.GetSystem<IScreenEffectsSystem>().CinemachineImpulseSource = cinemachineImpulseSource;
        this.GetSystem<IScreenEffectsSystem>().MotionBlurEffects = motionBlurEffects;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
