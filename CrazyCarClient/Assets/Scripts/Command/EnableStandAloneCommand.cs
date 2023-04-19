using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
public class EnableStandAloneCommand : AbstractCommand {
    protected override void OnExecute() {
        this.GetModel<IGameModel>().StandAlone.Value = true;
        TextAsset ta = Resources.Load<TextAsset>(Util.baseStandAlone + Util.standAloneLogin);
        JsonData data = JsonMapper.ToObject(ta.text);
        this.GetModel<IGameModel>().Token.Value = (string)data["token"];
        this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(data);

        WarningAlertInfo alertInfo = new WarningAlertInfo("Login Success", () => {
            this.SendCommand(new LoadSceneCommand(SceneID.Index));
        });
        this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
    }
}
