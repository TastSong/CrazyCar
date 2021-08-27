using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;

public class AvatarItem : MonoBehaviour, IPointerClickHandler {
    public Image avatarImage;
    public Image lockImage;

    public void OnPointerClick(PointerEventData eventData) {
        Debug.Log("点击头像");
    }

    public void SetContent(int aid, bool isHava) {
        lockImage.gameObject.SetActiveFast(!isHava);
        avatarImage.sprite = Resources.Load<Sprite>("Avatar/" + aid.ToString());
    }
}
