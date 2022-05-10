using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;

public class GameResultUI : MonoBehaviour, IController {
    public TimeTrialResultUI timeTrialResultUI;
    public MatchResultUI matchResultUI;

    private void OnEnable() {
        timeTrialResultUI.gameObject.SetActiveFast(this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial);
        matchResultUI.gameObject.SetActiveFast(this.GetModel<IGameModel>().CurGameType == GameType.Match);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
