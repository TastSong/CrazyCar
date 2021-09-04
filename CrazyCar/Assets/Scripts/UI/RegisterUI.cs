using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class RegisterUI : MonoBehaviour
{
    public InputField userNameInput;
    public InputField passwordInput;
    public Button registerBtn;
    public Button closeBtn;

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            GameController.manager.tinyMsgHub.Publish(new LoginUIMessage());
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                gameObject.SetActiveFast(false);
            });
        });



        registerBtn.onClick.AddListener(() => {
            if (userNameInput.text == "" || passwordInput.text == "") {
                GameController.manager.warningAlert.Show("请输入内容");
                return;
            }

            if (passwordInput.text.Length < 6) {
                GameController.manager.warningAlert.Show("密码长度应大于六个字符");
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
            StartCoroutine(Util.POSTHTTP(url : NetworkController.manager.HttpBaseUrl + RequestUrl.registerUrl,
                data : bytes, fatchData : (data) => {
                    GameController.manager.loginManager.ParseLoginData(data);
                }, code : (code) => {
                    if (code == 200) {
                        GameController.manager.warningAlert.Show(text : "注册成功", callback : () => {
                            Util.LoadingScene(SceneID.Index);
                        });
                    } else if (code == 423) {
                        GameController.manager.warningAlert.Show("用户已注册");
                    } else if (code == 425) {
                        GameController.manager.warningAlert.Show("信息格式不对");
                    } else {
                        GameController.manager.warningAlert.Show("未知错误");
                    }
                }));
        });     
    }
}
