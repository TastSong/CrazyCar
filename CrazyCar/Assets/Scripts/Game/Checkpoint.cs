using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;

public class Checkpoint : MonoBehaviour, IController {
    public bool isEndSign = false;

    private void OnTriggerEnter(Collider other) {
        var checkpointSystem = this.GetSystem<ICheckpointSystem>();
        if (other.tag == "Player" && 
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer == other.GetComponent<MPlayer>()) {
            checkpointSystem.CheckedCount.Value += 1;
            if (isEndSign) {
                if (checkpointSystem.CheckpointCount * (checkpointSystem.PassTimes + 1) ==
                    checkpointSystem.CheckedCount) {
                    checkpointSystem.PassTimes.Value += 1;
                }
            } else {
                gameObject.SetActiveFast(false);
            }
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
