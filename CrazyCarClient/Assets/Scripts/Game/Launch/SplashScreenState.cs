using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class SplashScreenState : AbstractState<LaunchStates, LaunchFSM>, IController{
    public SplashScreenState(FSM<LaunchStates> fsm, LaunchFSM target) : base(fsm, target) {
    }

    public override void OnEnter() {
        
    }
    
    private void ChangeState() {
        mFSM.ChangeState(LaunchStates.AssetsUpdate);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
