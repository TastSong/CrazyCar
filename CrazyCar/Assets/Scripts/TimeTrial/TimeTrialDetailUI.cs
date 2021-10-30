using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class TimeTrialDetailUI : MonoBehaviour {
    public TimeTrialItem timeTrialItem;
    public Transform itemParent;
    public Button closeBtn;

    private void OnEnable() {
        if (GameController.manager.standAlone) {
            TextAsset ta = Resources.Load<TextAsset>(Util.baseStandAlone + RequestUrl.timeTrialDetailUrl);
            JsonData data = JsonMapper.ToObject(ta.text);
            GameController.manager.timeTrialManager.ParseClassData(data, UpdateUI);
        } else {
            StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.timeTrialDetailUrl,
               token: GameController.manager.token,
               succData: (data) => {
                   GameController.manager.timeTrialManager.ParseClassData(data, UpdateUI);
               }));
        }
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        foreach (var kvp in GameController.manager.timeTrialManager.timeTrialDic) {
            TimeTrialItem item = Instantiate(timeTrialItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            UIManager.manager.ShowPage(UIPageType.HomepageUI);
        });
    }
}
