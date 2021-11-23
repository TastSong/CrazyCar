using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using LitJson;
using System;

public class AvatarInfo {
    public int aid;
    public string name;
    public bool isHas;
    public int star;
}

public interface IAvatarModel : IModel {
    Dictionary<int, AvatarInfo> AvatarDic { get; set; }
    void ParseAvatarRes(JsonData jsonData, Action success = null);
}

public class AvatarModel : AbstractModel, IAvatarModel {

    public Dictionary<int, AvatarInfo> AvatarDic { get; set; } = new Dictionary<int, AvatarInfo>();

    public void ParseAvatarRes(JsonData jsonData, Action success = null) {
        AvatarDic.Clear();
        JsonData data = jsonData["avatars"];
        for (int i = 0; i < data.Count; i++) {
            AvatarInfo info = new AvatarInfo();
            info.aid = (int)data[i]["aid"];
            info.name = (string)data[i]["name"];
            info.isHas = (bool)data[i]["is_has"];
            info.star = (int)data[i]["star"];
            AvatarDic[info.aid] = info;
        }
        success?.Invoke();
    }

    protected override void OnInit() {
        
    }
}
