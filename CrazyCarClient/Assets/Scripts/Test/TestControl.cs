using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestControl : MonoBehaviour{
    private Rigidbody rig;

    private void Start() {
        rig = GetComponent<Rigidbody>();
    }

    private void Update() {
        if (Input.GetKey(KeyCode.Space)) {
            rig.velocity = new Vector3(0, 0, 10);
        } else if (Input.GetKey(KeyCode.A)) {
            rig.AddForce(new Vector3(0, 0, 100), ForceMode.Force);
        } else if (Input.GetKey(KeyCode.S)) {
            rig.MoveRotation(Quaternion.Euler(new Vector3(0, 0, 100)));
        } 
    }
}
