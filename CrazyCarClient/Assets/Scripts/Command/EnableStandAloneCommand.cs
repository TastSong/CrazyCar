using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using UnityEngine.ResourceManagement.AsyncOperations;

public class EnableStandAloneCommand : AbstractCommand {
    protected override async void OnExecute() {
        this.GetModel<IGameModel>().StandAlone.Value = true;
        var obj = await this.GetSystem<IAddressableSystem>().LoadAssetAsync<TextAsset>(Util.baseStandAlone + Util.standAloneLogin);
        if (obj.Status == AsyncOperationStatus.Succeeded) {
            JsonData data = JsonMapper.ToObject(obj.Result.text);
            this.GetModel<IGameModel>().Token.Value = (string)data["token"];
            this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(data);

            WarningAlertInfo alertInfo = new WarningAlertInfo("Login Success", () => {
                this.SendCommand(new LoadSceneCommand(SceneID.Index));
            });
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        }
    }
}
