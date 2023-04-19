using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class GameController : MonoBehaviour, IController {
    public GameHelper gameHelper;

    private LaunchFSM launchFSM = new LaunchFSM();

    private void Awake() {
        gameHelper.gameObject.SetActiveFast(false);

        this.RegisterEvent<SetGameHelperEvent>(OnSetGameHelper).UnRegisterWhenGameObjectDestroyed(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }
    
    private void Start() {
        launchFSM.StartState();
    }

    private void OnSetGameHelper(SetGameHelperEvent e) {
        gameHelper.gameObject.SetActiveFast(e.isShow);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
