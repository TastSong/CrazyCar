using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;
using TFramework;

public class AvatarItem : MonoBehaviour, IPointerClickHandler, IController {
    public Image avatarImage;
    public Image lockImage;

    private AvatarInfo avatarInfo;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    public void OnPointerClick(PointerEventData eventData) {
        if (avatarInfo.isHas) {
            Debug.Log("点击头像 = " + avatarInfo.aid);
            GameController.manager.tinyMsgHub.Publish(new AvatarUIMessage(avatarInfo.aid));
        } else {
            if (this.GetModel<IUserModel>().Star.Value > avatarInfo.star) {
                GameController.manager.infoConfirmAlert.ShowWithText(content: string.Format(I18N.manager.GetText("Does it cost {0} star to buy this avatar"), avatarInfo.star),
                success: () => {
                    StringBuilder sb = new StringBuilder();
                    JsonWriter w = new JsonWriter(sb);
                    w.WriteObjectStart();
                    w.WritePropertyName("aid");
                    w.Write(avatarInfo.aid);
                    w.WriteObjectEnd();
                    Debug.Log("++++++ " + sb.ToString());
                    byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
                    StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl + RequestUrl.buyAvatarUrl,
                    data: bytes,
                    token: GameController.manager.token,
                    succData: (data) => {
                        this.GetModel<IUserModel>().Star.Value = (int)data["star"];
                        avatarInfo.isHas = true;
                        this.GetModel<IUserModel>().AvatarNum.Value++;
                        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
                    }));
                }, 
                fail: () => {
                    Debug.Log("放弃购买");
                });
            } else {
                GameController.manager.warningAlert.ShowWithText(string.Format(I18N.manager.GetText("This head needs {0} star"), avatarInfo.star));
            }           
        }
    }

    public void SetContent(AvatarInfo info) {
        avatarInfo = info;
        avatarImage.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(avatarInfo.aid);
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
    }
}
