using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using QFramework;

public static class RequestUrl {
    public static string forcedUpdatingUrl = "ForcedUpdating";
    public static string loginUrl = "Login";
    public static string registerUrl = "Register";
    public static string avatarUrl = "Avatar";
    public static string changeAvatarUrl = "ChangeAvatar";
    public static string buyAvatarUrl = "BuyAvatar";
    public static string resourceUrl = "Resource";
    public static string timeTrialDetailUrl = "TimeTrialDetail";
    public static string buyTimeTrialClassUrl = "BuyTimeTrialClass";
    public static string timeTrialResultUrl = "TimeTrialResult";
    public static string timeTrialRankUrl = "TimeTrialRank";
    public static string modifyPersonalInfoUrl = "ModifyPersonalInfo";
    public static string equipUrl = "Equip";
    public static string buyEquipUrl = "BuyEquip";
    public static string changeEquipUrl = "ChangeEquip";
    public static string matchDetailUrl = "MatchDetail";
    public static string matchMapUrl = "MatchMap";
    public static string matchResultUrl = "MatchResult";
    public static string createMatchUrl = "CreateMatch";
    public static string kcpServerUrl = "KCPRttServer";
    public static string enterRoomUrl = "EnterRoom";
    public static string getUserInfo = "GetUserInfo";

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
