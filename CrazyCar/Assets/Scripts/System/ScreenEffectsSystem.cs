using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using Cinemachine;

public interface IScreenEffectsSystem : ISystem {
    CinemachineImpulseSource CinemachineImpulseSource { get; set; }
    MotionBlurEffects MotionBlurEffects { get; set; }
    Projector WireframeProjector { get; set; }
    void ShakeCamera(); 
    void SetMotionBlur(float intensity);
}

public class ScreenEffectsSystem : AbstractSystem, IScreenEffectsSystem {
    public CinemachineImpulseSource CinemachineImpulseSource { get; set; }
    public MotionBlurEffects MotionBlurEffects { get; set; }
    public Projector WireframeProjector { get; set; }

    public void ShakeCamera() {
        CinemachineImpulseSource.GenerateImpulse();
    }

    public void SetMotionBlur(float intensity) {
        MotionBlurEffects.Intensity = intensity;
    }

    protected override void OnInit() {

    }

   
}
