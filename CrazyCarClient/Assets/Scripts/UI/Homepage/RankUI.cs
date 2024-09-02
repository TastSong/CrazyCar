using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class RankUI : MonoBehaviour, IController {
    public RankDetailItem rankDetailItem;
    public Transform itemParent;
    public Button closeBtn;

    private async void OnEnable() {
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                                                                      RequestUrl.timeTrialDetailUrl,
           token: this.GetModel<IGameModel>().Token.Value);
        if (result.serverCode == 200) {
            this.GetSystem<IDataParseSystem>().ParseTimeTrialClassData(result.serverData);
            UpdateUI();
        } 
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        foreach (var kvp in this.GetModel<ITimeTrialModel>().TimeTrialDic) {
            RankDetailItem item = Instantiate(rankDetailItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Close);
            UIController.Instance.HidePage(UIPageType.RankUI);
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
