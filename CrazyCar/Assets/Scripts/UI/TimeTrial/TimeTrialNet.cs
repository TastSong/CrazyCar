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
        //if (this.GetModel<IGameModel>().CurGameType == GameType.TimeTrial) {
        //    string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) +
        //        RequestUrl.timeTrialWSUrl;
        //    Debug.Log("+++ " + ws);
        //    if (this.GetSystem<INetworkSystem>().NetType == NetType.WebSocket) {
        //        this.GetSystem<INetworkSystem>().Connect(ws);
        //    } else if (this.GetSystem<INetworkSystem>().NetType == NetType.KCP) {
        //        this.GetSystem<INetworkSystem>().Connect(Util.GetServerHost(this.GetSystem<INetworkSystem>().ServerType));
        //    }

        //    StartCoroutine(this.GetSystem<INetworkSystem>().OnConnect(succ: () => {
        //        Debug.Log("Connect succ");
        //        this.SendCommand<PostCreatePlayerMsgCommand>();
        //        timeTrialNetCor = CoroutineController.manager.StartCoroutine(SendMsg());
        //    }, fail: () => {
        //        Debug.Log("Connect Fail");
        //    }));
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
