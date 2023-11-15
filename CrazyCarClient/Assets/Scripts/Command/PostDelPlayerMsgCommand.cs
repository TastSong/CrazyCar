using LitJson;
using System.Text;
using Utils;
using QFramework;
public class PostDelPlayerMsgCommand: AbstractCommand {
    protected override void OnExecute()
    {
        StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("msg_type");
            w.Write((int)MsgType.DelPlayer);
            w.WritePropertyName("cid");
            if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
                w.Write(this.GetModel<IMatchModel>().SelectInfo.Value.cid);
            } else {
                w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
            }
            w.WritePropertyName("timestamp");
            w.Write(Util.GetTime());       
            w.WritePropertyName("uid");
            w.Write(this.GetModel<IUserModel>().Uid.Value);
            w.WriteObjectEnd();
            //Debug.Log("Post Server : " + sb.ToString());
            this.GetSystem<INetworkSystem>().SendMsgToServer(sb.ToString());
    }
}
