using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TinyMessenger;

public class GameUIControl : MonoBehaviour{
    public ControlPanel controlPanel;
    public TimeTrialGameUI timeTrialUI;
    public TimeTrialResultUI timeTrialResultUI;

    private TinyMessageSubscriptionToken initGameUIMsg;
    private TinyMessageSubscriptionToken completeTimeTrialMsg;

    private void Start() {
        controlPanel.gameObject.SetActiveFast(false);
        timeTrialUI.gameObject.SetActiveFast(false);
        timeTrialResultUI.gameObject.SetActiveFast(false);
        initGameUIMsg = GameController.manager.tinyMsgHub.Subscribe<InitGameUIMsg>((m) => { InitUI(); });
        completeTimeTrialMsg = GameController.manager.tinyMsgHub.Subscribe<CompleteTimeTrialMsg>((m) => { ShowTimeTrialResult(); });
    }

    private void InitUI() {
        controlPanel.gameObject.SetActiveFast(true);
        if (GameController.manager.curGameType == CurGameType.TimeTrial) {
            timeTrialUI.gameObject.SetActiveFast(true);
            timeTrialResultUI.gameObject.SetActiveFast(false);
        }

    }

    private void ShowTimeTrialResult() {
        timeTrialUI.gameObject.SetActiveFast(false);
        timeTrialResultUI.gameObject.SetActiveFast(true);
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(initGameUIMsg);
        GameController.manager.tinyMsgHub.Unsubscribe(completeTimeTrialMsg);
    }
}
