using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class TimeTrialWebSocket : MonoBehaviour {
    private void Start() {
        WebSocketMan.manager.Init("ws://localhost:8080/CrazyCarServer/websocket/TimeTrialWebSocket/" +
            GameController.manager.timeTrialManager.selectInfo.cid);
        WebSocketMan.manager.StartCoroutine(SendMsg());
    }

    private IEnumerator SendMsg() {
        while (true) {
            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("uid");
            w.Write(GameController.manager.userInfo.uid);
            w.WritePropertyName("cid");
            w.Write(GameController.manager.timeTrialManager.selectInfo.cid);
            w.WritePropertyName("pos");
            w.Write(PlayerManager.manager.timeTrialPlayer.transform.position.x);
            w.WriteObjectEnd();
            Debug.Log("++++++ " + sb.ToString());
            WebSocketMan.manager.SendMsgToServer(JsonMapper.ToObject(sb.ToString()));
            yield return new WaitForSeconds(1.0f);
        }
    }
}
