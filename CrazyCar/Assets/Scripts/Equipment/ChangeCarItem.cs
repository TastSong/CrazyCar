using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;

public class ChangeCarItem : MonoBehaviour, IPointerClickHandler {
    public Image bg;
    public Image showImage;
    public GameObject lockGO;
    public Image selectIamge;
    public EquipInfo equipInfo;
    public Color normalColor;
    public void SetContent(EquipInfo info) {
        equipInfo = info;
        showImage.sprite = GameController.manager.resourceManager.GetCarResource(equipInfo.rid).theIcon;
        lockGO.SetActiveFast(!equipInfo.isHas);
    }

    public void SetUnlockState() {
        lockGO.SetActiveFast(!equipInfo.isHas);
    }

    public void SetSelectState(bool isSelect) {
        bg.color = isSelect ? Color.white : normalColor;
        selectIamge.gameObject.SetActiveFast(isSelect);
    }

    public void OnPointerClick(PointerEventData eventData) {
        IndexCar.manager.accessoryChanger.SetGear(equipInfo.eid.ToString(), equipInfo.rid);
        GameController.manager.tinyMsgHub.Publish(new ChangeCarMsg(equipInfo));        
    }
}
