using TFramework;
public class OpenRegisterCommand : AbstractCommand{
    protected override void OnExecute() {
        this.SendEvent(new OpenRegisterEvent());
    }
}
