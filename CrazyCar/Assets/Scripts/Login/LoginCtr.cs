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
        this.RegisterEvent<DownloadResFinishEvent>(OnDownloadResFinish);
    }

    private void OnOpenLogin(OpenLoginEvent e) {
        loginUI.gameObject.SetActiveFast(true);
    }

    private void OnOpenRegister(OpenRegisterEvent e) {
        registerUI.gameObject.SetActiveFast(true);
    }

    private void OnDownloadResFinish(DownloadResFinishEvent e) {
        downloadResUI.gameObject.SetActiveFast(false);
        loginUI.gameObject.SetActiveFast(true);
        registerUI.gameObject.SetActiveFast(false);
    }

    private void OnDestroy() {
        this.UnRegisterEvent<OpenLoginEvent>(OnOpenLogin);
        this.UnRegisterEvent<OpenRegisterEvent>(OnOpenRegister);
        this.UnRegisterEvent<DownloadResFinishEvent>(OnDownloadResFinish);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
