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
        UserInfo userInfo = this.SendQuery(new UserInfoQuery());
        vipImage.gameObject.SetActiveFast(userInfo.isVIP);
        userNameInput.text = userInfo.name;
        starText.text = userInfo.star.ToString();
        travelTimesText.text = userInfo.travelTimes.ToString();
        avatarText.text = userInfo.avatarNum.ToString();
        mapsText.text = userInfo.mapNum.ToString();

        this.GetSystem<IAddressableSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                avatarImage.sprite = Instantiate(obj.Result, transform, false);
            }
        });
        passwordInput.text = this.GetModel<IUserModel>().Password.Value;
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayCloseSound();
            this.SendCommand(new HidePageCommand(UIPageType.ProfileUI));
        });
        userNameBtn.onClick.AddListener(() => {
            if (userNameInput.text == this.GetModel<IUserModel>().Name.Value) {
                this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Consistent with the original nickname")));
            } else {

            }
        });
        passwordBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (passwordInput.text == this.GetModel<IUserModel>().Password.Value) {
                this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Consistent with the original password")));
            } else if (passwordInput.text.Length < 6) {
                this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("The password must contain more than six characters")));
            } else {
                this.SendCommand(new ChangePasswordCommand(passwordInput.text));
            }
        });
    }
}
