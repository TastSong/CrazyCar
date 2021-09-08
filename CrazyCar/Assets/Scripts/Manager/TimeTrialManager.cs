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

public class TimeTrialResultInfo {
    public string name;
    public int rank;
    public int completeTime;
}

public class TimeTrialManager {
    public bool isWin = false;
    public bool isLimited = false;
    public bool isBreakRecord = false;
    public int rank;
    public Dictionary<int, TimeTrialInfo> timeTrialDic = new Dictionary<int, TimeTrialInfo>();
    public TimeTrialInfo selectInfo = new TimeTrialInfo();
    public List<TimeTrialResultInfo> timeTrialResult = new List<TimeTrialResultInfo>(); 

    private bool isInit = false;
    private long startTime;
    private long endTime;
    private bool isComplete = false;

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
            GameController.manager.tinyMsgHub.Publish(new CompleteTimeTrailMsg());
            endTime = value;
        }
    }

    public bool IsStartGame {
        get {      
            return isInit ? (startTime * 1000 < Util.GetTime()) : false;
        }
    }

    public bool IsEndGame {
        get {
            return isComplete || isLimited;
        }
    }

    public bool InGame {
        get {
            return IsStartGame && !IsEndGame;
        }
    }

    public int CompleteTime {
        get {
            if (isComplete) {
                return (int)(endTime - startTime);
            } else {
                return -1;
            }
        }
    }

    public void CleanData() {
        isInit = false;
        isComplete = false;
        isWin = false;
        isBreakRecord = false;
        isLimited = false;
    }

    public void ParseClassData(JsonData jsonData, Util.NoneParamFunction success = null) {

    }

    public void ParseReslut(JsonData jsonData, Util.NoneParamFunction success = null) {

    }

    public void ParseRank(JsonData jsonData, Util.NoneParamFunction success = null) {

    }
}
