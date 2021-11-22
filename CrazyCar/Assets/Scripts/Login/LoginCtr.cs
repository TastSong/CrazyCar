using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using Utils;
using TFramework;

public class LoginCtr : MonoBehaviour, IController {
    public LoginUI loginUI;
    public RegisterUI registerUI;
    public DownloadResUI downloadResUI;

    private TinyMessageSubscriptionToken downloadResToken;

    private void Start() {
        downloadResUI.gameObject.SetActiveFast(true);
        loginUI.gameObject.SetActiveFast(false);
        registerUI.gameObject.SetActiveFast(false);

        this.RegisterEvent<OpenLoginEvent>(OnOpenLogin);
        this.RegisterEvent<OpenRegisterEvent>(OnOpenRegister);

        downloadResToken = GameController.manager.tinyMsgHub.Subscribe<DownloadResFinishMsg>((m) => {
            downloadResUI.gameObject.SetActiveFast(false);
            loginUI.gameObject.SetActiveFast(true);
            registerUI.gameObject.SetActiveFast(false);
        });
    }

    private void OnOpenLogin(OpenLoginEvent e) {
        loginUI.gameObject.SetActiveFast(true);
    }

    private void OnOpenRegister(OpenRegisterEvent e) {
        registerUI.gameObject.SetActiveFast(true);
    }

    private void OnDestroy() {
        this.UnRegisterEvent<OpenLoginEvent>(OnOpenLogin);
        this.UnRegisterEvent<OpenRegisterEvent>(OnOpenRegister);

        GameController.manager.tinyMsgHub.Unsubscribe(downloadResToken);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
