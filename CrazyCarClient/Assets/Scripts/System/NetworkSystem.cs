using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using UnityEngine.Networking;
using System;
using LitJson;
using System.Text;
using Cysharp.Threading.Tasks;

public interface ISocketSystem {
    public void Connect(string url, int port = 0);
    public void SendMsgToServer(string msg);
    public void CloseConnect();
    public void Reconnect();
    public Action ConnectSuccAction { get; set; }
    public Action CloseSuccAction { get; set; }
    public Action BreakLineAction { get; set; }
    public bool IsConnected { get; }
    public bool NeedReconnect { get; set; }
}

public interface INetworkSystem : ISystem, ISocketSystem {
    public ServerType ServerType { get; set; }
    public string HttpBaseUrl { get; set; }
    // socket
    public NetType NetType { get; set; }
    public void Connect(string wsURL, string kcpURL, int port);
    public void RespondAction(JsonData recJD);
    public System.Object MsgLock { get; set; }
    public Queue<PlayerCreateMsg> PlayerCreateMsgs { get; set; }
    public Queue<PlayerStateMsg> PlayerStateMsgs { get; set; }
    public Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; }
    public Queue<PlayerCompleteMsg> PlayerCompleteMsgs { get; set; }
    public JsonData OnMatchRoomCreateMsg { get; set; }
    public JsonData OnMatchRoomJoinMsg { get; set; }
    public JsonData OnMatchRoomExitMsg { get; set; }
    public JsonData OnMatchRoomStatusMsg { get; set; }
    public JsonData OnMatchRoomStartMsg { get; set; }
    // http
    public IEnumerator POSTHTTP(string url, byte[] data = null, string token = null, Action<JsonData> succData = null, Action<int> code = null);
    public UniTask<TaskableAccessResult> Get(string url, string token);
    public UniTask<TaskableAccessResult> Get(string url);
    public UniTask<TaskableAccessResult> Post(string url, string token, byte[] body = null);
    public UniTask<TaskableAccessResult> Post(string url, byte[] body = null);
    public void EnterRoom(GameType gameType, int cid, Action succ = null);
    public UniTask<UserInfo> GetUserInfo(int uid);
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
    
    private ISocketSystem curSocketSystem;
    public object MsgLock { get; set; } = new object();
    public Queue<PlayerCreateMsg> PlayerCreateMsgs { get; set; } = new Queue<PlayerCreateMsg>();
    public Queue<PlayerStateMsg> PlayerStateMsgs { get; set; } = new Queue<PlayerStateMsg>();
    public Queue<PlayerOperatMsg> PlayerOperatMsgs { get; set; } = new Queue<PlayerOperatMsg>();
    public Queue<PlayerCompleteMsg> PlayerCompleteMsgs { get; set; } = new Queue<PlayerCompleteMsg>();
    public JsonData OnMatchRoomCreateMsg { get; set; }
    public JsonData OnMatchRoomJoinMsg { get; set; }
    public JsonData OnMatchRoomExitMsg { get; set; }
    public JsonData OnMatchRoomStatusMsg { get; set; }
    public JsonData OnMatchRoomStartMsg { get; set; }
    private PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg();
    private PlayerStateMsg playerStateMsg = new PlayerStateMsg();
    private PlayerOperatMsg playerOperatMsg = new PlayerOperatMsg();
    private PlayerCompleteMsg playerCompleteMsg = new PlayerCompleteMsg();
    
    public async UniTask<TaskableAccessResult> Get(string url, string token) {
        return await Req(url, "GET", token, null);
    }

    public async UniTask<TaskableAccessResult> Get(string url) {
        return await Req(url, "GET", "", null);
    }

    public async UniTask<TaskableAccessResult> Post(string url, string token, byte[] body = null) {
        return await Req(url, "POST", token, body);
    }

    public async UniTask<TaskableAccessResult> Post(string url, byte[] body = null) {
        return await Req(url, "POST", "", body);
    }

    private async UniTask<TaskableAccessResult> Req(string url, string method, string token, byte[] body) {
        try {
            using (var request = new UnityWebRequest(url, method)) {
                request.timeout = 30;

                if (method == "POST" && body != null) {
                    UploadHandler handler = new UploadHandlerRaw(body);
                    handler.contentType = "application/json";
                    request.useHttpContinue = false;
                    request.uploadHandler = handler;
                }

                request.SetRequestHeader("Content-Type", "application/json");
                request.SetRequestHeader("Accept", "application/json");
                request.disposeUploadHandlerOnDispose = true;
                request.disposeDownloadHandlerOnDispose = true;
                request.disposeCertificateHandlerOnDispose = true;
                if (!string.IsNullOrEmpty(token)) {
                    request.SetRequestHeader("Authorization", token);
                }

                request.downloadHandler = new DownloadHandlerBuffer();
                Debug.Log("request--->" + request.url);


                var response = await request.SendWebRequest().WithCancellation(default);
                //var response = request;
                //await UniTask.WaitUntil(() => request.isDone);
                UIController.Instance.HidePage(UIPageType.LoadingUI);
                if (response.isNetworkError || response.responseCode != 200) {
                    return new TaskableAccessResult(null, response.responseCode,
                        new Exception("Http Access Error Code Return"));
                }

                byte[] results = request.downloadHandler.data; string s = Encoding.UTF8.GetString(results);
                return new TaskableAccessResult(s, response.responseCode, null);
            }
        } catch (Exception e) {
            Debug.LogError("http" + e);
            UIController.Instance.HidePage(UIPageType.LoadingUI);
            if (e is UnityWebRequestException) {
                UnityWebRequestException ex = e as UnityWebRequestException;
                return new TaskableAccessResult(null, ex.ResponseCode, e);
            }

            return new TaskableAccessResult(null, -1, e);
        }
    }

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
                code?.Invoke(500);
            } else {
                byte[] results = request.downloadHandler.data;
                string s = Encoding.UTF8.GetString(results);
                Debug.Log(url + " : " + s);
                JsonData d = JsonMapper.ToObject(s);
                UIController.Instance.HidePage(UIPageType.LoadingUI);

                code?.Invoke((int)d["code"]);
                if ((int)d["code"] == 200) {
                    if (d["data"] == null) {
                        d["data"] = new JsonData();
                    }
                    Debug.Log("url： " + url + "---succData = " + d["data"].ToJson());
                    succData?.Invoke(d["data"]);
                }
            }
        }
    }

    public void Connect(string wsURL = "", string kcpURL = "", int port = 0) {
        string url = "";
        if (netType == NetType.WebSocket) {
            url = "ws" + HttpBaseUrl.Substring(4) + wsURL;
        } else if (netType == NetType.KCP) {
            url = kcpURL;
        }
        Debug.Log("url = " + url);
        this.Connect(url, port);
    }

    public void Connect(string url, int port = 0) {
        curSocketSystem.Connect(url, port);
    }

    public void SendMsgToServer(string msg) {
        if (msg == null || msg == "") {
            Debug.LogError("SendMsgToServer msg is null or empty");
            return;
        }
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

    public bool NeedReconnect {
        get {
            return curSocketSystem.NeedReconnect;
        }
        set {
            curSocketSystem.NeedReconnect = value;
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
        CoroutineController.Instance.StartCoroutine(POSTHTTP(url: HttpBaseUrl + RequestUrl.enterRoomUrl,
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
                    WarningAlertInfo alertInfo = new WarningAlertInfo("The match is currently open only to VIP users");
                    UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                } else {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Do not own this course");
                    UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                }
            }
        }));
    }

    public async UniTask<UserInfo> GetUserInfo(int uid) {
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            var result = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<TextAsset>(Util.baseStandAlone + Util.standAloneAI);
            JsonData data = JsonMapper.ToObject(result.text);
            return this.GetSystem<IDataParseSystem>().ParseUserInfo(data);
        }
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("uid");
        w.Write(uid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        var resultData =
            await Post(HttpBaseUrl + RequestUrl.getUserInfo, this.GetModel<IGameModel>().Token.Value, bytes);
       
        if (resultData.serverCode == 200) {
            return this.GetSystem<IDataParseSystem>().ParseUserInfo(resultData.serverData);
        } else {
            Debug.Log("get user info error code = " + resultData.serverCode);
            return null;
        }
    }

    protected override void OnInit() {

    }   
}
