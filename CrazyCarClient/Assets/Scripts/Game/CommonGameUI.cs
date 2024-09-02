using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utils;

public class CommonGameUI : MonoBehaviour, IController {
    public Button exitBtn;
    public Button angleViewBtn;
    public RawImage miniMap;
    public Text cylinderNumText;

    private AngleView curAngleView = AngleView.ThirdAngle;

    private async void Start() {
        exitBtn.onClick.AddListener(() => {
            this.SendCommand<ExitGameSceneCommand>();
        });

        angleViewBtn.onClick.AddListener(() => {
            if (curAngleView == AngleView.FirstAngle) {
                this.SendCommand(new ChangeAngleViewCommand(AngleView.ThirdAngle));
                curAngleView = AngleView.ThirdAngle;
            } else {
                this.SendCommand(new ChangeAngleViewCommand(AngleView.FirstAngle));
                curAngleView = AngleView.FirstAngle;
            }
        });
        
         var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<RenderTexture>(Util.miniMapPath);
         if (obj.Status == AsyncOperationStatus.Succeeded) {
             miniMap.texture = obj.Result;
         } else {
             Debug.LogError($"CommonGameUI Load minimap Failed");
         }

        UpdateCylinderNum(new UpdateCylinderNumEvent());
        this.RegisterEvent<UpdateCylinderNumEvent>(UpdateCylinderNum).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void UpdateCylinderNum(UpdateCylinderNumEvent e) {
        if (this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial) {
            cylinderNumText.text = this.GetSystem<ICheckpointSystem>().PassTimes.ToString() + "/" +
                this.GetModel<ITimeTrialModel>().SelectInfo.Value.times;
        } else if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            cylinderNumText.text = this.GetSystem<ICheckpointSystem>().PassTimes.ToString() + "/" +
                this.GetModel<IMatchModel>().SelectInfo.Value.times;
        }
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
