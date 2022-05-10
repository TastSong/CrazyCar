using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class GameController : MonoBehaviour, IController {
    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;
    public LoadingUI loadingUI;

    private void Awake() {
        DontDestroyOnLoad(gameObject);

        this.GetModel<IGameControllerModel>().InfoConfirmAlert = infoConfirmAlert;
        this.GetModel<IGameControllerModel>().GameHelper = gameHelper;
        this.GetModel<IGameControllerModel>().LoadingUI = loadingUI;

        this.RegisterEvent<ShowWarningAlertEvent>(OnWarningAlert).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnWarningAlert(ShowWarningAlertEvent e) {
        warningAlert.ShowWithText(e.text, e.time, e.callback);
    }

    private void Start() {
        this.GetModel<IGameControllerModel>().GameHelper.gameObject.SetActiveFast(false);
        warningAlert.gameObject.SetActiveFast(false);
        this.GetModel<IGameControllerModel>().InfoConfirmAlert.gameObject.SetActiveFast(false);
        this.GetModel<IGameControllerModel>().LoadingUI.HideLoading();
        this.GetSystem<II18NSystem>().InitTranslation();
        InitSettingsInfo();
    }

    public void InitSettingsInfo() {
        this.SendCommand<SavaSettingsCommand>();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
