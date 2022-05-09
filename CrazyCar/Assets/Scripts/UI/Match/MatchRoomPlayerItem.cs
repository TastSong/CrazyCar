using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class MatchRoomPlayerItem : MonoBehaviour, IController {
    public Text nickName;
    public Image avatarImage;

    public void SetContent(MatchRoomMemberInfo info) {
        nickName.text = info.memberName;
        this.GetSystem<IAddressableSystem>().GetAvatarResource(info.aid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                avatarImage.sprite = Instantiate(obj.Result, transform, false);
            }
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
