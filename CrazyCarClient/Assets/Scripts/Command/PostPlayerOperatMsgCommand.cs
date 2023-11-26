using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using System.Text;
using LitJson;
using Utils;

public class PostPlayerOperatMsgCommand : AbstractCommand {
    private ControllerType controllerType;
    private int value;

    public PostPlayerOperatMsgCommand(ControllerType controllerType, int value) {
        this.controllerType = controllerType;
        this.value = value;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("msg_type");
        w.Write((int)MsgType.PlayerOperat);
        w.WritePropertyName("cid");
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            w.Write(this.GetModel<IMatchModel>().SelectInfo.Value.cid);
        } else {
            w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
        }
        w.WritePropertyName("controller_type");
        w.Write((int)controllerType);
        w.WritePropertyName("value");
        w.Write(value);
        w.WritePropertyName("timestamp");
        w.Write(Util.GetTime());
        w.WritePropertyName("uid");
        w.Write(this.GetModel<IUserModel>().Uid.Value);
        w.WriteObjectEnd();
        //Debug.LogError("PostPlayerOperatMsgCommand : " + sb.ToString());
        this.GetSystem<INetworkSystem>().SendMsgToServer(sb.ToString());
    }
}
