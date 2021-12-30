using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public interface IRoomMsgModel : IModel {
    int Num { get; set; }
}

public class RoomMsgModel : AbstractModel, IRoomMsgModel {
    public int Num { get; set; }

    protected override void OnInit() {
        
    }
}
