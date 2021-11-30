using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class MatchDetailUI : MonoBehaviour, IController {
    public MatchItem matchItem;
    public Transform itemParent;
    public Button backBtn;

    private void OnEnable() {
        // 数据在Homepage已经拉取过了
        UpdateUI();
    }

    private void UpdateUI() {
        Util.DeleteChildren(itemParent);
        foreach (var kvp in this.GetModel<IMatchModel>().MatchDic) {
            MatchItem item = Instantiate(matchItem);
            item.transform.SetParent(itemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        backBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayCloseSound();
            this.SendCommand(new ShowPageCommand(UIPageType.HomepageUI));
        });
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
