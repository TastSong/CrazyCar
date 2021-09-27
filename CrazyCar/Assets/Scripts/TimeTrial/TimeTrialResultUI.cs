using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class TimeTrialResultUI : MonoBehaviour {
    public Image avatarImage;
    public Text nameText;
    public Image victoryImage;
    public Sprite[] victorySprites;
    public Image breakRankImage;
    public Sprite[] breakRankSprites;
    public Slider completeTimeSlider;
    public Text rewardText;
    public Text rankText;
    public Button rankBtn;
    public Button confirmBtn;
    public TimeTrialRankUI timeTrialRankUI;

    private void OnEnable() {
        timeTrialRankUI.gameObject.SetActiveFast(false);
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("uid");
        w.Write(GameController.manager.userInfo.uid);
        w.WritePropertyName("cid");
        w.Write(GameController.manager.timeTrialManager.selectInfo.cid);
        w.WritePropertyName("complete_time");
        w.Write(GameController.manager.timeTrialManager.GetCompleteTime());
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.timeTrialResultUrl,
            data : bytes,
            token: GameController.manager.token,
            succData: (data) => {
                GameController.manager.timeTrialManager.ParseResult(data, UpdateUI);
         }));
    }

    private void UpdateUI() {
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(GameController.manager.userInfo.aid);
        nameText.text = GameController.manager.userInfo.name;
        victoryImage.sprite = victorySprites[GameController.manager.timeTrialManager.isWin ? 0 :1];
        breakRankImage.sprite = breakRankSprites[GameController.manager.timeTrialManager.isBreakRecord ? 0 : 1];
        completeTimeSlider.value = GameController.manager.timeTrialManager.isComplete ?
            ((float)GameController.manager.timeTrialManager.completeTime / GameController.manager.timeTrialManager.selectInfo.limitTime) : 0;
        rewardText.text = GameController.manager.timeTrialManager.rewardStar.ToString();
        rankText.text = GameController.manager.timeTrialManager.isBreakRecord ? GameController.manager.timeTrialManager.rank.ToString() : "--";

        GameController.manager.userInfo.star += GameController.manager.timeTrialManager.rewardStar;
    }

    private void Start() {
        confirmBtn.onClick.AddListener(() => {
            Util.LoadingScene(SceneID.Index);
        });

        rankBtn.onClick.AddListener(() => {
            timeTrialRankUI.gameObject.SetActiveFast(true);
        });
    }
}
