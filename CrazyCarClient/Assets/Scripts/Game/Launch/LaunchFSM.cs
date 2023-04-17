using System.Collections;
using System.Collections.Generic;
using QFramework;
using UnityEngine;

public enum LaunchStates {
    InitNetwork,
    AssetsUpdate,
    InitGameConfig
}

public class LaunchFSM  {
    public FSM<LaunchStates> FSM = new FSM<LaunchStates>();

    public void StartState() {
        FSM.AddState(LaunchStates.InitNetwork, new InitNetworkState(FSM, this));
        FSM.AddState(LaunchStates.AssetsUpdate, new AssetsUpdateState(FSM, this));
        FSM.AddState(LaunchStates.InitGameConfig, new InitGameConfigState(FSM, this));
        
        FSM.StartState(LaunchStates.InitNetwork);
    }
}
