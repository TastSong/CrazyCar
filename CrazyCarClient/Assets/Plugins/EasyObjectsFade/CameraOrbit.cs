using UnityEngine;
using System.Collections;

public class CameraOrbit : MonoBehaviour
{
    public Transform target;
   
    public float xRot = 0f;
    public float yRot = 0f;

    public float distance = 5f;
    public float sensitivity = 10f;

    void Update()
    {
        yRot += sensitivity * Time.deltaTime;

        transform.position = target.position + Quaternion.Euler(xRot, yRot, 0f) * (distance * -Vector3.back);
        transform.LookAt(target.position, Vector3.up);
    }
}