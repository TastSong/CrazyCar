using QFramework;

public class PrepareUICommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new PrepareUIEvent());
    }
}
