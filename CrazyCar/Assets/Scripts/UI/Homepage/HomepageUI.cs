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
        this.SendCommand<SetGameHelperCommand>(new SetGameHelperCommand(this.GetModel<IUserModel>().IsSuperuser));

        nickNameText.text = this.GetModel<IUserModel>().Name.Value;

        avatarBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            this.SendCommand(new ShowPageCommand(UIPageType.AvatarUI));
        });

        joinGameBtn.onClick.AddListener(() => {
            if (!this.GetModel<IUserModel>().IsCompleteGuidance) {
                this.GetModel<IUserModel>().IsCompleteGuidance.Value = true;
            }
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new ShowPageCommand(UIPageType.TimeTrialDetailUI));
        });
        matchBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            if (this.GetModel<IUserModel>().IsVIP) {
                //this.SendCommand<CreateMatchCommand>();
                this.SendCommand<ShowPageCommand>(new ShowPageCommand(UIPageType.MatchRoomUI));
            } else {
                this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("This feature is for VIPs only")));
            }
        });

        //--------- option ---------
        optionBtnsGO.SetActiveFast(false);
        optionCloseBtn.gameObject.SetActiveFast(false);
        optionOpenBtn.gameObject.SetActiveFast(true);
        optionOpenBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            optionBtnsGO.SetActiveFast(true);
            optionOpenBtn.gameObject.SetActiveFast(false);
            optionCloseBtn.gameObject.SetActiveFast(true);
        });
        optionCloseBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayCloseSound();
            optionBtnsGO.SetActiveFast(false);
            Util.DelayExecuteWithSecond(0.25f, () => {
                optionCloseBtn.gameObject.SetActiveFast(false);
                optionOpenBtn.gameObject.SetActiveFast(true);
            });
        });
        infoBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand<ShowInfoConfirmAlertCommand>(new ShowInfoConfirmAlertCommand(title: "Version", content: "当前版本为：" + Application.version));
        });
        questionBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand<ShowInfoConfirmAlertCommand>(new ShowInfoConfirmAlertCommand(title: "Content", content: "作者：TastSong 邮箱地址：TastSong@163.com"));
        });
        exitBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            Application.Quit();
        });
        //--------- option ---------

        // --------- Bottom Btns ---------
        psrofileBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            this.SendCommand(new ShowPageCommand(UIPageType.ProfileUI));
        });
        settingBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            this.SendCommand(new ShowPageCommand(UIPageType.SettingsUI));
        });
        rankBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.RankUI));
        });
        changeCarBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlayClickSound();
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.ChangeCarUI));
        });
        // --------- Bottom Btns ---------

        OnUpdataUI(new UpdateHomepageUIEvent());
        this.RegisterEvent<UpdateHomepageUIEvent>(OnUpdataUI);
        this.RegisterEvent<UpdataMatchDetailEvent>(OnUpdataMatchDetail);
    }

    private void OnUpdataMatchDetail(UpdataMatchDetailEvent e) {
        this.SendCommand<SetLoadingUICommand>(new SetLoadingUICommand(true));
        StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
           RequestUrl.matchDetailUrl,
          token: this.GetModel<IGameModel>().Token.Value,
          succData: (data) => {
              this.GetSystem<IDataParseSystem>().ParseMatchClassData(data, () => {
                  if (this.GetModel<IMatchModel>().MatchDic.Count > 0) {
                      this.SendCommand(new ShowPageCommand(UIPageType.MatchDetailUI));
                  } else {
                      this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("No game")));
                  }
              });
          }));
    }

    private void ShowStandAlone() {
        this.SendCommand<ShowWarningAlertCommand>(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("This function is unavailable in single-machine mode")));
    }

    private void OnUpdataUI(UpdateHomepageUIEvent e) {
        this.GetSystem<IAddressableSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                avatarImage.sprite = Instantiate(obj.Result, transform, false);
            }
        });
        starText.text = this.GetModel<IUserModel>().Star.Value.ToString();
        vipImage.gameObject.SetActiveFast(this.GetModel<IUserModel>().IsVIP.Value);
    }

    private void OnDestroy() {
        this.UnRegisterEvent<UpdateHomepageUIEvent>(OnUpdataUI);
        this.UnRegisterEvent<UpdataMatchDetailEvent>(OnUpdataMatchDetail);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}

