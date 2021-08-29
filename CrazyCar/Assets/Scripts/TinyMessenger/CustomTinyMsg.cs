using TinyMessenger;

public class RegisterUIMessage : ITinyMessage {
    public object Sender { get; private set; }
}

public class AvatarUIMessage : ITinyMessage {
    public object Sender { get; private set; }
    public int aid;
    public AvatarUIMessage(int aid) {
        this.aid = aid;
    }
}
