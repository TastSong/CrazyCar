using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public interface IScreenEffectsSystem : ISystem {
    MotionBlurEffects MotionBlurEffects { get; set; }
    Projector WireframeProjector { get; set; }

    void SetMotionBlur(float intensity);
}

public class ScreenEffectsSystem : AbstractSystem, IScreenEffectsSystem {
    public MotionBlurEffects MotionBlurEffects { get; set; }
    public Projector WireframeProjector { get; set; }

    public void SetMotionBlur(float intensity) {
        MotionBlurEffects.Intensity = intensity;
    }

    protected override void OnInit() {

    }
}
