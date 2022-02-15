using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class AvatarUI : MonoBehaviour, IController {
    public Image curAvatar;
    public Text curAvatarName;
    public Button applyBtn;
    public AvatarItem avatarItem;
    public Transform avatarItemParent;
    public Button closeBtn;

    private IAvatarModel avatarModel;
    private int curAid = 0;

    private void OnEnable() {
        avatarModel = this.GetModel<IAvatarModel>();
        this.GetModel<IGameControllerModel>().LoadingUI.ShowLoading();
        StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.avatarUrl,
        token: this.GetModel<IGameControllerModel>().Token.Value,
        succData: (data) => {
            curAid = this.GetModel<IUserModel>().Aid.Value;
            this.GetSystem<IDataParseSystem>().ParseAvatarRes(data, UpdataUI);
        }));
    }

    private void UpdataUI() {
        this.GetSystem<IAddressableSystem>().GetAvatarResource(curAid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                curAvatar.sprite = Instantiate(obj.Result, transform, false);
            }
        });
        curAvatarName.text = avatarModel.AvatarDic[curAid].name;
        Util.DeleteChildren(avatarItemParent);
        foreach (var kvp in avatarModel.AvatarDic) {
            AvatarItem item = Instantiate(avatarItem);
            item.transform.SetParent(avatarItemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        applyBtn.interactable = false;
        applyBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new ApplyAvatarCommand(curAid));
        });

        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new HidePageCommand(UIPageType.AvatarUI));
            this.SendCommand<UpdateHomepageUICommand>();
        });

        this.RegisterEvent<UpdataAvatarUIEvent>(OnUpdataAvatarUIEvent);
    }

    private void OnUpdataAvatarUIEvent(UpdataAvatarUIEvent e) {
        if (e.aid == this.GetModel<IUserModel>().Aid) {
            applyBtn.interactable = false;
        } else {
            applyBtn.interactable = true;
        }
        this.GetSystem<IAddressableSystem>().GetAvatarResource(e.aid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                curAvatar.sprite = Instantiate(obj.Result, transform, false);
            }
        });
        curAvatarName.text = avatarModel.AvatarDic[e.aid].name;
        curAid = e.aid;
    }

    private void OnDestroy() {
        this.UnRegisterEvent<UpdataAvatarUIEvent>(OnUpdataAvatarUIEvent);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
