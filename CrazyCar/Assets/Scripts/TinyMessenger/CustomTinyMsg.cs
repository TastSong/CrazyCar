using TinyMessenger;

public class CompleteTimeTrialMsg : ITinyMessage {
    public object Sender { get; private set; }
}

public class CompleteMatchMsg : ITinyMessage {
    public object Sender { get; private set; }
}
