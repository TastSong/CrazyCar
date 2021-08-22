using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public enum ServerType {
    Local = 0,
    Remote
}


public class NetworkController : MonoBehaviour
{
    public static NetworkController manager = null; 
    public ServerType serverType;
    public string HttpBaseUrl {
        get {
            return Util.GetServerBaseUrl(serverType);
        }
    }
    private void Awake() {
        if (manager == null) {
            DontDestroyOnLoad(gameObject);
            manager = this;
        } else if (manager != this) {
            Destroy(gameObject);
        }
    }
}
