using QFramework;
using System;

public class ShowWarningAlertCommand : AbstractCommand {
    public string text;
    public float time;
    public Action callback;

    public ShowWarningAlertCommand(string text, float time = 1.0f, Action callback = null) {
        this.text = text;
        this.time = time;
        this.callback = callback;
    }

    protected override void OnExecute() {
        this.SendEvent(new ShowWarningAlertEvent(text, time, callback));
    }
}
