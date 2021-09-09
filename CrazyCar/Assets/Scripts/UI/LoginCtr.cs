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

    private TinyMessageSubscriptionToken loginToken;
    private TinyMessageSubscriptionToken registerToken;
    private TinyMessageSubscriptionToken downloadResToken;

    private void Start() {
        downloadResUI.gameObject.SetActiveFast(true);
        loginUI.gameObject.SetActiveFast(false);
        registerUI.gameObject.SetActiveFast(false);

        loginToken = GameController.manager.tinyMsgHub.Subscribe<LoginUIMessage>((m) => {
            loginUI.gameObject.SetActiveFast(true);
        });
        registerToken = GameController.manager.tinyMsgHub.Subscribe<RegisterUIMessage>((m) => {
            registerUI.gameObject.SetActiveFast(true);
        });
        downloadResToken = GameController.manager.tinyMsgHub.Subscribe<DownloadResUIMessage>((m) => {
            downloadResUI.gameObject.SetActiveFast(false);
            loginUI.gameObject.SetActiveFast(true);
            registerUI.gameObject.SetActiveFast(false);
        });
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(loginToken);
        GameController.manager.tinyMsgHub.Unsubscribe(registerToken);
        GameController.manager.tinyMsgHub.Unsubscribe(downloadResToken);
    }
}
