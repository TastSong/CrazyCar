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
        w.Write(mPassword);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.modifyPersonalInfoUrl,
            data: bytes, token: this.GetModel<IGameModel>().Token.Value,
            succData: (data) => {
                this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Modify Successfully")));
                this.GetModel<IUserModel>().Password.Value = mPassword;
            },
            code: (code) => {
                if (code == 423) {
                    this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Fail To Modify")));
                } else if (code == 404) {
                    this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Information Error")));
                }
            }));
    }
}