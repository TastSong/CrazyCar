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
            this.GetSystem<INetworkSystem>().Connect(RequestUrl.matchWSUrl, RequestUrl.matchKCPPort);

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
