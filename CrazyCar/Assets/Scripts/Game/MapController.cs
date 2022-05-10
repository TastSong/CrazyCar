using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;
using PathCreation;

public class MapController : MonoBehaviour, IController {
    public GameObject[] mapsGO;
    public Transform[] startPos;
    public int mapId;

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }

    private void OnEnable() {
        int selectMapId = 0;
        if (this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial) {
            selectMapId = this.GetModel<ITimeTrialModel>().SelectInfo.Value.mapId;
        } else if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            selectMapId = this.GetModel<IMatchModel>().SelectInfo.Value.mapId;
        }

        if (selectMapId >= mapsGO.Length) {
            selectMapId = 0;
        }

        this.GetModel<IMapControllerModel>().StartPos = startPos[selectMapId].position;

        for (int i = 0; i < mapsGO.Length; i++) {
            mapsGO[i].SetActiveFast(i == selectMapId);
        }
        mapId = selectMapId;
        this.GetModel<IMapControllerModel>().PathCreator = mapsGO[mapId].GetComponentInChildren<PathCreator>();
    }
}
