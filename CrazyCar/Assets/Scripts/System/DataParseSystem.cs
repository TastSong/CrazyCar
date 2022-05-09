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
    void ParseMatchClassData(JsonData jsonData, Action success = null);
    public void ParseSelectMatch(JsonData jsonData, Action success = null);
    void ParseMatchRank(JsonData data, Action success = null);
    void ParseEquipRes(JsonData jsonData, Action success = null);
}

public class DataParseSystem : AbstractSystem, IDataParseSystem {
    public void ParseAvatarRes(JsonData jsonData, Action success = null) {
        var avatarModel = this.GetModel<IAvatarModel>();
        avatarModel.AvatarDic.Clear();
        JsonData data = jsonData["avatars"];
        for (int i = 0; i < data.Count; i++) {
            AvatarInfo info = new AvatarInfo();
            info.aid = (int)data[i]["aid"];
            info.name = (string)data[i]["name"];
            info.isHas = (bool)data[i]["is_has"];
            info.star = (int)data[i]["star"];
            avatarModel.AvatarDic[info.aid] = info;
        }
        success?.Invoke();
    }

    public void ParseSelfUserInfo(JsonData jsonData) {
        var userModel = this.GetModel<IUserModel>();
        userModel.Name.Value = (string)jsonData["user_info"]["name"];
        userModel.Uid.Value = (int)jsonData["user_info"]["uid"];
        userModel.Aid.Value = (int)jsonData["user_info"]["aid"];
        userModel.Star.Value = (int)jsonData["user_info"]["star"];
        userModel.IsVIP.Value = (bool)jsonData["user_info"]["is_vip"];
        userModel.IsSuperuser.Value = (bool)jsonData["user_info"]["is_superuser"];
        userModel.AvatarNum.Value = (int)jsonData["user_info"]["avatar_num"];
        userModel.TravelTimes.Value = (int)jsonData["user_info"]["travel_times"];
        userModel.MapNum.Value = (int)jsonData["user_info"]["map_num"];

        JsonData data = jsonData["user_info"]["equip_info"];
        EquipInfo info = new EquipInfo();
        info.eid = (int)data["eid"];
        info.rid = (string)data["rid"];
        info.equipName = (string)data["equip_name"];
        info.star = (int)data["star"];
        info.mass = (int)data["mass"];
        info.speed = (int)data["speed"];
        info.maxSpeed = (int)data["max_speed"];
        info.isHas = (bool)data["is_has"];
        info.isShow = (bool)data["is_show"];
        userModel.EquipInfo.Value = info;
    }

    public UserInfo ParseUserInfo(JsonData jsonData)
    {
        UserInfo userInfo = new UserInfo();
        userInfo.name = (string)jsonData["user_info"]["name"];
        userInfo.uid = (int)jsonData["user_info"]["uid"];
        userInfo.aid = (int)jsonData["user_info"]["aid"];
        userInfo.star = (int)jsonData["user_info"]["star"];
        userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        userInfo.isSuperuser = (bool)jsonData["user_info"]["is_superuser"];
        userInfo.avatarNum = (int)jsonData["user_info"]["avatar_num"];
        userInfo.travelTimes = (int)jsonData["user_info"]["travel_times"];
        userInfo.mapNum = (int)jsonData["user_info"]["map_num"];

        JsonData equipData = jsonData["user_info"]["equip_info"];
        EquipInfo info = new EquipInfo();
        info.eid = (int)equipData["eid"];
        info.rid = (string)equipData["rid"];
        info.equipName = (string)equipData["equip_name"];
        info.star = (int)equipData["star"];
        info.mass = (int)equipData["mass"];
        info.speed = (int)equipData["speed"];
        info.maxSpeed = (int)equipData["max_speed"];
        info.isHas = (bool)equipData["is_has"];
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
            info.name = (string)jsonData[i]["name"];
            info.star = (int)jsonData[i]["star"];
            info.mapId = (int)jsonData[i]["map_id"];
            info.limitTime = (int)jsonData[i]["limit_time"];
            info.isHas = (bool)jsonData[i]["is_has"];
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
            info.name = (string)jsonData[i]["name"];
            info.aid = (int)jsonData[i]["aid"];
            info.completeTime = (int)jsonData[i]["complete_time"];
            info.rank = (int)jsonData[i]["rank"];
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

    public void ParseMatchClassData(JsonData jsonData, Action success = null) {
        var matchModel = this.GetModel<IMatchModel>();
        matchModel.MatchDic.Clear();
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
            matchModel.MatchDic[info.cid] = info;
        }
        success?.Invoke();
    }

    public void ParseSelectMatch(JsonData jsonData, Action success = null) {
        var info = this.GetModel<IMatchModel>().SelectInfo;
        info.Value.cid = (int)jsonData["cid"];
        info.Value.name = (string)jsonData["name"];
        info.Value.star = (int)jsonData["star"];
        info.Value.mapId = (int)jsonData["map_id"];
        info.Value.limitTime = (int)jsonData["limit_time"];
        info.Value.times = (int)jsonData["times"];
        info.Value.startTime = (long)jsonData["start_time"];
        info.Value.enrollTime = (long)jsonData["enroll_time"];
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
            info.speed = (int)data[i]["speed"];
            info.maxSpeed = (int)data[i]["max_speed"];
            info.isHas = (bool)data[i]["is_has"];
            info.isShow = (bool)data[i]["is_show"];

            equipModel.EquipDic[info.eid] = info;
        }
        success?.Invoke();
    }

    protected override void OnInit() {

    }
}
