using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TinyMessenger;
using System;

public class TimeTrialGameUI : MonoBehaviour{
    public CountDownAnim countDownAnim;
    public Text limitTimeText;

    private Coroutine limitTimeCor;
    private TinyMessageSubscriptionToken endTimeTrialMsg;

    private void OnEnable() {
        if (!GameController.manager.sceneLoaded) {
            return;
        }

        countDownAnim.PlayAnim(3, () => {
            GameController.manager.timeTrialManager.StartTime = Util.GetTime() / 1000;
            PlayerManager.manager.GetSelfPlayer.vInput = 1;
            Debug.Log("++++++ StartTime = " + GameController.manager.timeTrialManager.StartTime);
            limitTimeCor = StartCoroutine(CountdownCor(GameController.manager.timeTrialManager.selectInfo.limitTime,
                () => {
                    GameController.manager.timeTrialManager.IsArriveLimitTime = true;
                    Debug.Log("++++++ arrive limit time ");
                }, limitTimeText));
        });       
    }

    private void Start() {       
        limitTimeText.text = GameController.manager.timeTrialManager.selectInfo.limitTime.ToString(); 

        endTimeTrialMsg = GameController.manager.tinyMsgHub.Subscribe<CompleteTimeTrialMsg>((m) => { EndGame(); });
    }

    private void EndGame() {
        StopCoroutine(limitTimeCor);
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
        GameController.manager.tinyMsgHub.Unsubscribe(endTimeTrialMsg);
    }
}
