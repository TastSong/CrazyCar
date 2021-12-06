using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;

public interface ICheckpointSystem : ISystem {
    BindableProperty<int> CheckpointCount { get; }   
    BindableProperty<int> CheckedCount { get; }
    BindableProperty<int> PassTimes { get; }
    List<Vector3> CheckpointPos { get; set; }
    Vector3 GetResetPos(Vector3 pos);
    List<GameObject> CheckpointsList { get; }
    void ClearData();
}

public class CheckpointSystem : AbstractSystem, ICheckpointSystem {
    public BindableProperty<int> CheckedCount { get; } = new BindableProperty<int>();

    public BindableProperty<int> PassTimes { get; } = new BindableProperty<int>();

    public List<GameObject> CheckpointsList { get; set; } = new List<GameObject>();

    public BindableProperty<int> CheckpointCount { get; } = new BindableProperty<int>();

    public List<Vector3> CheckpointPos { get; set; } = new List<Vector3>();

    public void ClearData() {
        CheckedCount.Value = 0;
        CheckpointsList.Clear();
        CheckpointCount.Value = 0;
        CheckpointPos.Clear();
        PassTimes.Value = 0; // 放最后
    }

    public Vector3 GetResetPos(Vector3 pos) {
        float miniOff = 0;
        int miniIndex = 0;

        for (int i = 0; i < CheckpointCount; i++) {
            if (i == 0) {
                miniOff = Vector3.Distance(CheckpointPos[i], pos);
                miniIndex = i;
            } else {
                if (Vector3.Distance(CheckpointPos[i], pos) < miniOff) {
                    miniOff = Vector3.Distance(CheckpointPos[i], pos);
                    miniIndex = i;
                }
            }            
        }

        return CheckpointPos[miniIndex];
    }

    private void ResetCheckpoint() {
        for (int i = 0; i < CheckpointCount; i++) {
            CheckpointsList[i].SetActiveFast(true);
        }
    }

    protected override void OnInit() {
        PassTimes.Register((passTimes) => {
            ResetCheckpoint();
            if (this.GetModel<IGameControllerModel>().CurGameType == GameType.TimeTrial) {
                if (passTimes >= this.GetModel<ITimeTrialModel>().SelectInfo.Value.times) {
                    this.GetModel<ITimeTrialModel>().EndTime.Value = Util.GetTime() / 1000;
                    Debug.Log("++++++TimeTrial EndTime = " + this.GetModel<ITimeTrialModel>().EndTime +
                         "  CompleteTime =  " + this.GetModel<ITimeTrialModel>().GetCompleteTime());
                }
            } else if (this.GetModel<IGameControllerModel>().CurGameType == GameType.Match) {
                if (passTimes >= this.GetModel<IMatchModel>().SelectInfo.Value.times) {
                    this.GetModel<IMatchModel>().EndTime.Value = Util.GetTime() / 1000;
                    Debug.Log("++++++Match EndTime = " + this.GetModel<IMatchModel>().EndTime +
                        "  CompleteTime =  " + this.GetModel<IMatchModel>().GetCompleteTime());
                }
            }
        });
    }
}
