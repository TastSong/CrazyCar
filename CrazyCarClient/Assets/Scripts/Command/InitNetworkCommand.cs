using QFramework;

public class InitNetworkCommand : AbstractCommand {
    protected override void OnExecute() {
        this.SendEvent(new InitNetworkEvent());
    }
}
