using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class MapController : MonoBehaviour {
    public GameObject[] mapsGO;
    public int mapId;

    private void OnEnable() {
        if (GameController.manager.timeTrialManager.selectInfo.mapId >= mapsGO.Length) {
            GameController.manager.timeTrialManager.selectInfo.mapId = 0;
        }

        for (int i = 0; i < mapsGO.Length; i++) {
            mapsGO[i].SetActiveFast(i == GameController.manager.timeTrialManager.selectInfo.mapId);
        }
        mapId = GameController.manager.timeTrialManager.selectInfo.mapId;
    }
}
