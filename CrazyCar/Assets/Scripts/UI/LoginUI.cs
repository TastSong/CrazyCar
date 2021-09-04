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
    public Toggle rememberToggle; 
    public Button loginBtn;
    public Button registerBtn;

    private void Start() {
        rememberToggle.isOn = PlayerPrefs.GetInt(PrefKeys.rememberPassword.ToString()) == 1;
        if (rememberToggle.isOn) {
            userNameInput.text = PlayerPrefs.GetString(PrefKeys.userName);
            passwordInput.text = PlayerPrefs.GetString(PrefKeys.password);
        } 

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
            StartCoroutine(Util.POSTHTTP(url : NetworkController.manager.HttpBaseUrl + RequestUrl.loginUrl,
                data : bytes, fatchData : (data) => {
                    GameController.manager.loginManager.ParseLoginData(data);
                }, code : (code) => {
                    if (code == 200) {
                        GameController.manager.warningAlert.Show(text: "登录成功", callback: () => {
                            PlayerPrefs.SetString(PrefKeys.userName, userNameInput.text);
                            PlayerPrefs.SetString(PrefKeys.password, passwordInput.text);
                            PlayerPrefs.SetInt(PrefKeys.rememberPassword.ToString(), (rememberToggle.isOn ? 1 : 0));

                            Util.LoadingScene(SceneID.Index);
                        });
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
            Util.DelayExecuteWithSecond(0.25f, () => {
                gameObject.SetActiveFast(false);
            });
        });
    }
}
