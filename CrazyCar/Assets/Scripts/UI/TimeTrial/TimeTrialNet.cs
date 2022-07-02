using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class TimeTrialNet : MonoBehaviour, IController {
    private Coroutine timeTrialNetCor;

    private void Start() {
        //if (this.GetModel<IGameControllerModel>().CurGameType == GameType.TimeTrial) {
        //    string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) +
        //        RequestUrl.timeTrialWSUrl +
        //        this.GetModel<IUserModel>().Uid.Value + "," + this.GetModel<ITimeTrialModel>().SelectInfo.Value.cid;
        //    Debug.Log("+++ " + ws);
        //    if (this.GetSystem<INetworkSystem>().NetType == NetType.WebSocket) {
        //        this.GetSystem<INetworkSystem>().Connect(ws);
        //    } else if (this.GetSystem<INetworkSystem>().NetType == NetType.KCP) {
        //        this.GetSystem<INetworkSystem>().Connect(Util.GetServerHost(this.GetSystem<INetworkSystem>().ServerType));
        //    }

        //    Util.DelayExecuteWithSecond(3, () => { this.SendCommand<PostCreatePlayerMsgCommand>(); });
        //    Util.DelayExecuteWithSecond(4.5f, () => { timeTrialNetCor = CoroutineController.manager.StartCoroutine(SendMsg()); });
        //}

        //this.RegisterEvent<ExitGameSceneEvent>(OnExitGameScene).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnExitGameScene(ExitGameSceneEvent e)
    {
        if (timeTrialNetCor != null)
        {
            CoroutineController.manager.StopCoroutine(timeTrialNetCor);
        }
    }

    private IEnumerator SendMsg() {
        while (true) {
            if (this.GetModel<ITimeTrialModel>().IsStartGame) {
                this.SendCommand<PostPlayerStateMsgCommand>();
            }
            yield return new WaitForSeconds(this.GetModel<IGameModel>().SendMsgOffTime.Value);
        }
    }

    private void OnDestroy() {
        this.GetSystem<INetworkSystem>().CloseConnect();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
