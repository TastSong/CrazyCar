using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStateMsg {
    public int cid;
    public UserInfo userInfo = new UserInfo();
    public Vector3 pos = new Vector3();
    public int speed;
}

public class PlayerManager : MonoBehaviour {
    public static PlayerManager manager;
    public MPlayer mPlayerPrefab;
    public Transform startPos;
    public Transform  cinemachineTF;

    private MPlayer selfPlayer;
    private Dictionary<int, MPlayer> peers = new Dictionary<int, MPlayer>();
    private float widthUnit = 0.8f;

    private void Awake() {
        if (manager == null) {
            manager = this;
        } else if (manager != this) {
            Destroy(this);
        }
    }

    private void Start() {
        MakeSelfPlayer();       
    }

    private void MakeSelfPlayer() {
        selfPlayer = Instantiate(mPlayerPrefab, GetStartPosition(), Quaternion.identity);
        selfPlayer.transform.SetParent(transform, false);
        selfPlayer.userInfo = GameController.manager.userInfo;
        selfPlayer.UpdateSelfParameter();
        selfPlayer.GetComponent<MPlayerStyle>().ChangeEquip(EquipType.Car,
            GameController.manager.userInfo.equipInfo.eid,
            GameController.manager.userInfo.equipInfo.rid);
        cinemachineTF.SetParent(selfPlayer.transform, false);
        selfPlayer.GetComponent<MPlayerStyle>().SetNameText(GameController.manager.userInfo.name, GameController.manager.userInfo.isVIP);
    }

    public MPlayer GetSelfPlayer {
        get {
            return selfPlayer;
        }
    }

    public MPlayer GetPlayerByUid(int uid) {
        if (uid == selfPlayer.userInfo.uid) {
            return selfPlayer;
        }

        MPlayer player;
        if (peers.TryGetValue(uid, out player)) {
            return player;
        }

        return null;
    }

    public void RespondAction(PlayerStateMsg playerStateMsg) {
        if (playerStateMsg.userInfo.uid == GameController.manager.userInfo.uid) {
            selfPlayer.ConfirmStatus(playerStateMsg);
        } else {
            AdjustPeerPlayer(playerStateMsg);
        }
    }

    private void AdjustPeerPlayer(PlayerStateMsg playerStateMsg) {
        MPlayer peer = null;
        if (!peers.TryGetValue(playerStateMsg.userInfo.uid, out peer)) {
            MakeNewPlayer(playerStateMsg);
        } else {
            peer.AdjustPlayerPosition(playerStateMsg.pos);
        }
    }

    private void MakeNewPlayer(PlayerStateMsg playerStateMsg) {
        UserInfo userInfo = playerStateMsg.userInfo;
        MPlayer mPlayer = Instantiate(mPlayerPrefab, playerStateMsg.pos, Quaternion.identity);
        mPlayer.transform.SetParent(transform, false);
        mPlayer.userInfo = userInfo;
        mPlayer.GetComponent<MPlayerStyle>().ChangeEquip(EquipType.Car,
            playerStateMsg.userInfo.equipInfo.eid,
            playerStateMsg.userInfo.equipInfo.rid);
        peers.Add(userInfo.uid, mPlayer);
        mPlayer.GetComponent<MPlayerStyle>().SetNameText(userInfo.name, userInfo.isVIP);
    }

    private Vector3 GetStartPosition() {
        Vector3 pos = startPos.position + new Vector3(UnityEngine.Random.Range(-2, 2) * widthUnit, 0, 0);
        return pos;
    }
}
