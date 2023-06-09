package com.tastsong.crazycar.controller;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;
import cn.hutool.json.JSONUtil;

@CrossOrigin
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


    @GetMapping(value = "getNav")
    public Object getNav() throws Exception {
        String asyncRouters = "[\r\n" + //
                "  {\r\n" + //
                "    id: 21,\r\n" + //
                "    parentId: 0,\r\n" + //
                "    createTime: '2020-02-07T08:29:13.000+00:00',\r\n" + //
                "    level: 0,\r\n" + //
                "    path: '/form',\r\n" + //
                "    component: 'Layout',\r\n" + //
                "    redirect: '/form/index',\r\n" + //
                "    name: 'form',\r\n" + //
                "    meta: { title: 'form', icon: 'form' },\r\n" + //
                "    children: [\r\n" + //
                "      {\r\n" + //
                "        path: 'form',\r\n" + //
                "        name: 'form',\r\n" + //
                "        component: 'form/index',\r\n" + //
                "        meta: { title: 'form', icon: 'form', roles: ['admin'] }\r\n" + //
                "      }\r\n" + //
                "    ]\r\n" + //
                "  }\r\n" + //
                "]";
        JSONArray items = new JSONArray();
        items = JSONUtil.parseArray(asyncRouters);
       
        return items;
    }
}
