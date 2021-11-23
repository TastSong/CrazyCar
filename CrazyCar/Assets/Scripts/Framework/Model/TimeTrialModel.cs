using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using LitJson;
using System;
using Utils;

public class TimeTrialInfo {
    public string name;
    public int cid;
    public int star;
    public int mapId;
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
    BindableProperty<bool> IsWin { get; }
    BindableProperty<bool> IsBreakRecord { get; }
    BindableProperty<int> Rank { get; }
    BindableProperty<int> RewardStar { get; }
    Dictionary<int, TimeTrialInfo> TimeTrialDic { get; set; }
    BindableProperty<TimeTrialInfo> SelectInfo { get; }
    List<TimeTrialRankInfo> TimeTrialRankList { get; set; }
    BindableProperty<bool> IsComplete { get; }
    BindableProperty<int> CompleteTime { get; }


    BindableProperty<long> StartTime { get; }
    BindableProperty<long> EndTime { get; }
    BindableProperty<bool> IsArriveLimitTime { get; }
    BindableProperty<bool> IsStartGame { get; }
    BindableProperty<bool> IsEndGame { get; }
    BindableProperty<bool> InGame { get; }


    int GetCompleteTime();
    void CleanData();
    void ParseClassData(JsonData jsonData, Action success = null);
    void ParseResult(JsonData jsonData, Action success = null);
    void ParseRank(JsonData jsonData, Action success = null);
}

public class TimeTrialModel : AbstractModel, ITimeTrialModel {
    public BindableProperty<bool> IsWin { get; set; } = new BindableProperty<bool>();

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

    public BindableProperty<bool> IsStartGame { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> IsEndGame { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> InGame { get; } = new BindableProperty<bool>();

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

    public void ParseClassData(JsonData jsonData, Action success = null) {
        TimeTrialDic.Clear();
        for (int i = 0; i < jsonData.Count; i++) {
            TimeTrialInfo info = new TimeTrialInfo();
            info.cid = (int)jsonData[i]["cid"];
            info.name = (string)jsonData[i]["name"];
            info.star = (int)jsonData[i]["star"];
            info.mapId = (int)jsonData[i]["map_id"];
            info.limitTime = (int)jsonData[i]["limit_time"];
            info.isHas = (bool)jsonData[i]["is_has"];
            info.times = (int)jsonData[i]["times"];
            TimeTrialDic[info.cid] = info;
        }
        success?.Invoke();
    }

    public void ParseRank(JsonData jsonData, Action success = null) {
        TimeTrialRankList.Clear();
        for (int i = 0; i < jsonData.Count; i++) {
            TimeTrialRankInfo info = new TimeTrialRankInfo();
            info.name = (string)jsonData[i]["name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank"];
            TimeTrialRankList.Add(info);
        }
        success?.Invoke();
    }

    public void ParseResult(JsonData jsonData, Action success = null) {
        IsWin.Value = (bool)jsonData["is_win"];
        CompleteTime.Value = (int)jsonData["complete_time"];
        Rank.Value = (int)jsonData["rank"];
        IsBreakRecord.Value = (bool)jsonData["is_break_record"];
        RewardStar.Value = (int)jsonData["reward"];
        success?.Invoke();
    }

    protected override void OnInit() {
        StartTime.Register((v) => { isInit = true; });
        EndTime.Register((v) => {
            IsComplete.Value = true;
            this.SendEvent(new CompleteTimeTrialEvent());
        });
        IsArriveLimitTime.Register((v) => {
            if (IsArriveLimitTime.Value) {
                this.SendEvent(new CompleteTimeTrialEvent());
            }
        });
        IsStartGame.Value = isInit ? (StartTime * 1000 < Util.GetTime()) : false;
        IsEndGame.Value = IsComplete || IsArriveLimitTime;
        InGame.Value = IsStartGame && !IsEndGame;
    }
}
