using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityWebSocket;
using TFramework;

public interface IWebSocketSystem : ISystem {
    void Init(string url);
    void SendMsgToServer(string msg);
    void CloseConnect();
}

public class WebSocketSystem : AbstractSystem, IWebSocketSystem {
    private string address;
    private int receiveCount;
    private IWebSocket socket;
    private JsonData recJD = new JsonData();

    public void Init(string url) {
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
    }

    private void Socket_OnMessage(object sender, MessageEventArgs e) {
        if (e.IsBinary) {
            Debug.Log(string.Format("Receive Bytes ({1}): {0}\n", e.Data, e.RawData.Length));
        } else if (e.IsText) {
            Debug.Log("Get Server Data : " + e.Data);
            recJD = JsonMapper.ToObject(e.Data);
            if (GameController.manager.curGameType == CurGameType.TimeTrial ||
                GameController.manager.curGameType == CurGameType.Match) {
                this.GetSystem<IPlayerManagerSystem>().RespondAction(ParsePlayerStateMsg(recJD));
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

    private PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null) {
        PlayerStateMsg playerStateMsg = new PlayerStateMsg();
        playerStateMsg.cid = (int)jsonData["cid"];
        playerStateMsg.pos = new Vector3((float)jsonData["pos_x"], (float)jsonData["pos_y"], (float)jsonData["pos_z"]);
        playerStateMsg.speed = (int)(float)jsonData["speed"];
        playerStateMsg.userInfo.name = (string)jsonData["user_info"]["name"];
        playerStateMsg.userInfo.uid = (int)jsonData["user_info"]["uid"];
        playerStateMsg.userInfo.aid = (int)jsonData["user_info"]["aid"];
        playerStateMsg.userInfo.star = (int)jsonData["user_info"]["star"];
        playerStateMsg.userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        playerStateMsg.userInfo.equipInfo.eid = (int)jsonData["user_info"]["equip_info"]["eid"];
        playerStateMsg.userInfo.equipInfo.rid = (string)jsonData["user_info"]["equip_info"]["rid"];
        success?.Invoke();
        return playerStateMsg;
    }

    protected override void OnInit() {
        
    }

    
}
