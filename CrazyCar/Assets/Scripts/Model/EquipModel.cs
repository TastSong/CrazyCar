using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
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
}

public class EquipModel : AbstractModel, IEquipModel {
    public Dictionary<int, EquipInfo> EquipDic { get; set; } = new Dictionary<int, EquipInfo>();

    public Dictionary<string, EquipResource> EquipResource { get; set; } = new Dictionary<string, EquipResource>();

    protected override void OnInit() {
        
    }
}
