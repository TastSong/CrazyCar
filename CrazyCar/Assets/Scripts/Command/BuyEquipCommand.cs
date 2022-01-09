using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using MoreMountains.NiceVibrations;

public class BuyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public BuyEquipCommand(EquipInfo equipInfo) {
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
        if (this.GetModel<IUserModel>().Star.Value > mEquipInfo.star) {
            this.GetModel<IGameControllerModel>().InfoConfirmAlert.ShowWithText(content: string.Format(this.GetSystem<II18NSystem>().GetText("Whether to spend {0} star on this equip"),
                mEquipInfo.star),
            success: () => {
                CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                    RequestUrl.buyEquipUrl,
                data: bytes,
                token: this.GetModel<IGameControllerModel>().Token.Value,
                succData: (data) => {
                    this.GetModel<IUserModel>().Star.Value = (int)data["star"];
                    this.SendEvent<BuyEquipEvent>();
                    this.SendEvent<UpdateHomepageUIEvent>();
                }));
            },
            fail: () => {
                Debug.Log(this.GetSystem<II18NSystem>().GetText("Give up to buy"));
            });
        } else {
            this.GetModel<IGameControllerModel>().WarningAlert.ShowWithText(string.Format(this.GetSystem<II18NSystem>().GetText("This equip requires {0} star"),
                mEquipInfo.star));
        }
    }
}