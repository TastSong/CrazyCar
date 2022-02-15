using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class LoginUI : MonoBehaviour, IController {
    public InputField userNameInput;
    public InputField passwordInput;
    public Toggle rememberToggle; 
    public Button loginBtn;
    public Button registerBtn;

    public Image image;

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
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (userNameInput.text == "" || passwordInput.text == "") {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Please enter the content"));
                return;
            }

            this.SendCommand(new LoginCommand(userNameInput.text, passwordInput.text, rememberToggle.isOn));
        });

        registerBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new OpenRegisterCommand());
            gameObject.SetActiveFast(false);
        });

        LoadAsset();
    }

    public void LoadAsset() {
        this.GetSystem<IAddressableSystem>().GetAvatarResource(1, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                image.sprite = Instantiate(obj.Result, transform, false);
            }
        });
    }
}
