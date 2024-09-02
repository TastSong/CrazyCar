using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitUIState : AbstractState<LaunchStates, Launch>, IController {
    public InitUIState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }
    
    public override async void OnEnter() {
       await UIController.Instance.InitUI();
       ChangeState();
    }

    private void ChangeState() {
        mFSM.ChangeState(LaunchStates.AssetsUpdate);
    }
    
    public override void OnExit() {
        // loading 的特殊性，可能还未准备好，就会被关闭，所以提前准备
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Prepare));
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
