using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public enum ServerType {
    Local = 0,
    Remote,
    TestServer
}

public enum NetType {
    WebSocket = 0,
    KCP
}

public enum MsgType{
    CreatePlayer = 0,
    PlayerState = 1,
    DelPlayer = 2,
    MatchRoomCreate = 3,
    MatchRoomJoin = 4,
    MatchRoomStatus = 5,
    MatchRoomExit = 6,
    MatchRoomStart = 7,
    PlayerOperat = 8,    // 用户操作
    PlayerCompleteGame = 9
}


public class NetworkController : MonoBehaviour, IController {
    public ServerType serverType;
    public NetType netType;

    private void Awake() {
        this.GetSystem<INetworkSystem>().ServerType = serverType;
        this.GetSystem<INetworkSystem>().NetType = netType;
        this.GetSystem<INetworkSystem>().HttpBaseUrl = Util.GetServerBaseUrl(serverType);
        DontDestroyOnLoad(gameObject);
    }

    private void Start() {
        this.GetSystem<INetworkSystem>().BreakLineAction = () => {
            StopCoroutine(Reconnect());
            StartCoroutine(Reconnect());
        };
    }
    
    private IEnumerator Reconnect() {
        int times = this.GetModel<IGameModel>().ReconnectionTimeout;
        var net = this.GetSystem<INetworkSystem>();
        while (times > 0 && net.NeedReconnect && !net.IsConnected) {
            net.Reconnect();
            times--;
            yield return new WaitForSeconds(1f);
        }

        net.NeedReconnect = false;
    }

    private void FixedUpdate() {
        // KCP 开了线程所以只能把 RespondAction放进主线程 或者开个线程
        lock (this.GetSystem<INetworkSystem>().MsgLock) {
            if (this.GetSystem<INetworkSystem>().PlayerCreateMsgs.Count > 0) {
                this.SendCommand(new MakeNewPlayerCommand(this.GetSystem<INetworkSystem>().PlayerCreateMsgs.Peek()));
                this.GetSystem<INetworkSystem>().PlayerCreateMsgs.Dequeue();
            }

            if (this.GetSystem<INetworkSystem>().PlayerStateMsgs.Count > 0) {
                this.GetSystem<IPlayerManagerSystem>().RespondStateAction(
                    this.GetSystem<INetworkSystem>().PlayerStateMsgs.Peek());
                this.GetSystem<INetworkSystem>().PlayerStateMsgs.Dequeue();
            }

            if (this.GetSystem<INetworkSystem>().PlayerOperatMsgs.Count > 0) {
                this.GetSystem<IPlayerManagerSystem>().RespondOperatAction(
                    this.GetSystem<INetworkSystem>().PlayerOperatMsgs.Peek());
                this.GetSystem<INetworkSystem>().PlayerOperatMsgs.Dequeue();
            }

            if (this.GetSystem<INetworkSystem>().PlayerCompleteMsgs.Count > 0) {
                this.SendCommand(new UpdateMatchResultUICommand(this.GetSystem<INetworkSystem>().PlayerCompleteMsgs.Peek()));
                this.GetSystem<INetworkSystem>().PlayerCompleteMsgs.Dequeue();
            }

            if (this.GetSystem<INetworkSystem>().OnMatchRoomCreateMsg != null) {
                this.GetSystem<IMatchRoomSystem>().OnCreateMsg(this.GetSystem<INetworkSystem>().OnMatchRoomCreateMsg);
                this.GetSystem<INetworkSystem>().OnMatchRoomCreateMsg = null;
            }

            if (this.GetSystem<INetworkSystem>().OnMatchRoomJoinMsg != null) {
                this.GetSystem<IMatchRoomSystem>().OnJoinMsg(this.GetSystem<INetworkSystem>().OnMatchRoomJoinMsg);
                this.GetSystem<INetworkSystem>().OnMatchRoomJoinMsg = null;
            }

            if (this.GetSystem<INetworkSystem>().OnMatchRoomExitMsg != null) {
                this.GetSystem<IMatchRoomSystem>().OnExitMsg(this.GetSystem<INetworkSystem>().OnMatchRoomExitMsg);
                this.GetSystem<INetworkSystem>().OnMatchRoomExitMsg = null;
            }

            if (this.GetSystem<INetworkSystem>().OnMatchRoomStartMsg != null) {
                this.GetSystem<IMatchRoomSystem>().OnStartMsg(this.GetSystem<INetworkSystem>().OnMatchRoomStartMsg);
                this.GetSystem<INetworkSystem>().OnMatchRoomStartMsg = null;
            }

            if (this.GetSystem<INetworkSystem>().OnMatchRoomStatusMsg != null) {
                this.GetSystem<IMatchRoomSystem>().OnStatusMsg(this.GetSystem<INetworkSystem>().OnMatchRoomStatusMsg);
                this.GetSystem<INetworkSystem>().OnMatchRoomStatusMsg = null;
            }
        }           
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
