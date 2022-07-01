using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using System;

public interface IDataParseSystem : ISystem {
    void ParseAvatarRes(JsonData jsonData, Action success = null);
    void ParseSelfUserInfo(JsonData jsonData);
    UserInfo ParseUserInfo(JsonData jsonData);
    void ParseTimeTrialClassData(JsonData jsonData, Action success = null);
    void ParseTimeTrialRank(JsonData jsonData, Action success = null);
    void ParseTimeTrialResult(JsonData jsonData, Action success = null);
    void ParseMatchMapData(JsonData jsonData, Action success = null);
    void ParseSelectMatch(JsonData jsonData, Action success = null);
    void ParseMatchRank(JsonData data, Action success = null);
    void ParseEquipRes(JsonData jsonData, Action success = null);
    PlayerCreateMsg ParsePlayerCreateMsg(JsonData jsonData, Action success = null);
    PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null);
    PlayerOperatMsg ParsePlayerOperatMsg(JsonData jsonData, Action success = null);
    PlayerCompleteMsg ParsePlayerCompleteMsg(JsonData jsonData, Action success = null);
}

public class DataParseSystem : AbstractSystem, IDataParseSystem {
    public void ParseAvatarRes(JsonData jsonData, Action success = null) {
        var avatarModel = this.GetModel<IAvatarModel>();
        avatarModel.AvatarDic.Clear();
        JsonData data = jsonData["avatars"];
        for (int i = 0; i < data.Count; i++) {
            AvatarInfo info = new AvatarInfo();
            info.aid = (int)data[i]["aid"];
            info.name = (string)data[i]["avatar_name"];
            info.isHas = (bool)data[i]["is_has"];
            info.star = (int)data[i]["star"];
            avatarModel.AvatarDic[info.aid] = info;
        }
        success?.Invoke();
    }

    public void ParseSelfUserInfo(JsonData jsonData) {
        var userModel = this.GetModel<IUserModel>();
        userModel.Name.Value = (string)jsonData["user_name"];
        userModel.Uid.Value = (int)jsonData["uid"];
        userModel.Aid.Value = (int)jsonData["aid"];
        userModel.Star.Value = (int)jsonData["star"];
        userModel.IsVIP.Value = (bool)jsonData["is_vip"];
        userModel.IsSuperuser.Value = (bool)jsonData["is_superuser"];
        userModel.AvatarNum.Value = (int)jsonData["avatar_num"];
        userModel.TravelTimes.Value = (int)jsonData["travel_times"];
        userModel.MapNum.Value = (int)jsonData["map_num"];
        this.GetModel<IGameModel>().Token.Value = (string)jsonData["token"];

        JsonData data = jsonData["equip_info"];
        EquipInfo info = new EquipInfo();
        info.eid = (int)data["eid"];
        info.rid = (string)data["rid"];
        info.equipName = (string)data["equip_name"];
        info.star = (int)data["star"];
        info.mass = (int)data["mass"];
        info.power = (int)data["power"];
        info.maxPower = (int)data["max_power"];
        info.isHas = (bool)data["is_has"];
        info.canWade = (bool)data["can_wade"];
        info.isShow = (bool)data["is_show"];
        userModel.EquipInfo.Value = info;
    }

    public UserInfo ParseUserInfo(JsonData jsonData) {
        UserInfo userInfo = new UserInfo();
        userInfo.name = (string)jsonData["user_name"];
        userInfo.uid = (int)jsonData["uid"];
        userInfo.aid = (int)jsonData["aid"];
        userInfo.star = (int)jsonData["star"];
        userInfo.isVIP = (bool)jsonData["is_vip"];
        userInfo.isSuperuser = (bool)jsonData["is_superuser"];
        userInfo.avatarNum = (int)jsonData["avatar_num"];
        userInfo.travelTimes = (int)jsonData["travel_times"];
        userInfo.mapNum = (int)jsonData["map_num"];

        JsonData equipData = jsonData["equip_info"];
        EquipInfo info = new EquipInfo();
        info.eid = (int)equipData["eid"];
        info.rid = (string)equipData["rid"];
        info.equipName = (string)equipData["equip_name"];
        info.star = (int)equipData["star"];
        info.mass = (int)equipData["mass"];
        info.power = (int)equipData["power"];
        info.maxPower = (int)equipData["max_power"];
        info.isHas = (bool)equipData["is_has"];
        info.canWade = (bool)equipData["can_wade"];
        info.isShow = (bool)equipData["is_show"];
        userInfo.equipInfo = info;
        return userInfo;
    }

