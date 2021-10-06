using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MatchRankItem : MonoBehaviour{
    public Text nameText;
    public Image avatarImage;
    public Text completeTimeText;
    public Text rankText;

    public void SetContent(MatchRankInfo info) {
        nameText.text = info.name;
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(info.aid);
        completeTimeText.text = info.completeTime.ToString();
        rankText.text = info.rank.ToString();
    }
}
