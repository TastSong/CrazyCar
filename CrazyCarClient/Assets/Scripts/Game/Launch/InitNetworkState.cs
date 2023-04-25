using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitNetworkState : AbstractState<LaunchStates, Launch>, IController {
    public InitNetworkState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }
    
    public override void OnEnter() {
       this.SendCommand(new InitNetworkCommand());
       this.GetSystem<IAddressableSystem>().SetUpdateInfo(() => {
           ChangeState();
       });
    }

    private void ChangeState() {
        mFSM.ChangeState(LaunchStates.PrepareUI);
    }

    public override void OnExit() {
        
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
