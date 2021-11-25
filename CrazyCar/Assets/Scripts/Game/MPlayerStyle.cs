using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MPlayerStyle : MonoBehaviour {
    public TextMesh nameText;
    private Dictionary<string, AccessoryChanger> equipDic = new Dictionary<string, AccessoryChanger>();

    public void ChangeEquip(EquipType equipType, int eid, string rid) {
        InitEquipDic();
        equipDic[equipType.ToString()].SetGear(eid.ToString(), rid);
    }

    private void InitEquipDic() {
        if (equipDic.Count == 0) {
            AccessoryChanger[] chgs = GetComponentsInChildren<AccessoryChanger>();
            for (int i = 0; i < chgs.Length; i += 1) {
                equipDic[chgs[i].type] = chgs[i];
            }
        }
    }

    public void SetNameText(string name, bool isVIP = false) {
        nameText.text = name;
    }
}
