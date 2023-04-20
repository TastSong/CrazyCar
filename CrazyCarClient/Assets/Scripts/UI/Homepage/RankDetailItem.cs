using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class RankDetailItem : MonoBehaviour, IController {
    public Button selfBtn;
    public Text nameText;
    public Text limiteText;
    public Image[] difficultyImages;
    public Sprite[] difficultySprites;

    private TimeTrialInfo timeTrialInfo = new TimeTrialInfo();

    private void Start() {
        selfBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            this.GetModel<ITimeTrialModel>().SelectInfo.Value = timeTrialInfo;
            
            this.SendCommand(new ShowPageCommand(UIPageType.TimeTrialRankUI));
        });
    }

    public void SetContent(TimeTrialInfo info) {
        timeTrialInfo = info;
        nameText.text = timeTrialInfo.name;
        limiteText.text = timeTrialInfo.limitTime.ToString();
        for (int i = 0; i < difficultyImages.Length; i++) {
            if (i < timeTrialInfo.star) {
                difficultyImages[i].sprite = difficultySprites[0];
            } else {
                difficultyImages[i].sprite = difficultySprites[1];
            }
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
