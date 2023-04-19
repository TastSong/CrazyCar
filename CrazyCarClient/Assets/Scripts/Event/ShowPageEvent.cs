using System;
using UnityEngine;
public class ShowPageEvent {
    public UIPageType pageType;
    public bool closeOther;
    public UILevelType levelType;
    public object data;

    public ShowPageEvent(UIPageType pageType, bool closeOther = false, UILevelType levelType = UILevelType.UIPage) {
        this.pageType = pageType;
        this.closeOther = closeOther;
        this.levelType = levelType;
        this.data = null;
    }
    
    public ShowPageEvent(UIPageType pageType, UILevelType levelType, object data) {
        this.pageType = pageType;
        this.closeOther = false;
        this.levelType = levelType;
        this.data = data;
    }
    
    public ShowPageEvent(UIPageType pageType, UILevelType levelType) {
        this.pageType = pageType;
        this.closeOther = false;
        this.levelType = levelType;
        this.data = null;
    }

    public ShowPageEvent(UIPageType pageType, bool closeOther, UILevelType levelType, object data) {
        this.pageType = pageType;
        this.closeOther = false;
        this.levelType = levelType;
        this.data = data;
    }
}