package com.tastsong.crazycar.service;

import java.util.List;

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

    public int getUserNum(){
        return adminUserMapper.getAllUserNum();
    }

    public List<AdminUserModel> getAllUser(){
        return adminUserMapper.getAllUser();
    }

    public JSONArray getAllRoute(){
        String routes = adminUserMapper.getUserByUid(1).getRoutes();
        return JSONUtil.parseArray(routes);
    }

    public JSONArray getRoute(int uid){
        String routes = adminUserMapper.getUserByUid(uid).getRoutes();
        return JSONUtil.parseArray(routes);
    }

    public AdminUserModel getUserByUid(int uid){
        return adminUserMapper.getUserByUid(uid);
    }

    public AdminUserModel getUserByName(String userName){
        return adminUserMapper.getUserByName(userName);
    }

    public boolean isExistsUser(String userName){
        return adminUserMapper.isExistsUser(userName);
    }

    public boolean isExistsUserByUid(int uid){
        return adminUserMapper.isExistsUserByUid(uid);
    }

    public boolean insertUser(AdminUserModel adminUserModel){
        return adminUserMapper.insertUser(adminUserModel) == 1;
    }

    public boolean updateUserPassword(int uid, String password){
        return adminUserMapper.updateUserPassword(uid, password) == 1;
    }

    public boolean updateUserRoute(int uid, String routes){
        return adminUserMapper.updateUserRoute(uid, routes) == 1;
    }
}
