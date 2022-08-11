using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using KcpCSharp;
using System;
using LitJson;

public interface IKCPSystem : ISystem {
    void Connect(string url);
    void SendMsgToServer(string msg);
    void CloseConnect();

    bool IsConnected { get; }
}

public class KCPSystem : AbstractSystem, IKCPSystem {
    private int port = 50001;
    private KCPManager kcpManager = new KCPManager();
    private string host;
    public static string recStr;
    public static bool isRec = false;

    public bool IsConnected {
        get {
            return kcpManager.IsRunning;
        }
    }

    public void CloseConnect() {
        kcpManager.Close();
    }

    public void Connect(string url) {
        host = url;
        kcpManager.ConnectKCP(host, port);
    }

    public void SendMsgToServer(string msg) {
        if (kcpManager.IsRunning) {
            kcpManager.Send(msg);
        } else {
            kcpManager.ConnectKCP(host, port);
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
        Debug.Log("+++++ Exception");
        base.HandleException(ex);
    }

    protected override void HandleTimeout() {
        Debug.Log("+++++ Timeout");
        base.HandleTimeout();
    }

    public void ConnectKCP(string host, int port) {
        if (client != null && client.IsRunning()) {
            return;
        }
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(
            url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.kcpServerUrl,
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
