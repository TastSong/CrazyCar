using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityWebSocket;
using QFramework;

public interface IWebSocketSystem : ISystem, ISocketSystem {
}

public class WebSocketSystem : AbstractSystem, IWebSocketSystem {
    private string address;
    private int receiveCount;
    private IWebSocket socket;
    private JsonData recJD = new JsonData();
    private PlayerStateMsg playerStateMsg = new PlayerStateMsg();

    public Action ConnectSuccAction { get; set; }
    public Action CloseSuccAction { get; set; }
    public Action BreakLineAction { get; set; }

    public bool IsConnected {
        get {
            return socket != null && socket.ReadyState == WebSocketState.Open;
        }
    }

    public bool NeedReconnect { get; set; }

    public void Reconnect() {
        socket.ConnectAsync();
    }

    public void Connect(string url, int port = 0) {
        if (IsConnected) {
            return;
        }
        address = url;
        socket = new WebSocket(address);
        socket.OnOpen += Socket_OnOpen;
        socket.OnMessage += Socket_OnMessage;
        socket.OnClose += Socket_OnClose;
        socket.OnError += Socket_OnError;
        socket.ConnectAsync();
    }

    public void SendMsgToServer(string msg) {
        if (socket != null) {
            socket.SendAsync(msg);
        }
    }

    public void CloseConnect() {
        if (socket != null && socket.ReadyState != WebSocketState.Closed) {
            socket.CloseAsync();
        }
    }

    private void Socket_OnOpen(object sender, OpenEventArgs e) {
        Debug.Log(string.Format("Connected: {0}\n", address));
        ConnectSuccAction?.Invoke();
    }

    private void Socket_OnMessage(object sender, MessageEventArgs e) {
        if (e.IsBinary) {
            Debug.Log(string.Format("Receive Bytes ({1}): {0}\n", e.Data, e.RawData.Length));
        } else if (e.IsText) {
            recJD = JsonMapper.ToObject(e.Data);
            this.GetSystem<INetworkSystem>().RespondAction(recJD);
        }
        receiveCount += 1;
    }

    private void Socket_OnClose(object sender, CloseEventArgs e) {
        Debug.Log(string.Format("Closed: StatusCode: {0}, Reason: {1}\n", e.StatusCode, e.Reason));
        if (e.StatusCode != CloseStatusCode.Normal) {
            //BreakLineAction?.Invoke();
        }
        CloseSuccAction?.Invoke();
    }

    private void Socket_OnError(object sender, ErrorEventArgs e) {
        Debug.Log(string.Format("Error: {0}\n", e.Message));
        //BreakLineAction?.Invoke();
    }

    protected override void OnInit() {
        
    }   
}
