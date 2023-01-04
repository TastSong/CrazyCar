using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LylekGames.RPGGoblin
{
    public class EnableMouseLook : MonoBehaviour
    {
        public MouseLook mouseLook;
        public InputType click;
        public enum InputType
        {
            LeftMouse,
            RightMouse,
        }
        public void Start()
        {
            if (!mouseLook)
            {
                mouseLook = GetComponent<MouseLook>();
            }
        }
        void Update()
        {
            if (Input.GetMouseButtonDown(0) && click == InputType.LeftMouse)
            {
                mouseLook.enabled = true;
            }
            else if (Input.GetMouseButtonDown(1) && click == InputType.RightMouse)
            {
                mouseLook.enabled = true;
            }
            else if (Input.GetMouseButtonUp(0) && click == InputType.LeftMouse)
            {
                mouseLook.enabled = false;
            }
            else if (Input.GetMouseButtonUp(1) && click == InputType.RightMouse)
            {
                mouseLook.enabled = false;
            }
        }
    }
}
