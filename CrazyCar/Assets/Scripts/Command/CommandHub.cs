using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using MoreMountains.NiceVibrations;
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
