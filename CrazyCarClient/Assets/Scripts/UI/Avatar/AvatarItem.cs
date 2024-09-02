using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class AvatarItem : MonoBehaviour, IPointerClickHandler, IController {
    public Image avatarImage;
    public Image lockImage;

    private AvatarInfo avatarInfo;

    public void OnPointerClick(PointerEventData eventData) {
        if (avatarInfo.isHas) {
            Debug.Log("点击头像 = " + avatarInfo.aid);
            this.SendCommand(new UpdataAvatarUICommand(avatarInfo.aid));
        } else {
            if (this.GetModel<IUserModel>().Star.Value > avatarInfo.star) {
                InfoConfirmInfo info = new InfoConfirmInfo(content:
                    string.Format(this.GetSystem<II18NSystem>().GetText("Does it cost {0} star to buy this avatar"), avatarInfo.star),
                    success: () => {
                        this.SendCommand(new BuyAvatarCommand(avatarInfo));
                    },
                    fail: () => {
                        Debug.Log("放弃购买");
                    });
                UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
            } else {
                WarningAlertInfo alertInfo = new WarningAlertInfo(string.Format(this.GetSystem<II18NSystem>().GetText("This head needs {0} star"), avatarInfo.star));
                UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
            }
        }
    }

    private void OnUnlockAvatar(UnlockAvatarEvent e) {
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
    }

    public async UniTask SetContent(AvatarInfo info) {
        avatarInfo = info;
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(Util.GetAvatarUrl(avatarInfo.aid));
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            avatarImage.sprite = Instantiate(obj.Result, transform, false);
        }
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
        this.RegisterEvent<UnlockAvatarEvent>(OnUnlockAvatar).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
