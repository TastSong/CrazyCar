using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public enum ServerType {
    Local = 0,
    Remote
}

public enum NetType {
    WebSocket = 0,
    KCP
}

public enum MsgType{
    CreatePlayer = 0,
    PlayerPos,
    DelPlayer
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

    private void Update() {
        // KCP 开了线程所以只能把 RespondAction放进主线程
        if (this.GetSystem<INetworkSystem>().PlayerStateMsgs.Count > 0) {
            lock (this.GetSystem<INetworkSystem>().MsgLock) {
                this.GetSystem<IPlayerManagerSystem>().RespondAction(
                    this.GetSystem<INetworkSystem>().PlayerStateMsgs.Peek());
                this.GetSystem<INetworkSystem>().PlayerStateMsgs.Dequeue();
            }
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
