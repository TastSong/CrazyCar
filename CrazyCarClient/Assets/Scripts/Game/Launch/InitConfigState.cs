using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitConfigState : AbstractState<LaunchStates, Launch>, IController {
    public InitConfigState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }

    public override async void OnEnter() {
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.configUrl);
        if (result.serverCode == 200) {
            this.GetSystem<IDataParseSystem>().ParseAvatarRes(result.serverData);
            ChangeState(LaunchStates.InitGameConfig);
        } else {
            ChangeState(LaunchStates.ExitGameState);
        }
    }
    
    private void ChangeState(LaunchStates state) {
        mFSM.ChangeState(state);
    }
    
    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