    public void ParseTimeTrialClassData(JsonData jsonData, Action success = null) {
        var timeTrialModel = this.GetModel<ITimeTrialModel>();
        timeTrialModel.TimeTrialDic.Clear();
        for (int i = 0; i < jsonData.Count; i++) {
            TimeTrialInfo info = new TimeTrialInfo();
            info.cid = (int)jsonData[i]["cid"];
            info.name = (string)jsonData[i]["class_name"];
            info.star = (int)jsonData[i]["star"];
            info.mapId = (int)jsonData[i]["map_id"];
            info.limitTime = (int)jsonData[i]["limit_time"];
            info.isHas = (bool)jsonData[i]["is_has"];
            info.hasWater = (bool)jsonData[i]["has_water"];
            info.times = (int)jsonData[i]["times"];
            timeTrialModel.TimeTrialDic[info.cid] = info;
        }
        success?.Invoke();
    }

    public void ParseTimeTrialRank(JsonData jsonData, Action success = null) {
        var timeTrialModel = this.GetModel<ITimeTrialModel>();
        timeTrialModel.TimeTrialRankList.Clear();
        for (int i = 0; i < jsonData.Count; i++) {
            TimeTrialRankInfo info = new TimeTrialRankInfo();
            info.name = (string)jsonData[i]["user_name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank_num"];
            timeTrialModel.TimeTrialRankList.Add(info);
        }
        success?.Invoke();
    }

    public void ParseTimeTrialResult(JsonData jsonData, Action success = null) {
        var timeTrialModel = this.GetModel<ITimeTrialModel>();
        timeTrialModel.IsWin.Value = (bool)jsonData["is_win"];
        timeTrialModel.CompleteTime.Value = (int)jsonData["complete_time"];
        timeTrialModel.Rank.Value = (int)jsonData["rank"];
        timeTrialModel.IsBreakRecord.Value = (bool)jsonData["is_break_record"];
        timeTrialModel.RewardStar.Value = (int)jsonData["reward"];
        success?.Invoke();
    }

    public void ParseMatchMapData(JsonData jsonData, Action success = null) {
        var matchModel = this.GetModel<IMatchModel>();
        matchModel.MatchDic.Clear();
        int defaultSelect = 0;
        for (int i = 0; i < jsonData.Count; i++) {
            MatchInfo info = new MatchInfo();
            info.cid = (int)jsonData[i]["cid"];
            info.name = (string)jsonData[i]["name"];
            info.star = (int)jsonData[i]["star"];
            info.mapId = (int)jsonData[i]["map_id"];
            info.limitTime = (int)jsonData[i]["limit_time"];
            info.hasWater = (bool)jsonData[i]["has_water"];
            info.times = (int)jsonData[i]["times"];
            matchModel.MatchDic[info.cid] = info;

            if (i == defaultSelect) {
                matchModel.SelectInfo.Value = info;
            }
        }
        success?.Invoke();
    }

    public void ParseSelectMatch(JsonData jsonData, Action success = null) {
        MatchInfo info = new MatchInfo();
        info.cid = (int)jsonData["cid"];
        info.name = (string)jsonData["name"];
        info.star = (int)jsonData["star"];
        info.mapId = (int)jsonData["map_id"];
        info.limitTime = (int)jsonData["limit_time"];
        info.times = (int)jsonData["times"];
        info.startTime = (long)jsonData["start_time"];
        info.enrollTime = (long)jsonData["enroll_time"];
        this.GetModel<IMatchModel>().SelectInfo.Value = info;
        success?.Invoke();
    }

    public void ParseMatchRank(JsonData data, Action success = null) {
        var matchModel = this.GetModel<IMatchModel>();
        matchModel.MatchRankList.Clear();
        JsonData jsonData = data["rank"];
        for (int i = 0; i < jsonData.Count; i++) {
            MatchRankInfo info = new MatchRankInfo();
            info.name = (string)jsonData[i]["name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank"];
            matchModel.MatchRankList.Add(info);
        }
        success?.Invoke();
    }

