using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
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
                this.SendCommand(new ShowInfoConfirmAlertCommand(content:
                    string.Format(this.GetSystem<II18NSystem>().GetText("Does it cost {0} star to buy this avatar"), avatarInfo.star),
                success: () => {
                    this.SendCommand(new BuyAvatarCommand(avatarInfo));
                },
                fail: () => {
                    Debug.Log("放弃购买");
                }));
            } else {
                this.SendCommand(new ShowWarningAlertCommand
                    (string.Format(this.GetSystem<II18NSystem>().GetText("This head needs {0} star"), avatarInfo.star)));
            }
        }
    }

    private void OnUnlockAvatar(UnlockAvatarEvent e) {
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
    }

    public void SetContent(AvatarInfo info) {
        avatarInfo = info;
        this.GetSystem<IAddressableSystem>().GetAvatarResource(avatarInfo.aid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                avatarImage.sprite = Instantiate(obj.Result, transform, false);
            }
        });
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
        this.RegisterEvent<UnlockAvatarEvent>(OnUnlockAvatar).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
