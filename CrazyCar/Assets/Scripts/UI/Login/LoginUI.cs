
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;

public class LoginUI : MonoBehaviour, IController {
    public InputField userNameInput;
    public InputField passwordInput;
    public Toggle rememberToggle; 
    public Toggle autoLoginToggle; 
    public Button loginBtn;
    public Button registerBtn;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void Start() {
        rememberToggle.isOn = this.GetModel<IUserModel>().RememberPassword == 1;
        autoLoginToggle.isOn = this.GetModel<IUserModel>().AutoLogin == 1;
        if (rememberToggle.isOn) {
            userNameInput.text = this.GetModel<IUserModel>().Name.Value;
            passwordInput.text = this.GetModel<IUserModel>().Password;
        }
        
        rememberToggle.onValueChanged.AddListener(v => {
            if (!v)
            {
                autoLoginToggle.isOn = false;
            }
        });
        
        autoLoginToggle.onValueChanged.AddListener(v => {
            if (v)
            {
                rememberToggle.isOn = true;
            }
        });

        loginBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            Login();
        });

        registerBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new OpenRegisterCommand());
            gameObject.SetActiveFast(false);
        });

        if (autoLoginToggle.isOn) {
            Login();
        }
    }

    private void Login() {
        if (userNameInput.text == "" || passwordInput.text == "") {
            this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Please enter the content")));
            return;
        }

        this.SendCommand(new LoginCommand(userNameInput.text, passwordInput.text, rememberToggle.isOn, autoLoginToggle.isOn));
    }
}
