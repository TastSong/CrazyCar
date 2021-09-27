using TinyMessenger;

public class LoginUIMessage : ITinyMessage {
    public object Sender { get; private set; }
}

public class RegisterUIMessage : ITinyMessage {
    public object Sender { get; private set; }
}

public class HomepageUIMsg : ITinyMessage {
    public object Sender { get; private set; }
}

public class DownloadResFinishMsg : ITinyMessage {
    public object Sender { get; private set; }
}

public class InitGameUIMsg : ITinyMessage {
    public object Sender { get; private set; }
}

public class CompleteTimeTrialMsg : ITinyMessage {
    public object Sender { get; private set; }
}

public class AvatarUIMessage : ITinyMessage {
    public object Sender { get; private set; }
    public int aid;
    public AvatarUIMessage(int aid) {
        this.aid = aid;
    }
}

public class ChangeCarMsg : ITinyMessage {
    public object Sender { get; private set; }
    public EquipInfo equipInfo;
    public ChangeCarMsg(EquipInfo info) {
        this.equipInfo = info;
    }
}
