using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Cysharp.Threading.Tasks;
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
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.LoadingUI, UILevelType.Alart));
            curAid = this.GetModel<IUserModel>().Aid.Value;
            await this.GetSystem<IDataParseSystem>().ParseAvatarRes(result.serverData);
            await UpdataUI();
            UIController.Instance.HidePage(UIPageType.LoadingUI);
        }
    }

    private async UniTask UpdataUI() {
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(Util.GetAvatarUrl(curAid));
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            curAvatar.sprite = Instantiate(obj.Result, transform, false);
        }
        curAvatarName.text = avatarModel.AvatarDic[curAid].name;
        Util.DeleteChildren(avatarItemParent);
        // 创建一个任务列表来保存所有的异步任务
        List<UniTask> tasks = new List<UniTask>();
        foreach (var kvp in avatarModel.AvatarDic) {
            AvatarItem item = Instantiate(avatarItem);
            item.transform.SetParent(avatarItemParent, false);
            tasks.Add(item.SetContent(kvp.Value));
        }
        // 并行执行所有任务并等待它们全部完成
        await UniTask.WhenAll(tasks);
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
