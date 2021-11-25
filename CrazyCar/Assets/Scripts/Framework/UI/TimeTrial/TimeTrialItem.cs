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
                this.SendCommand(new EnterTimeTrialCommand(timeTrialInfo));
            } else {
                if (this.GetModel<IUserModel>().Star.Value > timeTrialInfo.star) {
                    this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(content: string.Format(I18N.manager.GetText("Does it cost {0} stars to purchase this course"), timeTrialInfo.star),
                    success: () => {
                        this.SendCommand(new BuyTimeTrialClassCommand(timeTrialInfo));
                    },
                    fail: () => {
                        Debug.Log(I18N.manager.GetText("Give up to buy"));
                    });
                } else {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(string.Format(I18N.manager.GetText("This course requires {0} star"), timeTrialInfo.star));
                }
            }
        });

        this.RegisterEvent<UnlockTimeTrialEvent>(OnUnlockTimeTrial);
    }

    private void OnUnlockTimeTrial(UnlockTimeTrialEvent e) {
        lockImage.gameObject.SetActiveFast(!timeTrialInfo.isHas);
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

    private void OnDestroy() {
        this.UnRegisterEvent<UnlockTimeTrialEvent>(OnUnlockTimeTrial);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
