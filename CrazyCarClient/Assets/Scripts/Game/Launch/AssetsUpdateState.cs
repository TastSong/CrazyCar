using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class AssetsUpdateState : AbstractState<LaunchStates, Launch>, IController {
    public AssetsUpdateState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }

    public override void OnEnter() {
        this.SendCommand(new ShowPageCommand(UIPageType.DownloadResUI, UILevelType.UIPage));
        ChangeState();
    }
    
    private void ChangeState() {
        mFSM.ChangeState(LaunchStates.PrepareUI);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
