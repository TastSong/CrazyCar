using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class EnableStandAloneCommand : AbstractCommand {
    protected override void OnExecute() {
        this.GetModel<IGameModel>().StandAlone.Value = true;
        this.GetSystem<IAddressableSystem>().LoadAsset<TextAsset>(Util.baseStandAlone + Util.standAloneLogin, (obj) => {
            if (obj.Status == AsyncOperationStatus.Succeeded) {
                JsonData data = JsonMapper.ToObject(obj.Result.text);
                this.GetModel<IGameModel>().Token.Value = (string)data["token"];
                this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(data);

                WarningAlertInfo alertInfo = new WarningAlertInfo("Login Success", () => {
                    this.SendCommand(new LoadSceneCommand(SceneID.Index));
                });
                this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
            }
        });
        
    }
}
