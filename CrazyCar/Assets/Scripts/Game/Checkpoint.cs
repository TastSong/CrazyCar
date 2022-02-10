using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using Utils;
using DG.Tweening;

public class Checkpoint : MonoBehaviour, IController {
    public bool isEndSign = false;

    private float amount = 0;
    private Material material;

    private void Start() {
        MeshRenderer mr = GetComponent<MeshRenderer>();
        material = mr.material;
        this.RegisterEvent<ResetCheckpointEvent>(ResetCheckpoint);
    }

    private void Update() {
        material.SetFloat("ClipValue", amount);
    }

    private void OnTriggerEnter(Collider other) {
        var checkpointSystem = this.GetSystem<ICheckpointSystem>();
        if (other.tag == "Player" && 
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer == other.GetComponent<MPlayer>()) {
            if (isEndSign) {
                if (checkpointSystem.CheckpointCount * (checkpointSystem.PassTimes + 1) ==
                    (checkpointSystem.CheckedCount + 1)) {
                    checkpointSystem.CheckedCount.Value += 1;
                    checkpointSystem.PassTimes.Value += 1;
                }
            } else {
                checkpointSystem.CheckedCount.Value += 1;
                Sequence sequence = DOTween.Sequence();
                sequence.Join( DOTween.To(() => amount, x => amount = x, 4, 1.4f).SetEase(Ease.InCubic));
                sequence.OnComplete(() => {
                    gameObject.SetActiveFast(false);
                });
            }
        }
    }

    private void ResetCheckpoint(ResetCheckpointEvent e) {
        amount = 0;
        gameObject.SetActiveFast(true);
    }

    private void OnDestroy() {
        this.UnRegisterEvent<ResetCheckpointEvent>(ResetCheckpoint);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
