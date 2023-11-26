using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeltEffect : MonoBehaviour {
    public float speed;

    private float amount;
    private Material material;

    private void Start() {
        MeshRenderer mr = GetComponent<MeshRenderer>();
        material = mr.material;
    }

    private void Update() {        
        amount = Mathf.Repeat(Time.time * speed, 1.0f);
        material.SetFloat("_DissolveThreshold", amount);
        material.SetFloat("_OffsetThreshold", amount);
    }
}
