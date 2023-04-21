using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitConfigState : AbstractState<LaunchStates, Launch>, IController {
    public InitConfigState(FSM<LaunchStates> fsm, Launch target) : base(fsm, target) {
    }

    public override void OnEnter() {
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(
            url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.configUrl,
            succData: (data) => {
                this.GetSystem<IDataParseSystem>().ParseAvatarRes(data);
                ChangeState(LaunchStates.InitGameConfig);
            }, code: (code) => {
                if (code != 200) {
                    ChangeState(LaunchStates.ExitGameState);
                }
            }));
    }
    
    private void ChangeState(LaunchStates state) {
        mFSM.ChangeState(state);
    }
    
    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
