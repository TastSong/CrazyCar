using TinyMessenger;

public class LoginUIMessage : ITinyMessage {
    public object Sender { get; private set; }
}

public class RegisterUIMessage : ITinyMessage {
    public object Sender { get; private set; }
}

public class DownloadResFinishMsg : ITinyMessage {
    public object Sender { get; private set; }
}


public class CompleteTimeTrialMsg : ITinyMessage {
    public object Sender { get; private set; }
}

public class ChangeCarMsg : ITinyMessage {
    public object Sender { get; private set; }
    public EquipInfo equipInfo;
    public ChangeCarMsg(EquipInfo info) {
        this.equipInfo = info;
    }
}

public class CompleteMatchMsg : ITinyMessage {
    public object Sender { get; private set; }
}
