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
            this.GetModel<IGameModel>().CurGameType = GameType.Match;
            this.SendCommand(new LoadSceneCommand(SceneID.Game));
        } else {
            WarningAlertInfo alertInfo = new WarningAlertInfo("The game is over");
            this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        }
    }

    private bool CanEnter(MatchInfo matchInfo) {
        return (matchInfo.startTime + matchInfo.limitTime) * 1000 > Util.GetTime();
    }
}