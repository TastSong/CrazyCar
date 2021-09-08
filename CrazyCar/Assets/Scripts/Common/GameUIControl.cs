using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TinyMessenger;

public class GameUIControl : MonoBehaviour{
    public TimeTrailUI timeTrailUI;
    public TimeTrailResultUI timeTrailResultUI;

    private TinyMessageSubscriptionToken initGameUIMsg;
    private TinyMessageSubscriptionToken completeTimeTrailMsg;

    private void Start() {
        timeTrailUI.gameObject.SetActiveFast(false);
        timeTrailResultUI.gameObject.SetActiveFast(false);
        initGameUIMsg = GameController.manager.tinyMsgHub.Subscribe<InitGameUIMsg>((m) => { InitUI(); });
        completeTimeTrailMsg = GameController.manager.tinyMsgHub.Subscribe<CompleteTimeTrailMsg>((m) => { ShowTimeTrailResult(); });
    }

    private void InitUI() {
        timeTrailUI.gameObject.SetActiveFast(true);
        timeTrailResultUI.gameObject.SetActiveFast(false);
    }

    private void ShowTimeTrailResult() {
        timeTrailUI.gameObject.SetActiveFast(false);
        timeTrailResultUI.gameObject.SetActiveFast(true);
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(initGameUIMsg);
        GameController.manager.tinyMsgHub.Unsubscribe(completeTimeTrailMsg);
    }
}
