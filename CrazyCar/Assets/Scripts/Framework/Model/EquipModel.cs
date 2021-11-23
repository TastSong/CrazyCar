using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using LitJson;
using System;

public enum EquipType {
    Car = 0,
    Player
}

public class EquipInfo {
    public int eid;
    public string rid;
    public string equipName;
    public int star;
    public int mass;
    public int speed;
    public int maxSpeed;
    public bool isHas;
    public bool isShow;
}

public interface IEquipModel : IModel {
    Dictionary<int, EquipInfo> EquipDic { get; set; }

    Dictionary<string, EquipResource> EquipResource { get; set; }

    void ParseEquipRes(JsonData jsonData, Action success = null);
}

public class EquipModel : AbstractModel, IEquipModel {
    public Dictionary<int, EquipInfo> EquipDic { get; set; } = new Dictionary<int, EquipInfo>();

    public Dictionary<string, EquipResource> EquipResource { get; set; } = new Dictionary<string, EquipResource>();

    public void ParseEquipRes(JsonData jsonData, Action success = null) {
        EquipDic.Clear();
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

            EquipDic[info.eid] = info;
        }
        success?.Invoke();
    }

    protected override void OnInit() {
        
    }
}
