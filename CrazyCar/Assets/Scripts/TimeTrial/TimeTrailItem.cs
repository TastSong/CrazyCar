using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class TimeTrailItem : MonoBehaviour {
    public Button selfBtn;
    public Text nameText;
    public Text limiteText;
    public Image[] difficultyImages;
    public Sprite[] difficultySprites;

    private TimeTrialInfo timeTrialInfo;

    private void Start() {
        selfBtn.onClick.AddListener(() => {
            GameController.manager.timeTrialManager.selectInfo = timeTrialInfo;
            Util.LoadingScene(SceneID.Game);
        });
    }

    public void SetContent(TimeTrialInfo info) {
        nameText.text = info.name;
        limiteText.text = info.limitTime.ToString();
        for (int i = 0; i < difficultyImages.Length; i++) {
            if (i < info.difficulty) {
                difficultyImages[i].sprite = difficultySprites[0];
            } else {
                difficultyImages[i].sprite = difficultySprites[1];
            }
        }
    }
}
