using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class BuyEquipCommand : AbstractCommand {
    private EquipInfo mEquipInfo;

    public BuyEquipCommand(EquipInfo equipInfo) {
        mEquipInfo = equipInfo;
    }

    private async void Buy() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("eid");
        w.Write(mEquipInfo.eid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                           RequestUrl.buyEquipUrl, token: this.GetModel<IGameModel>().Token.Value, bytes);
        if (result.serverCode == 200) {
            this.GetModel<IUserModel>().Star.Value = (int)result.serverData["star"];
            this.SendEvent<BuyEquipEvent>();
            this.SendEvent<UpdateHomepageUIEvent>();
        }
    }

    protected override void OnExecute() {
        if (this.GetModel<IUserModel>().Star.Value > mEquipInfo.star) {
            InfoConfirmInfo info = new InfoConfirmInfo(content: string.Format(this.GetSystem<II18NSystem>().GetText("Whether to spend {0} star on this equip"),
                    mEquipInfo.star),
                success: Buy,
                fail: () => {
                    Debug.Log(this.GetSystem<II18NSystem>().GetText("Give up to buy"));
                });
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.InfoConfirmAlert, UILevelType.Alart, info));
        } else {
            WarningAlertInfo alertInfo = new WarningAlertInfo(string.Format(this.GetSystem<II18NSystem>().GetText("This equip requires {0} star"),
                mEquipInfo.star));
            UIController.Instance.ShowPage(new ShowPageInfo(UIPageType.WarningAlert, UILevelType.Alart, alertInfo));
        }
    }
}