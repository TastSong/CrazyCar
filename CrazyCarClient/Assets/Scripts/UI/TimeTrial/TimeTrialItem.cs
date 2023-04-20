using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

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
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (timeTrialInfo.isHas) {
                if (timeTrialInfo.hasWater) {
                    if (this.GetModel<IUserModel>().EquipInfo.Value.canWade) {
                        this.GetSystem<INetworkSystem>().EnterRoom(GameType.TimeTrial, timeTrialInfo.cid, () => {
                            this.SendCommand(new EnterTimeTrialCommand(timeTrialInfo));
                        });
                    } else {
                        WarningAlertInfo alertInfo = new WarningAlertInfo("This map requires wading vehicles");
                        this.SendCommand(new ShowPageCommand(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                    }
                } else {
                    this.GetSystem<INetworkSystem>().EnterRoom(GameType.TimeTrial, timeTrialInfo.cid, () => {
                        this.SendCommand(new EnterTimeTrialCommand(timeTrialInfo));
                    });
                }
            } else {
                if (this.GetModel<IUserModel>().Star.Value > timeTrialInfo.star) {
                    InfoConfirmInfo info = new InfoConfirmInfo(content: string.Format(this.GetSystem<II18NSystem>().GetText("Does it cost {0} stars to purchase this course"), timeTrialInfo.star),
                        success: () => {
                            this.SendCommand(new BuyTimeTrialClassCommand(timeTrialInfo));
                        },
                        fail: () => {
                            Debug.Log(this.GetSystem<II18NSystem>().GetText("Give up to buy"));
                        });
                    this.SendCommand(new ShowPageCommand(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
                } else {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("This course requires {0} star");
                    this.SendCommand(new ShowPageCommand(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                }
            }
        });

        this.RegisterEvent<UnlockTimeTrialEvent>(OnUnlockTimeTrial).UnRegisterWhenGameObjectDestroyed(gameObject);
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

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
