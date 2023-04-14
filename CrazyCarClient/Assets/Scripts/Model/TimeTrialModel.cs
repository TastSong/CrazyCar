using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using System;
using Utils;

public class TimeTrialInfo {
    public string name;
    public int cid;
    public int star;
    public int mapId;
    public bool hasWater;
    public int limitTime;
    public bool isHas;
    public int times;
}

public class TimeTrialRankInfo {
    public string name;
    public int aid;
    public int rank;
    public int completeTime;
}

public interface ITimeTrialModel : IModel {
    public BindableProperty<bool> IsWin { get; }
    public BindableProperty<bool> IsBreakRecord { get; }
    public BindableProperty<int> Rank { get; }
    public BindableProperty<int> RewardStar { get; }
    public Dictionary<int, TimeTrialInfo> TimeTrialDic { get; set; }
    public BindableProperty<TimeTrialInfo> SelectInfo { get; }
    public List<TimeTrialRankInfo> TimeTrialRankList { get; set; }
    public BindableProperty<bool> IsComplete { get; }
    public BindableProperty<int> CompleteTime { get; }
    public BindableProperty<long> StartTime { get; }
    public BindableProperty<long> EndTime { get; }
    public BindableProperty<bool> IsArriveLimitTime { get; }
    public bool IsStartGame { get; }
    public bool IsEndGame { get; }
    public bool InGame { get; }


    public int GetCompleteTime();
    public void CleanData();
}

public class TimeTrialModel : AbstractModel, ITimeTrialModel {
    public BindableProperty<bool> IsWin { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> IsBreakRecord { get; } = new BindableProperty<bool>();

    public BindableProperty<int> Rank { get; } = new BindableProperty<int>();

    public BindableProperty<int> RewardStar { get; } = new BindableProperty<int>();

    public Dictionary<int, TimeTrialInfo> TimeTrialDic { get; set; } = new Dictionary<int, TimeTrialInfo>();

    public BindableProperty<TimeTrialInfo> SelectInfo { get; } = new BindableProperty<TimeTrialInfo>();

    public List<TimeTrialRankInfo> TimeTrialRankList { get; set; } = new List<TimeTrialRankInfo>();

    public BindableProperty<bool> IsComplete { get; } = new BindableProperty<bool>();

    public BindableProperty<int> CompleteTime { get; } = new BindableProperty<int>();

    public BindableProperty<long> StartTime { get; } = new BindableProperty<long>();

    public BindableProperty<long> EndTime { get; } = new BindableProperty<long>();

    public BindableProperty<bool> IsArriveLimitTime { get; } = new BindableProperty<bool>();

    public bool IsStartGame { get {return isInit ? (StartTime * 1000 < Util.GetTime()) : false; } }

    public bool IsEndGame { get { return IsComplete || IsArriveLimitTime; } }
    public bool InGame { get { return IsStartGame && !IsEndGame; } }

    private bool isInit = false;

    public void CleanData() {
        isInit = false;
        IsComplete.Value = false;
        IsWin.Value = false;
        IsBreakRecord.Value = false;
        IsArriveLimitTime.Value = false;
    }

    public int GetCompleteTime() {
        if (IsComplete) {
            return (int)(EndTime - StartTime);
        } else {
            return -1;
        }
    }

    protected override void OnInit() {
        StartTime.Register((v) => {
            isInit = true;
        });
        EndTime.Register((v) => {
            IsComplete.Value = true;
            this.SendEvent(new EndTimeTrialEvent());
        });
        IsArriveLimitTime.Register((v) => {
            if (IsArriveLimitTime.Value) {
                this.SendEvent(new EndTimeTrialEvent());
            }
        });
    }
}
