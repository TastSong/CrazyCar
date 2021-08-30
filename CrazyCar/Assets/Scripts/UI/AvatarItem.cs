using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;

public class AvatarItem : MonoBehaviour, IPointerClickHandler {
    public Image avatarImage;
    public Image lockImage;

    private AvatarInfo avatarInfo; 

    public void OnPointerClick(PointerEventData eventData) {
        if (avatarInfo.isHas) {
            Debug.Log("点击头像 = " + avatarInfo.aid);
            GameController.manager.tinyMsgHub.Publish(new AvatarUIMessage(avatarInfo.aid));
        } else {
            GameController.manager.warningAlert.Show("未拥有");
        }
    }

    public void SetContent(AvatarInfo info) {
        avatarInfo = info;
        avatarImage.sprite = Resources.Load<Sprite>(LocalUrl.avatarUrl + avatarInfo.aid.ToString());
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
    }
}
