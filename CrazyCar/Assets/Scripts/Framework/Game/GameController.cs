using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

public class GameController : MonoBehaviour, IController {
    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;   
    

    private void Awake() {
        DontDestroyOnLoad(gameObject);

        this.GetModel<IGameControllerModel>().WarningAlert = warningAlert;
        this.GetModel<IGameControllerModel>().InfoConfirmAlert = infoConfirmAlert;
        this.GetModel<IGameControllerModel>().GameHelper = gameHelper;
    }

    private void Start() {
        this.GetModel<IGameControllerModel>().GameHelper.gameObject.SetActiveFast(false);
        this.GetModel<IGameControllerModel>().WarningAlert.gameObject.SetActiveFast(false);
        this.GetModel<IGameControllerModel>().InfoConfirmAlert.gameObject.SetActiveFast(false);
        InitSettingsInfo();
        I18N.manager.InitTranslation();
    }

    public void InitSettingsInfo() {        
        AudioListener.volume = Convert.ToInt32(this.GetModel<ISettingsModel>().IsOnSound);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
