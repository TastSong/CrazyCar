package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.model.UserModel;
import com.tastsong.crazycar.service.BackgroundUserService;
import com.tastsong.crazycar.service.LoginService;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;
import cn.hutool.json.JSONUtil;
import lombok.extern.slf4j.Slf4j;

@RestController
@Scope("prototype")
@Slf4j
@RequestMapping(value = "/v2/Background")
public class BackgroundUser {
    @Autowired
    private LoginService loginService;

    @Autowired
    private BackgroundUserService backgroundUserService;

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

    @GetMapping(value = "getAllRouters")
    public Object getAllRouters(@RequestHeader(Util.TOKEN) String token) throws Exception {
        return backgroundUserService.getAllRouters();
    }


    @GetMapping(value = "getRouters")
    public Object getRouters(@RequestHeader(Util.TOKEN) String token) throws Exception {
        Integer uid = Util.getUidByToken(token);
       
        return backgroundUserService.getRouters(uid);
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

    @GetMapping(value = "addRole")
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
