using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class UpdateMatchResultUICommand : AbstractCommand {
    private PlayerCompleteMsg playerCompleteMsg;

    public UpdateMatchResultUICommand(PlayerCompleteMsg playerCompleteMsg) {
        this.playerCompleteMsg = playerCompleteMsg;
    }

    protected override void OnExecute() {
        this.SendEvent(new UpdateMatchResultUIEvent(playerCompleteMsg));
    }
}
