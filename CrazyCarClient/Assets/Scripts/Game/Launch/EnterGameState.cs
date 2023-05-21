using QFramework;
using UnityEngine;

public class EnterGameState: AbstractState<LaunchStates, Launch>, IController {
    public EnterGameState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }

    public override void OnEnter() {
        this.SendCommand(new ShowPageCommand(UIPageType.LoginUI));
        this.SendCommand(new HidePageCommand(UIPageType.DownloadResUI));
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}