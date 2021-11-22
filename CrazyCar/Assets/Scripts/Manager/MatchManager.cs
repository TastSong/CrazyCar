using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

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

public class MatchManager : IController {
    public int rewardStar;
    public Dictionary<int, MatchInfo> matchDic = new Dictionary<int, MatchInfo>();
    public MatchInfo selectInfo = new MatchInfo();
    public List<MatchRankInfo> matchRankList = new List<MatchRankInfo>();
    public bool isComplete = false;
    public int completeTime;

    private long endTime;
    private bool isArriveLimitTime = false;

    public long StartTime {
        get {
            return selectInfo.startTime;
        }
    }

    public long EndTime {
        get {
            return endTime;
        }

        set {
            isComplete = true;
            endTime = value;
            this.SendCommand(new CompleteMatchCommand());
        }
    }

    public bool IsArriveLimitTime {
        get {
            return isArriveLimitTime;
        }

        set {
            isArriveLimitTime = value;
            if (value) {
                this.SendCommand(new CompleteMatchCommand());
            }
        }
    }

    public bool IsStartGame {
        get {
            return selectInfo.startTime * 1000 < Util.GetTime();
        }
    }

    public bool IsEndGame {
        get {
            return isComplete || isArriveLimitTime;
        }
    }

    public bool InGame {
        get {
            return IsStartGame && !IsEndGame;
        }
    }

    public int GetCompleteTime() {
        if (isComplete) {
            return (int)(endTime - selectInfo.startTime);
        } else {
            return -1;
        }
    }

    public void CleanData() {
        isComplete = false;
        isArriveLimitTime = false;
    }

    public void ParseClassData(JsonData jsonData, Action success = null) {
        matchDic.Clear();
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
            matchDic[info.cid] = info;
        }
        success?.Invoke();
    }

    public void ParseRank(JsonData data, Action success = null) {
        matchRankList.Clear();
        JsonData jsonData = data["rank"];
        for (int i = 0; i < jsonData.Count; i++) {
            MatchRankInfo info = new MatchRankInfo();
            info.name = (string)jsonData[i]["name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank"];
            matchRankList.Add(info);
        }
        success?.Invoke();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
