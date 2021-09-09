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
    public Text completeTimeText;
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
            fatchData: (data) => {
                GameController.manager.timeTrialManager.ParseReslut(data, UpdateUI);
         }));
    }

    private void UpdateUI() {
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(GameController.manager.userInfo.aid);
        nameText.text = GameController.manager.userInfo.name;
        victoryImage.sprite = victorySprites[GameController.manager.timeTrialManager.isWin ? 0 :1];
        breakRankImage.sprite = breakRankSprites[GameController.manager.timeTrialManager.isBreakRecord ? 0 : 1];
        completeTimeText.text = GameController.manager.timeTrialManager.isComplete ?
            GameController.manager.timeTrialManager.completeTime.ToString() : "--";
        rankText.text = GameController.manager.timeTrialManager.rank.ToString();
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
