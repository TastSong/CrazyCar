using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

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
        var userModel = this.GetModel<IUserModel>();
        this.GetSystem<INetworkSystem>().GetUserInfo(userModel.Uid, (data) => {
            userModel.SetUserInfoPart(data);

            vipImage.gameObject.SetActiveFast(userModel.IsVIP);
            userNameInput.text = userModel.Name;
            starText.text = userModel.Star.ToString();
            travelTimesText.text = userModel.TravelTimes.ToString();
            avatarText.text = userModel.AvatarNum.ToString();
            mapsText.text = userModel.MapNum.ToString();

            this.GetSystem<IAddressableSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid, (obj) => {
                if (obj.Status == AsyncOperationStatus.Succeeded) {
                    avatarImage.sprite = Instantiate(obj.Result, transform, false);
                }
            });
            passwordInput.text = userModel.Password.Value;
        });
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayCloseSound();
            this.SendCommand(new HidePageCommand(UIPageType.ProfileUI));
        });
        userNameBtn.onClick.AddListener(() => {
            if (userNameInput.text == this.GetModel<IUserModel>().Name.Value) {
                this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Consistent with the original nickname")));
            } else {

            }
        });
        passwordBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (passwordInput.text == this.GetModel<IUserModel>().Password.Value) {
                this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Consistent with the original password")));
            } else if (passwordInput.text.Length < 6) {
                this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("The password must contain more than six characters")));
            } else {
                this.SendCommand(new ChangePasswordCommand(passwordInput.text));
            }
        });
    }
}
