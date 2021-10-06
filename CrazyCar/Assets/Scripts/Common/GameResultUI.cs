using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;

public class GameResultUI : MonoBehaviour {
    public TimeTrialResultUI timeTrialResultUI;
    public MatchResultUI matchResultUI;

    private void OnEnable() {
        timeTrialResultUI.gameObject.SetActiveFast(GameController.manager.curGameType == CurGameType.TimeTrial);
        matchResultUI.gameObject.SetActiveFast(GameController.manager.curGameType == CurGameType.Match);
    }
}
