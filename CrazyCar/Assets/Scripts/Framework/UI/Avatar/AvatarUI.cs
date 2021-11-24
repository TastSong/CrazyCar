using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

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
        StartCoroutine(Util.POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.avatarUrl,
        token: GameController.manager.token,
        succData: (data) => {
            avatarModel.ParseAvatarRes(data, UpdataUI);
            curAid = this.GetModel<IUserModel>().Aid.Value;
        }));
    }

    private void UpdataUI() {
        curAvatar.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(curAid);
        curAvatarName.text = avatarModel.AvatarDic[curAid].name;
        Util.DeleteChildren(avatarItemParent);
        foreach (var kvp in avatarModel.AvatarDic) {
            AvatarItem item = Instantiate(avatarItem);
            item.transform.SetParent(avatarItemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        applyBtn.onClick.AddListener(() => {
            this.SendCommand(new ApplyAvatarCommand(curAid));
        });

        closeBtn.onClick.AddListener(() => {
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                this.SendCommand(new HidePageCommand(UIPageType.AvatarUI));
                this.SendCommand<UpdateHomepageUICommand>();
            });
        });

        this.RegisterEvent<UpdataAvatarUIEvent>(OnUpdataAvatarUIEvent);
    }

    private void OnUpdataAvatarUIEvent(UpdataAvatarUIEvent e) {
        curAvatar.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(e.aid);
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
