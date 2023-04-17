using QFramework;

public class OpenDownloadResCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new OpenDownloadResEvent());
    }
}
