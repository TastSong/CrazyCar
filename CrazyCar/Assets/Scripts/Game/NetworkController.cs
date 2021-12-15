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


public class NetworkController : MonoBehaviour, IController {
    public ServerType serverType;
    public NetType netType;

    private void Awake() {
        this.GetSystem<INetworkSystem>().ServerType = serverType;
        this.GetSystem<INetworkSystem>().NetType = netType;
        this.GetSystem<INetworkSystem>().HttpBaseUrl = Util.GetServerBaseUrl(serverType);
        DontDestroyOnLoad(gameObject);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
