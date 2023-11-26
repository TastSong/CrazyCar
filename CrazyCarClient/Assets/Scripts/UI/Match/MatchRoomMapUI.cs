using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
using Utils;

public class MatchRoomMapUI : MonoBehaviour, IController {
    public Button closeBtn;
    public MatchMapItem mapItem;
    public Transform itemParent;

    private List<MatchMapItem> matchMapItems = new List<MatchMapItem>();
    
    private void OnEnable() {
        Util.DeleteChildren(itemParent);
        matchMapItems.Clear();
        int i = 0;
        foreach (var kvp in this.GetModel<IMatchModel>().MatchDic) {
            MatchMapItem item = Instantiate(mapItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value, i);
            item.SetSelectStatus(kvp.Value.cid == this.GetModel<IMatchModel>().SelectInfo.Value.cid);
            matchMapItems.Add(item);
            i++;
        }
    }


    private void Start() {
        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });

        this.RegisterEvent<ChangeMatchMapEvent>(OnChangeMatchMap).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnChangeMatchMap(ChangeMatchMapEvent e) {
        int i = 0;
        foreach (var item in this.GetModel<IMatchModel>().MatchDic) {
            matchMapItems[i].SetSelectStatus(item.Value.cid == this.GetModel<IMatchModel>().SelectInfo.Value.cid);
            i++;
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
