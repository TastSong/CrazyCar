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
    Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; }
    System.Object MsgLock { get; set; }
    void EnterRoom(GameType gameType, int cid, Action succ = null);
    void GetUserInfo(int uid, Action<UserInfo> succ);
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
    public Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; } = new Queue<PlayerOperatMsg>();
    public object MsgLock { get; set; } = new object();
    private  PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg();
    private PlayerStateMsg playerStateMsg = new PlayerStateMsg();
    private PlayerOperatMsg playerOperatMsg = new PlayerOperatMsg();
    private PlayerCompleteMsg playerCompleteMsg = new PlayerCompleteMsg();

    public IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null) {
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            yield break;
        }

        UnityWebRequest request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST);
        if (data != null) {
            try {
                request.uploadHandler = new UploadHandlerRaw(data);
            } catch {
                Debug.LogError("PploadHandler : " + Encoding.UTF8.GetString(data));
            }
        }
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("Accept", "application/json");
        if (!string.IsNullOrEmpty(token)) {
            request.SetRequestHeader("Authorization", token);
        }

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError) {
            Debug.LogError("Is Network Error url = " + url);
        } else {
            this.SendEvent(new SetLoadingUIEvent(false));
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
        MsgType msgType = (MsgType)(int)recJD["msg_type"];
        if (msgType == MsgType.CreatePlayer) {
            playerCreateMsg = this.GetSystem<IDataParseSystem>().ParsePlayerCreateMsg(recJD);
            MPlayer peer = null;
            if (!this.GetSystem<IPlayerManagerSystem>().peers.TryGetValue(playerStateMsg.uid, out peer)) {
                this.SendEvent(new MakeNewPlayerEvent(playerCreateMsg));
            }
        } else if(msgType == MsgType.PlayerState) {
            playerStateMsg = this.GetSystem<IDataParseSystem>().ParsePlayerStateMsg(recJD);
            if (netType == NetType.WebSocket) {               
                this.GetSystem<IPlayerManagerSystem>().RespondStateAction(playerStateMsg);
            } else{
                lock (MsgLock) {
                    PlayerStateMsgs.Enqueue(playerStateMsg);
                }
            }
        } else if (msgType == MsgType.PlayerOperat){
            playerOperatMsg = this.GetSystem<IDataParseSystem>().ParsePlayerOperatMsg(recJD);
            if (netType == NetType.WebSocket) {
                this.GetSystem<IPlayerManagerSystem>().RespondOperatAction(playerOperatMsg);
            } else {
                lock (MsgLock) {
                    PlayerOperatMsgs.Enqueue(playerOperatMsg);
                }
            }
        } else if (msgType == MsgType.PlayerCompleteGame) {
            playerCompleteMsg = this.GetSystem<IDataParseSystem>().ParsePlayerCompleteMsg(recJD);
            if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
                this.SendEvent(new UpdateMatchResultUIEvent(playerCompleteMsg));
            }
        } else if (msgType == MsgType.MatchRoomCreate) {
            this.GetSystem<IMatchRoomSystem>().OnCreateMsg(recJD);
        } else if (msgType == MsgType.MatchRoomJoin) {
            this.GetSystem<IMatchRoomSystem>().OnJoinMsg(recJD);
        } else if (msgType == MsgType.MatchRoomStart) {
            this.GetSystem<IMatchRoomSystem>().OnStartMsg(recJD);
        } else if (msgType == MsgType.MatchRoomStatus) {
            this.GetSystem<IMatchRoomSystem>().OnStatusMsg(recJD);
        } else if (msgType == MsgType.MatchRoomExit) {
            this.GetSystem<IMatchRoomSystem>().OnExitMsg(recJD);
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
        token: this.GetModel<IGameModel>().Token.Value,
        succData: (data) => {
            if (gameType == GameType.Match) {
                this.GetModel<IRoomMsgModel>().Num = this.GetModel<IMatchModel>().
                  MemberInfoDic[this.GetModel<IUserModel>().Uid].index;
            } else {
                this.GetModel<IRoomMsgModel>().Num = (int)data["num"];
            }
            
            succ?.Invoke();
        },
        code: (code) => {
            if (code == 423) {
                if (gameType == GameType.Match) {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("The match is currently open only to VIP users")));
                } else {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Do not own this course")));
                }
            }
        }));
    }

    public void GetUserInfo(int uid, Action<UserInfo> succ) {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("uid");
        w.Write(uid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.getUserInfo,
            data: bytes, token: this.GetModel<IGameModel>().Token.Value, succData: (data) => {
                succ.Invoke(this.GetSystem<IDataParseSystem>().ParseUserInfo(data));
            }, code: (code) => {
                if (code != 200)
                {
                    Debug.Log("get user info error code = " + code);
                }
            }));
    }

    protected override void OnInit() {

    }   
}
