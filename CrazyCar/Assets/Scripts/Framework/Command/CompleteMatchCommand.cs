using TFramework;
public class CompleteMatchCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new CompleteMatchEvent());
    }
}
