using QFramework;

public class ChangeAngleViewCommand : AbstractCommand {
    private AngleView mAngleView;

    public ChangeAngleViewCommand(AngleView angleView) {
        mAngleView = angleView;
    }

    protected override void OnExecute() {
        this.SendEvent(new ChangeAngleViewEvent(mAngleView));
    }
}
