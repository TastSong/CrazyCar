using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class TimeTrialRankUI : MonoBehaviour, IController {
    public Button closeBtn;
    public TimeTrialRankItem timeTrialRankItem;
    public Transform itemParent;

    private void OnEnable() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("cid");
        w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.timeTrialRankUrl,
            data: bytes,
            token: this.GetModel<IGameControllerModel>().Token.Value,
            succData: (data) => {
                this.GetModel<ITimeTrialModel>().ParseRank(data, UpdateUI);
            }));
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        for (int i = 0; i < this.GetModel<ITimeTrialModel>().TimeTrialRankList.Count; i++) {
            TimeTrialRankItem item = Instantiate(timeTrialRankItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(this.GetModel<ITimeTrialModel>().TimeTrialRankList[i]);
        }
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
