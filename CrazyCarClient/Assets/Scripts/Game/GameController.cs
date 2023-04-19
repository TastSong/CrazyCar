using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class GameController : MonoBehaviour, IController {
    public GameHelper gameHelper;
    public LoadingUI loadingUI;

    private LaunchFSM launchFSM = new LaunchFSM();

    private void Awake() {
        gameHelper.gameObject.SetActiveFast(false);
        loadingUI.HideLoading();

        this.RegisterEvent<SetLoadingUIEvent>(OnSetLoadingUI).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<SetGameHelperEvent>(OnSetGameHelper).UnRegisterWhenGameObjectDestroyed(gameObject);
        
        DontDestroyOnLoad(gameObject);
    }
    
    private void Start() {
        launchFSM.StartState();
    }

    private void OnSetLoadingUI(SetLoadingUIEvent e) {
        if (e.isShow) {
            loadingUI.ShowLoading();
        } else {
            loadingUI.HideLoading();
        }
    }

    private void OnSetGameHelper(SetGameHelperEvent e) {
        gameHelper.gameObject.SetActiveFast(e.isShow);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
