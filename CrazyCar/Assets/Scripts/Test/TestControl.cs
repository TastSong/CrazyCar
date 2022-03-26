using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestControl : MonoBehaviour{
    private Rigidbody rig;

    private void Start() {
        rig = GetComponent<Rigidbody>();
    }

    private void Update() {
        if (Input.GetKeyDown(KeyCode.Space)) {
            rig.velocity = new Vector3(20, 0, 10);
        }
    }
}
