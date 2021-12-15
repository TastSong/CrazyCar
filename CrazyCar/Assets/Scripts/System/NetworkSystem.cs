using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using UnityEngine.Networking;
using System;
using LitJson;
using System.Text;

public interface INetworkSystem : ISystem {
    ServerType ServerType { get; set; }
    NetType NetType { get; set; }
    string HttpBaseUrl { get; set; }
    void Connect(string url);
    void SendMsgToServer(string msg);
    void CloseConnect();
    IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null);
    PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null);
}

public class NetworkSystem : AbstractSystem, INetworkSystem {
    private ServerType serverType;
    private NetType netType;

    public ServerType ServerType {
        get {
            return serverType;
        }
        set {
            serverType = value;
        }
    }

    public NetType NetType {
        get {
            return netType;
        }
        set {
            netType = value;
        }
    }
    public string HttpBaseUrl { get; set; }


    public IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null) {
        if (this.GetModel<IGameControllerModel>().StandAlone.Value) {
            yield break;
        }

        UnityWebRequest request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST);
        if (data != null) {
            request.uploadHandler = new UploadHandlerRaw(data);
        }
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("Accept", "application/json");
        if (!string.IsNullOrEmpty(token)) {
            request.SetRequestHeader("Authorization", token);
        }

        yield return request.SendWebRequest();

        if (request.isNetworkError || request.isHttpError) {
            Debug.LogError("Is Network Error url = " + url);
        } else {
            byte[] results = request.downloadHandler.data;
            string s = Encoding.UTF8.GetString(results);
            Debug.Log(s);
            JsonData d = JsonMapper.ToObject(s);

            code?.Invoke((int)d["code"]);
            if ((int)d["code"] == 200) {
                succData?.Invoke(d["data"]);
            }
        }
    }

    public PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null) {
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
    public void Connect(string url) {
        if (netType == NetType.WebSocket) {
            this.GetSystem<IWebSocketSystem>().Connect(url);
        } else if (netType == NetType.KCP) {
            this.GetSystem<IKCPSystem>().ConnectKCP(url);
        }
    }

    public void SendMsgToServer(string msg) {
        if (netType == NetType.WebSocket) {
            this.GetSystem<IWebSocketSystem>().SendMsgToServer(msg);
        } else if (netType == NetType.KCP) {
            this.GetSystem<IKCPSystem>().SendMsgToServer(msg);
        }
    }

    public void CloseConnect() {
        if (netType == NetType.WebSocket) {
            this.GetSystem<IWebSocketSystem>().CloseConnect();
        } else if (netType == NetType.KCP) {
            this.GetSystem<IKCPSystem>().CloseConnect();
        }
    }

    protected override void OnInit() {

    }
}
