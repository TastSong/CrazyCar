package com.tastsong.crazycar.controller;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1/Background")

public class BackgroundLogin {
    @PostMapping(value = "/login")
    public Object login(@RequestBody JSONObject body){
        if(body.getStr("username").equals("Admin") && body.getStr("password").equals("123456")){
            JSONObject data = new JSONObject();
            data.putOpt("token", Util.createToken(1));
            return data; 
        } else{
            return Result.failure(ResultCode.RC404);
        }
        
    }
}
