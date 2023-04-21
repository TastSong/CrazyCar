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

            this.SendCommand(new ShowPageCommand(UIPageType.AvatarUI));
        });

        joinGameBtn.onClick.AddListener(() => {
            if (!this.GetModel<IUserModel>().IsCompleteGuidance) {
                this.GetModel<IUserModel>().IsCompleteGuidance.Value = true;
            }
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            this.SendCommand(new ShowPageCommand(UIPageType.TimeTrialDetailUI));
        });
        matchBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }

            StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                  RequestUrl.matchMapUrl,
                token: this.GetModel<IGameModel>().Token.Value,
                succData: (data) => {
                    this.GetSystem<IDataParseSystem>().ParseMatchMapData(data, () => {
                        if (this.GetModel<IMatchModel>().MatchDic.Count > 0) {
                            this.SendCommand(new ShowPageCommand(UIPageType.MatchRoomUI));
                        } else {
                            WarningAlertInfo alertInfo = new WarningAlertInfo("No game");
                            this.SendCommand(new ShowPageCommand(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                        }
                    });
                }));
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
            this.SendCommand(new ShowPageCommand(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
        });
        questionBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            InfoConfirmInfo info = new InfoConfirmInfo(title: "Content", content: "作者：TastSong 邮箱地址：TastSong@163.com");
            this.SendCommand(new ShowPageCommand(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
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

            this.SendCommand(new ShowPageCommand(UIPageType.ProfileUI));
        });
        settingBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            this.SendCommand(new ShowPageCommand(UIPageType.SettingsUI));
        });
        rankBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.RankUI));
        });
        changeCarBtn.onClick.AddListener(() => {
            this.GetSystem<ISoundSystem>().PlaySound(SoundType.Button_Low);
            if (this.GetModel<IGameModel>().StandAlone.Value) {
                ShowStandAlone();
                return;
            }
            this.SendCommand(new ShowPageCommand(UIPageType.ChangeCarUI));
            this.SendCommand(new HidePageCommand(UIPageType.HomepageUI));
        });
        // --------- Bottom Btns ---------

        OnUpdataUI(new UpdateHomepageUIEvent());
        this.RegisterEvent<UpdateHomepageUIEvent>(OnUpdataUI).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void ShowStandAlone() {
        WarningAlertInfo alertInfo = new WarningAlertInfo("This function is unavailable in single-machine mode");
        this.SendCommand(new ShowPageCommand(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
    }

    private void OnUpdataUI(UpdateHomepageUIEvent e) {
        this.GetSystem<IAddressableSystem>().LoadAsset<Sprite>(Util.GetAvatarUrl(this.GetModel<IUserModel>().Aid), (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                avatarImage.sprite = Instantiate(obj.Result, transform, false);
            }
        });
        starText.text = this.GetModel<IUserModel>().Star.Value.ToString();
        vipImage.gameObject.SetActiveFast(this.GetModel<IUserModel>().IsVIP.Value);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}

