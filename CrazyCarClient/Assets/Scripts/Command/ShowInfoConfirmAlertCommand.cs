using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using System;

public class ShowInfoConfirmAlertCommand : AbstractCommand {
    public string title;
    public string content;
    public Action succ;
    public Action fail;
    public string confirmText;
    public string cancelText;
    public ConfirmAlertType type;

    public ShowInfoConfirmAlertCommand(string title = "Tips", string content = "", Action success = null, Action fail = null,
      string confirmText = "Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
        this.title = title;
        this.content = content;
        this.succ = success;
        this.fail = fail;
        this.confirmText = confirmText;
        this.cancelText = cancelText;
        this.type = type;
    }

    protected override void OnExecute() {
        this.SendEvent(new ShowInfoConfirmAlertEvent(title, content, succ, fail, confirmText, cancelText, type));
    }
}
