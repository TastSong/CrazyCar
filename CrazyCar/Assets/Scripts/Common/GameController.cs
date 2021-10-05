using System;
using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using Utils;

[Serializable]
public class UserInfo {
    public string name;
    public int aid;
    public int uid;
    public int star;
    public bool isVIP;
    public int travelTimes;
    public int avatarNum;
    public int mapNum;
    public EquipInfo equipInfo = new EquipInfo();
}

public enum CurGameType {
    TimeTrial = 0,
    Match
}

public class GameController : MonoBehaviour
{
    public static GameController manager = null;
    public bool sceneLoaded = false;
    public TinyMessengerHub tinyMsgHub = new TinyMessengerHub();
    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;
    public string token;
    public UserInfo userInfo = new UserInfo();
    public CurGameType curGameType = CurGameType.TimeTrial;
    public float sendMsgOffTime = 0.1f;

    public ResourceManager resourceManager = new ResourceManager();
    public LoginManager loginManager = new LoginManager();
    public AvatarManager avatarManager = new AvatarManager();
    public TimeTrialManager timeTrialManager = new TimeTrialManager();
    public EquipManager equipManager = new EquipManager();
    public MatchManager matchManager = new MatchManager();

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
    }
}
