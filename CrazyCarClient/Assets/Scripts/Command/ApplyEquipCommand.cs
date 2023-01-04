using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class ApplyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public ApplyEquipCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(mEquipInfo.eid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                    RequestUrl.changeEquipUrl,
                data: bytes, token: this.GetModel<IGameModel>().Token.Value,
                succData: (data) => {
                    this.GetModel<IUserModel>().EquipInfo.Value = this.GetModel<IEquipModel>().EquipDic[(int)data["eid"]];
                    this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Successfully Set")));
                    this.SendEvent<ApplyEquipEvent>();
                },
                code: (code) => {
                    if (code == 423) {
                        this.SendEvent(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Did not have")));
                    }
                }));
    }
}