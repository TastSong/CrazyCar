using QFramework;

public class SelectGameUICommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new SelectGameUIEvent());
    }
}
