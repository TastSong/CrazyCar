using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour{
    public static PlayerManager manager;
    public TimeTrialPlayer timeTrialPlayer;

    private void Awake() {
        if (manager == null) {
            manager = this;
        } else if (manager != this) {
            Destroy(this);
        }
    }

    private void Start() {
        timeTrialPlayer.GetComponent<AccessoryChanger>().
            SetGear(GameController.manager.userInfo.equipInfo.eid.ToString(), GameController.manager.userInfo.equipInfo.rid);
    }
}
