using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using Utils;

public class GameController : MonoBehaviour
{
    public static GameController manager = null;
    public TinyMessengerHub tinyMsgHub = new TinyMessengerHub();
    public WarningAlert warningAlert;
    public string userName = "tast";

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
