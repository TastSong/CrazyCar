using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;
using UnityEngine.UI;

public class LoginCtr : MonoBehaviour, IController {
    public Image bg;
    public LoginUI loginUI;
    public RegisterUI registerUI;
    public DownloadResUI downloadResUI;

    private void Awake() {
        downloadResUI.gameObject.SetActiveFast(false);
        loginUI.gameObject.SetActiveFast(false);
        registerUI.gameObject.SetActiveFast(false);
        bg.gameObject.SetActiveFast(true);

        this.RegisterEvent<OpenLoginEvent>(OnOpenLogin).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<OpenRegisterEvent>(OnOpenRegister).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<OpenDownloadResEvent>(ODownloadRes).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<DownloadResFinishEvent>(OnDownloadResFinish).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void ODownloadRes(OpenDownloadResEvent obj) {
        downloadResUI.gameObject.SetActiveFast(true);
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

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
