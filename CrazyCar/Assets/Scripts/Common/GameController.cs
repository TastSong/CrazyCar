using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using Utils;

public class UserInfo {
    public string name;
    public int aid;
    public int uid;
}

public class GameController : MonoBehaviour
{
    public static GameController manager = null;
    public bool sceneLoaded = false;
    public TinyMessengerHub tinyMsgHub = new TinyMessengerHub();
    public WarningAlert warningAlert;
    public string token;
    public UserInfo userInfo = new UserInfo();

    public ResourceManager resourceManager = new ResourceManager();
    public LoginManager loginManager = new LoginManager();
    public AvatarManager avatarManager = new AvatarManager();

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
        warningAlert.gameObject.SetActiveFast(false);
    }
}
