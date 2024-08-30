using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class LoginCommand : AbstractCommand {
    private string mUserName;
    private string mPassword;
    private bool mIsRemember;

    public LoginCommand(string userName, string password, bool isRemember) {
        mUserName = userName;
        mPassword = password;
        mIsRemember = isRemember;
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
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.loginUrl, bytes);
        if (result.serverCode == 200) {
            this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(result.serverData);
            this.GetModel<IUserModel>().Password.Value = mPassword;
            WarningAlertInfo info = new WarningAlertInfo("Login Success", () => {
                this.GetSystem<IVibrationSystem>().Haptic();
                this.GetModel<IUserModel>().RememberPassword.Value = mIsRemember ? 1 : 0;
                this.SendCommand<RecodeLoginCommand>();
                this.SendCommand(new LoadSceneCommand(SceneID.Index));
            });
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, info));
        } else if (result.serverCode == 423) {
            WarningAlertInfo info = new WarningAlertInfo("Password Error");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, info));
        } else if (result.serverCode == 404) {
            WarningAlertInfo alertInfo = new WarningAlertInfo("User not registered");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        } else {
            WarningAlertInfo alertInfo = new WarningAlertInfo("Unknown Error");
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        }
    }
}