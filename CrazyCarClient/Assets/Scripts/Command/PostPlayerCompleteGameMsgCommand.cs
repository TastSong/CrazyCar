using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using System.Text;
using LitJson;
using Utils;

public class PostPlayerCompleteGameMsgCommand : AbstractCommand {
    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("msg_type");
        w.Write((int)MsgType.PlayerCompleteGame);
        w.WritePropertyName("cid");
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            w.Write(this.GetModel<IMatchModel>().SelectInfo.Value.cid);
        } else {
            w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
        }
        w.WritePropertyName("complete_time");
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            w.Write(this.GetModel<IMatchModel>().GetCompleteTime());
        } else {
            w.Write(Util.GetTime());
        }
        w.WritePropertyName("uid");
        w.Write(this.GetModel<IUserModel>().Uid.Value);
        w.WriteObjectEnd();
        //Debug.Log("Post Server : " + sb.ToString());
        this.GetSystem<INetworkSystem>().SendMsgToServer(sb.ToString());
    }
}
