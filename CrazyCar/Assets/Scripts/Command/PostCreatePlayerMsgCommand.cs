using LitJson;
using System.Text;
using Utils;
using QFramework;

public class PostCreatePlayerMsgCommand : AbstractCommand {
    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("msg_type");
        w.Write((int)MsgType.CreatePlayer);
        w.WritePropertyName("cid");
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
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
        w.WritePropertyName("user_info");
        w.WriteObjectStart();
        w.WritePropertyName("name");
        w.Write(this.GetModel<IUserModel>().Name.Value);
        w.WritePropertyName("uid");
        w.Write(this.GetModel<IUserModel>().Uid.Value);
        w.WritePropertyName("aid");
        w.Write(this.GetModel<IUserModel>().Aid.Value);
        w.WritePropertyName("star");
        w.Write(this.GetModel<IUserModel>().Star.Value);
        w.WritePropertyName("is_vip");
        w.Write(this.GetModel<IUserModel>().IsVIP.Value);
        w.WritePropertyName("equip_info");
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(this.GetModel<IUserModel>().EquipInfo.Value.eid);
        w.WritePropertyName("rid");
        w.Write(this.GetModel<IUserModel>().EquipInfo.Value.rid);
        w.WritePropertyName("mass");
        w.Write(this.GetModel<IUserModel>().EquipInfo.Value.mass);
        w.WritePropertyName("speed");
        w.Write(this.GetModel<IUserModel>().EquipInfo.Value.speed);
        w.WritePropertyName("max_speed");
        w.Write(this.GetModel<IUserModel>().EquipInfo.Value.maxSpeed);
        w.WriteObjectEnd();
        w.WriteObjectEnd();
        w.WriteObjectEnd();
        //Debug.Log("Post Server : " + sb.ToString());
        this.GetSystem<INetworkSystem>().SendMsgToServer(sb.ToString());
    }
}
