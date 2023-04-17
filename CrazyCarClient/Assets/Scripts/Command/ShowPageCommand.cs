using QFramework;

public class ShowPageCommand : AbstractCommand {

    private  UIPageType mUIPageType;
    private bool mCloseOther;
    private UILevelType mLevelType;

    public ShowPageCommand(UIPageType pageType, bool mCloseOther = false, UILevelType mLevelType = UILevelType.UIPage) {
        this.mUIPageType = pageType;
        this.mCloseOther = mCloseOther;
        this.mLevelType = mLevelType;
    }
    
    public ShowPageCommand(UIPageType pageType, UILevelType mLevelType) {
        this.mUIPageType = pageType;
        this.mCloseOther = false;
        this.mLevelType = mLevelType;
    }

    protected override void OnExecute() {
        this.SendEvent(new ShowPageEvent(mUIPageType, mCloseOther, mLevelType));
    }
}
