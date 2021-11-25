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
    public string token;
    public UserInfo userInfo = new UserInfo();
    public CurGameType curGameType = CurGameType.TimeTrial;
    public float sendMsgOffTime = 0.1f;
    public bool standAlone = false;

    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;   
    

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
        infoConfirmAlert.gameObject.SetActiveFast(false);
        InitSettingsInfo();
        I18N.manager.InitTranslation();
        this.RegisterEvent<UpdataUserInfoEvent>(OnUpdataUserInfo);
    }

    private void OnUpdataUserInfo(UpdataUserInfoEvent e) {
        userInfo = this.GetModel<IUserModel>().GetUserInfoPart();
    }

    public void InitSettingsInfo() {        
        AudioListener.volume = Convert.ToInt32(this.GetModel<ISettingsModel>().IsOnSound);
    }

    private void OnDestroy() {
        this.UnRegisterEvent<UpdataUserInfoEvent>(OnUpdataUserInfo);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
