using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class TimeTrailPlayer : MonoBehaviour {
    public float speed = 1;

    private Rigidbody rig;

    private void Start() {
        rig = transform.GetComponent<Rigidbody>();
    }

    private void Update() {
        if (Input.GetKey(KeyCode.A)) {
            MoveLeft();
        }
        if (Input.GetKey(KeyCode.D)) {
            MoveRight();
        }
        if (Input.GetKey(KeyCode.W)) {
            MoveFront();
        }
        if (Input.GetKey(KeyCode.S)) {
            MoveBack();
        }
    }

    public void MoveFront() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(0, 0, 1) * speed);
        }
    }

    public void MoveBack() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(0, 0, -1) * speed);
        }
    }

    public void MoveLeft() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(-1, 0, 0) * speed);
        }
    }

    public void MoveRight() {
        if (GameController.manager.timeTrialManager.InGame) {
            rig.MovePosition(transform.position + new Vector3(1, 0, 0) * speed);
        } 
    }

    private void OnTriggerEnter(Collider other) {
        if (other.tag == "EndSign") {
            GameController.manager.timeTrialManager.EndTime = Util.GetTime() / 1000;
            Debug.LogError("++++++ EndTime = " + GameController.manager.timeTrialManager.EndTime);
            Debug.LogError("++++++可以结算 CompleteTime =  " + GameController.manager.timeTrialManager.GetCompleteTime());
        }
    }
}
