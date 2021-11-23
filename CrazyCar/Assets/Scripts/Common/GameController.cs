using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public enum CurGameType {
    TimeTrial = 0,
    Match
}

public class GameController : MonoBehaviour
{
    public static GameController manager = null;
    public bool sceneLoaded = false;
    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;
    public string token;
    public UserInfo userInfo = new UserInfo();
    public CurGameType curGameType = CurGameType.TimeTrial;
    public float sendMsgOffTime = 0.1f;
    public bool standAlone = false;

    public EquipManager equipManager = new EquipManager();
    public MatchManager matchManager = new MatchManager();
    public SystemSettingsInfo settingsInfo;

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
        settingsInfo = SystemSettingsInfo.ParseSystemInfo();
        if (settingsInfo == null) {
            Debug.Log("Load local setting");
            settingsInfo = new SystemSettingsInfo();
            settingsInfo.language = "en";
            settingsInfo.isOnMusic = true;
            settingsInfo.isOnSound = true;
        }     
        SystemSettingsInfo.SaveSystemInfo(settingsInfo);

        AudioListener.volume = Convert.ToInt32(settingsInfo.isOnSound);
    }
}
