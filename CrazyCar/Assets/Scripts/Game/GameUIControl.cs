using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using QFramework;
using UnityEngine.UI;

public class GameUIControl : MonoBehaviour, IController {
    public CommonGameUI commonGameUI;
    public InputSystemPanel controlPanel;
    public GameResultUI gameResultUI;
    public TimeTrialGameUI timeTrialGameUI;
    public MatchGameUI matchGameUI;

    private void Awake() {
        commonGameUI.gameObject.SetActiveFast(false);
        controlPanel.gameObject.SetActiveFast(false);
        gameResultUI.gameObject.SetActiveFast(false);
        timeTrialGameUI.gameObject.SetActiveFast(false);
        matchGameUI.gameObject.SetActiveFast(false);
        this.RegisterEvent<SelectGameUIEvent>(OnSelectGameUI).UnRegisterWhenGameObjectDestroyed(gameObject);
        this.RegisterEvent<ShowResultUIEvent>(OnShowResultUI).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnSelectGameUI(SelectGameUIEvent e) {
        commonGameUI.gameObject.SetActiveFast(true);
        controlPanel.gameObject.SetActiveFast(true);
        timeTrialGameUI.gameObject.SetActiveFast(this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial);
        matchGameUI.gameObject.SetActiveFast(this.GetModel<IGameModel>().CurGameType == GameType.Match);
    }

    private void OnShowResultUI(ShowResultUIEvent e) {
        if (this.GetModel<IGameModel>().StandAlone.Value) {
            this.SendCommand(new ShowWarningAlertCommand(this.GetSystem<II18NSystem>().GetText("Game Over"), 2.0f));
            Util.DelayExecuteWithSecond(2.0f, () => {
                Util.LoadingScene(SceneID.Index);
            });           
        } else {
            controlPanel.gameObject.SetActiveFast(false);
            gameResultUI.gameObject.SetActiveFast(true);
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
