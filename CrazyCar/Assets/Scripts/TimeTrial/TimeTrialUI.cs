using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TinyMessenger;

public class TimeTrialUI : MonoBehaviour{
    public CountDownAnim countDownAnim;
    public Button exitBtn;
    public Text limitTimeText;
    public GameCtrBtn frontBtn;
    public GameCtrBtn backBtn;
    public GameCtrBtn leftBtn;
    public GameCtrBtn rightBtn;
    public GameCtrBtn spaceBtn;
    public TimeTrialPlayer timeTrialPlayer;

    private int countDownTime = 3;
    private Coroutine limitTimeCor;
    private TinyMessageSubscriptionToken endTimeTrialMsg;

    private void OnEnable() {
        if (!GameController.manager.sceneLoaded) {
            return;
        }

        countDownAnim.PlayAnim(3, () => {
            GameController.manager.timeTrialManager.StartTime = Util.GetTime() / 1000;
            timeTrialPlayer.vInput = 1;
            Debug.Log("++++++ StartTime = " + GameController.manager.timeTrialManager.StartTime);
            limitTimeCor = StartCoroutine(CountdownCor(GameController.manager.timeTrialManager.selectInfo.limitTime,
                () => {
                    GameController.manager.timeTrialManager.IsArriveLimitTime = true;
                    Debug.Log("++++++ arrive limit time ");
                }, limitTimeText));
        });       
    }

    private void Start() {
        exitBtn.onClick.AddListener(() => {
            Time.timeScale = 0;
            GameController.manager.infoConfirmAlert.ShowWithText(content: "是否退出游戏",
                success: () => {
                    Time.timeScale = 1;
                    Util.LoadingScene(SceneID.Index);
                },
                fail: () => {
                    Time.timeScale = 1;
                });
        });

        frontBtn.SetClick((float time) => {
            timeTrialPlayer.vInput = 1;
        });
        backBtn.SetClick((float time) => {
            timeTrialPlayer.vInput = -1;
        });
        leftBtn.SetClick((float time) => {
            timeTrialPlayer.hInput = -Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            timeTrialPlayer.hInput = 0;
        });
        rightBtn.SetClick((float time) => {
            timeTrialPlayer.hInput = Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            timeTrialPlayer.hInput = 0;
        });
        spaceBtn.SetClick((float time) => {
            timeTrialPlayer.sInput = Mathf.Clamp01(Time.fixedTime - time);
        }, () => {
            timeTrialPlayer.sInput = 0;
        });

        limitTimeText.text = GameController.manager.timeTrialManager.selectInfo.limitTime.ToString(); 

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
