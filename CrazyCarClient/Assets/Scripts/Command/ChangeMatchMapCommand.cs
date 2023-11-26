using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public class ChangeMatchMapCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent<ChangeMatchMapEvent>();
    }
}
