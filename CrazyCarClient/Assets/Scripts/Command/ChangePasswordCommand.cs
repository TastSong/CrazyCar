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

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("password");
        w.Write(Util.GetMd5(mPassword));
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.modifyPersonalInfoUrl,
            data: bytes, token: this.GetModel<IGameModel>().Token.Value,
            succData: (data) => {
                WarningAlertInfo alertInfo = new WarningAlertInfo("Modify Successfully");
                this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                this.GetModel<IUserModel>().Password.Value = mPassword;
            },
            code: (code) => {
                if (code == 423) {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Fail To Modify");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                } else if (code == 404) {
                    WarningAlertInfo alertInfo = new WarningAlertInfo("Information Error");
                    this.SendEvent(new ShowPageEvent(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
                }
            }));
    }
}