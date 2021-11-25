using TFramework;

public class ShowPageCommand : AbstractCommand {

    private readonly UIPageType mUIPageType;

    public ShowPageCommand(UIPageType pageType) {
        mUIPageType = pageType;
    }

    protected override void OnExecute() {
        this.SendEvent(new ShowPageEvent(mUIPageType));
    }
}
