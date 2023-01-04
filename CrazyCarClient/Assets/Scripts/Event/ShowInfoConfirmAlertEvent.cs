using System;

public class ShowInfoConfirmAlertEvent {
    public string title;
    public string content;
    public Action succ;
    public Action fail;
    public string confirmText;
    public string cancelText;
    public ConfirmAlertType type;

    public ShowInfoConfirmAlertEvent(string title = "Tips", string content = "", Action success = null, Action fail = null,
      string confirmText = "Confirm", string cancelText = "Cancel", ConfirmAlertType type = ConfirmAlertType.Double) {
        this.title = title;
        this.content = content;
        this.succ = success;
        this.fail = fail;
        this.confirmText = confirmText;
        this.cancelText = cancelText;
        this.type = type;
    }
}
