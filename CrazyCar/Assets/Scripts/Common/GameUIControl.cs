using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Utils;
using TFramework;

public class GameUIControl : MonoBehaviour, IController {
    public ControlPanel controlPanel;
    public GameResultUI gameResultUI;
    public TimeTrialGameUI timeTrialGameUI;
    public MatchGameUI matchGameUI;

    private void Start() {
        controlPanel.gameObject.SetActiveFast(false);
        gameResultUI.gameObject.SetActiveFast(false);
        timeTrialGameUI.gameObject.SetActiveFast(false);
        matchGameUI.gameObject.SetActiveFast(false);
        this.RegisterEvent<SelectGameUIEvent>(OnSelectGameUI);
        this.RegisterEvent<ShowResultUIEvent>(OnShowResultUI);
    }

    private void OnSelectGameUI(SelectGameUIEvent e) {
        controlPanel.gameObject.SetActiveFast(true);

        timeTrialGameUI.gameObject.SetActiveFast(GameController.manager.curGameType == CurGameType.TimeTrial);
        matchGameUI.gameObject.SetActiveFast(GameController.manager.curGameType == CurGameType.Match);
    }

    private void OnShowResultUI(ShowResultUIEvent e) {
        if (GameController.manager.standAlone) {
            GameController.manager.warningAlert.ShowWithText(I18N.manager.GetText("Game Over"), 2.0f);
            Util.DelayExecuteWithSecond(2.0f, () => {
                Util.LoadingScene(SceneID.Index);
            });           
        } else {
            controlPanel.gameObject.SetActiveFast(false);
            gameResultUI.gameObject.SetActiveFast(true);
        }
    }

    private void OnDestroy() {
        this.UnRegisterEvent<SelectGameUIEvent>(OnSelectGameUI);
        this.UnRegisterEvent<ShowResultUIEvent>(OnShowResultUI);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
