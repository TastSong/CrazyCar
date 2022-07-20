package com.tastsong.crazycar.controller;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1/Background")

public class BackgroundLogin {
    @PostMapping(value = "/login")
    public JSONObject login(@RequestBody JSONObject body){
        System.out.println("++++++login name = " + body.getStr("username"));
        JSONObject result = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        data.putOpt("token", Util.createToken(1));
        result.putOpt("data", data);
        System.out.println("+++++login " + result.toString());
        return result;
    }
}
