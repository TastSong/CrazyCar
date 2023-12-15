package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.AdminUserModel;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.BackgroundUserService;
import com.tastsong.crazycar.service.LoginService;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;
import lombok.extern.slf4j.Slf4j;

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
    public Object getUserByUserName(@RequestParam("user_name") String user_name) throws Exception {
        JSONObject data = new JSONObject();
        JSONArray items = new JSONArray();
        items.add(userService.getUserByName(user_name));
        data.putOpt("items", items);
        data.putOpt("total", 1);
        return data;
    }

    @PostMapping(value = "updateUser")
    public Object updateUser(@RequestBody JSONObject body) throws Exception{
        UserModel userModel = new UserModel();
        userModel.setUid( body.getInt("uid"));
        userModel.setUser_name(body.getStr("user_name"));
        userModel.setStar(body.getInt("star"));
        userModel.set_vip(body.getBool("is_vip"));
        userService.updateUser(userModel);
        return userService.getUserByName(userModel.getUser_name());
    }        

    @GetMapping(value = "getAllRoutes")
    public Object getAllRoutes(@RequestHeader(Util.TOKEN) String token) throws Exception {
        return backgroundUserService.getAllRoute();
    }


    @GetMapping(value = "getRoutes")
    public Object getRoutes(@RequestHeader(Util.TOKEN) String token) throws Exception {
        int uid = Util.getUidByToken(token);
        System.out.println(uid);
        return backgroundUserService.getRoute(uid);
    }

    @GetMapping(value = "getRoutesByUid")
    public Object getRoutesByUid(@RequestParam("uid") int uid) throws Exception {
        return backgroundUserService.getRoute(uid);
    }

    @GetMapping(value = "getRoles")
    public Object getRoles() throws Exception {
        return backgroundUserService.getAllUser();
    }

    @PostMapping(value = "createRole")
    public Object createRole(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        AdminUserModel adminUserModel = new AdminUserModel();
        adminUserModel.setUser_name(body.getStr("user_name"));
        adminUserModel.setUser_password("123456");
        adminUserModel.setDes(body.getStr("des"));
        adminUserModel.setRoutes(body.getObj("routes").toString());
        if(backgroundUserService.isExistsUser(adminUserModel.getUser_name() )){
            return Result.failure(ResultCode.RC423);
        } else{ 
            backgroundUserService.insertUser(adminUserModel);
            return backgroundUserService.getUserByUid(adminUserModel.getUid());
        }

    }

    @PostMapping(value = "updateRole")
    public Object updateRole(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        int uid = Util.getUidByToken(token);
        if(uid == 1){
            return Result.failure(ResultCode.RC423);
        } else{
            String routes = body.getStr("routes");
            backgroundUserService.updateUserRoute(uid, routes);
            return backgroundUserService.getUserByUid(uid);
        }
    }
}
