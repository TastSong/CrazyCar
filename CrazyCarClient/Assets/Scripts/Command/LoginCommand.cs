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

    protected override void OnExecute() {
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
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.loginUrl,
            data: bytes, succData: (data) => {
                this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(data);
                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    WarningAlertInfo info = new WarningAlertInfo("Login Success", () => {
                        this.GetSystem<IVibrationSystem>().Haptic();
                        this.GetModel<IUserModel>().RememberPassword.Value = mIsRemember ? 1 : 0;
                        this.SendCommand<RecodeLoginCommand>();
                        this.SendCommand(new LoadSceneCommand(SceneID.Index));
                    });
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, info));
                } else if (code == 423) {
                    WarningAlertInfo info = new WarningAlertInfo("Password Error");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, info));
                } else if (code == 404) {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("User not registered");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                } else {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Unknown Error");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                }
            }));
    }
}