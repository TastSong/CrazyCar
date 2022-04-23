using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class TimeTrialNet : MonoBehaviour, IController {
    private void Start() {
        //if (this.GetModel<IGameControllerModel>().CurGameType == GameType.TimeTrial) {
        //    string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) +
        //        "websocket/TimeTrialWebSocket/" +
        //        this.GetModel<IUserModel>().Uid.Value + "," + this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid;
        //    Debug.Log("+++ " + ws);
        //    if (this.GetSystem<INetworkSystem>().NetType == NetType.WebSocket) {
        //        this.GetSystem<INetworkSystem>().Connect(ws);
        //    } else if (this.GetSystem<INetworkSystem>().NetType == NetType.KCP) {
        //        this.GetSystem<INetworkSystem>().Connect(Util.GetServerHost(this.GetSystem<INetworkSystem>().ServerType));
        //    }
        //    Util.DelayExecuteWithSecond(3, () => { CoroutineController.manager.StartCoroutine(SendMsg()); });
        //}
    }

    private IEnumerator SendMsg() {
        while (true) {
            if (this.GetModel<ITimeTrialModel>().IsStartGame) {
                this.SendCommand<PostPlayerPosMsgCommand>();
            }
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
