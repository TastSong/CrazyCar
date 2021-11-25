using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using LitJson;
using System;
using Utils;

public class MatchInfo {
    public string name;
    public int cid;
    public int star;
    public int mapId;
    public int limitTime;
    public int times;
    public long startTime;
    public long enrollTime;
}

public class MatchRankInfo {
    public string name;
    public int aid;
    public int rank;
    public int completeTime;
}

public interface IMatchModel : IModel {
    BindableProperty<int> RewardStar { get; }
    Dictionary<int, MatchInfo> MatchDic { get; set; }
    BindableProperty<MatchInfo> SelectInfo { get; } 
    List<MatchRankInfo> MatchRankList { get; set; }
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
    void ParseRank(JsonData data, Action success = null);
}

public class MatchModel : AbstractModel, IMatchModel {
    public BindableProperty<int> RewardStar { get; } = new BindableProperty<int>();

    public Dictionary<int, MatchInfo> MatchDic { get; set; } = new Dictionary<int, MatchInfo>();
    public BindableProperty<MatchInfo> SelectInfo { get; set; } = new BindableProperty<MatchInfo>();
    public List<MatchRankInfo> MatchRankList { get; set; } = new List<MatchRankInfo>();

    public BindableProperty<bool> IsComplete { get; } = new BindableProperty<bool>();

    public BindableProperty<int> CompleteTime { get; } = new BindableProperty<int>();

    public BindableProperty<long> StartTime { get; } = new BindableProperty<long>();

    public BindableProperty<long> EndTime { get; } = new BindableProperty<long>();

    public BindableProperty<bool> IsArriveLimitTime { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> IsStartGame { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> IsEndGame { get; } = new BindableProperty<bool>();

    public BindableProperty<bool> InGame { get; } = new BindableProperty<bool>();

    public void CleanData() {
        IsComplete.Value = false;
        IsArriveLimitTime.Value = false;
    }

    public int GetCompleteTime() {
        if (IsComplete.Value) {
            return (int)(EndTime - SelectInfo.Value.startTime);
        } else {
            return -1;
        }
    }

    public void ParseClassData(JsonData jsonData, Action success = null) {
        MatchDic.Clear();
        for (int i = 0; i < jsonData.Count; i++) {
            MatchInfo info = new MatchInfo();
            info.cid = (int)jsonData[i]["cid"];
            info.name = (string)jsonData[i]["name"];
            info.star = (int)jsonData[i]["star"];
            info.mapId = (int)jsonData[i]["map_id"];
            info.limitTime = (int)jsonData[i]["limit_time"];
            info.times = (int)jsonData[i]["times"];
            info.startTime = (long)jsonData[i]["start_time"];
            info.enrollTime = (long)jsonData[i]["enroll_time"];
            MatchDic[info.cid] = info;
        }
        success?.Invoke();
    }

    public void ParseRank(JsonData data, Action success = null) {
        MatchRankList.Clear();
        JsonData jsonData = data["rank"];
        for (int i = 0; i < jsonData.Count; i++) {
            MatchRankInfo info = new MatchRankInfo();
            info.name = (string)jsonData[i]["name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank"];
            MatchRankList.Add(info);
        }
        success?.Invoke();
    }

    protected override void OnInit() {   
        EndTime.Register((v) => {
            IsComplete.Value = true;
            this.SendEvent(new CompleteMatchEvent());
        });
        IsArriveLimitTime.Register((v) => {
            this.SendEvent(new CompleteMatchEvent());
        });
        SelectInfo.Register((v) => {
            StartTime.Value = SelectInfo.Value.startTime;
            IsStartGame.Value = SelectInfo.Value.startTime * 1000 < Util.GetTime();
        });
        IsEndGame.Value = IsComplete || IsArriveLimitTime;
        InGame.Value =  IsStartGame && !IsEndGame;
    }
}
