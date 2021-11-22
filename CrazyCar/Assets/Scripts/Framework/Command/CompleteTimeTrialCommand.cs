using TFramework;

public class CompleteTimeTrialCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new CompleteTimeTrialEvent());
    }
}
