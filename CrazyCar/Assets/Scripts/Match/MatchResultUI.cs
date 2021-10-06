using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class MatchResultUI : MonoBehaviour{
    public Button closeBtn;
    public Button refreshBtn;
    public MatchRankItem matchResultItem;
    public Transform itemParent;

    private void OnEnable() {
        FetchData();
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        for (int i = 0; i < GameController.manager.matchManager.matchRankList.Count; i++) {
            MatchRankItem item = Instantiate(matchResultItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(GameController.manager.matchManager.matchRankList[i]);
        }
    }

    private void FetchData() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("uid");
        w.Write(GameController.manager.userInfo.uid);
        w.WritePropertyName("cid");
        w.Write(GameController.manager.matchManager.selectInfo.cid);
        w.WritePropertyName("complete_time");
        w.Write(GameController.manager.matchManager.GetCompleteTime());
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
            RequestUrl.matchResultUrl,
            data: bytes,
            token: GameController.manager.token,
            succData: (data) => {
                GameController.manager.matchManager.ParseRank(data, UpdateUI);
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
}
