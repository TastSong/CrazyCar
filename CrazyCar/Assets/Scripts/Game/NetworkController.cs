using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

public enum ServerType {
    Local = 0,
    Remote
}


public class NetworkController : MonoBehaviour, IController {
    public ServerType serverType;

    private void Awake() {
        this.GetSystem<INetworkSystem>().ServerType = serverType;
        this.GetSystem<INetworkSystem>().HttpBaseUrl = Util.GetServerBaseUrl(serverType);
        DontDestroyOnLoad(gameObject);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
