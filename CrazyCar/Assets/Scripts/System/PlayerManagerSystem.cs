using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TFramework;

public class PlayerStateMsg {
    public int cid;
    public UserInfo userInfo = new UserInfo();
    public Vector3 pos = new Vector3();
    public int speed;
}

public interface IPlayerManagerSystem : ISystem {
    MPlayer SelfPlayer { get; set; }
    MPlayer GetPlayerByUid(int uid);
    Dictionary<int, MPlayer> peers { get; set; }
    void RespondAction(PlayerStateMsg playerStateMsg);
}

public class PlayerManagerSystem : AbstractSystem, IPlayerManagerSystem {
    public Dictionary<int, MPlayer> peers { get; set; } = new Dictionary<int, MPlayer>();

    public MPlayer SelfPlayer { get; set; } = new MPlayer();

    public MPlayer GetPlayerByUid(int uid) {
        if (uid == SelfPlayer.userInfo.uid) {
            return SelfPlayer;
        }

        MPlayer player;
        if (peers.TryGetValue(uid, out player)) {
            return player;
        }

        return null;
    }

    public void RespondAction(PlayerStateMsg playerStateMsg) {
        if (playerStateMsg.userInfo.uid == this.GetModel<IUserModel>().Uid.Value) {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.ConfirmStatus(playerStateMsg);
        } else {
            AdjustPeerPlayer(playerStateMsg);
        }
    }

    private void AdjustPeerPlayer(PlayerStateMsg playerStateMsg) {
        MPlayer peer = null;
        if (!this.GetSystem<IPlayerManagerSystem>().peers.TryGetValue(playerStateMsg.userInfo.uid, out peer)) {
            this.SendEvent(new MakeNewPlayerEvent(playerStateMsg));
        } else {
            peer.AdjustPlayerPosition(playerStateMsg.pos);
        }
    }

    protected override void OnInit() {
        
    }
}
