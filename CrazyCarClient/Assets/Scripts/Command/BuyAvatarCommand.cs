using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class BuyAvatarCommand : AbstractCommand {
    private AvatarInfo mAvatarInfo;

    public BuyAvatarCommand(AvatarInfo avatarInfo) {
        mAvatarInfo = avatarInfo;
    }

    protected override void OnExecute() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("aid");
        w.Write(mAvatarInfo.aid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP
            (url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.buyAvatarUrl,
        data: bytes,
        token: this.GetModel<IGameModel>().Token.Value,
        succData: (data) => {
            this.GetModel<IUserModel>().Star.Value = (int)data["star"];
            mAvatarInfo.isHas = true;
            this.GetModel<IUserModel>().AvatarNum.Value++;
            this.SendEvent<UnlockAvatarEvent>();
        }));
    }
}