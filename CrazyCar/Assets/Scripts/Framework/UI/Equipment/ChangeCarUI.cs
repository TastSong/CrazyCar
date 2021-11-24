using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

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
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
            RequestUrl.equipUrl,
        token: GameController.manager.token,
        succData: (data) => {
            this.GetModel<IEquipModel>().ParseEquipRes(data, SetItemContent);       
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
        this.GetSystem<IIndexCarSystem>().MPlayerStyle.ChangeEquip(EquipType.Car, curEquipInfo.eid, curEquipInfo.rid);
    }

    private void Start() {
        applyBtn.interactable = false;
        applyBtn.onClick.AddListener(() => {
            if (curEquipInfo.isHas) {
                this.SendCommand(new ApplyEquipCommand(curEquipInfo));
            } else {
                this.SendCommand(new BuyEquipCommand(curEquipInfo));
            }  
        });

        closeBtn.onClick.AddListener(() => {
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                this.SendCommand(new HidePageCommand(UIPageType.ChangeCarUI));
            });
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
            applyBtnText.text = I18N.manager.GetText("Apply");
        } else {
            applyBtnText.text = I18N.manager.GetText("Buy");
        }
    }

    private void OnBuyEquip(BuyEquipEvent e) {
        applyBtnText.text = I18N.manager.GetText("Apply");
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
