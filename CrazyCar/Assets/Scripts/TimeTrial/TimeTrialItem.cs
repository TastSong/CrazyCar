using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class TimeTrialItem : MonoBehaviour, IController {
    public Button selfBtn;
    public Text nameText;
    public Text limiteText;
    public Text timesText;
    public Image[] difficultyImages;
    public Sprite[] difficultySprites;
    public Image lockImage;

    private TimeTrialInfo timeTrialInfo;

    private void Start() {
        selfBtn.onClick.AddListener(() => {
            if (timeTrialInfo.isHas) {
                Debug.Log("进入课程 = " + timeTrialInfo.cid);
                GameController.manager.timeTrialManager.CleanData();
                GameController.manager.timeTrialManager.selectInfo = timeTrialInfo;
                GameController.manager.curGameType = CurGameType.TimeTrial;
                Util.LoadingScene(SceneID.Game);
            } else {
                if (GameController.manager.userInfo.star > timeTrialInfo.star) {
                    GameController.manager.infoConfirmAlert.ShowWithText(content: string.Format(I18N.manager.GetText("Does it cost {0} stars to purchase this course"), timeTrialInfo.star),
                    success: () => {
                        StringBuilder sb = new StringBuilder();
                        JsonWriter w = new JsonWriter(sb);
                        w.WriteObjectStart();
                        w.WritePropertyName("cid");
                        w.Write(timeTrialInfo.cid);
                        w.WriteObjectEnd();
                        Debug.Log("++++++ " + sb.ToString());
                        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
                        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.buyTimeTrialClassUrl,
                        data: bytes,
                        token: GameController.manager.token,
                        succData: (data) => {
                            GameController.manager.userInfo.star = (int)data["star"];
                            timeTrialInfo.isHas = true;
                            lockImage.gameObject.SetActiveFast(!timeTrialInfo.isHas);
                            this.SendCommand<UpdateHomepageUICommand>();
                        }));
                    },
                    fail: () => {
                        Debug.Log(I18N.manager.GetText("Give up to buy"));
                    });
                } else {
                    GameController.manager.warningAlert.ShowWithText(string.Format(I18N.manager.GetText("This course requires {0} star"), timeTrialInfo.star));
                }
            }
        });
    }

    public void SetContent(TimeTrialInfo info) {
        timeTrialInfo = info;
        nameText.text = timeTrialInfo.name;
        limiteText.text = timeTrialInfo.limitTime.ToString();
        timesText.text = timeTrialInfo.times.ToString();
        for (int i = 0; i < difficultyImages.Length; i++) {
            if (i < timeTrialInfo.star) {
                difficultyImages[i].sprite = difficultySprites[0];
            } else {
                difficultyImages[i].sprite = difficultySprites[1];
            }
        }
        lockImage.gameObject.SetActiveFast(!timeTrialInfo.isHas);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
