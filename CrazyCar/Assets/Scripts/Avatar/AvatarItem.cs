using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;
using TFramework;

public class AvatarItem : MonoBehaviour, IPointerClickHandler, IController {
    public Image avatarImage;
    public Image lockImage;

    private AvatarInfo avatarInfo;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    public void OnPointerClick(PointerEventData eventData) {
        this.SendCommand(new ChangeAvatarCommand(avatarInfo, lockImage));
    }

    public void SetContent(AvatarInfo info) {
        avatarInfo = info;
        avatarImage.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(avatarInfo.aid);
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
    }
}
