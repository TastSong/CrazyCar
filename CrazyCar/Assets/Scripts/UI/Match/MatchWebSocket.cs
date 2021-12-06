using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class MatchWebSocket : MonoBehaviour,IController {
    private void Start() {
        if (this.GetModel<IGameControllerModel>().CurGameType == GameType.Match) {
            string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) + 
                "websocket/MatchWebSocket/" +
                this.GetModel<IUserModel>().Uid.Value + "," +
                this.GetModel<IMatchModel>().SelectInfo.Value.cid;
            this.GetSystem<IWebSocketSystem>().Init(ws);
            Util.DelayExecuteWithSecond(3, () => { CoroutineController.manager.StartCoroutine(SendMsg()); }); 
        }           
    }

    private IEnumerator SendMsg() {
        while (true) {
            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("cid");
            w.Write(this.GetModel<IMatchModel>().SelectInfo.Value.cid);
            w.WritePropertyName("pos_x");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.transform.position.x);
            w.WritePropertyName("pos_y");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.transform.position.y);
            w.WritePropertyName("pos_z");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.transform.position.z);
            w.WritePropertyName("speed");
            w.Write(this.GetSystem<IPlayerManagerSystem>().SelfPlayer.rig.velocity.x);
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
            w.WriteObjectEnd();
            w.WriteObjectEnd();
            w.WriteObjectEnd();
            //Debug.Log("Post Server : " + sb.ToString());
            this.GetSystem<IWebSocketSystem>().SendMsgToServer(sb.ToString());
            yield return new WaitForSeconds(this.GetModel<IGameControllerModel>().SendMsgOffTime.Value);
        }
    }

    private void OnDestroy() {
        this.GetSystem<IWebSocketSystem>().CloseConnect();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
