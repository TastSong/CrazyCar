using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;

public class AvatarItem : MonoBehaviour, IPointerClickHandler {
    public Image avatarImage;
    public Image lockImage;

    private AvatarInfo avatarInfo; 

    public void OnPointerClick(PointerEventData eventData) {
        if (avatarInfo.isHas) {
            Debug.Log("点击头像 = " + avatarInfo.aid);
            GameController.manager.tinyMsgHub.Publish(new AvatarUIMessage(avatarInfo.aid));
        } else {
            if (GameController.manager.userInfo.star > avatarInfo.star) {
                GameController.manager.infoConfirmAlert.ShowWithText(content: "是否花费" + avatarInfo.star + "颗星购买此头像",
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
                        GameController.manager.userInfo.star = (int)data["star"];
                        avatarInfo.isHas = true;
                        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
                    }));
                }, 
                fail: () => {
                    Debug.Log("放弃购买");
                });
            } else {
                GameController.manager.warningAlert.ShowWithText("此头像需要" + avatarInfo.star + "颗星");
            }           
        }
    }

    public void SetContent(AvatarInfo info) {
        avatarInfo = info;
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(avatarInfo.aid);
        lockImage.gameObject.SetActiveFast(!avatarInfo.isHas);
    }
}
