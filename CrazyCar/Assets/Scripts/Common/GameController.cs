using System.Collections;
using System.Collections.Generic;
using TinyMessenger;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public static GameController manager = null;
    public TinyMessengerHub tinyMsgHub = new TinyMessengerHub();

    private void Awake() {
        if (manager == null) {
            DontDestroyOnLoad(gameObject);
            manager = this;
        } else if (manager != this)
        {
            Destroy(gameObject);
        }
    }
}
