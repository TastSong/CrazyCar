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

    private async void OnEnable() {
        avatarModel = this.GetModel<IAvatarModel>();
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.avatarUrl, this.GetModel<IGameModel>().Token.Value);
        if (result.serverCode == 200) {
            curAid = this.GetModel<IUserModel>().Aid.Value;
            await this.GetSystem<IDataParseSystem>().ParseAvatarRes(result.serverData);
            UpdataUI();
        }
    }

    private async void UpdataUI() {
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(Util.GetAvatarUrl(curAid));
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            curAvatar.sprite = Instantiate(obj.Result, transform, false);
        }
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
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            this.SendCommand(new ApplyAvatarCommand(curAid));
        });

        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            UIController.Instance.HidePage(UIPageType.AvatarUI);
            this.SendCommand<UpdateHomepageUICommand>();
        });

        this.RegisterEvent<UpdataAvatarUIEvent>(OnUpdataAvatarUIEvent).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private async void OnUpdataAvatarUIEvent(UpdataAvatarUIEvent e) {
        if (e.aid == this.GetModel<IUserModel>().Aid) {
            applyBtn.interactable = false;
        } else {
            applyBtn.interactable = true;
        }
        curAvatarName.text = avatarModel.AvatarDic[e.aid].name;
        curAid = e.aid;
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(Util.GetAvatarUrl(e.aid));
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            curAvatar.sprite = Instantiate(obj.Result, transform, false);
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
