using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class ChangePasswordCommand : AbstractCommand {
    private string mPassword;

    public ChangePasswordCommand(string password) {
        mPassword = password;
    }

    protected override async void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("password");
        w.Write(Util.GetMd5(mPassword));
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.modifyPersonalInfoUrl,
            token: this.GetModel<IGameModel>().Token.Value, bytes);
        if (result.serverCode == 200) {
            WarningAlertInfo alertInfo = new WarningAlertInfo("Modify Successfully");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
            this.GetModel<IUserModel>().Password.Value = mPassword; 
        } else if (result.serverCode == 423) {
            WarningAlertInfo alertInfo = new WarningAlertInfo("Fail To Modify");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        } else if (result.serverCode == 404) {
            WarningAlertInfo alertInfo = new WarningAlertInfo("Information Error");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        }
    }
}