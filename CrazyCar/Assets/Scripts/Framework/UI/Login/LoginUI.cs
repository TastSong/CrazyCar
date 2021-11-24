using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class LoginUI : MonoBehaviour, IController {
    public InputField userNameInput;
    public InputField passwordInput;
    public Toggle rememberToggle; 
    public Button loginBtn;
    public Button registerBtn;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void Start() {
        rememberToggle.isOn = this.GetModel<IUserModel>().RememberPassword == 1;
        if (rememberToggle.isOn) {
            userNameInput.text = this.GetModel<IUserModel>().Name.Value;
            passwordInput.text = this.GetModel<IUserModel>().Password;
        } 

        loginBtn.onClick.AddListener(() => {
            if (userNameInput.text == "" || passwordInput.text == "") {
                GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Please enter the content"));
                return;
            }

            this.SendCommand(new LoginCommand(userNameInput.text, passwordInput.text, rememberToggle.isOn));
        });

        registerBtn.onClick.AddListener(() => {
            this.SendCommand(new OpenRegisterCommand());
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                gameObject.SetActiveFast(false);
            });
        });
    }
}
