using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public enum LaunchStates {
    InitNetwork,
    InitConfig,
    PrepareUI,
    InitGameConfig,
    AssetsUpdate,
    ExitGameState
}

public class Launch : MonoBehaviour, IController {
    public FSM<LaunchStates> FSM = new FSM<LaunchStates>();

    private void Awake() {
        DontDestroyOnLoad(gameObject);
    }
    
    private void Start() {
        // 其他模块需要在Awake中注册事件
        FSM.AddState(LaunchStates.InitNetwork, new InitNetworkState(FSM, this));
        FSM.AddState(LaunchStates.PrepareUI, new PrepareUIState(FSM, this));
        FSM.AddState(LaunchStates.InitConfig, new InitConfigState(FSM, this));
        FSM.AddState(LaunchStates.InitGameConfig, new InitGameConfigState(FSM, this));
        FSM.AddState(LaunchStates.AssetsUpdate, new AssetsUpdateState(FSM, this));
        FSM.AddState(LaunchStates.ExitGameState, new ExitGameState(FSM, this));
        
        FSM.StartState(LaunchStates.InitNetwork);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
