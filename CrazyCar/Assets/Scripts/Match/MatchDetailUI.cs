using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class MatchDetailUI : MonoBehaviour {
    public MatchItem matchItem;
    public Transform itemParent;
    public Button backBtn;

    private void OnEnable() {
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
            RequestUrl.matchDetailUrl,
           token: GameController.manager.token,
           succData: (data) => {
               GameController.manager.matchManager.ParseClassData(data, UpdateUI);
           }));
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        foreach (var kvp in GameController.manager.matchManager.matchDic) {
            MatchItem item = Instantiate(matchItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        backBtn.onClick.AddListener(() => {
            UIManager.manager.ShowPage(UIPageType.HomepageUI);
        });
    }
}
