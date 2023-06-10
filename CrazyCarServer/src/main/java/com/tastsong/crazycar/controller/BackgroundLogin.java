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

    String asyncRouters = "[\n" + //
            "    {\n" + //
            "        \"redirect\":\"/form/index\",\n" + //
            "        \"level\":0,\n" + //
            "        \"parentId\":0,\n" + //
            "        \"path\":\"/form\",\n" + //
            "        \"component\":\"Layout\",\n" + //
            "        \"createTime\":\"2020-02-07T08:29:13.000+00:00\",\n" + //
            "        \"children\":[\n" + //
            "            {\n" + //
            "                \"path\":\"form\",\n" + //
            "                \"component\":\"form/index\",\n" + //
            "                \"meta\":{\n" + //
            "                    \"roles\":[\n" + //
            "                        \"admin\"\n" + //
            "                    ],\n" + //
            "                    \"icon\":\"form\",\n" + //
            "                    \"title\":\"form\"\n" + //
            "                },\n" + //
            "                \"name\":\"form\"\n" + //
            "            }\n" + //
            "        ],\n" + //
            "        \"meta\":{\n" + //
            "            \"icon\":\"form\",\n" + //
            "            \"title\":\"form\"\n" + //
            "        },\n" + //
            "        \"name\":\"form\",\n" + //
            "        \"id\":21\n" + //
            "    }\n" + //
            "]";

    String allRouters = "[\n" + //
            "    {\n" + //
            "        \"redirect\":\"/form/index\",\n" + //
            "        \"level\":0,\n" + //
            "        \"parentId\":0,\n" + //
            "        \"path\":\"/form\",\n" + //
            "        \"component\":\"Layout\",\n" + //
            "        \"createTime\":\"2020-02-07T08:29:13.000+00:00\",\n" + //
            "        \"children\":[\n" + //
            "            {\n" + //
            "                \"path\":\"form\",\n" + //
            "                \"component\":\"form/index\",\n" + //
            "                \"meta\":{\n" + //
            "                    \"roles\":[\n" + //
            "                        \"admin\"\n" + //
            "                    ],\n" + //
            "                    \"icon\":\"form\",\n" + //
            "                    \"title\":\"form\"\n" + //
            "                },\n" + //
            "                \"name\":\"form\"\n" + //
            "            }\n" + //
            "        ],\n" + //
            "        \"meta\":{\n" + //
            "            \"icon\":\"form\",\n" + //
            "            \"title\":\"form\"\n" + //
            "        },\n" + //
            "        \"name\":\"form\",\n" + //
            "        \"id\":21\n" + //
            "    },\n" + //
            "    {\n" + //
            "        \"path\":\"/permission\",\n" + //
            "        \"component\":\"layout/Layout\",\n" + //
            "        \"redirect\":\"/permission/index\",\n" + //
            "        \"alwaysShow\":true,\n" + //
            "        \"meta\":{\n" + //
            "            \"title\":\"Permission\",\n" + //
            "            \"icon\":\"lock\",\n" + //
            "            \"roles\":[\n" + //
            "                \"admin\",\n" + //
            "                \"editor\"\n" + //
            "            ]\n" + //
            "        },\n" + //
            "        \"children\":[\n" + //
            "            {\n" + //
            "                \"path\":\"page\",\n" + //
            "                \"component\":\"views/permission/page\",\n" + //
            "                \"name\":\"PagePermission\",\n" + //
            "                \"meta\":{\n" + //
            "                    \"title\":\"Page Permission\",\n" + //
            "                    \"roles\":[\n" + //
            "                        \"admin\"\n" + //
            "                    ]\n" + //
            "                }\n" + //
            "            },\n" + //
            "            {\n" + //
            "                \"path\":\"directive\",\n" + //
            "                \"component\":\"views/permission/directive\",\n" + //
            "                \"name\":\"DirectivePermission\",\n" + //
            "                \"meta\":{\n" + //
            "                    \"title\":\"Directive Permission\"\n" + //
            "                }\n" + //
            "            },\n" + //
            "            {\n" + //
            "                \"path\":\"role\",\n" + //
            "                \"component\":\"views/permission/role\",\n" + //
            "                \"name\":\"RolePermission\",\n" + //
            "                \"meta\":{\n" + //
            "                    \"title\":\"Role Permission\",\n" + //
            "                    \"roles\":[\n" + //
            "                        \"admin\"\n" + //
            "                    ]\n" + //
            "                }\n" + //
            "            }\n" + //
            "        ]\n" + //
            "    },\n" + //
            "    {\n" + //
            "        \"path\":\"/icon\",\n" + //
            "        \"component\":\"layout/Layout\",\n" + //
            "        \"children\":[\n" + //
            "            {\n" + //
            "                \"path\":\"index\",\n" + //
            "                \"component\":\"views/icons/index\",\n" + //
            "                \"name\":\"Icons\",\n" + //
            "                \"meta\":{\n" + //
            "                    \"title\":\"Icons\",\n" + //
            "                    \"icon\":\"icon\",\n" + //
            "                    \"noCache\":true\n" + //
            "                }\n" + //
            "            }\n" + //
            "        ]\n" + //
            "    }\n" + //
            "]";            

    @GetMapping(value = "getNav")
    public Object getNav() throws Exception {
        JSONArray items = new JSONArray();
        items = JSONUtil.parseArray(asyncRouters);
       
        return items;
    }

    @GetMapping(value = "getAllRoutes")
    public Object getAllRoutes() throws Exception {
        
        JSONArray items = new JSONArray();
        items = JSONUtil.parseArray(allRouters);
       
        return items;
    }


    @GetMapping(value = "getRoutes")
    public Object getRoutes() throws Exception {
        
        JSONArray items = new JSONArray();
        items = JSONUtil.parseArray(asyncRouters);
       
        return items;
    }

    @GetMapping(value = "getRoles")
    public Object getRoles() throws Exception {
            String roles = "[\n" + //
                    "  {\n" + //
                    "    key: 'admin',\n" + //
                    "    name: 'admin',\n" + //
                    "    description: 'Super Administrator. Have access to view all pages.',\n" + //
                    "    routes: [{\n" + //
                    "      path: '',\n" + //
                    "      redirect: 'dashboard',\n" + //
                    "      children: [\n" + //
                    "        {\n" + //
                    "          path: 'dashboard',\n" + //
                    "          name: 'Dashboard',\n" + //
                    "          meta: { title: 'dashboard', icon: 'dashboard' }\n" + //
                    "        }\n" + //
                    "      ]\n" + //
                    "    }]\n" + //
                    "  },\n" + //
                    "  {\n" + //
                    "    key: 'editor',\n" + //
                    "    name: 'editor',\n" + //
                    "    description: 'Normal Editor. Can see all pages except permission page',\n" + //
                    "    routes: [{\n" + //
                    "      path: '',\n" + //
                    "      redirect: 'dashboard',\n" + //
                    "      children: [\n" + //
                    "        {\n" + //
                    "          path: 'dashboard',\n" + //
                    "          name: 'Dashboard',\n" + //
                    "          meta: { title: 'dashboard', icon: 'dashboard' }\n" + //
                    "        }\n" + //
                    "      ]\n" + //
                    "    }]\n" + //
                    "  },\n" + //
                    "  {\n" + //
                    "    key: 'visitor',\n" + //
                    "    name: 'visitor',\n" + //
                    "    description: 'Just a visitor. Can only see the home page and the document page',\n" + //
                    "    routes: [{\n" + //
                    "      path: '',\n" + //
                    "      redirect: 'dashboard',\n" + //
                    "      children: [\n" + //
                    "        {\n" + //
                    "          path: 'dashboard',\n" + //
                    "          name: 'Dashboard',\n" + //
                    "          meta: { title: 'dashboard', icon: 'dashboard' }\n" + //
                    "        }\n" + //
                    "      ]\n" + //
                    "    }]\n" + //
                    "  }\n" + //
                    "]";
        JSONArray items = new JSONArray();
        items = JSONUtil.parseArray(roles);
       
        return items;
    }

    @PostMapping(value = "addRole")
    public Object addRole(@RequestBody JSONObject body) throws Exception {
        Integer[] id = {500, 666};
        return id;
    }

    @PostMapping(value = "updateRole")
    public Object updateRole(@RequestBody JSONObject body) throws Exception {
        Integer[] id = {500, 666};
        return id;
    }

    @PostMapping(value = "deleteRole")
    public Object deleteRole(@RequestBody JSONObject body) throws Exception {
        Integer[] id = {500, 666};
        return id;
    }
}
