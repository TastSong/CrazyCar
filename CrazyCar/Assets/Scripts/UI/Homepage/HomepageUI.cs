using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using TFramework;


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
    public GameObject matchGO;
    public Button matchBtn;
    public Button createMatchBtn;

    private void OnEnable() {
        OnUpdataMatchDetail(new UpdataMatchDetailEvent());
    }

    private void OnUpdataMatchDetail(UpdataMatchDetailEvent e) {
        StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
           RequestUrl.matchDetailUrl,
          token: this.GetModel<IGameControllerModel>().Token.Value,
          succData: (data) => {
              this.GetModel<IMatchModel>().ParseClassData(data, () => {
                  matchGO.SetActiveFast(this.GetModel<IMatchModel>().MatchDic.Count > 0);
              });
          }));
    }

    private void Start() {
        nickNameText.text = this.GetModel<IUserModel>().Name.Value;

        avatarBtn.onClick.AddListener(() => {
            if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            this.SendCommand(new ShowPageCommand(UIPageType.AvatarUI));
        });

        joinGameBtn.onClick.AddListener(() => {
            this.SendCommand(new ShowPageCommand(UIPageType.TimeTrialDetailUI));
        });
        matchBtn.onClick.AddListener(() => {
            if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            if (this.GetModel<IUserModel>().IsVIP.Value) {
                this.SendCommand(new ShowPageCommand(UIPageType.MatchDetailUI));
            } else {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText("Match 只面向VIP");
            }
        });
        createMatchBtn.gameObject.SetActiveFast(this.GetModel<IUserModel>().Name.Value.ToLower() == "tast");
        createMatchBtn.onClick.AddListener(() => {
            if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            this.SendCommand<CreateMatchCommand>();
        });
        //--------- option ---------
        optionBtnsGO.SetActiveFast(false);
        optionCloseBtn.gameObject.SetActiveFast(false);
        optionOpenBtn.gameObject.SetActiveFast(true);
        optionOpenBtn.onClick.AddListener(() => {
            optionBtnsGO.SetActiveFast(true);
            optionOpenBtn.gameObject.SetActiveFast(false);
            optionCloseBtn.gameObject.SetActiveFast(true);
        });
        optionCloseBtn.onClick.AddListener(() => {
            optionBtnsGO.SetActiveFast(false);
            Util.DelayExecuteWithSecond(0.25f, () => {
                optionCloseBtn.gameObject.SetActiveFast(false);
                optionOpenBtn.gameObject.SetActiveFast(true);
            });
        });
        infoBtn.onClick.AddListener(() => {
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(title: "Version", content: "当前版本为：" + Application.version);
        });
        questionBtn.onClick.AddListener(() => {
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(title: "Content", content: "作者：TastSong 邮箱地址：TastSong@163.com");
        });
        exitBtn.onClick.AddListener(() => {
            Application.Quit();
        });
        //--------- option ---------

        // --------- Bottom Btns ---------
        psrofileBtn.onClick.AddListener(() => {
            if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            this.SendCommand(new ShowPageCommand(UIPageType.ProfileUI));
        });
        settingBtn.onClick.AddListener(() => {
            this.SendCommand(new ShowPageCommand(UIPageType.SettingsUI));
        });
        rankBtn.onClick.AddListener(() => {
            if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.RankUI));
        });
        changeCarBtn.onClick.AddListener(() => {
            if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
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

    private void ShowStandAlone() {
        this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("This function is unavailable in single-machine mode"));
    }

    private void OnUpdataUI(UpdateHomepageUIEvent e) {
        avatarImage.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid.Value);
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

