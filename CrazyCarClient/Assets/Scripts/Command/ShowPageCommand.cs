using QFramework;

public class ShowPageCommand : AbstractCommand {

    private  UIPageType mUIPageType;
    private bool mCloseOther;
    private UILevelType mLevelType;
    private object mData;

    public ShowPageCommand(UIPageType pageType, bool mCloseOther = false, UILevelType mLevelType = UILevelType.UIPage) {
        this.mUIPageType = pageType;
        this.mCloseOther = mCloseOther;
        this.mLevelType = mLevelType;
        this.mData = null;
    }
    
    public ShowPageCommand(UIPageType pageType, UILevelType mLevelType) {
        this.mUIPageType = pageType;
        this.mCloseOther = false;
        this.mLevelType = mLevelType;
        this.mData = null;
    }
    
    public ShowPageCommand(UIPageType pageType, UILevelType mLevelType, object data) {
        this.mUIPageType = pageType;
        this.mCloseOther = false;
        this.mLevelType = mLevelType;
        this.mData = data;
    }

    protected override void OnExecute() {
        this.SendEvent(new ShowPageEvent(mUIPageType, mCloseOther, mLevelType, mData));
    }
}
