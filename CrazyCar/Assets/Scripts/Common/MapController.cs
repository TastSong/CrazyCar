using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class MapController : MonoBehaviour {
    public GameObject[] mapsGO;
    public int mapId;

    private void OnEnable() {
        int selectMapId = 0;
        if (GameController.manager.curGameType == CurGameType.TimeTrial) {
            selectMapId = GameController.manager.timeTrialManager.selectInfo.mapId;
        } else if (GameController.manager.curGameType == CurGameType.Match) {
            selectMapId = GameController.manager.matchManager.selectInfo.mapId;
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
