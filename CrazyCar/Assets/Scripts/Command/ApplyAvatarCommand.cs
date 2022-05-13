using LitJson;
using System.Text;
using UnityEngine;
using QFramework;

public class ApplyAvatarCommand : AbstractCommand {
    private readonly int mCurAid;

    public ApplyAvatarCommand(int curAid) {
        mCurAid = curAid;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("aid");
        w.Write(mCurAid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.changeAvatarUrl,
            data: bytes, token: this.GetModel<IGameModel>().Token.Value,
            succData: (data) => {
                this.GetModel<IUserModel>().Aid.Value = (int)data["aid"];
                this.SendEvent(new UpdataAvatarUIEvent(this.GetModel<IUserModel>().Aid));
                this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Successfully Set")));
            },
            code: (code) => {
                if (code == 423) {
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Did not have")));
                }
            }));
    }
}