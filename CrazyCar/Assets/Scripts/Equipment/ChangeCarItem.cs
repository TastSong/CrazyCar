using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;
using TFramework;

public class ChangeCarItem : MonoBehaviour, IPointerClickHandler, IController {
    public Image bg;
    public Image showImage;
    public GameObject lockGO;
    public Image selectIamge;
    public EquipInfo equipInfo;
    public Color normalColor;
    public void SetContent(EquipInfo info) {
        equipInfo = info;
        showImage.sprite = this.GetSystem<IResourceSystem>().GetEquipResource(equipInfo.rid).theIcon;
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
        this.SendCommand(new ChangeCarCommand(equipInfo));      
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
