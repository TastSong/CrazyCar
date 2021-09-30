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
            if (GameController.manager.timeTrialManager.IsStartGame) {
                StringBuilder sb = new StringBuilder();
                JsonWriter w = new JsonWriter(sb);
                w.WriteObjectStart();
                    w.WritePropertyName("book");
                        w.WriteObjectStart();
                        w.WritePropertyName("title");
                        w.Write("android game!");
                        w.WritePropertyName("author");
                        w.Write("pei");
                        w.WritePropertyName("bookdetail");
                            w.WriteObjectStart();
                            w.WritePropertyName("pages");
                            w.Write(429);
                            w.WritePropertyName("about");
                            w.Write(null);
                            w.WriteObjectEnd();
                    w.WriteObjectEnd();
                w.WriteObjectEnd();
                Debug.Log("++++++ " + sb.ToString());
                WebSocketMan.manager.SendMsgToServer(sb.ToString());
            }          
            yield return new WaitForSeconds(1.0f);
        }
    }

    private void Test() {
        JsonWriter w = new JsonWriter();
        w.WriteObjectStart();
        w.WritePropertyName("book");
            w.WriteObjectStart();
            w.WritePropertyName("title");
            w.Write("android game!");
            w.WritePropertyName("author");
            w.Write("pei");
            w.WritePropertyName("bookdetail");
                w.WriteObjectStart();
                w.WritePropertyName("pages");
                w.Write(429);
                w.WritePropertyName("about");
                w.Write(null);
                w.WriteObjectEnd();
            w.WriteObjectEnd();
        w.WriteObjectEnd();
        Debug.Log(w.ToString());
    }
}
