using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class TimeTrailDetailUI : MonoBehaviour {
    public TimeTrailItem timeTrailItem;
    public Transform itemParent;
    public Button closeBtn;

    private void OnEnable() {
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.timeTrailDetailUrl,
           token: GameController.manager.token,
           fatchData: (data) => {
               GameController.manager.timeTrialManager.ParseClassData(data, UpdateUI);
           }));
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        foreach (var kvp in GameController.manager.timeTrialManager.timeTrialDic) {
            TimeTrailItem item = Instantiate(timeTrailItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            UIManager.instance.ShowPage(UIPageType.HomepageUI);
        });
    }
}
