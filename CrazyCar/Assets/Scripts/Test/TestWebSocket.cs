using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class TestWebSocket : MonoBehaviour
{
    private void Start() {
        WebSocketMan.manager.Init("ws://localhost:8080/CrazyCarServer/websocket/TimeTrialWebSocket/" + 1);
        WebSocketMan.manager.StartCoroutine(SendMsg());
    }

    private IEnumerator SendMsg() {
        int x = 0;
        while (true) {

            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("uid");
            w.Write("tast");
            w.WritePropertyName("cid");
            w.Write(1);
            w.WritePropertyName("pos");
            w.Write(x++);
            w.WriteObjectEnd();
            Debug.Log("++++++ " + sb.ToString());
            WebSocketMan.manager.SendMsgToServer(sb.ToString());
            yield return new WaitForSeconds(1.0f);
        }
    }
}
