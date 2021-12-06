using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public class CheckpointController : MonoBehaviour, IController {

    private void OnEnable() {
        var checkpointSystem = this.GetSystem<ICheckpointSystem>();
        checkpointSystem.ClearData();
        Checkpoint[] checkpoints = GetComponentsInChildren<Checkpoint>();
        checkpointSystem.CheckpointCount.Value = checkpoints.Length;
        for (int i = 0; i < checkpointSystem.CheckpointCount; i++) {
            checkpointSystem.CheckpointsList.Add(checkpoints[i].gameObject);
            checkpointSystem.CheckpointPos.Add(checkpoints[i].gameObject.transform.position);
        }       
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
