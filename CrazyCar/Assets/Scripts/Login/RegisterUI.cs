using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class RegisterUI : MonoBehaviour, IController {
    public InputField userNameInput;
    public InputField passwordInput;
    public Button registerBtn;
    public Button closeBtn;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            GameController.manager.tinyMsgHub.Publish(new LoginUIMessage());
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                gameObject.SetActiveFast(false);
            });
        });



        registerBtn.onClick.AddListener(() => {
            if (userNameInput.text == "" || passwordInput.text == "") {
                GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Please enter the content"));
                return;
            }

            if (passwordInput.text.Length < 6) {
                GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("The password must contain more than six characters"));
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
                data : bytes, succData : (data) => {
                    GameController.manager.token = (string)data["token"];
                    GameController.manager.userInfo = this.GetModel<IPlayerInfoModel>().ParsePlayerInfoData(data);
                    this.GetModel<IUserModel>().SetUserInfoPart(this.GetModel<IPlayerInfoModel>().ParsePlayerInfoData(data));
                    this.GetModel<IUserModel>().Password.Value = passwordInput.text;
                }, code : (code) => {
                    if (code == 200) {
                        GameController.manager.warningAlert.ShowWithText(text : I18N.manager.GetText("Registration Successful"), callback : () => {
                            Util.LoadingScene(SceneID.Index);
                        });
                    } else if (code == 423) {
                        GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("User registered"));
                    } else if (code == 425) {
                        GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Incorrect information format"));
                    } else {
                        GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Unknown Error"));
                    }
                }));
        });     
    }
}
