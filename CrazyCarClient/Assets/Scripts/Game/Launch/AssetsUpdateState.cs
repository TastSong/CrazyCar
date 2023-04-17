using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public class AssetsUpdateState : AbstractState<LaunchStates, LaunchFSM>, IController {
    public AssetsUpdateState(FSM<LaunchStates> fsm, LaunchFSM target) : base(fsm, target) {
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
