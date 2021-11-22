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
        GetMatchDetail();
    }

    private void GetMatchDetail() {
        StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
           RequestUrl.matchDetailUrl,
          token: GameController.manager.token,
          succData: (data) => {
              GameController.manager.matchManager.ParseClassData(data, () => {
                  matchGO.SetActiveFast(GameController.manager.matchManager.matchDic.Count > 0);
              });
          }));
    }

    private void Start() {
        nickNameText.text = this.GetModel<IUserModel>().Name.Value;

        avatarBtn.onClick.AddListener(() => {
            if (GameController.manager.standAlone) {
                ShowStandAlone();
                return;
            }

            this.SendCommand(new ShowPageCommand(UIPageType.AvatarUI));
        });

        joinGameBtn.onClick.AddListener(() => {
            this.SendCommand(new ShowPageCommand(UIPageType.TimeTrialDetailUI));
        });
        matchBtn.onClick.AddListener(() => {
            if (GameController.manager.standAlone) {
                ShowStandAlone();
                return;
            }
            if (this.GetModel<IUserModel>().IsVIP.Value) {
                this.SendCommand(new ShowPageCommand(UIPageType.MatchDetailUI));
            } else {
                GameController.manager.warningAlert.ShowWithText("Match 只面向VIP");
            }
        });
        createMatchBtn.gameObject.SetActiveFast(this.GetModel<IUserModel>().Name.Value.ToLower() == "tast");
        createMatchBtn.onClick.AddListener(() => {
            if (GameController.manager.standAlone) {
                ShowStandAlone();
                return;
            }
            StartCoroutine(Util.POSTHTTP(url: NetworkController.manager.HttpBaseUrl +
                  RequestUrl.createMatchUrl,
                  token: GameController.manager.token,
                  code : (code) => { 
                    if(code == 200) {
                          GetMatchDetail();
                      }  
                  }
              ));
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
            GameController.manager.infoConfirmAlert.ShowWithText(title: "Version", content: "当前版本为：" + Application.version);
        });
        questionBtn.onClick.AddListener(() => {
            GameController.manager.infoConfirmAlert.ShowWithText(title: "Content", content: "作者：TastSong 邮箱地址：TastSong@163.com");
        });
        exitBtn.onClick.AddListener(() => {
            Application.Quit();
        });
        //--------- option ---------

        // --------- Bottom Btns ---------
        psrofileBtn.onClick.AddListener(() => {
            if (GameController.manager.standAlone) {
                ShowStandAlone();
                return;
            }

            this.SendCommand(new ShowPageCommand(UIPageType.ProfileUI));
        });
        settingBtn.onClick.AddListener(() => {
            this.SendCommand(new ShowPageCommand(UIPageType.SettingsUI));
        });
        rankBtn.onClick.AddListener(() => {
            if (GameController.manager.standAlone) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.RankUI));
        });
        changeCarBtn.onClick.AddListener(() => {
            if (GameController.manager.standAlone) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.ChangeCarUI));
        });
        // --------- Bottom Btns ---------

        OnUpdataUI(new UpdateHomepageUIEvent());
        this.RegisterEvent<UpdateHomepageUIEvent>(OnUpdataUI);
    }

    private void ShowStandAlone() {
        GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("This function is unavailable in single-machine mode"));
    }

    private void OnUpdataUI(UpdateHomepageUIEvent e) {
        avatarImage.sprite = this.GetSystem<IResourceSystem>().GetAvatarResource(this.GetModel<IUserModel>().Aid.Value);
        starText.text = this.GetModel<IUserModel>().Star.Value.ToString();
        vipImage.gameObject.SetActiveFast(this.GetModel<IUserModel>().IsVIP.Value);
    }

    private void OnDestroy() {
        this.UnRegisterEvent<UpdateHomepageUIEvent>(OnUpdataUI);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}

