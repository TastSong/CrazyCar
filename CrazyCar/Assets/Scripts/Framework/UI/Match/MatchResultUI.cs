using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class MatchResultUI : MonoBehaviour, IController {
    public Button closeBtn;
    public Button refreshBtn;
    public MatchRankItem matchResultItem;
    public Transform itemParent;

    private void OnEnable() {
        FetchData();
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        for (int i = 0; i < this.GetModel<IMatchModel>().MatchRankList.Count; i++) {
            MatchRankItem item = Instantiate(matchResultItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(this.GetModel<IMatchModel>().MatchRankList[i]);
        }
    }

    private void FetchData() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("uid");
        w.Write(this.GetModel<IUserModel>().Uid.Value);
        w.WritePropertyName("cid");
        w.Write(this.GetModel<IMatchModel>().SelectInfo.Value.cid);
        w.WritePropertyName("complete_time");
        w.Write(this.GetModel<IMatchModel>().GetCompleteTime());
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
            RequestUrl.matchResultUrl,
            data: bytes,
            token: this.GetModel<IGameControllerModel>().Token.Value,
            succData: (data) => {
                this.GetModel<IMatchModel>().ParseRank(data, UpdateUI);
            }));
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            Util.LoadingScene(SceneID.Index);
        });

        refreshBtn.onClick.AddListener(() => {
            FetchData();
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
