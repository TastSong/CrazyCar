using QFramework;

public class FinishDownloadResCommand : AbstractCommand {
    private bool isFinish = false;
    public FinishDownloadResCommand(bool isFinish) {
        this.isFinish = isFinish;
    }
    protected override void OnExecute() {
        this.SendEvent(new FinishDownloadResEvent(isFinish));
    }
}
