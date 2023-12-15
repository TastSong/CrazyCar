package com.tastsong.crazycar.service;

import java.util.List;

import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.core.conditions.update.UpdateWrapper;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AdminUserMapper;
import com.tastsong.crazycar.model.AdminUserModel;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONUtil;

@Slf4j
@Service
public class BackgroundUserService {
    @Autowired
    private AdminUserMapper adminUserMapper;

    public int getUserNum(){
        return adminUserMapper.selectList(null).size();
    }

    public List<AdminUserModel> getAllUser(){
        return adminUserMapper.selectList(null);
    }

    public JSONArray getRoute(int uid){
        String routes = adminUserMapper.selectById(uid).getRoutes();
        return JSONUtil.parseArray(routes);
    }

    public AdminUserModel getUserByUid(int uid){
        return adminUserMapper.selectById(uid);
    }

    public AdminUserModel getUserByName(String userName){
        QueryWrapper<AdminUserModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(AdminUserModel::getUser_name, userName);
        return adminUserMapper.selectOne(queryWrapper, false);
    }

    public boolean isExistsUser(String userName){
        QueryWrapper<AdminUserModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(AdminUserModel::getUser_name, userName);
        return adminUserMapper.exists(queryWrapper);
    }

    public boolean insertUser(AdminUserModel adminUserModel){
        return adminUserMapper.insert(adminUserModel) == 1;
    }

    public boolean updateUserPassword(int uid, String password){
        AdminUserModel adminUserModel = adminUserMapper.selectById(uid);
        if (ObjUtil.isEmpty(adminUserModel)) {
            return false;
        }
        adminUserModel.setUser_password(password);
        return adminUserMapper.updateById(adminUserModel) > 0;
    }

    public boolean updateUserRoute(int uid, String routes){
        AdminUserModel adminUserModel = adminUserMapper.selectById(uid);
        if (ObjUtil.isEmpty(adminUserModel)) {
            return false;
        }
        adminUserModel.setRoutes(routes);
        return adminUserMapper.updateById(adminUserModel) > 0;
    }
}
