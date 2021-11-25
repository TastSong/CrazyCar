using TFramework;

public class DownloadResFinishCommand : AbstractCommand{
    protected override void OnExecute() {
        this.SendEvent(new DownloadResFinishEvent());
    }
}
