using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class TimeTrialInfo {
    public string name;
    public int cid;
    public int difficulty;
    public int mapId;
    public int limitTime;
}

public class TimeTrialRankInfo {
    public string name;
    public int aid;
    public int rank;
    public int completeTime;
}

public class TimeTrialManager {
    public bool isWin = false;
    public bool isBreakRecord = false;
    public int rank;
    public Dictionary<int, TimeTrialInfo> timeTrialDic = new Dictionary<int, TimeTrialInfo>();
    public TimeTrialInfo selectInfo = new TimeTrialInfo();
    public List<TimeTrialRankInfo> timeTrialRankList = new List<TimeTrialRankInfo>();
    public bool isComplete = false;
    public int completeTime;

    private bool isInit = false;
    private long startTime;
    private long endTime;
    private bool isArriveLimitTime = false;


    public void CreateTestData() {
        selectInfo.limitTime = 60;
    }

    public long StartTime {
        get {
            return startTime;
        }

        set {
            isInit = true;
            startTime = value;
        }
    }

    public long EndTime {
        get {
            return endTime;
        }

        set {
            isComplete = true;
            GameController.manager.tinyMsgHub.Publish(new CompleteTimeTrialMsg());
            endTime = value;
        }
    }

    public bool IsArriveLimitTime {
        get {
            return isArriveLimitTime;
        }

        set {
            if (value) {
                GameController.manager.tinyMsgHub.Publish(new CompleteTimeTrialMsg());
            }
            isArriveLimitTime = value;
        }
    }

    public bool IsStartGame {
        get {      
            return isInit ? (startTime * 1000 < Util.GetTime()) : false;
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
            return (int)(endTime - startTime);
        } else {
            return -1;
        }   
    }

    public void CleanData() {
        isInit = false;
        isComplete = false;
        isWin = false;
        isBreakRecord = false;
        isArriveLimitTime = false;
    }

    public void ParseClassData(JsonData jsonData, Util.NoneParamFunction success = null) {
        for (int i = 0; i < jsonData.Count; i++) {
            TimeTrialInfo info = new TimeTrialInfo();
            info.cid = (int)jsonData[i]["cid"];
            info.name = (string)jsonData[i]["name"];
            info.difficulty = (int)jsonData[i]["difficulty"];
            info.mapId = (int)jsonData[i]["map_id"];
            info.limitTime = (int)jsonData[i]["limit_time"];
            timeTrialDic[info.cid] = info;
        }
        success?.Invoke();
    }

    public void ParseReslut(JsonData jsonData, Util.NoneParamFunction success = null) {
        isWin = (bool)jsonData["is_win"];
        completeTime = (int)jsonData["complete_time"];
        rank = (int)jsonData["rank"];
        isBreakRecord = (bool)jsonData["is_break_record"];
        success?.Invoke();
    }

    public void ParseRank(JsonData jsonData, Util.NoneParamFunction success = null) {
        for (int i = 0; i < jsonData.Count; i++) {
            TimeTrialRankInfo info = new TimeTrialRankInfo();
            info.name = (string)jsonData[i]["name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank"];
            timeTrialRankList.Add(info);
        }
        success?.Invoke();
    }
}
