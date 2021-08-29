using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class LoginUI : MonoBehaviour {
    public InputField userNameInput;
    public InputField passwordInput;
    public Button loginBtn;
    public Button registerBtn;

    private void Start() {
        loginBtn.onClick.AddListener(() => {
            if (userNameInput.text == "" || passwordInput.text == "") {
                GameController.manager.warningAlert.Show("请输入内容");
                return;
            }

            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("UserName");
            w.Write(userNameInput.text);
            w.WritePropertyName("Password");
            w.Write(passwordInput.text);
            w.WriteObjectEnd();
            Debug.Log("++++++ " + sb.ToString());
            byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
            StartCoroutine(Util.POSTHTTP(NetworkController.manager.HttpBaseUrl + RequestUrl.loginUrl,
                bytes, (data) => { },(code) => {
                    if (code == 200) {
                        GameController.manager.warningAlert.Show("登录成功");
                    } else if (code == 423) {
                        GameController.manager.warningAlert.Show("密码错误");
                    } else if (code == 404) {
                        GameController.manager.warningAlert.Show("用户未注册");
                    } else {
                        GameController.manager.warningAlert.Show("未知错误");
                    }
                }));
        });

        registerBtn.onClick.AddListener(() => {
            GameController.manager.tinyMsgHub.Publish(new RegisterUIMessage());
        });
    }
}
