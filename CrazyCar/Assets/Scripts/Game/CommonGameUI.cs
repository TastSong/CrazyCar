using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
using Utils;

public class CommonGameUI : MonoBehaviour, IController {
    public Button exitBtn;
    public GameObject miniMap;
    public Text cylinderNumText;

    private void Start() {
        exitBtn.onClick.AddListener(() => {
            Time.timeScale = 0;
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(
                content: this.GetSystem<II18NSystem>().GetText("Quit the game?"),
                success: () => {
                    Time.timeScale = 1;
                    Util.LoadingScene(SceneID.Index);
                },
                fail: () => {
                    Time.timeScale = 1;
                });
        });

        UpdateCylinderNum(new UpdateCylinderNumEvent());
        this.RegisterEvent<UpdateCylinderNumEvent>(UpdateCylinderNum);
    }

    private void UpdateCylinderNum(UpdateCylinderNumEvent e) {
        if (this.GetModel<IGameControllerModel>().CurGameType == GameType.TimeTrial) {
            cylinderNumText.text = this.GetSystem<ICheckpointSystem>().PassTimes.ToString() + "/" +
                this.GetModel<ITimeTrialModel>().SelectInfo.Value.times;
        } else if (this.GetModel<IGameControllerModel>().CurGameType == GameType.Match) {
            cylinderNumText.text = this.GetSystem<ICheckpointSystem>().PassTimes.ToString() + "/" +
                this.GetModel<IMatchModel>().SelectInfo.Value.times;
        }
    }

    private void OnDestroy() {
        this.UnRegisterEvent<UpdateCylinderNumEvent>(UpdateCylinderNum);
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
