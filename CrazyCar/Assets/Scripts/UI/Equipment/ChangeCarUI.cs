using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class ChangeCarUI : MonoBehaviour, IController {
    public Text nameText;
    public Text starText;
    public Text massText;
    public Text maxSpeedText;
    public Text speedText;
    public Button closeBtn;
    public Button applyBtn;
    public Text applyBtnText;
    public RawImage showRawImage;
    public ChangeCarItem changeCarItem;
    public Transform itemParent;

    private EquipInfo curEquipInfo;
    private List<ChangeCarItem> changeCarItems = new List<ChangeCarItem>();

    private void OnEnable() {
        this.GetModel<IGameControllerModel>().LoadingUI.ShowLoading();
        StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
            RequestUrl.equipUrl,
        token: this.GetModel<IGameControllerModel>().Token.Value,
        succData: (data) => {
            this.GetSystem<IDataParseSystem>().ParseEquipRes(data, SetItemContent);       
        }));
    }

    private void SetItemContent() {
        Util.DeleteChildren(itemParent);
        changeCarItems.Clear();
        foreach (var kvp in this.GetModel<IEquipModel>().EquipDic) {
            if (kvp.Value.isShow) {
                ChangeCarItem item = Instantiate(changeCarItem);
                item.transform.SetParent(itemParent, false);
                item.SetContent(kvp.Value);
                changeCarItems.Add(item);
            }
        }

        curEquipInfo = this.GetModel<IEquipModel>().EquipDic[this.GetModel<IUserModel>().EquipInfo.Value.eid];
        OnChangeCarEvent(new ChangeCarEvent(curEquipInfo));
        this.GetSystem<IIndexCarSystem>().MPlayerStyle.ChangeEquip(curEquipInfo.eid, curEquipInfo.rid);
    }

    private void Start() {
        applyBtn.interactable = false;
        applyBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (curEquipInfo.isHas) {
                this.SendCommand(new ApplyEquipCommand(curEquipInfo));
            } else {
                this.SendCommand(new BuyEquipCommand(curEquipInfo));
            }  
        });

        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayCloseSound();
            this.SendCommand(new HidePageCommand(UIPageType.ChangeCarUI));           
        });

        this.RegisterEvent<ChangeCarEvent>(OnChangeCarEvent);
        this.RegisterEvent<BuyEquipEvent>(OnBuyEquip);
        this.RegisterEvent<ApplyEquipEvent>(OnApplyEquip);
    }

    private void OnChangeCarEvent(ChangeCarEvent e) {
        curEquipInfo = e.mEquipInfo;
        nameText.text = curEquipInfo.equipName;
        starText.text = curEquipInfo.star.ToString();
        massText.text = curEquipInfo.mass.ToString();
        speedText.text = curEquipInfo.speed.ToString();
        maxSpeedText.text = curEquipInfo.maxSpeed.ToString();
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

    private void OnDestroy() {
        this.UnRegisterEvent<ChangeCarEvent>(OnChangeCarEvent);
        this.UnRegisterEvent<BuyEquipEvent>(OnBuyEquip);
        this.UnRegisterEvent<ApplyEquipEvent>(OnApplyEquip);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
