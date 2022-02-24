using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;

public enum PropType {
    SpeedUp,
    SpeedDown
}

public class PropController : MonoBehaviour, IController {
    public PropType propType = PropType.SpeedUp;
    public float time = 1;

    private void OnTriggerEnter(Collider other) {
        if (other.tag == "Player") {
            if (propType == PropType.SpeedUp) {
                this.GetSystem<IPlayerManagerSystem>().SelfPlayer.SpeedUp(time);
            }
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
