using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class GameController : MonoBehaviour, IController {
    private LaunchFSM launchFSM = new LaunchFSM();

    private void Awake() {
        DontDestroyOnLoad(gameObject);
    }
    
    private void Start() {
        launchFSM.StartState();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
