using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitGameConfigState : AbstractState<LaunchStates, LaunchFSM>, IController {
    public InitGameConfigState(FSM<LaunchStates> fsm, LaunchFSM target) : base(fsm, target) {
    }

    public override void OnEnter() {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        this.GetSystem<II18NSystem>().InitTranslation();
        InitSettingsInfo();
        ChangeState();
    }
    
    private void ChangeState() {
        mFSM.ChangeState(LaunchStates.AssetsUpdate);
    }

    private void InitSettingsInfo() {
        this.SendCommand<SavaSettingsCommand>();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
