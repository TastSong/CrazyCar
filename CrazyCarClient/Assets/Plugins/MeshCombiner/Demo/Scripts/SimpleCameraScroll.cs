using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LylekGames.RPGGoblin
{
    public class SimpleCameraScroll : MonoBehaviour
    {
        void Update()
        {
            //If player mouse-scrolls foward
            if (Input.GetAxis("Mouse ScrollWheel") > 0)
            {
                transform.position += 0.5f * transform.forward;
            }
            //If player mouse-scrolls backward
            if (Input.GetAxis("Mouse ScrollWheel") < 0)
            {
                transform.position -= 0.5f * transform.forward;
            }
        }
    }
}
