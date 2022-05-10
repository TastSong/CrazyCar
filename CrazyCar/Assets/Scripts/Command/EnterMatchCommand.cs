using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
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
            this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("The game is over")));
        }
    }

    private bool CanEnter(MatchInfo matchInfo) {
        return (matchInfo.startTime + matchInfo.limitTime) * 1000 > Util.GetTime();
    }
}