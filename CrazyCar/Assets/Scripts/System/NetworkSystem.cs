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
    void RespondAction(JsonData recJD);
    void CloseConnect();
    IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null);
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
    private  PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg();
    private PlayerStateMsg playerStateMsg = new PlayerStateMsg();

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

    private PlayerCreateMsg ParsePlayerCreateMsg(JsonData jsonData, Action success = null) {
        Debug.Log("Rec = " + jsonData.ToJson());
        PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg();
        playerCreateMsg.cid = (int)jsonData["cid"];
        playerCreateMsg.pos = new Vector3((float)Math.Round((float)jsonData["pos_x"], 2), (float)Math.Round((float)jsonData["pos_y"], 2), (float)Math.Round((float)jsonData["pos_z"], 2));
        string[] speed = ((string)jsonData["speed"]).Split(',');
        playerCreateMsg.speed = new Vector3(float.Parse(speed[0]), float.Parse(speed[1]), float.Parse(speed[2]));
        playerCreateMsg.timestamp = (long)jsonData["timestamp"];
        playerCreateMsg.userInfo.name = (string)jsonData["user_info"]["name"];
        playerCreateMsg.userInfo.uid = (int)jsonData["user_info"]["uid"];
        playerCreateMsg.userInfo.aid = (int)jsonData["user_info"]["aid"];
        playerCreateMsg.userInfo.star = (int)jsonData["user_info"]["star"];
        playerCreateMsg.userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        playerCreateMsg.userInfo.equipInfo.eid = (int)jsonData["user_info"]["equip_info"]["eid"];
        playerCreateMsg.userInfo.equipInfo.rid = (string)jsonData["user_info"]["equip_info"]["rid"];
        success?.Invoke();
        return playerCreateMsg;
    }

    private PlayerStateMsg ParsePlayerStateMsg(JsonData jsonData, Action success = null) {
        Debug.Log("Rec = " + jsonData.ToJson());
        PlayerStateMsg playerStateMsg = new PlayerStateMsg();
        playerStateMsg.cid = (int)jsonData["cid"];
        playerStateMsg.pos = new Vector3((float)Math.Round((float)jsonData["pos_x"], 2), (float)Math.Round((float)jsonData["pos_y"], 2), (float)Math.Round((float)jsonData["pos_z"], 2));
        string[] speed = ((string)jsonData["speed"]).Split(',');
        playerStateMsg.speed = new Vector3(float.Parse(speed[0]), float.Parse(speed[1]), float.Parse(speed[2]));
        playerStateMsg.timestamp = (long)jsonData["timestamp"];
        playerStateMsg.uid = (int)jsonData["uid"];
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

    public void RespondAction(JsonData recJD){
        if ((int)recJD["msg_type"] == (int)MsgType.PlayerState) {
            playerStateMsg = ParsePlayerStateMsg(recJD);
            if (netType == NetType.WebSocket) {               
                this.GetSystem<IPlayerManagerSystem>().RespondAction(playerStateMsg);
            } else{
                lock (MsgLock) {
                    PlayerStateMsgs.Enqueue(playerStateMsg);
                }
            }
        } else if ((int)recJD["msg_type"] == (int)MsgType.CreatePlayer){
            playerCreateMsg = ParsePlayerCreateMsg(recJD);
            MPlayer peer = null;
            if (!this.GetSystem<IPlayerManagerSystem>().peers.TryGetValue(playerStateMsg.uid, out peer)) {
                this.SendEvent(new MakeNewPlayerEvent(playerCreateMsg));
            }          
        } else if ((int)recJD["msg_type"] == (int)MsgType.DelPlayer){

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
