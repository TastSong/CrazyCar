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
            this.GetSystem<INetworkSystem>().Connect(RequestUrl.matchWSUrl,RequestUrl.kcpServerUrl, RequestUrl.matchKCPPort);
            
            this.GetSystem<INetworkSystem>().ConnectSuccAction = () => {
                Debug.Log("MatchNet Connect Succ");
                this.SendCommand<PostCreatePlayerMsgCommand>();
                matchNerCor = CoroutineController.manager.StartCoroutine(SendMsg());
            };
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
