using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class UserInfoQuery : AbstractQuery<UserInfo> {
    public override UserInfo Do() {
        var info = this.GetModel<IUserModel>();
        UserInfo userInfo = new UserInfo();
        userInfo.aid = info.Aid.Value;
        userInfo.avatarNum = info.AvatarNum.Value;
        userInfo.equipInfo = info.EquipInfo.Value;
        userInfo.isVIP = info.IsVIP.Value;
        userInfo.mapNum = info.MapNum.Value;
        userInfo.name = info.Name.Value;
        userInfo.star = info.Star.Value;
        userInfo.uid = info.Uid.Value;
        userInfo.travelTimes = info.TravelTimes.Value;
        return userInfo;
    }
}
