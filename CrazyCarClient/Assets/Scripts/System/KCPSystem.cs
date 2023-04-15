using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using KcpCSharp;
using System;
using LitJson;
using Utils;

public enum KCPState : ushort {
    Connecting = 0,
    Open = 1,
    Closing = 2,
    Closed = 3
}

public interface IKCPSystem : ISystem, ISocketSystem {
}

public class KCPSystem : AbstractSystem, IKCPSystem {
    private int port = 50001;
    private KCPManager kcpManager = new KCPManager();
    private string host;
    public static string recStr;
    public static bool isRec = false;
    private string url;

    public Action CloseSuccAction {
        get {
            return kcpManager.CloseSuccAction;
        }
        set {
            kcpManager.CloseSuccAction = value;
        }
    }

    public Action BreakLineAction {
        get {
            return kcpManager.BreakLineAction;
        }
        set {
            kcpManager.BreakLineAction = value;
        }
    }

    public Action ConnectSuccAction {
        get {
            return kcpManager.ConnectSuccAction;
        }
        set {
            kcpManager.ConnectSuccAction = value;
        }
    }

    public bool IsConnected {
        get {
            return kcpManager.IsRunning;
        }
    }

    public bool NeedReconnect {
        get {
            return kcpManager.NeedReconnect;
        }

        set {
            kcpManager.NeedReconnect = value;
        }
    }

    public void Reconnect() {
        kcpManager.ConnectKCP(host, port, url);
    }

    public void CloseConnect() {
        kcpManager.Close();
    }

    public void Connect(string url, int port) {
        host = Util.GetServerHostIP(this.GetSystem<INetworkSystem>().ServerType);
        this.port = port;
        this.url = url;
        kcpManager.ConnectKCP(host, port, url);
    }

    public void SendMsgToServer(string msg) {
        if (kcpManager.IsRunning) {
            kcpManager.Send(msg);
        } else {
            kcpManager.ConnectKCP(host, port, url);
        }      
    }

    protected override void OnInit() {
        NeedReconnect = false;
    }
}

public class KCPManager : KcpClient, IController {
    public Action CloseSuccAction { get; set; }
    public Action ConnectSuccAction { get; set; }
    public Action BreakLineAction { get; set; }
    public bool NeedReconnect { get; set; }
    
    private new KcpClient client;
    private string recStr;
    private JsonData recJD = new JsonData();
    private KCPState mKCPState = KCPState.Closed;

    public KCPState KCPState{
        get {
            return mKCPState;
        }
        
        set {
            Debug.Log("change KCPState to " + value);
            mKCPState = value;
        }
    }

    protected override void HandleReceive(ByteBuf bb) {
        recStr = System.Text.Encoding.UTF8.GetString(bb.GetRaw());
        recJD = JsonMapper.ToObject(recStr);
        this.GetSystem<INetworkSystem>().RespondAction(recJD);
    }

    protected override void HandleException(Exception ex) {
        Debug.Log("+++++ Exception " + ex.ToString());
        base.HandleException(ex);
        KCPState = KCPState.Closed;
    }

    protected override void HandleTimeout() {
        Debug.Log("+++++ Timeout");
        base.HandleTimeout();
        NeedReconnect = true;
        BreakLineAction?.Invoke();
        KCPState = KCPState.Closed;
    }

    public void ConnectKCP(string host, int port, string url) {
        if (client != null && client.IsRunning()) {
            return;
        }
        KCPState = KCPState.Connecting;
        Debug.Log("host " + host + " port " + port + " url " + url);
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(
            url: this.GetSystem<INetworkSystem>().HttpBaseUrl + url,
            token: this.GetModel<IGameModel>().Token.Value,
            succData : (d) => {
                client = new KCPManager();
                client.NoDelay(1, 10, 2, 1);
                client.WndSize(64, 64);
                client.Timeout(10 * 1000);
                client.SetMtu(512);
                client.SetMinRto(10);
                client.Connect(host, port);
                client.Start();
                KCPState = KCPState.Open;
                NeedReconnect = false;
                ConnectSuccAction?.Invoke();
            }));     
    }

    public void Send(string content) {
        if (client != null && client.IsRunning()) {
            ByteBuf bb = new ByteBuf(System.Text.Encoding.UTF8.GetBytes(content));
            client.Send(bb);
        }
    }

    public void Close() {
        NeedReconnect = false;
        if (client != null) {
            client.Stop();
            KCPState = KCPState.Closed;
            CloseSuccAction?.Invoke();
            Debug.Log("++++++ client.IsRunning() = " + client.IsRunning());
        }
    }

    public new bool IsRunning {
        get {
            return client != null && client.IsRunning();
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    } 
}
