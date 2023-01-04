using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class EnterTimeTrialCommand : AbstractCommand {
    private TimeTrialInfo mTimeTrialInfo;

    public EnterTimeTrialCommand(TimeTrialInfo timeTrialInfo) {
        mTimeTrialInfo = timeTrialInfo;
    }

    protected override void OnExecute() {
        Debug.Log("进入课程 = " + mTimeTrialInfo.cid);
        this.GetModel<ITimeTrialModel>().CleanData();
        this.GetModel<ITimeTrialModel>().SelectInfo.Value = mTimeTrialInfo;
        this.GetModel<IGameModel>().CurGameType = GameType.TimeTrial;
        this.SendCommand(new LoadSceneCommand(SceneID.Game));
    }
}