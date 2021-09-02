using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using Utils;

public class LoginCtr : MonoBehaviour
{
    public LoginUI loginUI;
    public RegisterUI registerUI;
    public DownloadResUI downloadResUI;

    private TinyMessageSubscriptionToken registerToken;

    private void Start() {
        downloadResUI.gameObject.SetActiveFast(true);
        loginUI.gameObject.SetActiveFast(true);
        registerUI.gameObject.SetActiveFast(false);

        registerToken = GameController.manager.tinyMsgHub.Subscribe<RegisterUIMessage>((m) => {
            registerUI.gameObject.SetActiveFast(true);
        });
    }

    private void OnDestroy() {
        if (registerToken != null) {
            GameController.manager.tinyMsgHub.Unsubscribe(registerToken);
        }

    }
}
