using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class MatchItem : MonoBehaviour {
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
}
