using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using UnityEngine.Networking;
using System;
using LitJson;
using System.Text;

public interface ISocketSystem {
    public void Connect(string url, int port = 0);
    public void SendMsgToServer(string msg);
    public void CloseConnect();
    public void Reconnect();
    public Action ConnectSuccAction { get; set; }
    public Action CloseSuccAction { get; set; }
    public Action BreakLineAction { get; set; }
    public bool IsConnected { get; }
}

public interface INetworkSystem : ISystem, ISocketSystem {
    public ServerType ServerType { get; set; }
    public string HttpBaseUrl { get; set; }
    // socket
    public NetType NetType { get; set; }
    public void Connect(string wsURL, string kcpURL, int port);
    public void RespondAction(JsonData recJD);
    public Queue<PlayerCreateMsg> PlayerCreateMsgs { get; set; }
    public Queue<PlayerStateMsg> PlayerStateMsgs { get; set; }
    public Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; }
    public Queue<PlayerCompleteMsg> PlayerCompleteMsgs { get; set; }
    public JsonData OnMatchRoomCreateMsg { get; set; }
    public JsonData OnMatchRoomJoinMsg { get; set; }
    public JsonData OnMatchRoomExitMsg { get; set; }
    public JsonData OnMatchRoomStatusMsg { get; set; }
    public JsonData OnMatchRoomStartMsg { get; set; }
    public System.Object MsgLock { get; set; }
    // http
    public IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null);
    public void EnterRoom(GameType gameType, int cid, Action succ = null);
    public void GetUserInfo(int uid, Action<UserInfo> succ);
}

public class NetworkSystem : AbstractSystem, INetworkSystem {
    private ServerType serverType;
    private NetType netType;
    private ISocketSystem curSocketSystem;

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
            if (value == NetType.WebSocket) {
                curSocketSystem = this.GetSystem<IWebSocketSystem>();
            } else if (value == NetType.KCP) {
                curSocketSystem = this.GetSystem<IKCPSystem>();
            } else {
                curSocketSystem = this.GetSystem<IWebSocketSystem>();
            }
        }
    }
    public string HttpBaseUrl { get; set; }
    public Queue<PlayerCreateMsg> PlayerCreateMsgs { get; set; } = new Queue<PlayerCreateMsg>();
    public Queue<PlayerStateMsg> PlayerStateMsgs { get; set; } = new Queue<PlayerStateMsg>();
    public Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; } = new Queue<PlayerOperatMsg>();
    public Queue<PlayerCompleteMsg> PlayerCompleteMsgs { get; set; } = new Queue<PlayerCompleteMsg>();
    public JsonData OnMatchRoomCreateMsg { get; set; }
    public JsonData OnMatchRoomJoinMsg { get; set; }
    public JsonData OnMatchRoomExitMsg { get; set; }
    public JsonData OnMatchRoomStatusMsg { get; set; }
    public JsonData OnMatchRoomStartMsg { get; set; }
    public object MsgLock { get; set; } = new object();
    private  PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg();
    private PlayerStateMsg playerStateMsg = new PlayerStateMsg();
    private PlayerOperatMsg playerOperatMsg = new PlayerOperatMsg();
    private PlayerCompleteMsg playerCompleteMsg = new PlayerCompleteMsg();

    public IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null) {
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            yield break;
        }

        using (UnityWebRequest request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)) {
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
    }

    public void Connect(string wsURL = "", string kcpURL = "", int port = 0) {
        string url = "";
        if (netType == NetType.WebSocket) {
            url = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) + wsURL;
        } else if (netType == NetType.KCP) {
            url = kcpURL;
        }
        
        this.Connect(url, port);
    }

    public void Connect(string url, int port = 0) {
        curSocketSystem.Connect(url, port);
    }

    public void SendMsgToServer(string msg) {
        curSocketSystem.SendMsgToServer(msg);
    }

    public void RespondAction(JsonData recJD){
        MsgType msgType = (MsgType)(int)recJD["msg_type"];
        lock (MsgLock) {
            switch (msgType)
            {
                case MsgType.CreatePlayer:
                    playerCreateMsg = this.GetSystem<IDataParseSystem>().ParsePlayerCreateMsg(recJD);
                    PlayerCreateMsgs.Enqueue(playerCreateMsg);
                    break;
                case MsgType.PlayerState:
                    playerStateMsg = this.GetSystem<IDataParseSystem>().ParsePlayerStateMsg(recJD);
                    PlayerStateMsgs.Enqueue(playerStateMsg);
                    break;
                case MsgType.PlayerOperat:
                    playerOperatMsg = this.GetSystem<IDataParseSystem>().ParsePlayerOperatMsg(recJD);
                    PlayerOperatMsgs.Enqueue(playerOperatMsg);
                    break;
                case MsgType.PlayerCompleteGame:
                    playerCompleteMsg = this.GetSystem<IDataParseSystem>().ParsePlayerCompleteMsg(recJD);
                    PlayerCompleteMsgs.Enqueue(playerCompleteMsg);
                    break;
                case MsgType.MatchRoomCreate:
                    OnMatchRoomCreateMsg = recJD;
                    break;
                case MsgType.MatchRoomJoin:
                    OnMatchRoomJoinMsg = recJD;
                    break;
                case MsgType.MatchRoomStart:
                    OnMatchRoomStartMsg = recJD;
                    break;
                case MsgType.MatchRoomStatus:
                    OnMatchRoomStatusMsg = recJD;
                    break;
                case MsgType.MatchRoomExit:
                    OnMatchRoomExitMsg = recJD;
                    break;
            }
        }
    }

    public void CloseConnect() {
        curSocketSystem.CloseConnect();
    }

    public void Reconnect() {
        curSocketSystem.Reconnect();
    }

    public Action ConnectSuccAction {
        get {
            return curSocketSystem.ConnectSuccAction;
        }
        set {
            curSocketSystem.ConnectSuccAction = value;
        }
    }

    public Action CloseSuccAction { 
        get {
            return curSocketSystem.CloseSuccAction;
        }
        set {
            curSocketSystem.CloseSuccAction = value;
        } 
    }
    public Action BreakLineAction {  
        get {
            return curSocketSystem.BreakLineAction;
        }
        set {
            curSocketSystem.BreakLineAction = value;
        } 
    }

    public bool IsConnected {
        get {
            return curSocketSystem.IsConnected;
        }
    }

    public void EnterRoom(GameType gameType, int cid, Action succ = null) {
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            this.GetModel<IRoomMsgModel>().Num = 0;
            succ?.Invoke();
            return;
        }
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
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            TextAsset ta = Resources.Load<TextAsset>(Util.baseStandAlone + Util.standAloneAI);
            JsonData data = JsonMapper.ToObject(ta.text);
            succ.Invoke(this.GetSystem<IDataParseSystem>().ParseUserInfo(data));
            return;
        }
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
