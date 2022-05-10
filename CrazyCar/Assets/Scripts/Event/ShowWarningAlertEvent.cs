using System;

public class ShowWarningAlertEvent {
    public string text;
    public float time;
    public Action callback;

    public ShowWarningAlertEvent(string text, float time = 1.0f, Action callback = null) {
        this.text = text;
        this.time = time;
        this.callback = callback;
    }
}
