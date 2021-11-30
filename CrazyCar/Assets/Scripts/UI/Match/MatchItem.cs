using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class MatchItem : MonoBehaviour, IController {
    public Button selfBtn;
    public Text nameText;
    public Text limiteText;
    public Text timesText;
    public Image[] difficultyImages;
    public Sprite[] difficultySprites;
    public Text startTimeText;
    public Text enrollTimeText;

    private MatchInfo matchInfo;

    private void Start() {
        selfBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new EnterMatchCommand(matchInfo));
        });
    }

    public void SetContent(MatchInfo info) {
        matchInfo = info;
        nameText.text = matchInfo.name;
        limiteText.text = matchInfo.limitTime.ToString();
        timesText.text = matchInfo.times.ToString();
        for (int i = 0; i < difficultyImages.Length; i++) {
            if (i < matchInfo.star) {
                difficultyImages[i].sprite = difficultySprites[0];
            } else {
                difficultyImages[i].sprite = difficultySprites[1];
            }
        }
        startTimeText.text = Util.GetDateTime(info.startTime, "MM-dd HH:mm:ss");
        enrollTimeText.text = Util.GetDateTime(info.enrollTime, "MM-dd HH:mm:ss");
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
