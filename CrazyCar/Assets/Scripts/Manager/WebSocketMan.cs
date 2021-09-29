using LitJson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityWebSocket;

public class WebSocketMan : MonoBehaviour {
    public static WebSocketMan manager = null;
    public string address = "ws://127.0.0.1";
    public int receiveCount;

    private IWebSocket socket;
    private JsonData recJD = new JsonData();

    private void Awake() {
        if (manager == null) {
            manager = this;
        } else if (manager != this) {
            Destroy(gameObject);
        }
    }

    public void Init(string url) {
        address = url;
        socket = new WebSocket(address);
        socket.OnOpen += Socket_OnOpen;
        socket.OnMessage += Socket_OnMessage;
        socket.OnClose += Socket_OnClose;
        socket.OnError += Socket_OnError;
        socket.ConnectAsync();
    }

    public void SendMsgToServer(JsonData msg) {
        if (socket != null) {
            socket.SendAsync(msg.ToJson());
        }
    }

    private void Socket_OnOpen(object sender, OpenEventArgs e) {
        Debug.Log(string.Format("Connected: {0}\n", address));
    }

    private void Socket_OnMessage(object sender, MessageEventArgs e) {
        if (e.IsBinary) {
            Debug.Log(string.Format("Receive Bytes ({1}): {0}\n", e.Data, e.RawData.Length));
        } else if (e.IsText) {
            Debug.Log(string.Format("Receive: {0}\n", e.Data));
            if (GameController.manager.curGameType == CurGameType.TimeTrial) {
                recJD = JsonMapper.ToObject(e.Data);
            }
        }
        receiveCount += 1;
    }

    private void Socket_OnClose(object sender, CloseEventArgs e) {
        Debug.Log(string.Format("Closed: StatusCode: {0}, Reason: {1}\n", e.StatusCode, e.Reason));
    }

    private void Socket_OnError(object sender, ErrorEventArgs e) {
        Debug.Log(string.Format("Error: {0}\n", e.Message));
    }

    private void OnApplicationQuit() {
        if (socket != null && socket.ReadyState != WebSocketState.Closed) {
            socket.CloseAsync();
        }
    }
}
