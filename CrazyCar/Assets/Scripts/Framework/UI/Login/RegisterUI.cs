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
            this.SendCommand(new OpenLoginCommand());
            Util.DelayExecuteWithSecond(Util.btnASTime, () => {
                gameObject.SetActiveFast(false);
            });
        });



        registerBtn.onClick.AddListener(() => {
            if (userNameInput.text == "" || passwordInput.text == "") {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(I18N.manager.GetText("Please enter the content"));
                return;
            }

            if (passwordInput.text.Length < 6) {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(I18N.manager.GetText("The password must contain more than six characters"));
                return;
            }

            this.SendCommand(new RegisterCommand(userNameInput.text, passwordInput.text));
        });     
    }
}
