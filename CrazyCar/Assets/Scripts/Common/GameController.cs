using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

public enum CurGameType {
    TimeTrial = 0,
    Match
}

public class GameController : MonoBehaviour, IController {
    public static GameController manager = null;
    public bool sceneLoaded = false;
    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;
    public string token;
    public CurGameType curGameType = CurGameType.TimeTrial;
    public float sendMsgOffTime = 0.1f;
    public bool standAlone = false;

    private void Awake() {
        if (manager == null) {
            DontDestroyOnLoad(gameObject);
            manager = this;
        } else if (manager != this)
        {
            Destroy(gameObject);
        }
    }

    private void Start() {
        gameHelper.gameObject.SetActiveFast(false);
        warningAlert.gameObject.SetActiveFast(false);
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
