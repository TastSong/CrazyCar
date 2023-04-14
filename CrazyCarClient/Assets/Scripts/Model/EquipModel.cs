using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using LitJson;
using System;

[Serializable]
public class EquipInfo {
    public int eid;
    public string rid;
    public string equipName;
    public int star;
    public int mass;
    public int power;
    public int maxPower;
    public bool isHas;
    public bool canWade;
    public bool isShow;
}

public interface IEquipModel : IModel {
    public Dictionary<int, EquipInfo> EquipDic { get; set; }

    public Dictionary<string, EquipResource> EquipResource { get; set; }
}

public class EquipModel : AbstractModel, IEquipModel {
    public Dictionary<int, EquipInfo> EquipDic { get; set; } = new Dictionary<int, EquipInfo>();

    public Dictionary<string, EquipResource> EquipResource { get; set; } = new Dictionary<string, EquipResource>();

    protected override void OnInit() {
        
    }
}
