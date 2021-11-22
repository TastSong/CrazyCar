using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using System;
using TFramework;

public class AvatarInfo {
    public int aid;
    public string name;
    public bool isHas;
    public int star;
}

public class AvatarManager : IController {
    public int curAid;

    public Dictionary<int, AvatarInfo> avatarDic = new Dictionary<int, AvatarInfo>();

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    public void ParseAvatarRes(JsonData jsonData, Action success = null) {
        avatarDic.Clear();
        curAid = this.GetModel<IUserModel>().Aid.Value;
        JsonData data = jsonData["avatars"];
        for (int i = 0; i < data.Count; i++) {
            AvatarInfo info = new AvatarInfo();
            info.aid = (int)data[i]["aid"];
            info.name = (string)data[i]["name"];
            info.isHas = (bool)data[i]["is_has"];
            info.star = (int)data[i]["star"];
            avatarDic[info.aid] = info;
        }
        success?.Invoke();
    }
}
