using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class MatchNet : MonoBehaviour,IController {
    private void Start() {
        if (this.GetModel<IGameControllerModel>().CurGameType == GameType.Match) {
            string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) + 
                "websocket/MatchWebSocket/" +
                this.GetModel<IUserModel>().Uid.Value + "," +
                this.GetModel<IMatchModel>().SelectInfo.Value.cid;

            if (this.GetSystem<INetworkSystem>().NetType == NetType.WebSocket) {
                this.GetSystem<INetworkSystem>().Connect(ws);
            } else if (this.GetSystem<INetworkSystem>().NetType == NetType.KCP) {
                this.GetSystem<INetworkSystem>().Connect(Util.GetServerHost(this.GetSystem<INetworkSystem>().ServerType));
            }

            Util.DelayExecuteWithSecond(3, () => { this.SendCommand<PostCreatePlayerMsgCommand>(); });
            Util.DelayExecuteWithSecond(4.5f, () => { CoroutineController.manager.StartCoroutine(SendMsg()); }); 
        }           
    }

    private IEnumerator SendMsg() {
        while (true) {
            this.SendCommand<PostPlayerPosMsgCommand>();
            yield return new WaitForSeconds(this.GetModel<IGameControllerModel>().SendMsgOffTime.Value);
        }
    }

    private void OnDestroy() {
        this.GetSystem<INetworkSystem>().CloseConnect();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
