using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TinyMessenger;

public class ChangeCarUI : MonoBehaviour {
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
    private TinyMessageSubscriptionToken changeCarToken;
    private List<ChangeCarItem> changeCarItems = new List<ChangeCarItem>();

    private void OnEnable() {
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
            RequestUrl.equipUrl,
        token: GameController.manager.token,
        succData: (data) => {
            GameController.manager.equipManager.ParseEquipRes(data, SetItemContent);       
        }));
    }

    private void SetItemContent() {
        Util.DeleteChildren(itemParent);
        changeCarItems.Clear();
        foreach (var kvp in GameController.manager.equipManager.equipDic) {
            if (kvp.Value.isShow) {
                ChangeCarItem item = Instantiate(changeCarItem);
                item.transform.SetParent(itemParent, false);
                item.SetContent(kvp.Value);
                changeCarItems.Add(item);
            }
        }

        curEquipInfo = GameController.manager.equipManager.equipDic[GameController.manager.userInfo.equipInfo.eid];
        UpdateUI(curEquipInfo);
        IndexCar.manager.accessoryChanger.SetGear(curEquipInfo.eid.ToString(), curEquipInfo.rid);
    }

    private void Start() {
        applyBtn.interactable = false;
        applyBtn.onClick.AddListener(() => {
            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("eid");
            w.Write(curEquipInfo.eid);
            w.WriteObjectEnd();
            Debug.Log("++++++ " + sb.ToString());
            byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
            if (curEquipInfo.isHas) {
                StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
                    RequestUrl.changeEquipUrl,
                data: bytes, token: GameController.manager.token,
                succData: (data) => {
                    GameController.manager.userInfo.equipInfo = GameController.manager.equipManager.equipDic[(int)data["eid"]];
                    GameController.manager.warningAlert.ShowWithText("设置成功");
                },
                code: (code) => {
                    if (code == 423) {
                        GameController.manager.warningAlert.ShowWithText("未拥有");
                    }
                }));
            } else {
                if (GameController.manager.userInfo.star > curEquipInfo.star) {
                    GameController.manager.infoConfirmAlert.ShowWithText(content: "是否花费" + curEquipInfo.star + "颗星购买此装备",
                    success: () => { 
                        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + 
                            RequestUrl.buyEquipUrl,
                        data: bytes,
                        token: GameController.manager.token,
                        succData: (data) => {
                            GameController.manager.userInfo.star = (int)data["star"];
                            applyBtnText.text = "Apply";
                            curEquipInfo.isHas = true;
                            for (int i = 0; i < changeCarItems.Count; i++) {
                                changeCarItems[i].SetUnlockState();
                            }
                        }));
                    },
                    fail: () => {
                        Debug.Log("放弃购买");
                    });
                } else {
                    GameController.manager.warningAlert.ShowWithText("此装备需要" + curEquipInfo.star + "颗星");
                }
            }
            
            
        });

        closeBtn.onClick.AddListener(() => {
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                UIManager.manager.HidePage(UIPageType.ChangeCarUI);
            });
        });

        changeCarToken = GameController.manager.tinyMsgHub.Subscribe<ChangeCarMsg>((data) => {
            UpdateUI(data.equipInfo);
        });
    }

    private void UpdateUI(EquipInfo info) {
        curEquipInfo = info;
        nameText.text = curEquipInfo.equipName;
        starText.text = curEquipInfo.star.ToString();
        massText.text = curEquipInfo.mass.ToString();
        speedText.text = curEquipInfo.speed.ToString();
        maxSpeedText.text = curEquipInfo.maxSpeed.ToString();
        for (int i = 0; i < changeCarItems.Count; i++) {
            changeCarItems[i].SetSelectState(changeCarItems[i].equipInfo.eid == curEquipInfo.eid);
        }
        if (curEquipInfo.eid == GameController.manager.userInfo.equipInfo.eid) {
            applyBtn.interactable = false;
        } else {
            applyBtn.interactable = true;
        }
        if (info.isHas) {
            applyBtnText.text = "Apply";
        } else {
            applyBtnText.text = "buy";
        }
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(changeCarToken);
    }
}
