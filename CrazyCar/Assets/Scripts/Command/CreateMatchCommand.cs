using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;
using MoreMountains.NiceVibrations;

public class CreateMatchCommand : AbstractCommand {
    protected override void OnExecute() {
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl +
                  RequestUrl.createMatchUrl,
                  token: this.GetModel<IGameControllerModel>().Token.Value,
                  code: (code) => {
                      if (code == 200) {
                          this.SendEvent<UpdataMatchDetailEvent>();
                      }
                  }
              ));
    }
}