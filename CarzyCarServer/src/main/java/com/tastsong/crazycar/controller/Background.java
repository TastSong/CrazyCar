package com.tastsong.crazycar.controller;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class Background {
    
    @GetMapping(value = "/userInfo")
    public JSONObject userInfo() throws Exception {
        JSONObject result = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        data.putOpt("roles", "admin");
        data.putOpt("introduction", "I am a super administrator");
        data.putOpt("avatar", "https://wpimg.wallstcn.com/f778738c-e4f8-4870-b634-56703b4acafe.gif");
        data.putOpt("name", "Super Admin");
        result.putOpt("data", data);
        System.out.println("+++++ info " + result.toString());
        return result;
    }

    @PostMapping(value = "/logout")
    public JSONObject logout(){
        JSONObject result = new JSONObject();
        result.putOpt("code", 200);
        result.putOpt("data", "success");
        System.out.println("+++++logout " + result.toString());
        return result;
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
