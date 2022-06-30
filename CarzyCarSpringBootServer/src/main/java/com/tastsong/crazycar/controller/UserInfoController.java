package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.UserInfoModel;
import com.tastsong.crazycar.service.LoginService;

import cn.hutool.json.JSONObject;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;


@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/UserInfo")
public class UserInfoController {
    @Autowired
    private LoginService loginService;

    @PostMapping(value = "/GetUser")
    public Object getUserInfo(@RequestBody JSONObject body) throws Exception {
        Integer uid = body.getInt("uid");
        if(loginService.isExistsUserByUid(uid)){
            String userName = loginService.getUserByUid(uid).user_name;
            return loginService.getUserInfo(userName);
        } else{
            return Result.failure(ResultCode.RC404);
        }
    }
}
