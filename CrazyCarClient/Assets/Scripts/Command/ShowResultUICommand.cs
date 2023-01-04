using QFramework;

public class ShowResultUICommand : AbstractCommand {
    protected override void OnExecute() {
        this.GetSystem<IPlayerManagerSystem>().SelfPlayer.isLockSpeed = true;
        this.SendEvent<ShowResultUIEvent>();
    }
}
