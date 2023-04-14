using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
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
    public bool hasWater;
    public long startTime;
    public long enrollTime;
}

public class MatchRankInfo {
    public string name;
    public int aid;
    public int rank;
    public int completeTime;
}

public class MatchRoomMemberInfo {
    public string memberName;
    public int aid;
    public bool isHouseOwner;
    public int uid;
    public bool canWade;
    public int index;
}

public interface IMatchModel : IModel {
    public BindableProperty<int> RewardStar { get; }
    public Dictionary<int, MatchInfo> MatchDic { get; set; }
    public BindableProperty<MatchInfo> SelectInfo { get; set; }
    public List<MatchRankInfo> MatchRankList { get; set; }
    public BindableProperty<bool> IsComplete { get; }
    public BindableProperty<int> CompleteTime { get; }
    public BindableProperty<long> StartTime { get; }
    public BindableProperty<long> EndTime { get; }
    public BindableProperty<bool> IsArriveLimitTime { get; }
    public bool IsStartGame { get; }
    public bool IsEndGame { get; }
    public bool InGame { get; }
    public BindableProperty<string> RoomId { get; }
    public Dictionary<int, MatchRoomMemberInfo> MemberInfoDic { get; set; }

    public bool IsHouseOwner { get; set; }

    public int GetCompleteTime();
    public void CleanData();
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

    public bool IsStartGame { get { return StartTime * 1000 < Util.GetTime(); }}
    public bool IsEndGame { get { return IsComplete || IsArriveLimitTime;}}
    public bool InGame { get { return IsStartGame && !IsEndGame; } }

    public BindableProperty<string> RoomId { get; } = new BindableProperty<string>();

    public Dictionary<int, MatchRoomMemberInfo> MemberInfoDic { get; set; } = new Dictionary<int, MatchRoomMemberInfo>();

    private bool isHouseOwner = false;
    public bool IsHouseOwner {
        get {
            return isHouseOwner;
        }
        set {
            isHouseOwner = value;
        } 
    }

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
        });
    }
}
