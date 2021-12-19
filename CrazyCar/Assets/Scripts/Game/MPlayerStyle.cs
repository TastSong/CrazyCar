using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class MPlayerStyle : MonoBehaviour, IController {
    public TextMesh nameText;
    public Transform carPos;
    public GameObject car;
    private Dictionary<string, AccessoryChanger> equipDic = new Dictionary<string, AccessoryChanger>();

    public void ChangeEquip(EquipType equipType, int eid, string rid) {
        // 如果想进行车辆的组件换装，并不是整个替换，使用一下方法 Start
        //InitEquipDic();
        //equipDic[equipType.ToString()].SetGear(eid.ToString(), rid);
        // End

        // 整个车子进行替换 Start
        EquipResource r = this.GetSystem<IResourceSystem>().GetEquipResource(rid);

        if (r != null && r.gameObject != null) {
            if (car != null) {
                car.transform.SetParent(null);
                Destroy(car);
            }
            car = Instantiate(r.gameObject);
            car.transform.SetParent(carPos.parent.transform, false);
            car.transform.localPosition = carPos.localPosition;
        }
        // End
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

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
