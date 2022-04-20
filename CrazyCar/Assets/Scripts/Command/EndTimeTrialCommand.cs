using QFramework;

public class EndTimeTrialCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new EndTimeTrialEvent());
    }
}
