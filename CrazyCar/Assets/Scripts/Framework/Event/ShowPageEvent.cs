using System;
using UnityEngine;
public class ShowPageEvent {
    public UIPageType pageType;
    public bool closeOther;

    public ShowPageEvent(UIPageType pageType,bool closeOther = false) {
        this.pageType = pageType;
        this.closeOther = closeOther;
    }
}