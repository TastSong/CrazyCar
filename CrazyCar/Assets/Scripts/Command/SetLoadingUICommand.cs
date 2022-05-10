using QFramework;

public class SetLoadingUICommand : AbstractCommand {
    private bool isShow = false;

    public SetLoadingUICommand(bool isShow) {
        this.isShow = isShow;
    }

    protected override void OnExecute() {
        this.SendEvent<SetLoadingUIEvent>(new SetLoadingUIEvent(isShow));
    }
}
