using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class RegisterCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;

    public RegisterCommand(string userName, string password) {
        mUserName = userName;
        mPassword = password;
    }

    protected override async void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(Util.GetMd5(mPassword));
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.registerUrl, bytes);
        if (result.serverCode == 200) {
            this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(result.serverData);

            this.GetModel<IUserModel>().Password.Value = mPassword;
            this.GetSystem<IVibrationSystem>().Haptic();
            WarningAlertInfo alertInfo = new WarningAlertInfo("Registration Successful", () => {
                this.SendCommand<RecodeLoginCommand>();
                this.SendCommand(new LoadSceneCommand(SceneID.Index));
            });
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        } else if (result.serverCode == 423) {
            WarningAlertInfo alertInfo = new WarningAlertInfo("User registered");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        } else if (result.serverCode == 425) {
            WarningAlertInfo alertInfo = new WarningAlertInfo("Incorrect information format");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        } else {
            WarningAlertInfo alertInfo = new WarningAlertInfo("Unknown Error");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        }
    }
}