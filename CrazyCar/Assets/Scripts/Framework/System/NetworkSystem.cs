using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;
using Utils;

public interface INetworkSystem : ISystem {
    ServerType ServerType { get; set; }
    string HttpBaseUrl { get; set; }
}

public class NetworkSystem : AbstractSystem, INetworkSystem {
    private ServerType serverType;

    public ServerType ServerType {
        get {
            return serverType;
        }
        set {
            serverType = value;
        } }
    public string HttpBaseUrl { get; set; }

    protected override void OnInit() {
        
    }
}
