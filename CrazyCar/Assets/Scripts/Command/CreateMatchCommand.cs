using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class CreateMatchCommand : AbstractCommand {
    protected override void OnExecute() {
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                  RequestUrl.createMatchUrl,
                  token: this.GetModel<IGameModel>().Token.Value,
                  code: (code) => {
                      if (code == 200) {
                          this.SendEvent<UpdataMatchDetailEvent>();
                      }
                  }
              ));
    }
}