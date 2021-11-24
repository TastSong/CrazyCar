using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public class ScreenEffectsManager : MonoBehaviour, IController {
    public MotionBlurEffects motionBlurEffects;
    public Projector wireframeProjector;

    private void Awake() {
        this.GetSystem<IScreenEffectsSystem>().MotionBlurEffects = motionBlurEffects;
        this.GetSystem<IScreenEffectsSystem>().WireframeProjector = wireframeProjector;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
