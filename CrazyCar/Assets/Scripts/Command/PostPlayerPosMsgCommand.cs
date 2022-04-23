using LitJson;
using System.Text;
using Utils;
using QFramework;


public class PostPlayerPosMsgCommand : AbstractCommand{
    protected override void OnExecute() {
        if (this.GetSystem<IPlayerManagerSystem>().SelfPlayer == null)
        {
            return;
        }
        StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("msg_type");
            w.Write((int)MsgType.PlayerState);
            w.WritePropertyName("cid");
            if (this.GetModel<IGameControllerModel>().CurGameType == GameType.Match) {
                w.Write(this.GetModel<IMatchModel>().SelectInfo.Value.cid);
            } else {
                w.Write(this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid);
            }
            w.WritePropertyName("pos_x");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.transform.position.x);
            w.WritePropertyName("pos_y");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.transform.position.y);
            w.WritePropertyName("pos_z");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.transform.position.z);
            w.WritePropertyName("speed");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.rig.velocity.x.ToString("f2") + "," + 
                this.GetSystem<IPlayerManagerSystem>().SelfPlayer.rig.velocity.y.ToString("f2") + "," +
                this.GetSystem<IPlayerManagerSystem>().SelfPlayer.rig.velocity.z.ToString("f2"));
            w.WritePropertyName("timestamp");
            w.Write(Util.GetTime());
            w.WritePropertyName("uid");
            w.Write(this.GetModel<IUserModel>().Uid.Value); 
            w.WriteObjectEnd();
            //Debug.Log("Post Server : " + sb.ToString());
            this.GetSystem<INetworkSystem>().SendMsgToServer(sb.ToString());
    }
}