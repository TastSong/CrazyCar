using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TinyMessenger;

public class TimeTrialUI : MonoBehaviour{
    public Text countDownText;
    public Text limitTimeText;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public TimeTrialPlayer timeTrialPlayer;

    private int countDownTime = 3;
    private Coroutine limitTimeCor;
    private TinyMessageSubscriptionToken endTimeTrialMsg;

    private void Start() {
        frontBtn.SetClickDown(() => {
            timeTrialPlayer.MoveFront();
        });
        backBtn.SetClickDown(() => {
            timeTrialPlayer.MoveBack();
        });
        leftBtn.SetClickDown(() => {
            timeTrialPlayer.MoveLeft();
        });
        rightBtn.SetClickDown(() => {
            timeTrialPlayer.MoveRight();
        });

        limitTimeText.text = GameController.manager.timeTrialManager.selectInfo.limitTime.ToString();

        StartCoroutine(CountdownCor(countDownTime, () => {
            GameController.manager.timeTrialManager.StartTime = Util.GetTime() / 1000;
            Debug.Log("++++++ StartTime = " + GameController.manager.timeTrialManager.StartTime);
            limitTimeCor = StartCoroutine(CountdownCor(GameController.manager.timeTrialManager.selectInfo.limitTime,
                () => {
                    GameController.manager.timeTrialManager.IsArriveLimitTime = true;
                    Debug.Log("++++++ arrive limit time ");
                }, limitTimeText));
        }, countDownText));

        endTimeTrialMsg = GameController.manager.tinyMsgHub.Subscribe<CompleteTimeTrialMsg>((m) => { EndGame(); });
    }

    private void EndGame() {
        StopCoroutine(limitTimeCor);
    }

    private IEnumerator CountdownCor(int time, Util.NoneParamFunction succ = null, Text targetText = null, string str = null) {
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
