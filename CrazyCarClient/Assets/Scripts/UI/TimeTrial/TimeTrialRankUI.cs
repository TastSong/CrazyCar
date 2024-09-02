using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class TimeTrialRankUI : MonoBehaviour, IController {
    public Button closeBtn;
    public TimeTrialRankItem timeTrialRankItem;
    public Transform itemParent;

    private async void OnEnable() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("cid");
        w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.timeTrialRankUrl,
            token: this.GetModel<IGameModel>().Token.Value, bytes);
        if (result.serverCode == 200) {
            this.GetSystem<IDataParseSystem>().ParseTimeTrialRank(result.serverData);
            UpdateUI();
        }
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
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Close);
            gameObject.SetActiveFast(false);
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
