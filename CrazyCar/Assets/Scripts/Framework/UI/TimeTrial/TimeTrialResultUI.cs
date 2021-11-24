using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class TimeTrialResultUI : MonoBehaviour, IController {
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
        w.Write(this.GetModel<IUserModel>().Uid.Value);
        w.WritePropertyName("cid");
        w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
        w.WritePropertyName("complete_time");
        w.Write(this.GetModel<ITimeTrialModel>().GetCompleteTime());
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.timeTrialResultUrl,
            data : bytes,
            token: GameController.manager.token,
            succData: (data) => {
                this.GetModel<ITimeTrialModel>().ParseResult(data, UpdateUI);
         }));
    }

    private void UpdateUI() {
        avatarImage.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid.Value);
        nameText.text = this.GetModel<IUserModel>().Name.Value;
        victoryImage.sprite = victorySprites[this.GetModel<ITimeTrialModel>().IsWin ? 0 :1];
        breakRankImage.sprite = breakRankSprites[this.GetModel<ITimeTrialModel>().IsBreakRecord ? 0 : 1];
        completeTimeSlider.value = this.GetModel<ITimeTrialModel>().IsComplete ?
            ((float)this.GetModel<ITimeTrialModel>().CompleteTime / this.GetModel<ITimeTrialModel>().SelectInfo.Value.limitTime) : 0;
        rewardText.text = this.GetModel<ITimeTrialModel>().RewardStar.ToString();
        rankText.text = this.GetModel<ITimeTrialModel>().IsBreakRecord ? this.GetModel<ITimeTrialModel>().Rank.ToString() : "--";

        this.GetModel<IUserModel>().Star.Value += this.GetModel<ITimeTrialModel>().RewardStar;
    }

    private void Start() {
        confirmBtn.onClick.AddListener(() => {
            Util.LoadingScene(SceneID.Index);
        });

        rankBtn.onClick.AddListener(() => {
            timeTrialRankUI.gameObject.SetActiveFast(true);
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
