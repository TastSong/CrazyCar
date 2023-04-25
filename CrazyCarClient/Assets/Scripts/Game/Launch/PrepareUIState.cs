using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class PrepareUIState : AbstractState<LaunchStates, Launch>, IController {
    public PrepareUIState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }
    
    public override void OnEnter() {
       this.SendCommand(new PrepareUICommand());
       ChangeState();
    }

    private void ChangeState() {
        mFSM.ChangeState(LaunchStates.AssetsUpdate);
    }

    public override void OnExit() {
        
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
