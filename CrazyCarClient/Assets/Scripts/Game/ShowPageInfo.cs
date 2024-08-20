using System;
using UnityEngine;
public class ShowPageInfo {
    public UIPageType pageType;
    public bool closeOther;
    public UILevelType levelType;
    public object data;

    public ShowPageInfo(UIPageType pageType, bool closeOther = false, UILevelType levelType = UILevelType.UIPage) {
        this.pageType = pageType;
        this.closeOther = closeOther;
        this.levelType = levelType;
        this.data = null;
    }
    
    public ShowPageInfo(UIPageType pageType, UILevelType levelType, object data) {
        this.pageType = pageType;
        this.closeOther = false;
        this.levelType = levelType;
        this.data = data;
    }
    
    public ShowPageInfo(UIPageType pageType, UILevelType levelType) {
        this.pageType = pageType;
        this.closeOther = false;
        this.levelType = levelType;
        this.data = null;
    }

    public ShowPageInfo(UIPageType pageType, bool closeOther, UILevelType levelType, object data) {
        this.pageType = pageType;
        this.closeOther = false;
        this.levelType = levelType;
        this.data = data;
    }
}