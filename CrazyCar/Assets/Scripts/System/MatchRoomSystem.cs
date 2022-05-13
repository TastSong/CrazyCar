using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;
using System.Text;
using LitJson;
using Utils;
using System;

public interface IMatchRoomSystem : ISystem {
    void MatchRoomCreate();
    void MatchRoomJoin();
    void MatchRoomStatus();
    void MatchRoomEixt();
    void MatchRoomStart();
    void OnCreateMsg(JsonData recJD);
    void OnJoinMsg(JsonData recJD);
    void OnStatusMsg(JsonData recJD);
    void OnExitMsg(JsonData recJD);
    void OnStartMsg(JsonData recJD);
}

public class MatchRoomSystem : AbstractSystem, IMatchRoomSystem {
    private void MatchRoomConnect(Action succ) {
        string ws = "ws" + this.GetSystem<INetworkSystem>().HttpBaseUrl.Substring(4) +
            "websocket/MatchRoomWebSocket/" +
            this.GetModel<IUserModel>().Uid.Value + "," + this.GetModel<IMatchModel>().RoomId;

        this.GetSystem<IWebSocketSystem>().Connect(ws);
        this.GetSystem<IWebSocketSystem>().ConnectSuccAction = succ;
    }

    public void MatchRoomCreate() {
        MatchRoomConnect(() => {
            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("msg_type");
            w.Write((int)MsgType.MatchRoomCreate);
            w.WritePropertyName("timestamp");
            w.Write(Util.GetTime());
            w.WritePropertyName("room_id");
            w.Write(this.GetModel<IMatchModel>().RoomId);
            w.WritePropertyName("uid");
            w.Write(this.GetModel<IUserModel>().Uid);
            w.WriteObjectEnd();
            Debug.Log("MatchRoomCreate : " + sb.ToString());
            this.GetSystem<IWebSocketSystem>().SendMsgToServer(sb.ToString());
        });   
    }

    public void MatchRoomEixt() {
        this.GetSystem<IWebSocketSystem>().CloseConnect();
    }

    public void MatchRoomJoin() {
        MatchRoomConnect(() => {
            StringBuilder sb = new StringBuilder();
            JsonWriter w = new JsonWriter(sb);
            w.WriteObjectStart();
            w.WritePropertyName("msg_type");
            w.Write((int)MsgType.MatchRoomJoin);
            w.WritePropertyName("timestamp");
            w.Write(Util.GetTime());
            w.WritePropertyName("room_id");
            w.Write(this.GetModel<IMatchModel>().RoomId);
            w.WritePropertyName("uid");
            w.Write(this.GetModel<IUserModel>().Uid);
            w.WriteObjectEnd();
            Debug.Log("MatchRoomJoin : " + sb.ToString());
            this.GetSystem<IWebSocketSystem>().SendMsgToServer(sb.ToString());
        });
    }

    public void MatchRoomStatus() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("msg_type");
        w.Write((int)MsgType.MatchRoomStatus);
        w.WritePropertyName("timestamp");
        w.Write(Util.GetTime());
        w.WritePropertyName("room_id");
        w.Write(this.GetModel<IMatchModel>().RoomId);
        w.WritePropertyName("uid");
        w.Write(this.GetModel<IUserModel>().Uid);
        w.WriteObjectEnd();
        Debug.Log("MatchRoomStatus : " + sb.ToString());
        this.GetSystem<IWebSocketSystem>().SendMsgToServer(sb.ToString());
    }

    public void MatchRoomStart() {
        StringBuilder sb = new StringBuilder();
        JsonWriter w = new JsonWriter(sb);
        w.WriteObjectStart();
        w.WritePropertyName("msg_type");
        w.Write((int)MsgType.MatchRoomStart);
        w.WritePropertyName("timestamp");
        w.Write(Util.GetTime());
        w.WritePropertyName("room_id");
        w.Write(this.GetModel<IMatchModel>().RoomId);
        w.WritePropertyName("uid");
        w.Write(this.GetModel<IUserModel>().Uid);
        w.WritePropertyName("map_id");
        w.Write(0);
        w.WritePropertyName("limit_time");
        w.Write(120);
        w.WritePropertyName("times");
        w.Write(1);
        w.WritePropertyName("start_time");
        w.Write(Util.GetTime() / 1000 + 15);
        w.WriteObjectEnd();
        Debug.Log("MatchRoomStart : " + sb.ToString());
        this.GetSystem<IWebSocketSystem>().SendMsgToServer(sb.ToString());
    }

    public void OnCreateMsg(JsonData recJD) {
        int code = (int)recJD["code"];
        Debug.Log("OnCreateMsg = " + code);
        if (code == 200) {
            this.GetModel<IMatchModel>().IsHouseOwner = true;
            this.SendEvent<MatchRoomCreateOrJoinSuccEvent>();
        } else if (code == 421) {
            this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Room already exists")));
            this.SendEvent<MatchRoomCreateOrJoinFailEvent>();
        } else if (code == 422) {
            this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("The number of rooms has reached the upper limit")));
            this.SendEvent<MatchRoomCreateOrJoinFailEvent>();
        }
    }

    public void OnExitMsg(JsonData recJD) {

    }

    public void OnJoinMsg(JsonData recJD) {
        int code = (int)recJD["code"];
        Debug.Log("OnJoinMsg = " + recJD.ToJson());
        if (code == 200) {
            this.GetModel<IMatchModel>().IsHouseOwner = false;
            this.SendEvent<MatchRoomCreateOrJoinSuccEvent>();
        } else if (code == 404) {
            this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("Without this room")));
            this.SendEvent<MatchRoomCreateOrJoinFailEvent>();
        } else if (code == 422) {
            this.SendEvent<ShowWarningAlertEvent>(new ShowWarningAlertEvent(this.GetSystem<II18NSystem>().GetText("The room is full")));
            this.SendEvent<MatchRoomCreateOrJoinFailEvent>();
        }
    }

    public void OnStatusMsg(JsonData recJD) {
        int code = (int)recJD["code"];
        Debug.Log("OnStatusMsg = " + recJD.ToJson());
        if (code == 200) {
            JsonData players = recJD["players"];
            var infos = this.GetModel<IMatchModel>().MemberInfoDic;
            infos.Clear();
            for (int i = 0; i < players.Count; i++) {
                MatchRoomMemberInfo info = new MatchRoomMemberInfo();
                info.memberName = (string)players[i]["member_name"];
                info.isHouseOwner = (bool)players[i]["is_house_owner"];
                info.aid = (int)players[i]["aid"];
                info.uid = (int)players[i]["uid"];
                info.index = i;
                infos.Add(info.uid, info);
            }
        }
    }

    public void OnStartMsg(JsonData recJD) {
        Debug.Log("OnStartMsg = " + recJD.ToJson());
        if ((int)recJD["code"] == 200) {
            this.GetSystem<IDataParseSystem>().ParseSelectMatch(recJD);
            this.SendEvent<MatchRoomStartEvent>();
        }
    }

    protected override void OnInit() {

    }
}
