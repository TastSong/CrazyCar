using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeTrialRankItem : MonoBehaviour {
    public Text nameText;
    public Image avatarImage;
    public Text completeTimeText;
    public Text rankText;

    public void SetContent(TimeTrialRankInfo info) {
        nameText.text = info.name;
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(info.aid);
        completeTimeText.text = info.completeTime.ToString();
        rankText.text = info.rank.ToString();
    }
}
