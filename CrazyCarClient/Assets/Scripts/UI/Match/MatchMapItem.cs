using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;
using QFramework;

public class MatchMapItem : MonoBehaviour, IPointerClickHandler, IController {
    public Text nameText;
    public Image selectImage;

    private MatchInfo matchInfo;

    public void SetContent(MatchInfo info, int index) {
        nameText.text = index.ToString();
        matchInfo = info;
    }

    public void SetSelectStatus(bool isSelect) {
        selectImage.gameObject.SetActiveFast(isSelect);
    }

    public void OnPointerClick(PointerEventData eventData) {
        this.GetModel<IMatchModel>().SelectInfo.Value = matchInfo;
        this.SendCommand<ChangeMatchMapCommand>();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
