using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class ChangeCarUI : MonoBehaviour, IController {
    public Text nameText;
    public Text starText;
    public Text massText;
    public Text maxPowerText;
    public Text powerText;
    public Text canWadeText;
    public Button closeBtn;
    public Button applyBtn;
    public Text applyBtnText;
    public RawImage showRawImage;
    public ChangeCarItem changeCarItem;
    public Transform itemParent;

    private EquipInfo curEquipInfo;
    private List<ChangeCarItem> changeCarItems = new List<ChangeCarItem>();

    private async void OnEnable() {
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
        string url = this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.equipUrl;
        var result = await this.GetSystem<INetworkSystem>().Post(url, token: this.GetModel<IGameModel>().Token.Value);
        if (result.serverCode == 200) {
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
            this.GetSystem<IDataParseSystem>().ParseEquipRes(result.serverData);      
            await SetItemContent();
            UIController.Instance.HidePage(UIPageType.LoadingUI);
        }
    }

    private async UniTask SetItemContent() {
        Util.DeleteChildren(itemParent);
        changeCarItems.Clear();
        // 创建一个任务列表来保存所有的异步任务
        List<UniTask> tasks = new List<UniTask>();
        foreach (var kvp in this.GetModel<IEquipModel>().EquipDic) {
            if (kvp.Value.isShow) {
                ChangeCarItem item = Instantiate(changeCarItem);
                item.transform.SetParent(itemParent, false);
                // 添加异步设置内容的任务到任务列表
                tasks.Add(item.SetContent(kvp.Value));
                changeCarItems.Add(item);
            }
        }
        
        // 并行执行所有任务并等待它们全部完成
        await UniTask.WhenAll(tasks);

        curEquipInfo = this.GetModel<IEquipModel>().EquipDic[this.GetModel<IUserModel>().EquipInfo.Value.eid];
        OnChangeCarEvent(new ChangeCarEvent(curEquipInfo));
        this.GetSystem<IIndexCarSystem>().MPlayerStyle.ChangeEquip(curEquipInfo.eid, curEquipInfo.rid);
    }

    private void Start() {
        applyBtn.interactable = false;
        applyBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (curEquipInfo.isHas) {
                this.SendCommand(new ApplyEquipCommand(curEquipInfo));
            } else {
                this.SendCommand(new BuyEquipCommand(curEquipInfo));
            }  
        });

        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Close);
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.HomepageUI));
            UIController.Instance.HidePage(UIPageType.ChangeCarUI);           
        });

        this.RegisterEvent<ChangeCarEvent>(OnChangeCarEvent).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<BuyEquipEvent>(OnBuyEquip).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<ApplyEquipEvent>(OnApplyEquip).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnChangeCarEvent(ChangeCarEvent e) {
        curEquipInfo = e.mEquipInfo;
        nameText.text = curEquipInfo.equipName;
        starText.text = curEquipInfo.star.ToString();
        massText.text = curEquipInfo.mass.ToString();
        powerText.text = curEquipInfo.power.ToString();
        maxPowerText.text = curEquipInfo.maxPower.ToString();
        canWadeText.text = curEquipInfo.canWade ? "Y" : "N";
        for (int i = 0; i < changeCarItems.Count; i++) {
            changeCarItems[i].SetSelectState(changeCarItems[i].equipInfo.eid == curEquipInfo.eid);
        }

        if (curEquipInfo.eid == this.GetModel<IUserModel>().EquipInfo.Value.eid) {
            applyBtn.interactable = false;
        } else {
            applyBtn.interactable = true;
        }
        if (curEquipInfo.isHas) {
            applyBtnText.text = this.GetSystem<II18NSystem>().GetText("Apply");
        } else {
            applyBtnText.text = this.GetSystem<II18NSystem>().GetText("Buy");
        }
    }

    private void OnBuyEquip(BuyEquipEvent e) {
        applyBtnText.text = this.GetSystem<II18NSystem>().GetText("Apply");
        curEquipInfo.isHas = true;
        for (int i = 0; i < changeCarItems.Count; i++) {
            changeCarItems[i].SetUnlockState();
        }
    }

    private void OnApplyEquip(ApplyEquipEvent e) {
        applyBtn.interactable = false;
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
