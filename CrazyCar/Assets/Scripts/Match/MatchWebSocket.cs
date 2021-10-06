using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class MatchWebSocket : MonoBehaviour {
    private void Start() {
        if (GameController.manager.curGameType == CurGameType.Match) {
            string ws = "ws" + NetworkController.manager.HttpBaseUrl.Substring(4) + 
                "websocket/MatchWebSocket/" +
                GameController.manager.userInfo.uid + "," +
                GameController.manager.matchManager.selectInfo.cid;
            WebSocketMan.manager.Init(ws);
            WebSocketMan.manager.StartCoroutine(SendMsg());
        }           
    }

    private IEnumerator SendMsg() {
        while (true) {
            if (GameController.manager.matchManager.IsStartGame) {
                StringBuilder sb = new StringBuilder();
                JsonWriter w = new JsonWriter(sb);
                w.WriteObjectStart();
                w.WritePropertyName("cid");
                w.Write(GameController.manager.matchManager.selectInfo.cid);
                w.WritePropertyName("pos_x");
                w.Write(PlayerManager.manager.GetSelfPlayer.transform.position.x);
                w.WritePropertyName("pos_y");
                w.Write(PlayerManager.manager.GetSelfPlayer.transform.position.y);
                w.WritePropertyName("pos_z");
                w.Write(PlayerManager.manager.GetSelfPlayer.transform.position.z);
                w.WritePropertyName("speed");
                w.Write(PlayerManager.manager.GetSelfPlayer.rig.velocity.x);
                w.WritePropertyName("user_info");
                w.WriteObjectStart();
                w.WritePropertyName("name");
                w.Write(GameController.manager.userInfo.name);
                w.WritePropertyName("uid");
                w.Write(GameController.manager.userInfo.uid);
                w.WritePropertyName("aid");
                w.Write(GameController.manager.userInfo.aid);
                w.WritePropertyName("star");
                w.Write(GameController.manager.userInfo.star);
                w.WritePropertyName("is_vip");
                w.Write(GameController.manager.userInfo.isVIP);
                w.WritePropertyName("equip_info");
                w.WriteObjectStart();
                w.WritePropertyName("eid");
                w.Write(GameController.manager.userInfo.equipInfo.eid);
                w.WritePropertyName("rid");
                w.Write(GameController.manager.userInfo.equipInfo.rid);
                w.WriteObjectEnd();
                w.WriteObjectEnd();
                w.WriteObjectEnd();
                //Debug.Log("Post Server : " + sb.ToString());
                WebSocketMan.manager.SendMsgToServer(sb.ToString());
            }
            yield return new WaitForSeconds(GameController.manager.sendMsgOffTime);
        }
    }
}
