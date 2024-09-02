using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class TimeTrialDetailUI : MonoBehaviour, IController {
    public TimeTrialItem timeTrialItem;
    public Transform itemParent;
    public Button closeBtn;

    private async void OnEnable() {
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<TextAsset>(Util.baseStandAlone + Util.standAloneTimeTrialDetail);
            if (obj.Status != AsyncOperationStatus.Succeeded) {
                Debug.LogError("Load TimeTrialDetail failed");
                return;
            }
            JsonData data = JsonMapper.ToObject(obj.Result.text);
            this.GetSystem<IDataParseSystem>().ParseTimeTrialClassData(data);
            UpdateUI();
        } else {
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
            var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.timeTrialDetailUrl,
               token: this.GetModel<IGameModel>().Token.Value);
            if (result.serverCode == 200) {
                this.GetSystem<IDataParseSystem>().ParseTimeTrialClassData(result.serverData);
                UpdateUI();
            } 
        }
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        foreach (var kvp in this.GetModel<ITimeTrialModel>().TimeTrialDic) {
            TimeTrialItem item = Instantiate(timeTrialItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Close);
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.HomepageUI));
            gameObject.SetActiveFast(false);
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
