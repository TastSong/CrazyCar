using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class AvatarInfo {
    public int aid;
    public string name;
    public bool isHas;
}

public class AvatarManager {
    public string curAid;
    public Dictionary<int, AvatarInfo> avatarDic = new Dictionary<int, AvatarInfo>();

    public void ParseAvatarRes(JsonData jsonData, Util.NoneParamFunction success = null) {
        curAid = (string)jsonData["current_aid"];
        JsonData data = jsonData["avatars"];
        for (int i = 0; i < data.Count; i++) {
            AvatarInfo info = new AvatarInfo();
            info.aid = (int)data[i]["aid"];
            info.name = (string)data[i]["name"];
            info.isHas = (bool)data[i]["is_has"];
            avatarDic[info.aid] = info;
        }
    }
}
