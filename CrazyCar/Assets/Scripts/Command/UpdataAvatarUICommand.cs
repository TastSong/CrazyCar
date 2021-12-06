using QFramework;

public class UpdataAvatarUICommand : AbstractCommand {
    private readonly int mAid;

    public UpdataAvatarUICommand(int aid) {
        mAid = aid;
    }

    protected override void OnExecute() {
        this.SendEvent(new UpdataAvatarUIEvent(mAid));
    }
}
