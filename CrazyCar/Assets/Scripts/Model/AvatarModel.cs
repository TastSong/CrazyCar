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
}

public class AvatarModel : AbstractModel, IAvatarModel {

    public Dictionary<int, AvatarInfo> AvatarDic { get; set; } = new Dictionary<int, AvatarInfo>();

    protected override void OnInit() {

    }
}
