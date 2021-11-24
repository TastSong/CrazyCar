using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

public class MapController : MonoBehaviour, IController {
    public GameObject[] mapsGO;
    public int mapId;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void OnEnable() {
        int selectMapId = 0;
        if (GameController.manager.curGameType == CurGameType.TimeTrial) {
            selectMapId = this.GetModel<ITimeTrialModel>().SelectInfo.Value.mapId;
        } else if (GameController.manager.curGameType == CurGameType.Match) {
            selectMapId = this.GetModel<IMatchModel>().SelectInfo.Value.mapId;
        }

        if (selectMapId >= mapsGO.Length) {
            selectMapId = 0;
        }

        for (int i = 0; i < mapsGO.Length; i++) {
            mapsGO[i].SetActiveFast(i == selectMapId);
        }
        mapId = selectMapId;
    }
}
