package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.AdminUserModel;
import com.tastsong.crazycar.service.BackgroundUserService;

import cn.hutool.json.JSONObject;

@CrossOrigin
@RestController
@Scope("prototype")
@RequestMapping(value = "/v1/Background")
public class BackgroundLogin {

    @Autowired
    private BackgroundUserService backgroundUserService;

    @PostMapping(value = "/login")
    public Object login(@RequestBody JSONObject body) throws Exception {
        String userName = body.getStr("username");
        String password = body.getStr("password");

        if (backgroundUserService.isExistsUser(userName)){
            AdminUserModel userModel = backgroundUserService.getUserByName(userName);
            if (password.equals(userModel.user_password)){
                JSONObject data = new JSONObject();
                data.putOpt("token", Util.createToken(userModel.uid));
                return data;
            } else {
                return Result.failure(ResultCode.RC423);
            }
        } else{
            return Result.failure(ResultCode.RC404);
        }
    }
}
