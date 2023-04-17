using QFramework;

public class HidePageByLevelCommand : AbstractCommand {
    private UILevelType mLevelType;
    
    public HidePageByLevelCommand(UILevelType levelType) {
        this.mLevelType = levelType;
    }
    
    protected override void OnExecute() {
        this.SendEvent(new HidePageByLevelEvent(mLevelType));
    }
}
