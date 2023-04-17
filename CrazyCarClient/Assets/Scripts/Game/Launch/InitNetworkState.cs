using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitNetworkState : AbstractState<LaunchStates, LaunchFSM>, IController {
    public InitNetworkState(FSM<LaunchStates> fsm, LaunchFSM target) : base(fsm, target) {
    }
    
    public override void OnEnter() {
       this.SendCommand(new InitNetworkCommand());
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
