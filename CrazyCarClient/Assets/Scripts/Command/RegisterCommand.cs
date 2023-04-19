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
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.registerUrl,
            data: bytes, succData: (data) => {
                this.GetSystem<IDataParseSystem>().ParseSelfUserInfo(data);

                this.GetModel<IUserModel>().Password.Value = mPassword;
            }, code: (code) => {
                if (code == 200) {
                    this.GetSystem<IVibrationSystem>().Haptic();
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Registration Successful", () => {
                        this.SendCommand<RecodeLoginCommand>();
                        this.SendCommand(new LoadSceneCommand(SceneID.Index));
                    });
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                } else if (code == 423) {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("User registered");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                } else if (code == 425) {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Incorrect information format");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                } else {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Unknown Error");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                }
            }));
    }
}