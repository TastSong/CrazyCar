package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqBackgroundLogin;
import com.tastsong.crazycar.service.LoginService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.AdminUserModel;
import com.tastsong.crazycar.service.BackgroundUserService;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1/Background")
public class BackgroundLogin {

    @Autowired
    private BackgroundUserService backgroundUserService;
    @Autowired
    private LoginService loginService;

    @PostMapping(value = "/login")
    public Object login(@Valid @RequestBody ReqBackgroundLogin req) throws Exception {
        String userName = req.getUsername();
        String password = req.getPassword();

        if (backgroundUserService.isExistsUser(userName)){
            AdminUserModel userModel = backgroundUserService.getUserByName(userName);
            if (password.equals(userModel.getUser_password())){
                return loginService.getUserDetail(userModel.getUid());
            } else {
                return Result.failure(ResultCode.RC423, "密码错误");
            }
        } else{
            return Result.failure(ResultCode.RC404, "用户不存在");
        }
    }
}
