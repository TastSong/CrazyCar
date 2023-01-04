using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class MakeNewPlayerCommand : AbstractCommand {

    private PlayerCreateMsg playerCreateMsg;

    public MakeNewPlayerCommand(PlayerCreateMsg playerCreateMsg) {
        this.playerCreateMsg = playerCreateMsg;
    }

    protected override void OnExecute() {
        this.SendEvent(new MakeNewPlayerEvent(playerCreateMsg));
    }
}
