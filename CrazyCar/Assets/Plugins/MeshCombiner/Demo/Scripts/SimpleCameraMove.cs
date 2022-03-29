using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LylekGames.Demo
{
    public class SimpleCameraMove : MonoBehaviour
    {
        public float sensitivity = 0.2f;

        void Update()
        {
            if(Input.GetMouseButton(1))
            {
                transform.position += transform.up * Input.GetAxis("Mouse Y") * sensitivity;
                transform.position -= transform.right * Input.GetAxis("Mouse X") * sensitivity;
            }
        }
    }
}
