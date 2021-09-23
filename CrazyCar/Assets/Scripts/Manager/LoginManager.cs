using LitJson;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoginManager {
    public void ParseLoginData(JsonData jsonData) {
        GameController.manager.token = (string)jsonData["token"];
        GameController.manager.userInfo.name = (string)jsonData["user_info"]["name"];
        GameController.manager.userInfo.uid = (int)jsonData["user_info"]["uid"];
        GameController.manager.userInfo.aid = (int)jsonData["user_info"]["aid"];
        GameController.manager.userInfo.star = (int)jsonData["user_info"]["star"];
        GameController.manager.userInfo.isVIP = (bool)jsonData["user_info"]["is_vip"];
        GameController.manager.userInfo.avatarNum = (int)jsonData["user_info"]["avatar_num"];
        GameController.manager.userInfo.travelTimes = (int)jsonData["user_info"]["travel_times"];
        GameController.manager.userInfo.mapNum = (int)jsonData["user_info"]["map_num"];
    }
}
