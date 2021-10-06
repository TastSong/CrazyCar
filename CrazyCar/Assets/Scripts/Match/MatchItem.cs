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
    public Text startTimeText;
    public Text enrollTimeText;

    private MatchInfo matchInfo;

    private void Start() {
        selfBtn.onClick.AddListener(() => {
            Debug.Log("进入课程 = " + matchInfo.cid);
            GameController.manager.matchManager.CleanData();
            GameController.manager.matchManager.selectInfo = matchInfo;
            GameController.manager.curGameType = CurGameType.Match;
            Util.LoadingScene(SceneID.Game);
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
        startTimeText.text = Util.SecondToStirngWithFormat(info.startTime, "h:m:s");
        enrollTimeText.text = Util.SecondToStirngWithFormat(info.enrollTime, "h:m:s");
    }
}
