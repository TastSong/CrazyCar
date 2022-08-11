using LitJson;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class MatchNet : MonoBehaviour, IController {
    private Coroutine matchNerCor;

    private void Start() {
        if (this.GetModel<IGameModel>().CurGameType == GameType.Match) {
            string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) + RequestUrl.matchWSUrl;

            if (this.GetSystem<INetworkSystem>().NetType == NetType.WebSocket) {
                this.GetSystem<INetworkSystem>().Connect(ws);
            } else if (this.GetSystem<INetworkSystem>().NetType == NetType.KCP) {
                this.GetSystem<INetworkSystem>().Connect(Util.GetServerHost(this.GetSystem<INetworkSystem>().ServerType));
            }

            StartCoroutine(this.GetSystem<INetworkSystem>().OnConnect(succ : () => {
                Debug.Log("Connect succ");
                this.SendCommand<PostCreatePlayerMsgCommand>();
                matchNerCor = CoroutineController.manager.StartCoroutine(SendMsg());
            },  fail : () => {
                Debug.Log("Connect Fail");
            }));
        }

        this.RegisterEvent<ExitGameSceneEvent>(OnExitGameScene).UnRegisterWhenGameObjectDestroyed(gameObject);
    }

    private void OnExitGameScene(ExitGameSceneEvent e)
    {
        if (matchNerCor != null)
        {
            CoroutineController.manager.StopCoroutine(matchNerCor);
        }
    }

    private IEnumerator SendMsg() {
        while (true) {
            yield return new WaitForSeconds(this.GetModel<IGameModel>().SendMsgOffTime.Value);
            this.SendCommand<PostPlayerStateMsgCommand>();
        }
    }

    private void OnDestroy() {
        this.GetSystem<INetworkSystem>().CloseConnect();
    }

    public IArchitecture GetArchitecture() {
        return CrazyCar.Interface;
    }
}
