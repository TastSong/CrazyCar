using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class RecodeLoginCommand : AbstractCommand {
    protected override void OnExecute() {
        CoroutineController.manager.StartCoroutine(Util.GetPlace((place) => {
            RecodeLogin(place);
        }));
    }

    private void RecodeLogin(string place) {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("UserName");
        w.Write(this.GetModel<IUserModel>().Name);
        w.WritePropertyName("device");
        w.Write(SystemInfo.deviceModel);
        w.WritePropertyName("place");
        w.Write(place);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.recodeLogin,
            data: bytes, succData: (data) => {
            }, code: (code) => {
       
            }));
    }
}
