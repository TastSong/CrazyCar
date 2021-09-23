using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class RankDetailItem : MonoBehaviour {
    public Button selfBtn;
    public Text nameText;
    public Text limiteText;
    public Image[] difficultyImages;
    public Sprite[] difficultySprites;

    private TimeTrialInfo timeTrialInfo;

    private void Start() {
        selfBtn.onClick.AddListener(() => {
            GameController.manager.timeTrialManager.selectInfo.cid = timeTrialInfo.cid;
            UIManager.manager.ShowPage(UIPageType.TimeTrialRankUI);
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
}
