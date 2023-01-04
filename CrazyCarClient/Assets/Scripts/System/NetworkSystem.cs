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
    void Connect(string wsURL, string kcpURL, int port);
    IEnumerator OnConnect(Action succ, Action fail);
    void SendMsgToServer(string msg);
    void RespondAction(JsonData recJD);
    void CloseConnect();
    IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null);
    Queue<PlayerCreateMsg> PlayerCreateMsgs { get; set; }
    Queue<PlayerStateMsg> PlayerStateMsgs { get; set; }
    Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; }
    Queue<PlayerCompleteMsg> PlayerCompleteMsgs { get; set; }
    JsonData OnMatchRoomCreateMsg { get; set; }
    JsonData OnMatchRoomJoinMsg { get; set; }
    JsonData OnMatchRoomExitMsg { get; set; }
    JsonData OnMatchRoomStatusMsg { get; set; }
    JsonData OnMatchRoomStartMsg { get; set; }
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
        if (netType == NetType.WebSocket) {
            wsURL = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) + wsURL;
            this.GetSystem<IWebSocketSystem>().Connect(wsURL);
        } else if (netType == NetType.KCP) {
            this.GetSystem<IKCPSystem>().Connect(kcpURL, port);
        }
    }

    public IEnumerator OnConnect(Action succ, Action fail) {
        int maxTime = 3;
        float gap = 0.04f;
        float timer = 0;
        WaitForSeconds wait = new WaitForSeconds(gap);
        if (netType == NetType.WebSocket) {
            while (!this.GetSystem<IWebSocketSystem>().IsConnected && timer < maxTime) {
                yield return wait;
                timer += gap;
            }
        } else if (netType == NetType.KCP) {
            while (!this.GetSystem<IKCPSystem>().IsConnected && timer < maxTime) {
                yield return wait;
                timer += gap;
            }
        }

        if (timer < maxTime) {
            succ.Invoke();
        } else {
            fail.Invoke();
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
        lock (MsgLock) {
            if (msgType == MsgType.CreatePlayer) {
                playerCreateMsg = this.GetSystem<IDataParseSystem>().ParsePlayerCreateMsg(recJD);
                PlayerCreateMsgs.Enqueue(playerCreateMsg);
            } else if (msgType == MsgType.PlayerState) {
                playerStateMsg = this.GetSystem<IDataParseSystem>().ParsePlayerStateMsg(recJD);
                PlayerStateMsgs.Enqueue(playerStateMsg);
            } else if (msgType == MsgType.PlayerOperat) {
                playerOperatMsg = this.GetSystem<IDataParseSystem>().ParsePlayerOperatMsg(recJD);
                PlayerOperatMsgs.Enqueue(playerOperatMsg);
            } else if (msgType == MsgType.PlayerCompleteGame) {
                playerCompleteMsg = this.GetSystem<IDataParseSystem>().ParsePlayerCompleteMsg(recJD);
                PlayerCompleteMsgs.Enqueue(playerCompleteMsg);
            } else if (msgType == MsgType.MatchRoomCreate) {
                OnMatchRoomCreateMsg = recJD;
            } else if (msgType == MsgType.MatchRoomJoin) {
                OnMatchRoomJoinMsg = recJD;
            } else if (msgType == MsgType.MatchRoomStart) {
                OnMatchRoomStartMsg = recJD;
            } else if (msgType == MsgType.MatchRoomStatus) {
                OnMatchRoomStatusMsg = recJD;
            } else if (msgType == MsgType.MatchRoomExit) {
                OnMatchRoomExitMsg = recJD;
            }
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
