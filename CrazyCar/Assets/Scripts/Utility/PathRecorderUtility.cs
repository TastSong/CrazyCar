using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public static class RequestUrl {
    public static string forcedUpdatingUrl = "v1/ForcedUpdating";
    public static string addressableUrl = "v1/AssetsUpdating";
    public static string loginUrl = "v1/Login";
    public static string registerUrl = "v1/Register";
    public static string recodeLogin = "v1/recodeLogin";
    public static string avatarUrl = "v2/Avatar/Detail";
    public static string changeAvatarUrl = "v2/Avatar/Change";
    public static string buyAvatarUrl = "v2/Avatar/Buy";
    public static string timeTrialDetailUrl = "v2/TimeTrial/Detail";
    public static string buyTimeTrialClassUrl = "v2/TimeTrial/BuyClass";
    public static string timeTrialResultUrl = "v2/TimeTrial/Result";
    public static string timeTrialRankUrl = "v2/TimeTrial/Rank";
    public static string modifyPersonalInfoUrl = "v2/UserInfo/ModifyPassword";
    public static string equipUrl = "v2/Equip/Detail";
    public static string buyEquipUrl = "v2/Equip/Buy";
    public static string changeEquipUrl = "v2/Equip/Change";
    public static string matchMapUrl = "v2/Match/Map";
    public static string matchResultUrl = "v2/Match/Result";
    public static string kcpServerUrl = "v2/KCP/RttServer";
    public static string kcpMatchRoomUrl = "v2/KCP/MatchRoom";
    public static string enterRoomUrl = "v2/Game/EnterGame";
    public static string getUserInfo = "v2/UserInfo/GetUser";

    public static string matchRoomWSUrl = "websocket/MatchRoomWebSocket";
    public static string matchWSUrl = "websocket/MatchWebSocket";
    public static int matchKCPPort = 50001;
    public static int matchRoomKCPPort = 50002;
    public static string timeTrialWSUrl = "websocket/TimeTrialWebSocket";

    public static string aiUrl = "AI";
}

public static class PrefKeys {
    public const string lastLogNid = "lastLogNid";
    public const string userName = "userName";
    public const string password = "password";
    public const string rememberPassword = "rememberPassword";
    public const string isCompleteGuidance = "isCompleteGuidance";
}

public static class LocalUrl {
    public static string avatarUrl = "Avatar/";
}
