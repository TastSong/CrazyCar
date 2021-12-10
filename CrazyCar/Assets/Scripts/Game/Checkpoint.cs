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
    }
    private void Update() {
        material.SetFloat("_DissolveThreshold", amount);
        material.SetFloat("_OffsetThreshold", amount);
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
                sequence.Join( DOTween.To(() => amount, x => amount = x, 1, 0.4f).SetEase(Ease.InCubic));
                sequence.OnComplete(() => {
                    gameObject.SetActiveFast(false);
                });
            }
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
