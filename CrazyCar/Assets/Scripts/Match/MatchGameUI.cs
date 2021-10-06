using System;
using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class MatchGameUI : MonoBehaviour {
    public Text offStartTimeText;
    public CountDownAnim countDownAnim;
    public Text limitTimeText;

    private Coroutine limitTimeCor;
    private TinyMessageSubscriptionToken endMatchMsg;

    private void OnEnable() {
        if (!GameController.manager.sceneLoaded) {
            return;
        }

        int offTime = (int)(GameController.manager.matchManager.StartTime * 1000 - Util.GetTime()) / 1000;
        if (offTime > 3){
            StartCoroutine(CountdownCor(offTime,
                    () => {
                        countDownAnim.gameObject.SetActiveFast(false);
                        StartGame();
                    }, offStartTimeText));
        } else if(offTime < 3 && offTime > 0) {
            countDownAnim.PlayAnim(offTime, () => {
                StartGame();
            });
        } else if (offTime > -GameController.manager.matchManager.selectInfo.limitTime){
            countDownAnim.gameObject.SetActiveFast(false);
            StartGame();
        } else {
            countDownAnim.gameObject.SetActiveFast(false);
            StartGame();
            Debug.LogError("比赛结束");
        }
        
    }

    private void StartGame() {
        PlayerManager.manager.GetSelfPlayer.vInput = 1;
        Debug.Log("++++++ StartTime = " + GameController.manager.matchManager.StartTime);
        limitTimeCor = StartCoroutine(CountdownCor(GameController.manager.matchManager.selectInfo.limitTime,
            () => {
                GameController.manager.matchManager.IsArriveLimitTime = true;
                Debug.Log("++++++ arrive limit time ");
            }, limitTimeText));
    }

    private void Start() {
        limitTimeText.text = GameController.manager.matchManager.selectInfo.limitTime.ToString();

        endMatchMsg = GameController.manager.tinyMsgHub.Subscribe<CompleteMatchMsg>((m) => { EndGame(); });
    }

    private void EndGame() {
        StopCoroutine(limitTimeCor);
        GameController.manager.tinyMsgHub.Publish(new CompleteGameMsg());
    }

    private IEnumerator CountdownCor(int time, Action succ = null, Text targetText = null, string str = null) {
        while (true) {
            if (targetText != null) {
                if (str != null) {
                    targetText.text = string.Format(str, time);
                } else {
                    targetText.text = time.ToString();
                }
            }

            yield return new WaitForSecondsRealtime(1.0f);
            time--;
            if (time < 0) {
                succ?.Invoke();
                yield break;
            }
        }
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(endMatchMsg);
    }
}
