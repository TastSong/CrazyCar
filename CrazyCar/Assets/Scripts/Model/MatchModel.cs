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
    public int index;
}

public interface IMatchModel : IModel {
    BindableProperty<int> RewardStar { get; }
    Dictionary<int, MatchInfo> MatchDic { get; set; }
    BindableProperty<MatchInfo> SelectInfo { get; set; }
    List<MatchRankInfo> MatchRankList { get; set; }
    BindableProperty<bool> IsComplete { get; }
    BindableProperty<int> CompleteTime { get; }
    BindableProperty<long> StartTime { get; }
    BindableProperty<long> EndTime { get; }
    BindableProperty<bool> IsArriveLimitTime { get; }
    bool IsStartGame { get; }
    bool IsEndGame { get; }
    bool InGame { get; }
    BindableProperty<string> RoomId { get; }
    Dictionary<int, MatchRoomMemberInfo> MemberInfoDic { get; set; }

    bool IsHouseOwner { get; set; }

    int GetCompleteTime();
    void CleanData();
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
