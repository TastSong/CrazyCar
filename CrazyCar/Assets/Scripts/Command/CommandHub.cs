using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using MoreMountains.NiceVibrations;

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
