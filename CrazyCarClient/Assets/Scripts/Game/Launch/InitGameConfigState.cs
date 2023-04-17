using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class InitGameConfigState : AbstractState<LaunchStates, LaunchFSM>, IController {
    public InitGameConfigState(FSM<LaunchStates> fsm, LaunchFSM target) : base(fsm, target) {
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
