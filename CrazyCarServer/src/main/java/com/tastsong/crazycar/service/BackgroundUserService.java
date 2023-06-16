package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AdminUserMapper;
import com.tastsong.crazycar.model.AdminUserModel;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONUtil;

@Service
public class BackgroundUserService {
    @Autowired
    private AdminUserMapper adminUserMapper;

    public Integer getUserNum(){
        return adminUserMapper.getAllUserNum();
    }

    public JSONArray getAllRouters(){
        String router = adminUserMapper.getUserByUid(1).router;
        return JSONUtil.parseArray(router);
    }

    public JSONArray getRouters(Integer uid){
        String router = adminUserMapper.getUserByUid(uid).router;
        return JSONUtil.parseArray(router);
    }

    public AdminUserModel getUserByUid(Integer uid){
        return adminUserMapper.getUserByUid(uid);
    }

    public AdminUserModel getUserByName(String userName){
        return adminUserMapper.getUserByName(userName);
    }

    public boolean isExistsUser(String userName){
        return adminUserMapper.isExistsUser(userName);
    }

    public boolean isExistsUserByUid(Integer uid){
        return adminUserMapper.isExistsUserByUid(uid);
    }

    public boolean insertUser(AdminUserModel adminUserModel){
        return adminUserMapper.insertUser(adminUserModel) == 1;
    }

    public boolean updateUserPassword(Integer uid, String password){
        return adminUserMapper.updateUserPassword(uid, password) == 1;
    }

    public boolean updateUserRouter(Integer uid, String router){
        return adminUserMapper.updateUserRouter(uid, router) == 1;
    }
}
