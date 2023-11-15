using QFramework;

public class SavaSettingsCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent<ChangeSettingEvent>();
    }
}

