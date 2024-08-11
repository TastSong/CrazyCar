package com.tastsong.crazycar.controller;

import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.dto.req.ReqCreateAdminUser;
import com.tastsong.crazycar.dto.req.ReqUpdateRole;
import com.tastsong.crazycar.dto.req.ReqUpdateUser;
import com.tastsong.crazycar.dto.resp.RespCommonList;
import com.tastsong.crazycar.service.UserService;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.AdminUserModel;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.BackgroundUserService;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@Slf4j
@RequestMapping(value = "/v2/Background")
public class BackgroundUser {
    @Autowired
    private UserService userService;
    @Autowired
    private BackgroundUserService backgroundUserService;

    @PostMapping(value = "/logout")
    public Object logout() throws Exception {
        return Result.success();
    }

    @GetMapping(value = "getUserByUserName")
    public Object getUserByUserName(String user_name) throws Exception {
        RespCommonList resp = new RespCommonList();
        JSONArray items = new JSONArray();
        items.add(userService.getUserByName(user_name));
        resp.setItems(items);
        resp.setTotal(items.size());
        return resp;
    }

    @PostMapping(value = "updateUser")
    public Object updateUser(@Valid @RequestBody ReqUpdateUser req) throws Exception{
        UserModel userModel = userService.toUserModel(req);
        if (ObjUtil.isEmpty(userModel)) {
            return Result.failure(ResultCode.RC404, "无此用户");
        }
        userService.updateUser(userModel);
        return userService.getUserByUid(userModel.getUid());
    }

    @GetMapping(value = "getRoutes")
    public Object getRoutes(@RequestHeader(Util.TOKEN) String token) throws Exception {
        int uid = Util.getUidByToken(token);
        return backgroundUserService.getRoute(uid);
    }

    @GetMapping(value = "getRoutesByUid")
    public Object getRoutesByUid(int uid) throws Exception {
        return backgroundUserService.getRoute(uid);
    }

    @GetMapping(value = "getRoles")
    public Object getRoles() throws Exception {
        return backgroundUserService.getAllUser();
    }

    @PostMapping(value = "createRole")
    public Object createRole(@Valid @RequestBody ReqCreateAdminUser req) throws Exception {
        AdminUserModel adminUserModel = backgroundUserService.toCreateAdminUser(req);
        if(backgroundUserService.isExistsUser(adminUserModel.getUser_name())){
            return Result.failure(ResultCode.RC423);
        } else{ 
            backgroundUserService.insertUser(adminUserModel);
            return backgroundUserService.getUserByUid(adminUserModel.getUid());
        }
    }

    @PostMapping(value = "updateRole")
    public Object updateRole(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqUpdateRole req) throws Exception {
        int uid = Util.getUidByToken(token);
        String routes = req.getRoutes();
        backgroundUserService.updateUserRoute(uid, routes);
        return backgroundUserService.getUserByUid(uid);
    }

    // 看似没有用到的接口 但是前端还在用
    @GetMapping(value = "/userInfo")
    public JSONObject userInfo() throws Exception {
        JSONObject data = new JSONObject();
        data.putOpt("roles", "admin");
        data.putOpt("introduction", "I am a super administrator");
        data.putOpt("avatar", "https://wpimg.wallstcn.com/f778738c-e4f8-4870-b634-56703b4acafe.gif");
        data.putOpt("name", "Super Admin");
        log.info(data.toString());
        return data;
    }
}
