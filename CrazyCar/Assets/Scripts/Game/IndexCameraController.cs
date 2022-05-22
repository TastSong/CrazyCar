using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndexCameraController : MonoBehaviour {
    public float cameraRotateSpeed = 5;
    public Transform vehicleRoot;
    private float x, y = 0;

    private void Update() {
#if UNITY_STANDALONE || UNITY_WEBGL || UNITY_EDITOR

        if (Input.GetMouseButton(0)) {
            x = Mathf.Lerp(x, Mathf.Clamp(Input.GetAxis("Mouse X"), -2, 2) * cameraRotateSpeed, Time.deltaTime * 5.0f);
            Camera.main.fieldOfView = Mathf.Clamp(Camera.main.fieldOfView, 50, 60);
            Camera.main.fieldOfView = Mathf.Lerp(Camera.main.fieldOfView, 50, Time.deltaTime);
        } else {
            x = Mathf.Lerp(x, cameraRotateSpeed * 0.01f, Time.deltaTime * 5.0f);
            Camera.main.fieldOfView = Mathf.Lerp(Camera.main.fieldOfView, 60, Time.deltaTime);
        }


#elif UNITY_ANDROID||UNITY_IOS



        if (Input.touchCount == 1)
        {
            switch (Input.GetTouch(0).phase)
            {
                case TouchPhase.Moved:
                    x = Mathf.Lerp(x, Mathf.Clamp(Input.GetTouch(0).deltaPosition.x, -2, 2) * cameraRotateSpeed, Time.deltaTime*3.0f);
                    Camera.main.fieldOfView = Mathf.Clamp(Camera.main.fieldOfView, 50, 60);
                    Camera.main.fieldOfView = Mathf.Lerp(Camera.main.fieldOfView, 50, Time.deltaTime);
                    break;
            }

        }
        else {
            x = Mathf.Lerp(x, cameraRotateSpeed * 0.02f, Time.deltaTime*3.0f);
            Camera.main.fieldOfView = Mathf.Lerp(Camera.main.fieldOfView, 60, Time.deltaTime);
        }

#endif

        transform.RotateAround(vehicleRoot.position, Vector3.up, x);
    }
}
