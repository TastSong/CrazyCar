using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using LitJson;

public interface IPlayerInfoModel : IModel {
    UserInfo GetPlayerInfoByUid(int uid);

    UserInfo ParsePlayerInfoData(JsonData jsonData);
}

public class PalyerInfoModel : AbstractModel, IPlayerInfoModel {
    private Dictionary<int, UserInfo> mPlayerInfoDic = new Dictionary<int, UserInfo>();

    protected override void OnInit() {

    }

    public UserInfo GetPlayerInfoByUid(int uid) {
        if (mPlayerInfoDic.ContainsKey(uid)) {
            return mPlayerInfoDic[uid];
        } else {
            Debug.LogError("The user does not exist");
            return new UserInfo();
        }
    }

    public UserInfo ParsePlayerInfoData(JsonData jsonData) {
        UserInfo userInfo = new UserInfo();
        userInfo.name = (string)jsonData["user_info"]["name"];
        userInfo.uid = (int)jsonData["user_info"]["uid"];
        userInfo.aid = (int)jsonData["user_info"]["aid"];
        userInfo.star = (int)jsonData["user_info"]["star"];
        userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        userInfo.avatarNum = (int)jsonData["user_info"]["avatar_num"];
        userInfo.travelTimes = (int)jsonData["user_info"]["travel_times"];
        userInfo.mapNum = (int)jsonData["user_info"]["map_num"];

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
        userInfo.equipInfo = info;

        if (!mPlayerInfoDic.ContainsKey(userInfo.uid)) {
            mPlayerInfoDic[userInfo.uid] = userInfo;
        }
        return userInfo;
    }
}

