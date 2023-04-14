using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using KcpCSharp;
using System;
using LitJson;
using Utils;

public interface IKCPSystem : ISystem, ISocketSystem {
}

public class KCPSystem : AbstractSystem, IKCPSystem {
    private int port = 50001;
    private KCPManager kcpManager = new KCPManager();
    private string host;
    public static string recStr;
    public static bool isRec = false;
    private string url;

    public Action CloseSuccAction { get; set; }

    public bool IsConnected {
        get {
            return kcpManager.IsRunning;
        }
    }

    public Action BreakLine { get; set; }
    public void Reconnect() {
        
    }

    public void CloseConnect() {
        kcpManager.Close();
    }

    public Action ConnectSuccAction { get; set; }

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
        
    }
}

public class KCPManager : KcpClient, IController {

    private new KcpClient client;
    private string recStr;
    private JsonData recJD = new JsonData();

    protected override void HandleReceive(ByteBuf bb) {
        recStr = System.Text.Encoding.UTF8.GetString(bb.GetRaw());
        recJD = JsonMapper.ToObject(recStr);
        this.GetSystem<INetworkSystem>().RespondAction(recJD);
    }

    protected override void HandleException(Exception ex) {
        Debug.Log("+++++ Exception " + ex.ToString());
        base.HandleException(ex);
    }

    protected override void HandleTimeout() {
        Debug.Log("+++++ Timeout");
        base.HandleTimeout();
    }

    public void ConnectKCP(string host, int port, string url) {
        if (client != null && client.IsRunning()) {
            return;
        }
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
            }));     
    }

    public void Send(string content) {
        if (client != null && client.IsRunning()) {
            ByteBuf bb = new ByteBuf(System.Text.Encoding.UTF8.GetBytes(content));
            client.Send(bb);
        }
    }

    public void Close() {
        if (client != null) {
            client.Stop();
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
