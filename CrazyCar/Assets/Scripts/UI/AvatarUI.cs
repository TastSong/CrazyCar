using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using TinyMessenger;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class AvatarUI : MonoBehaviour {
    public Image curAvatar;
    public Text curAvatarName;
    public Button applyBtn;
    public AvatarItem avatarItem;
    public Transform avatarItemParent;
    public Button closeBtn;

    private TinyMessageSubscriptionToken avatarToken;
    private string baseUrl = "Avatar/";

    private void OnEnable() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(GameController.manager.userName);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        StartCoroutine(Util.POSTHTTP(url : NetworkController.manager.HttpBaseUrl + RequestUrl.avatarUrl,
            data : bytes,
            fatchData : (data) => {
                GameController.manager.avatarManager.ParseAvatarRes(data, UpdataUI);
            }));
    }

    private void UpdataUI() {
        curAvatar.sprite = Resources.Load<Sprite>(baseUrl + GameController.manager.avatarManager.curAid.ToString());
        curAvatarName.text = GameController.manager.avatarManager.avatarDic[GameController.manager.avatarManager.curAid].name;
        Util.DeleteChildren(avatarItemParent);
        foreach (var kvp in GameController.manager.avatarManager.avatarDic) {
            AvatarItem item = Instantiate(avatarItem);
            item.transform.SetParent(avatarItemParent, false);
            item.SetContent(kvp.Value);
        }
    }

    private void Start() {
        applyBtn.onClick.AddListener(() => {

        });

        closeBtn.onClick.AddListener(() => {
            UIManager.instance.HidePage(UIPageType.AvatarUI);
        });

        avatarToken = GameController.manager.tinyMsgHub.Subscribe<AvatarUIMessage>((data) => {
            curAvatar.sprite = Resources.Load<Sprite>(baseUrl + data.aid);
            curAvatarName.text = GameController.manager.avatarManager.avatarDic[data.aid].name;
        });
    }

    private void OnDestroy() {
        GameController.manager.tinyMsgHub.Unsubscribe(avatarToken);
    }
}
