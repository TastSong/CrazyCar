using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TinyMessenger;

public class TimeTrailUI : MonoBehaviour{
    public Text countDownText;
    public Text limitTimeText;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public TimeTrailPlayer timeTrailPlayer;

    private int countDownTime = 3;
    private Coroutine limitTimeCor;
    private TinyMessageSubscriptionToken endTimeTrailMsg;

    private void Start() {
        frontBtn.SetClickDown(() => {
            timeTrailPlayer.MoveFront();
        });
        backBtn.SetClickDown(() => {
            timeTrailPlayer.MoveBack();
        });
        leftBtn.SetClickDown(() => {
            timeTrailPlayer.MoveLeft();
        });
        rightBtn.SetClickDown(() => {
            timeTrailPlayer.MoveRight();
        });
        // 创建测试数据
        GameController.manager.timeTrialManager.CreateTestData();

        StartCoroutine(CountdownCor(countDownTime, () => {
            GameController.manager.timeTrialManager.StartTime = Util.GetTime() / 1000;
            Debug.LogError("++++++ StartTime = " + GameController.manager.timeTrialManager.StartTime);
        }, countDownText));

        limitTimeCor = StartCoroutine(CountdownCor(GameController.manager.timeTrialManager.selectInfo.limitTime, 
            () => {
                GameController.manager.timeTrialManager.isLimited = true;
                Debug.LogError("++++++ 限制时间到 可以结算");
            }, limitTimeText));

        endTimeTrailMsg = GameController.manager.tinyMsgHub.Subscribe<EndTimeTrailMsg>((m) => { EndGame(); });
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
        GameController.manager.tinyMsgHub.Unsubscribe(endTimeTrailMsg);
    }
}
