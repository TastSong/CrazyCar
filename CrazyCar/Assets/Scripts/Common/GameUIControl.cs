using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TinyMessenger;

public class GameUIControl : MonoBehaviour{
    public TimeTrailUI timeTrailUI;
    public TimeTrailResultUI timeTrailResultUI;

    private TinyMessageSubscriptionToken gameUICtrMsg;
    private TinyMessageSubscriptionToken endTimeTrailMsg;

    private void Start() {
        timeTrailUI.gameObject.SetActiveFast(false);
        timeTrailResultUI.gameObject.SetActiveFast(false);
        gameUICtrMsg = GameController.manager.tinyMsgHub.Subscribe<GameUICtrMsg>((m) => { InitUI(); });
        endTimeTrailMsg = GameController.manager.tinyMsgHub.Subscribe<EndTimeTrailMsg>((m) => { ShowTimeTrailResult(); });
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
        GameController.manager.tinyMsgHub.Unsubscribe(gameUICtrMsg);
        GameController.manager.tinyMsgHub.Unsubscribe(endTimeTrailMsg);
    }
}
