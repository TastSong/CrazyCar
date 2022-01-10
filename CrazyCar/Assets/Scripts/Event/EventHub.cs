
public class UnlockAvatarEvent {

}

public class MakeNewPlayerEvent {
    public PlayerStateMsg playerStateMsg;

    public MakeNewPlayerEvent(PlayerStateMsg msg) {
        playerStateMsg = msg;
    }
}

public class ChangeSettingEvent {

}

public class AddCheckpointEvent {

}

public class ResetCheckpointEvent {

}