using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class AvatarUI : MonoBehaviour {
    public Image curAvatar;
    public Text curAvatarName;
    public Button applyBtn;
    public AvatarItem avatarItem;

    private TinyMessageSubscriptionToken avatarToken;

    private void OnEnable() {
        //StartCoroutine(Util.POSTHTTP(NetworkController.manager.HttpBaseUrl + RequestUrl.loginUrl,
        //        bytes, (data) => {
        //            Debug.Log(data.ToJson());
        //            int code = (int)data["code"];
        //            if (code == 200) {
        //                GameController.manager.warningAlert.Show("登录成功");
        //            } else if (code == 423) {
        //                GameController.manager.warningAlert.Show("密码错误");
        //            } else if (code == 404) {
        //                GameController.manager.warningAlert.Show("用户未注册");
        //            } else {
        //                GameController.manager.warningAlert.Show("未知错误");
        //            }
        //        }));
    }

    private void Start() {
        
    }
}
