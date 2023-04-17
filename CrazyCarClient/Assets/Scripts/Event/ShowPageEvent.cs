using System;
using UnityEngine;
public class ShowPageEvent {
    public UIPageType pageType;
    public bool closeOther;
    public UILevelType levelType;

    public ShowPageEvent(UIPageType pageType, bool closeOther = false, UILevelType levelType = UILevelType.UIPage) {
        this.pageType = pageType;
        this.closeOther = closeOther;
        this.levelType = levelType;
    }
}