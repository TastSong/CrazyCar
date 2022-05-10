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
        this.GetSystem<IPlayerManagerSystem>().SelfPlayer.vInput = 1;
        Debug.Log("++++++ StartTime = " + this.GetModel<IMatchModel>().StartTime);
        limitTimeCor = StartCoroutine(Util.CountdownCor(this.GetModel<IMatchModel>().SelectInfo.Value.limitTime,
            () => {
                this.GetModel<IMatchModel>().IsArriveLimitTime.Value = true;
                Debug.Log("++++++ arrive limit time ");
            }, limitTimeText));
    }

    private void Start() {
        limitTimeText.text = this.GetModel<IMatchModel>().SelectInfo.Value.limitTime.ToString();

        this.RegisterEvent<CompleteMatchEvent>(OnCompleteMatch);
    }

    private void OnCompleteMatch(CompleteMatchEvent e) {
        StopCoroutine(limitTimeCor);
        this.SendCommand(new ShowResultUICommand());
    }

    private void OnDestroy() {
        this.UnRegisterEvent<CompleteMatchEvent>(OnCompleteMatch);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
