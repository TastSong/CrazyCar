using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class GameController : MonoBehaviour, IController {
    public GameHelper gameHelper;
    public WarningAlert warningAlert;
    public InfoConfirmAlert infoConfirmAlert;
    public LoadingUI loadingUI;

    private void Awake() {
        DontDestroyOnLoad(gameObject);

        this.RegisterEvent<ShowWarningAlertEvent>(OnWarningAlert).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<ShowInfoConfirmAlertEvent>(OnInfoConfirmAlert).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<SetLoadingUIEvent>(OnSetLoadingUI).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<SetGameHelperEvent>(OnSetGameHelper).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnWarningAlert(ShowWarningAlertEvent e) {
        warningAlert.ShowWithText(e.text, e.time, e.callback);
    }

    private void OnInfoConfirmAlert(ShowInfoConfirmAlertEvent e) {
        infoConfirmAlert.ShowWithText(e.title, e.content, e.succ, e.fail, e.confirmText, e.cancelText, e.type);
    }

    private void OnSetLoadingUI(SetLoadingUIEvent e) {
        if (e.isShow) {
            loadingUI.ShowLoading();
        } else {
            loadingUI.HideLoading();
        }
    }

    private void OnSetGameHelper(SetGameHelperEvent e) {
        gameHelper.gameObject.SetActiveFast(e.isShow);
    }

    private void Start() {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        gameHelper.gameObject.SetActiveFast(false);
        warningAlert.gameObject.SetActiveFast(false);
        infoConfirmAlert.gameObject.SetActiveFast(false);
        loadingUI.HideLoading();
        this.GetSystem<II18NSystem>().InitTranslation();
        InitSettingsInfo();
    }

    private void InitSettingsInfo() {
        this.SendCommand<SavaSettingsCommand>();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