    public void ParseEquipRes(JsonData jsonData, Action success = null) {
        var equipModel = this.GetModel<IEquipModel>();
        equipModel.EquipDic.Clear();
        JsonData data = jsonData["equips"];
        for (int i = 0; i < data.Count; i++) {
            EquipInfo info = new EquipInfo();
            info.eid = (int)data[i]["eid"];
            info.rid = (string)data[i]["rid"];
            info.equipName = (string)data[i]["equip_name"];
            info.star = (int)data[i]["star"];
            info.mass = (int)data[i]["mass"];
            info.power = (int)data[i]["power"];
            info.maxPower = (int)data[i]["max_power"];
            info.isHas = (bool)data[i]["is_has"];
            info.canWade = (bool)data[i]["can_wade"];
            info.isShow = (bool)data[i]["is_show"];

            equipModel.EquipDic[info.eid] = info;
        }
        success?.Invoke();
    }

    public PlayerCreateMsg ParsePlayerCreateMsg(JsonData jsonData, Action success = null) {
        Debug.LogWarning("Rec = " + jsonData.ToJson());
        PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg();
        playerCreateMsg.cid = (int)jsonData["cid"];
        playerCreateMsg.pos = new Vector3((float)Math.Round((float)jsonData["pos_x"], 2), (float)Math.Round((float)jsonData["pos_y"], 2), (float)Math.Round((float)jsonData["pos_z"], 2));
        string[] speed = ((string)jsonData["speed"]).Split(',');
        playerCreateMsg.speed = new Vector3(float.Parse(speed[0]), float.Parse(speed[1]), float.Parse(speed[2]));
        playerCreateMsg.timestamp = (long)jsonData["timestamp"];
        playerCreateMsg.userInfo.name = (string)jsonData["user_info"]["name"];
        playerCreateMsg.userInfo.uid = (int)jsonData["user_info"]["uid"];
        playerCreateMsg.userInfo.aid = (int)jsonData["user_info"]["aid"];
        playerCreateMsg.userInfo.star = (int)jsonData["user_info"]["star"];
        playerCreateMsg.userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        playerCreateMsg.userInfo.equipInfo.eid = (int)jsonData["user_info"]["equip_info"]["eid"];
        playerCreateMsg.userInfo.equipInfo.rid = (string)jsonData["user_info"]["equip_info"]["rid"];
        playerCreateMsg.userInfo.equipInfo.mass = (int)jsonData["user_info"]["equip_info"]["mass"];
        playerCreateMsg.userInfo.equipInfo.power = (int)jsonData["user_info"]["equip_info"]["power"];
        playerCreateMsg.userInfo.equipInfo.maxPower = (int)jsonData["user_info"]["equip_info"]["max_power"];
        success?.Invoke();
        return playerCreateMsg;
    }

    public PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null) {
        Debug.LogWarning("Rec = " + jsonData.ToJson());
        PlayerStateMsg playerStateMsg = new PlayerStateMsg();
        playerStateMsg.cid = (int)jsonData["cid"];
        playerStateMsg.pos = new Vector3((float)Math.Round((float)jsonData["pos_x"], 2), (float)Math.Round((float)jsonData["pos_y"], 2), (float)Math.Round((float)jsonData["pos_z"], 2));
        string[] speed = ((string)jsonData["speed"]).Split(',');
        playerStateMsg.speed = new Vector3(float.Parse(speed[0]), float.Parse(speed[1]), float.Parse(speed[2]));
        playerStateMsg.timestamp = (long)jsonData["timestamp"];
        playerStateMsg.uid = (int)jsonData["uid"];
        success?.Invoke();
        return playerStateMsg;
    }

    public PlayerOperatMsg ParsePlayerOperatMsg(JsonData jsonData, Action success = null) {
        Debug.LogWarning("Rec = " + jsonData.ToJson());
        PlayerOperatMsg playerOperatMsg = new PlayerOperatMsg();
        playerOperatMsg.cid = (int)jsonData["cid"];
        playerOperatMsg.controllerType = (ControllerType)(int)jsonData["controller_type"];
        playerOperatMsg.value = (int)jsonData["value"];
        playerOperatMsg.timestamp = (long)jsonData["timestamp"];
        playerOperatMsg.uid = (int)jsonData["uid"];
        success?.Invoke();
        return playerOperatMsg;
    }

    public PlayerCompleteMsg ParsePlayerCompleteMsg(JsonData jsonData, Action success = null) {
        Debug.LogWarning("Rec = " + jsonData.ToJson());
        PlayerCompleteMsg playerCompleteMsg = new PlayerCompleteMsg();
        playerCompleteMsg.cid = (int)jsonData["cid"];
        playerCompleteMsg.completeTime = (int)jsonData["complete_time"];
        playerCompleteMsg.uid = (int)jsonData["uid"];
        success?.Invoke();
        return playerCompleteMsg;
    }

    protected override void OnInit() {

    }
}
