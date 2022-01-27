using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using LitJson;
using System;
using System.IO;


public class EquipResource : MonoBehaviour {

    public Sprite theIcon;
    public new RuntimeAnimatorController animation;

    public string rid;
    public string type = EquipType.Car.ToString();
}