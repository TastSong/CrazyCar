using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utils;

public class TimeTrialRankItem : MonoBehaviour, IController {
    public Text nameText;
    public Image avatarImage;
    public Text completeTimeText;
    public Text rankText;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    public async void SetContent(TimeTrialRankInfo info) {
        nameText.text = info.name;
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(Util.GetAvatarUrl(info.aid));
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            avatarImage.sprite = Instantiate(obj.Result, transform, false);
        }
        completeTimeText.text = info.completeTime.ToString();
        rankText.text = info.rank.ToString();
    }
}
