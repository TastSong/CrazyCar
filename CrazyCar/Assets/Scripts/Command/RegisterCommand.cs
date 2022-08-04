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
        CoroutineController.manager.StartCoroutine(Util.GetPlace((place) => {
            Register(place);
        })); 
    }

    private void Register(string place) {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(mUserName);
        w.WritePropertyName("Password");
        w.Write(Util.GetMd5(mPassword));
        w.WritePropertyName("device");
        w.Write(SystemInfo.deviceModel);
        w.WritePropertyName("place");
        w.Write(place);
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
                    this.SendEvent(new ShowWarningAlertEvent(text: this.GetSystem<II18NSystem>().GetText("Registration Successful"), callback: () => {
                        this.SendCommand(new LoadSceneCommand(SceneID.Index));
                    }));
                } else if (code == 423) {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("User registered")));
                } else if (code == 425) {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Incorrect information format")));
                } else {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Unknown Error")));
                }
            }));
    }
}