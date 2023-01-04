using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestChangeEquip : MonoBehaviour {
    //public AccessoryChanger accessoryChanger;
    public Button changeEquipBtn;

    private void Start() {
        changeEquipBtn.onClick.AddListener(() => {
            //accessoryChanger.SetGear("E2002", "R_Car_F1_Blue");
        });
    }
}
