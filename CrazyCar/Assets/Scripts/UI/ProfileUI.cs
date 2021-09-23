using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;

public class ProfileUI : MonoBehaviour {
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

    private void OnEnable() {
        avatarImage.sprite = GameController.manager.resourceManager.GetAvatarResource(GameController.manager.userInfo.aid);
        vipImage.gameObject.SetActiveFast(GameController.manager.userInfo.isVIP);
        userNameInput.text = GameController.manager.userInfo.name;
        passwordInput.text = PlayerPrefs.GetString(PrefKeys.password);
        starText.text = GameController.manager.userInfo.star.ToString();
        travelTimesText.text = GameController.manager.userInfo.travelTimes.ToString();
        avatarText.text = GameController.manager.userInfo.avatarNum.ToString();
        mapsText.text = GameController.manager.userInfo.mapNum.ToString(); 
    }

    private void Start() {
        closeBtn.onClick.AddListener(() => {
            UIManager.manager.HidePage(UIPageType.ProfileUI);
        });
        userNameBtn.onClick.AddListener(() => {
            if (userNameInput.text == GameController.manager.userInfo.name) {
                GameController.manager.warningAlert.ShowWithText("与原昵称一致");
            } else {

            }
        });
        passwordBtn.onClick.AddListener(() => {
            if (passwordInput.text == PlayerPrefs.GetString(PrefKeys.password)) {
                GameController.manager.warningAlert.ShowWithText("与原密码一致");
            } else {

            }
        });
    }
}
