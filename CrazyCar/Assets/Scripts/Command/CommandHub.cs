using LitJson;
using System.Text;
using UnityEngine;
using Utils;
using QFramework;

public class SavaSettingsCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent<ChangeSettingEvent>();
    }
}
