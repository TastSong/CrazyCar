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

    public ResourceManager resourceManager = new ResourceManager();
    public LoginManager loginManager = new LoginManager();
    public AvatarManager avatarManager = new AvatarManager();
    public TimeTrialManager timeTrialManager = new TimeTrialManager();

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
