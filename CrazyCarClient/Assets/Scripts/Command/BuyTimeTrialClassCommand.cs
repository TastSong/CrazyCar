using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class BuyTimeTrialClassCommand : AbstractCommand {
    private TimeTrialInfo mTimeTrialInfo;

    public BuyTimeTrialClassCommand(TimeTrialInfo timeTrialInfo) {
        mTimeTrialInfo = timeTrialInfo;
    }

    protected override async void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("cid");
        w.Write(mTimeTrialInfo.cid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        var result = await this.GetSystem<INetworkSystem>().Post(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.buyTimeTrialClassUrl,
        token: this.GetModel<IGameModel>().Token.Value, bytes);
        if (result.serverCode == 200) {
            this.GetModel<IUserModel>().Star.Value = (int)result.serverData["star"];
            mTimeTrialInfo.isHas = true;
            this.GetModel<IUserModel>().MapNum.Value++;
            this.SendEvent<UnlockTimeTrialEvent>();
            this.SendEvent<UpdateHomepageUIEvent>();
        }
    }
}