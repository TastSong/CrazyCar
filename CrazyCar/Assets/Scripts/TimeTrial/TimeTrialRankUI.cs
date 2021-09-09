using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class TimeTrialRankUI : MonoBehaviour{
    public Button closeBtn;
    public TimeTrialRankItem timeTrialRankItem;
    public Transform itemParent;

    private void OnEnable() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("cid");
        w.Write(GameController.manager.timeTrialManager.selectInfo.cid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.timeTrialRankUrl,
            data: bytes,
            token: GameController.manager.token,
            fatchData: (data) => {
                GameController.manager.timeTrialManager.ParseRank(data, UpdateUI);
            }));
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        for (int i = 0; i < GameController.manager.timeTrialManager.timeTrialRankList.Count; i++) {
            TimeTrialRankItem item = Instantiate(timeTrialRankItem);
            item.transform.SetParent(itemParent);
            item.SetContent(GameController.manager.timeTrialManager.timeTrialRankList[i]);
        }
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            gameObject.SetActiveFast(false);
        });
    }
}
