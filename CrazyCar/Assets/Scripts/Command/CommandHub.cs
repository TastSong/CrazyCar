using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using MoreMountains.NiceVibrations;

public class BuyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public BuyEquipCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(mEquipInfo.eid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        if (this.GetModel<IUserModel>().Star.Value > mEquipInfo.star) {
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(content: string.Format(this.GetSystem<II18NSystem>().GetText("Whether to spend {0} star on this equip"),
                mEquipInfo.star),
            success: () => {
                CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                    RequestUrl.buyEquipUrl,
                data: bytes,
                token: this.GetModel<IGameControllerModel>().Token.Value,
                succData: (data) => {
                    this.GetModel<IUserModel>().Star.Value = (int)data["star"];
                    this.SendEvent<BuyEquipEvent>();
                    this.SendEvent<UpdateHomepageUIEvent>();
                }));
            },
            fail: () => {
                Debug.Log(this.GetSystem<II18NSystem>().GetText("Give up to buy"));
            });
        } else {
            this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(string.Format(this.GetSystem<II18NSystem>().GetText("This equip requires {0} star"), 
                mEquipInfo.star));
        }
    }
}

public class ApplyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public ApplyEquipCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(mEquipInfo.eid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                    RequestUrl.changeEquipUrl,
                data: bytes, token: this.GetModel<IGameControllerModel>().Token.Value,
                succData: (data) => {
                    this.GetModel<IUserModel>().EquipInfo.Value = this.GetModel<IEquipModel>().EquipDic[(int)data["eid"]];
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Successfully Set"));
                    this.SendEvent<ApplyEquipEvent>();
                },
                code: (code) => {
                    if (code == 423) {
                        this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Did not have"));
                    }
                }));
    }
}

public class CreateMatchCommand : AbstractCommand {
    protected override void OnExecute() {
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                  RequestUrl.createMatchUrl,
                  token: this.GetModel<IGameControllerModel>().Token.Value,
                  code: (code) => {
                      if (code == 200) {
                          this.SendEvent<UpdataMatchDetailEvent>();
                      }
                  }
              ));
    }
}

public class ChangePasswordCommand : AbstractCommand {
    private string mPassword;

    public ChangePasswordCommand(string password) {
        mPassword = password;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("password");
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.modifyPersonalInfoUrl,
            data: bytes, token: this.GetModel<IGameControllerModel>().Token.Value,
            succData: (data) => {
                this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Modify Successfully"));
                this.GetModel<IUserModel>().Password.Value = mPassword;
            },
            code: (code) => {
                if (code == 423) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Fail To Modify"));
                } else if (code == 404) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Information Error"));
                }
            }));
    }
}

public class EnableStandAloneCommand : AbstractCommand {
    protected override void OnExecute() {
        this.GetModel<IGameControllerModel>().StandAlone.Value = true;
        TextAsset ta = Resources.Load<TextAsset>(Util.baseStandAlone + RequestUrl.loginUrl);
        JsonData data = JsonMapper.ToObject(ta.text);
        this.GetModel<IGameControllerModel>().Token.Value = (string)data["token"];
        this.GetSystem<IDataParseSystem>().ParseUserInfo(data);

        this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(text: this.GetSystem<II18NSystem>().GetText("Login Success"),
            callback: () => {
                Util.LoadingScene(SceneID.Index);
            });
    }
}

public class LoginCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;
    private bool mIsRemember;

    public LoginCommand(string userName, string password, bool isRemember) {
        mUserName = userName;
        mPassword = password;
        mIsRemember = isRemember;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.loginUrl,
            data: bytes, succData: (data) => {
                this.GetModel<IGameControllerModel>().Token.Value = (string)data["token"];
                this.GetSystem<IDataParseSystem>().ParseUserInfo(data);
                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(text: this.GetSystem<II18NSystem>().GetText("Login Success"),
                        callback: () => {
                            this.GetSystem<IVibrationSystem>().Haptic(HapticTypes.Success);
                            this.GetModel<IUserModel>().RememberPassword.Value = mIsRemember ? 1 : 0;
                            Util.LoadingScene(SceneID.Index);
                        });

                } else if (code == 423) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Password Error"));
                } else if (code == 404) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("User not registered"));
                } else {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Unknown Error"));
                }
            }));
    }
}


public class RegisterCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;

    public RegisterCommand(string userName, string password) {
        mUserName = userName;
        mPassword = password;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.registerUrl,
            data: bytes, succData: (data) => {
                this.GetModel<IGameControllerModel>().Token.Value = (string)data["token"];
                this.GetSystem<IDataParseSystem>().ParseUserInfo(data);
                
                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    this.GetSystem<IVibrationSystem>().Haptic(HapticTypes.Success);
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(text: this.GetSystem<II18NSystem>().GetText("Registration Successful"), callback: () => {
                        Util.LoadingScene(SceneID.Index);
                    });
                } else if (code == 423) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("User registered"));
                } else if (code == 425) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Incorrect information format"));
                } else {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("Unknown Error"));
                }
            }));
    }
}

public class EnterMatchCommand : AbstractCommand {
    private MatchInfo mMatchInfo;
    
    public EnterMatchCommand(MatchInfo matchInfo) {
        mMatchInfo = matchInfo;
    }

    protected override void OnExecute() {
        if (CanEnter(mMatchInfo)) {
            Debug.Log("进入课程 = " + mMatchInfo.cid);
            this.GetModel<IMatchModel>().CleanData();
            this.GetModel<IMatchModel>().SelectInfo.Value = mMatchInfo;
            this.GetModel<IGameControllerModel>().CurGameType = GameType.Match;
            Util.LoadingScene(SceneID.Game);
        } else {
            this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(this.GetSystem<II18NSystem>().GetText("The game is over"));
        }
    }

    private bool CanEnter(MatchInfo matchInfo) {
        return (matchInfo.startTime + matchInfo.limitTime) * 1000 > Util.GetTime();
    }
}

public class EnterTimeTrialCommand : AbstractCommand {
    private TimeTrialInfo mTimeTrialInfo;

    public EnterTimeTrialCommand(TimeTrialInfo timeTrialInfo) {
        mTimeTrialInfo = timeTrialInfo;
    }

    protected override void OnExecute() {
        Debug.Log("进入课程 = " + mTimeTrialInfo.cid);
        this.GetModel<ITimeTrialModel>().CleanData();
        this.GetModel<ITimeTrialModel>().SelectInfo.Value = mTimeTrialInfo;
        this.GetModel<IGameControllerModel>().CurGameType = GameType.TimeTrial;
        Util.LoadingScene(SceneID.Game);
    }
}

public class BuyTimeTrialClassCommand : AbstractCommand {
    private TimeTrialInfo mTimeTrialInfo;

    public BuyTimeTrialClassCommand(TimeTrialInfo timeTrialInfo) {
        mTimeTrialInfo = timeTrialInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("cid");
        w.Write(mTimeTrialInfo.cid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.buyTimeTrialClassUrl,
        data: bytes,
        token: this.GetModel<IGameControllerModel>().Token.Value,
        succData: (data) => {
            this.GetModel<IUserModel>().Star.Value = (int)data["star"];
            mTimeTrialInfo.isHas = true;
            this.GetModel<IUserModel>().MapNum.Value++;
            this.SendEvent<UnlockTimeTrialEvent>();
            this.SendEvent<UpdateHomepageUIEvent>();
        }));
    }
}

public class SavaSettingsCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent<ChangeSettingEvent>();
    }
}
