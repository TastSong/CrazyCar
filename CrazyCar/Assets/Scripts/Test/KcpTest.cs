using KcpCSharp;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KcpTest : MonoBehaviour {
    public Text hostText;
    public Text portText;
    public Button connectBtn;
    public Button closeBtn;
    public Text contentText;
    public Scrollbar contentScrollbar;
    public InputField inputField;
    public Button sendBtn;

    private string host = "127.0.0.1";
    private int port = 40001;
    private KCPTestManager kcpManager = new KCPTestManager();
    public static string recStr;
    public static bool isRec = false;

    private void Start() {
        hostText.text = host;
        portText.text = port.ToString();

        connectBtn.onClick.AddListener(() => {
            kcpManager.ConnectKCP(host, port);
        });

        closeBtn.onClick.AddListener(() => {
            kcpManager.Close();
        });

        sendBtn.onClick.AddListener(() => {
            kcpManager.Send(inputField.text);
        });
    }

    private void Update() {
        // KCP是开的线程进行数据的收发，所以只能将UI的操作放进主线程，Unity的2B规则
        if (isRec) {
            contentText.text = contentText.text + "\n" + recStr;
            contentScrollbar.value = 0;
            isRec = false;
        }
    }
}

public class KCPTestManager : KcpClient {

    private new KcpClient client;

    protected override void HandleReceive(ByteBuf bb) {
        Debug.Log("+++++ Receive " + System.Text.Encoding.UTF8.GetString(bb.GetRaw()));
        KcpTest.recStr = System.Text.Encoding.UTF8.GetString(bb.GetRaw());
        KcpTest.isRec = true;
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
        client = new KCPTestManager();
        client.NoDelay(1, 10, 2, 1);
        client.WndSize(64, 64);
        client.Timeout(10 * 1000);
        client.SetMtu(512);
        client.SetMinRto(10);
        client.SetConv(port);
        client.Connect(host, port);
        client.Start();
    }

    public void Send(string content) {
        if (client != null && client.IsRunning()) {
            ByteBuf bb = new ByteBuf(System.Text.Encoding.UTF8.GetBytes(content));
            Debug.Log(bb.ReadableBytes());
            client.Send(bb);
        }
    }

    public void Close() {
        if (client != null) {
            client.Stop();
            Debug.Log("++++++ client.IsRunning() = " + client.IsRunning());
        }
    }
}