using QFramework;
using UnityEngine;

public class EnterGameState: AbstractState<LaunchStates, Launch>, IController {
    public EnterGameState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }

    public override void OnEnter() {
        UIController.Instance.ShowPage(new ShowPageEvent(UIPageType.LoginUI));
        UIController.Instance.HidePage(new HidePageEvent(UIPageType.DownloadResUI));
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}