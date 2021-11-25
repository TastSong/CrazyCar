using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;

public class ProfileUI : MonoBehaviour, IController {
    public Button closeBtn;
    public Image avatarImage;
    public Image vipImage;
    public InputField userNameInput;
    public Button userNameBtn;
    public InputField passwordInput;
    public Button passwordBtn;
    public Text travelTimesText;
    public Text avatarText;
    public Text mapsText;
    public Text starText;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void OnEnable() {
        UserInfo userInfo = this.GetModel<IUserModel>().GetUserInfoPart();       
        vipImage.gameObject.SetActiveFast(userInfo.isVIP);
        userNameInput.text = userInfo.name;
        starText.text = userInfo.star.ToString();
        travelTimesText.text = userInfo.travelTimes.ToString();
        avatarText.text = userInfo.avatarNum.ToString();
        mapsText.text = userInfo.mapNum.ToString();

        avatarImage.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid.Value);
        passwordInput.text = this.GetModel<IUserModel>().Password.Value;
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            this.SendCommand(new HidePageCommand(UIPageType.ProfileUI));
        });
        userNameBtn.onClick.AddListener(() => {
            if (userNameInput.text == this.GetModel<IUserModel>().Name.Value) {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(I18N.manager.GetText("Consistent with the original nickname"));
            } else {

            }
        });
        passwordBtn.onClick.AddListener(() => {
            if (passwordInput.text == this.GetModel<IUserModel>().Password.Value) {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(I18N.manager.GetText("Consistent with the original password"));
            } else if (passwordInput.text.Length < 6) {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(I18N.manager.GetText("The password must contain more than six characters"));
            } else {
                this.SendCommand(new ChangePasswordCommand(passwordInput.text));
            }
        });
    }
}
