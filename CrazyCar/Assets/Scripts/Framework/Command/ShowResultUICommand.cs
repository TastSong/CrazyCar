using TFramework;

public class ShowResultUICommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent<ShowResultUIEvent>();
    }
}
