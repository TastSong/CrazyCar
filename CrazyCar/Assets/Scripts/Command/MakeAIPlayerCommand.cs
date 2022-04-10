using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class MakeAIPlayerCommand : AbstractCommand {
    private AIInfo mAIInfo;

    public MakeAIPlayerCommand(AIInfo aiInfo) {
        mAIInfo = aiInfo;
    }

    protected override void OnExecute() {
        this.SendEvent<MakeAIPlayerEvent>(new MakeAIPlayerEvent(mAIInfo));
    }
}
   
