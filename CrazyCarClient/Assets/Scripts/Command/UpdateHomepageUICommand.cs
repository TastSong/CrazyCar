using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class UpdateHomepageUICommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent<UpdateHomepageUIEvent>();
    }
}
