package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.LoginService;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundUser {
    @Autowired
    private LoginService loginService;

    @GetMapping(value = "/userInfo")
    public JSONObject userInfo() throws Exception {
        JSONObject data = new JSONObject();
        data.putOpt("roles", "admin");
        data.putOpt("introduction", "I am a super administrator");
        data.putOpt("avatar", "https://wpimg.wallstcn.com/f778738c-e4f8-4870-b634-56703b4acafe.gif");
        data.putOpt("name", "Super Admin");
        System.out.println("+++++ info " + data.toString());
        return data;
    }

    @PostMapping(value = "/logout")
    public Object logout() throws Exception {
        return Result.success();
    }

    @GetMapping(value = "getUserByUserName")
    public Object getUserByUserName(@RequestParam("user_name") String user_name) throws Exception {
        JSONObject data = new JSONObject();
        JSONArray items = new JSONArray();
        items.add(loginService.getUserByName(user_name));
        data.putOpt("items", items);
        data.putOpt("total", 1);
        return data;
    }

    @PostMapping(value = "updateUser")
    public Object updateUser(@RequestBody JSONObject body) throws Exception{
        UserModel userModel = new UserModel();
        userModel.uid = body.getInt("uid");
        userModel.user_name = body.getStr("user_name");
        userModel.star = body.getInt("star");
        userModel.is_vip = body.getBool("is_vip");
        loginService.updateUser(userModel);
        return loginService.getUserByName(userModel.user_name);
    }
}
