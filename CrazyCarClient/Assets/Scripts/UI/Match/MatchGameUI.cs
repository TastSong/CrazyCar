using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class MatchGameUI : MonoBehaviour, IController {
    public Text offStartTimeText;
    public CountDownAnim countDownAnim;
    public Text limitTimeText;

    private Coroutine limitTimeCor;

    private void OnEnable() {
        if (!this.GetModel<IGameModel>().SceneLoaded.Value) {
            return;
        }

        int offTime = (int)(this.GetModel<IMatchModel>().StartTime * 1000 - Util.GetTime()) / 1000;
        if (offTime > 3){
            StartCoroutine(Util.CountdownCor(offTime,
                    () => {
                        countDownAnim.gameObject.SetActiveFast(false);
                        StartGame();
                    }, offStartTimeText));
        } else if(offTime < 3 && offTime > 0) {
            countDownAnim.PlayAnim(offTime, () => {
                StartGame();
            });
        } else if (offTime > -this.GetModel<IMatchModel>().SelectInfo.Value.limitTime){
            countDownAnim.gameObject.SetActiveFast(false);
            StartGame();
        } else {
            countDownAnim.gameObject.SetActiveFast(false);
            StartGame();
            Debug.LogError("比赛结束");
        }
    }

    private void StartGame() {
        this.SendCommand(new ExecuteOperateCommand(this.GetModel<IUserModel>().Uid, ControllerType.Vertical, 1));
        Debug.Log("++++++ StartTime = " + this.GetModel<IMatchModel>().StartTime);
        limitTimeCor = StartCoroutine(Util.CountdownCor(this.GetModel<IMatchModel>().SelectInfo.Value.limitTime,
            () => {
                this.GetModel<IMatchModel>().IsArriveLimitTime.Value = true;
                Debug.Log("++++++ arrive limit time ");
            }, limitTimeText));
    }

    private void Start() {
        limitTimeText.text = this.GetModel<IMatchModel>().SelectInfo.Value.limitTime.ToString();

        this.RegisterEvent<CompleteMatchEvent>(OnCompleteMatch).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnCompleteMatch(CompleteMatchEvent e) {
        StopCoroutine(limitTimeCor);
        this.SendCommand<PostPlayerCompleteGameMsgCommand>();
        this.GetSystem<IPlayerManagerSystem>().SelfPlayer.isLockSpeed = true;
        if (this.GetModel<IGameModel>().StandAlone) {
            this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Game Over"), 2.0f));
            Util.DelayExecuteWithSecond(2.0f, () => {
                this.SendCommand(new LoadSceneCommand(SceneID.Index));
            });           
        } else {
            this.SendCommand(new ShowPageCommand(UIPageType.GameResultUI, UILevelType.UIPage));
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
