package com.tastsong.crazycar.controller;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.dto.req.ReqUpdateUserPassword;
import com.tastsong.crazycar.dto.req.ReqUserInfo;
import com.tastsong.crazycar.model.UserLoginRecordModel;
import com.tastsong.crazycar.service.UserLoginRecordService;
import com.tastsong.crazycar.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.LoginService;
import com.tastsong.crazycar.utils.Util;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/UserInfo")
public class UserInfoController {
    @Autowired
    private LoginService loginService;
    @Autowired
    private UserService userService;
    @Autowired
    private UserLoginRecordService userLoginRecordService;

    @PostMapping(value = "/GetUser")
    public Object getUserInfo(@Valid @RequestBody ReqUserInfo req) throws Exception {
        int uid = req.getUid();
        if(userService.isExistsUserByUid(uid)){
            return loginService.getUserDetail(uid);
        } else{
            return Result.failure(ResultCode.RC404);
        }
    }

    @PostMapping(value = "/ModifyPassword")
    public Object ModifyPassword(@Valid @RequestBody ReqUpdateUserPassword req, @RequestHeader(Util.TOKEN) String token) throws Exception{
        int uid = Util.getUidByToken(token);
        String password = req.getPassword();
        if(password.length() >= 6){
            userService.changePassword(uid, password);
            return Result.success();
        } else {
            return Result.failure(ResultCode.RC423);
        }
    }

    @PostMapping(value = "/recodeLogin")
    public Object recodeLogin(@RequestBody UserLoginRecordModel req, @RequestHeader(Util.TOKEN) String token) throws Exception {
        int uid = Util.getUidByToken(token);
        req.setUid(uid);
        req.setLogin_time(DateUtil.currentSeconds());
        userLoginRecordService.insert(req);
        return Result.success();
    }
}
