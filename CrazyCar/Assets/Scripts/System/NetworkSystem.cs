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
    Queue<PlayerStateMsg> PlayerStateMsgs { get; set; }
    System.Object MsgLock { get; set; }
    void EnterRoom(GameType gameType, int cid, Action succ = null);
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
    public Queue<PlayerStateMsg> PlayerStateMsgs { get; set; } = new Queue<PlayerStateMsg>();
    public object MsgLock { get; set; } = new object();

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
            this.GetModel<IGameControllerModel>().LoadingUI.HideLoading();
            byte[] results = request.downloadHandler.data;
            string s = Encoding.UTF8.GetString(results);
            Debug.Log(url + " : " + s);
            JsonData d = JsonMapper.ToObject(s);

            code?.Invoke((int)d["code"]);
            if ((int)d["code"] == 200) {
                succData?.Invoke(d["data"]);
            }
        }
    }

    public PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null) {
        Debug.Log("Rec = " + jsonData.ToJson());
        PlayerStateMsg playerStateMsg = new PlayerStateMsg();
        playerStateMsg.cid = (int)jsonData["cid"];
        playerStateMsg.pos = new Vector3((float)Math.Round((float)jsonData["pos_x"], 2), (float)Math.Round((float)jsonData["pos_y"], 2), (float)Math.Round((float)jsonData["pos_z"], 2));
        playerStateMsg.speed = (int)(float)jsonData["speed"];
        playerStateMsg.timestamp = (long)jsonData["timestamp"];
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

    public void EnterRoom(GameType gameType, int cid, Action succ = null) {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("cid");
        w.Write(cid);
        w.WritePropertyName("GameType");
        w.Write((int)gameType);
        w.WritePropertyName("NetType");
        w.Write((int)NetType);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.enterRoomUrl,
        data: bytes,
        token: this.GetModel<IGameControllerModel>().Token.Value,
        succData: (data) => {
            this.GetModel<IRoomMsgModel>().Num = (int)data["num"];
            succ?.Invoke();
        },
        code: (code) => {
            if (code == 423) {
                if (gameType == GameType.Match) {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText("The match is currently open only to VIP users");
                } else {
                    this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText("Do not own this course");
                }
            }
        }));
    }

    protected override void OnInit() {

    }   
}
