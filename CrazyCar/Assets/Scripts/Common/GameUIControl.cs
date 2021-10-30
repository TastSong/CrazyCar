using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TinyMessenger;

public class GameUIControl : MonoBehaviour{
    public ControlPanel controlPanel;
    public GameResultUI gameResultUI;
    public TimeTrialGameUI timeTrialGameUI;
    public MatchGameUI matchGameUI;

    private TinyMessageSubscriptionToken initGameUIMsg;
    private TinyMessageSubscriptionToken completeGameMsg;

    private void Start() {
        controlPanel.gameObject.SetActiveFast(false);
        gameResultUI.gameObject.SetActiveFast(false);
        timeTrialGameUI.gameObject.SetActiveFast(false);
        matchGameUI.gameObject.SetActiveFast(false);
        initGameUIMsg = GameController.manager.tinyMsgHub.Subscribe<InitGameUIMsg>((m) => { SelectGameUI(); });
        completeGameMsg = GameController.manager.tinyMsgHub.Subscribe<CompleteGameMsg>((m) => { ShowResultUI(); });
    }

    private void SelectGameUI() {
        controlPanel.gameObject.SetActiveFast(true);

        timeTrialGameUI.gameObject.SetActiveFast(GameController.manager.curGameType == CurGameType.TimeTrial);
        matchGameUI.gameObject.SetActiveFast(GameController.manager.curGameType == CurGameType.Match);
    }

    private void ShowResultUI() {
        if (GameController.manager.standAlone) {
            GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Game Over"), 2.0f);
            Util.DelayExecuteWithSecond(2.0f, () => {
                Util.LoadingScene(SceneID.Index);
            });           
        } else {
            controlPanel.gameObject.SetActiveFast(false);
            gameResultUI.gameObject.SetActiveFast(true);
        }
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(initGameUIMsg);
        GameController.manager.tinyMsgHub.Unsubscribe(completeGameMsg);
    }
}
