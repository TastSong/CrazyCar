using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public class HidePageCommand : AbstractCommand {

    private readonly UIPageType mUIPageType;

    public HidePageCommand(UIPageType pageType) {
        mUIPageType = pageType;
    }

    protected override void OnExecute() {
        UIManager.manager.HidePage(mUIPageType);
    }
}
