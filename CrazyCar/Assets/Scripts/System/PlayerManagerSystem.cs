using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using System.Text;
using LitJson;

public class PlayerCreateMsg {
    public int cid;
    public UserInfo userInfo = new UserInfo();
    public Vector3 pos = new Vector3();
    public Vector3 speed;
    public long timestamp;

    public PlayerCreateMsg(PlayerStateMsg playerStateMsg, UserInfo userInfo)
    {
        this.cid = playerStateMsg.cid;
        this.userInfo = userInfo;
        this.pos = playerStateMsg.pos;
        this.speed = playerStateMsg.speed;
        this.timestamp = playerStateMsg.timestamp;
    }

    public PlayerCreateMsg(){
    }
}

public class PlayerStateMsg {
    public int cid;
    public int uid;
    public Vector3 pos = new Vector3();
    public Vector3 speed;
    public long timestamp;
}

public interface IPlayerManagerSystem : ISystem {
    MPlayer SelfPlayer { get; set; }
    MPlayer GetPlayerByUid(int uid);
    Dictionary<int, MPlayer> peers { get; set; }
    void RespondAction(PlayerStateMsg playerStateMsg);
    void RemovePlayer(int uid);
}

public class PlayerManagerSystem : AbstractSystem, IPlayerManagerSystem {
    public Dictionary<int, MPlayer> peers { get; set; } = new Dictionary<int, MPlayer>();

    public MPlayer SelfPlayer { get; set; }

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
        if (playerStateMsg.uid == this.GetModel<IUserModel>().Uid.Value) {
            this.GetSystem<IPlayerManagerSystem>().SelfPlayer.ConfirmStatus(playerStateMsg);
        } else {
            AdjustPeerPlayer(playerStateMsg);
        }
    }

    private void AdjustPeerPlayer(PlayerStateMsg playerStateMsg) {
        MPlayer peer = null;
        if (!this.GetSystem<IPlayerManagerSystem>().peers.TryGetValue(playerStateMsg.uid, out peer)) {
            Debug.LogError("[PlayerManagerSystem] AdjustPeerPlayer: peer not found");
            GetUserInfo(playerStateMsg.uid, (userInfo) => {
                PlayerCreateMsg playerCreateMsg = new PlayerCreateMsg(playerStateMsg, userInfo);
                this.SendEvent(new MakeNewPlayerEvent(playerCreateMsg));
            });
        } else {
            if (playerStateMsg.timestamp > peer.lastRecvStatusStamp) {
                peer.AdjustPlayerPosition(playerStateMsg.pos, playerStateMsg.speed);
            }
        }
    }

    private void GetUserInfo(int uid, Action<UserInfo> succ)
    {  
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("uid");
        w.Write(uid);
        w.WriteObjectEnd();
        Debug.Log("++++++ " + sb.ToString());
        byte[] bytes = Encoding.UTF8.GetBytes(sb.ToString());
        CoroutineController.manager.StartCoroutine(this.GetSystem<INetworkSystem>().POSTHTTP(url: this.GetSystem<INetworkSystem>().HttpBaseUrl + RequestUrl.getUserInfo,
            data: bytes, token: this.GetModel<IGameControllerModel>().Token.Value, succData: (data) => {
                succ.Invoke(ParseUserInfo(data));
            }, code: (code) => {
                Debug.Log("get user info error code = " + code);
            }));
    }

    private UserInfo ParseUserInfo(JsonData jsonData)
    {
        UserInfo userInfo = new UserInfo();
        userInfo.name = (string)jsonData["user_info"]["name"];
        userInfo.uid = (int)jsonData["user_info"]["uid"];
        userInfo.aid = (int)jsonData["user_info"]["aid"];
        userInfo.star = (int)jsonData["user_info"]["star"];
        userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        userInfo.isSuperuser = (bool)jsonData["user_info"]["is_superuser"];
        userInfo.avatarNum = (int)jsonData["user_info"]["avatar_num"];
        userInfo.travelTimes = (int)jsonData["user_info"]["travel_times"];
        userInfo.mapNum = (int)jsonData["user_info"]["map_num"];

        JsonData equipData = jsonData["user_info"]["equip_info"];
        EquipInfo info = new EquipInfo();
        info.eid = (int)equipData["eid"];
        info.rid = (string)equipData["rid"];
        info.equipName = (string)equipData["equip_name"];
        info.star = (int)equipData["star"];
        info.mass = (int)equipData["mass"];
        info.speed = (int)equipData["speed"];
        info.maxSpeed = (int)equipData["max_speed"];
        info.isHas = (bool)equipData["is_has"];
        info.isShow = (bool)equipData["is_show"];
        userInfo.equipInfo = info;
        return userInfo;
    }

    public void RemovePlayer(int uid) {
        if (uid == SelfPlayer.userInfo.uid) {
            return;
        }

        MPlayer b = null;
        if (!peers.TryGetValue(uid, out b)) {
            return;
        }

        peers.Remove(uid);
        b.DestroySelf();
    }

    protected override void OnInit() {
        
    }
}
