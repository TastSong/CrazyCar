using QFramework;

public class SetGameHelperCommand : AbstractCommand {
    private bool isShow;
    public SetGameHelperCommand(bool isShow) {
        this.isShow = isShow;
    }

    protected override void OnExecute() {
        this.SendEvent<SetGameHelperEvent>(new SetGameHelperEvent(isShow));
    }
}
