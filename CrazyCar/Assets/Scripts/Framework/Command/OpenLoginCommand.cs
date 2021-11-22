using TFramework;

public class OpenLoginCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new OpenLoginEvent());
    }
}
