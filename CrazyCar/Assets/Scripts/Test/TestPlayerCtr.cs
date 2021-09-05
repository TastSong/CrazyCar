using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestPlayerCtr : MonoBehaviour
{
    public float speed = 40;
    public Rigidbody rig;

    private void Update() {
        //控制移动
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        rig.MovePosition(transform.position + new Vector3(h, 0, v) * speed * Time.deltaTime);
    }
}
