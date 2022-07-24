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
    
    @GetMapping(value = "/chart/line")
    public JSONObject getLineTableData() throws Exception {
        JSONObject result  = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        int size = 7;
        data.putOpt("tatal", size);
        JSONArray items = new JSONArray();
        for (int i = 0; i < size; i++){
            JSONObject item = new JSONObject();
            item.putOpt("timestamp", System.currentTimeMillis() - 1000 * 60 * 60 *24 * (7 - i));
            item.putOpt("data", (i + 1) * 24);
            items.add(item);
        }
        data.putOpt("items", items);
        result.putOpt("data", data);
        return result;
    }

    @GetMapping(value = "/table/test-complex/list")
    public JSONObject getTestComplexTableData() throws Exception {
        JSONObject result  = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        int size = 3;
        data.putOpt("tatal", size);
        JSONArray items = new JSONArray();
        for (int i = 0; i < size; i++){
            JSONObject item = new JSONObject();
            item.putOpt("id", (i + 1));
            item.putOpt("version", "1.15.0");
            item.putOpt("link", "http://baidu.com");
            item.putOpt("platform", "Android");
            item.putOpt("timestamp", System.currentTimeMillis() - 1000 * 60 * i);
            items.add(item);
        }
        data.putOpt("items", items);
        result.putOpt("data", data);
        return result;
    }

    @PostMapping(value = "/table/test-complex/create")
    public JSONObject createTestComplexTableData(@RequestBody JSONObject body) throws Exception {
        System.out.println("++++++ create table : " + body.toString());
        JSONObject result  = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        data.putOpt("id", 4);
        data.putOpt("version", body.getStr("version"));
        data.putOpt("link", body.getStr("link"));
        data.putOpt("platform", body.getStr("platform"));
        data.putOpt("timestamp", System.currentTimeMillis());
        result.putOpt("data", data);
        return result;
    }

    @PostMapping(value = "/table/test-complex/update")
    public JSONObject updateTestComplexTableData(@RequestBody JSONObject body) throws Exception {
        System.out.println("++++++ update table : " + body.toString());
        JSONObject result  = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        data.putOpt("id", body.getInt("id"));
        data.putOpt("version", body.getStr("version"));
        data.putOpt("link", body.getStr("link"));
        data.putOpt("platform", body.getStr("platform"));
        data.putOpt("timestamp", System.currentTimeMillis());
        result.putOpt("data", data);
        return result;
    }
}
