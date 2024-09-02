using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class HomepageUI : MonoBehaviour, IController {
    public Button avatarBtn;
    public Image avatarImage;
    public Image vipImage;
    public Button joinGameBtn;
    public Text starText;
    public Text nickNameText;
    public Button optionOpenBtn;
    public Button optionCloseBtn;
    public GameObject optionBtnsGO;
    public Button infoBtn;
    public Button questionBtn;
    public Button exitBtn;
    public Button psrofileBtn;
    public Button changeCarBtn;
    public Button rankBtn;
    public Button settingBtn;
    public Button matchBtn;

    private void Start() {
        nickNameText.text = this.GetModel<IUserModel>().Name.Value;

        avatarBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.AvatarUI));
        });

        joinGameBtn.onClick.AddListener(() => {
            if (!this.GetModel<IUserModel>().IsCompleteGuidance) {
                this.GetModel<IUserModel>().IsCompleteGuidance.Value = true;
            }
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.TimeTrialDetailUI));
        });
        matchBtn.onClick.AddListener(async () => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                                                                          RequestUrl.matchMapUrl, token: this.GetModel<IGameModel>().Token.Value);
            if (result.serverCode == 200) {
                this.GetSystem<IDataParseSystem>().ParseMatchMapData(result.serverData);
                if (this.GetModel<IMatchModel>().MatchDic.Count > 0) {
                    UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.MatchRoomUI));
                } else {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("No game");
                    UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                }
            }
        });

        //--------- option ---------
        optionBtnsGO.SetActiveFast(false);
        optionCloseBtn.gameObject.SetActiveFast(false);
        optionOpenBtn.gameObject.SetActiveFast(true);
        optionOpenBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            optionBtnsGO.SetActiveFast(true);
            optionOpenBtn.gameObject.SetActiveFast(false);
            optionCloseBtn.gameObject.SetActiveFast(true);
        });
        optionCloseBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Close);
            optionBtnsGO.SetActiveFast(false);
            Util.DelayExecuteWithSecond(0.25f, () => {
                optionCloseBtn.gameObject.SetActiveFast(false);
                optionOpenBtn.gameObject.SetActiveFast(true);
            });
        });
        infoBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            InfoConfirmInfo info = new InfoConfirmInfo(title: "Version", content: "当前版本为：" + Application.version);
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
        });
        questionBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            InfoConfirmInfo info = new InfoConfirmInfo(title: "Content", content: "作者：TastSong 邮箱地址：TastSong@163.com");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
        });
        exitBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            Application.Quit();
        });
        //--------- option ---------

        // --------- Bottom Btns ---------
        psrofileBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.ProfileUI));
        });
        settingBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.SettingsUI));
        });
        rankBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.RankUI));
        });
        changeCarBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.ChangeCarUI));
            UIController.Instance.HidePage(UIPageType.HomepageUI);
        });
        // --------- Bottom Btns ---------

        OnUpdataUI(new UpdateHomepageUIEvent());
        this.RegisterEvent<UpdateHomepageUIEvent>(OnUpdataUI).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void ShowStandAlone() {
        WarningAlertInfo alertInfo = new WarningAlertInfo("This function is unavailable in single-machine mode");
        UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
    }

    private async void OnUpdataUI(UpdateHomepageUIEvent e) {
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<Sprite>(Util.GetAvatarUrl(this.GetModel<IUserModel>().Aid));
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            avatarImage.sprite = Instantiate(obj.Result, transform, false);
        }
        starText.text = this.GetModel<IUserModel>().Star.Value.ToString();
        vipImage.gameObject.SetActiveFast(this.GetModel<IUserModel>().IsVIP.Value);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}

