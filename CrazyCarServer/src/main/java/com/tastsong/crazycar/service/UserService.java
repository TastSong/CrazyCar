package com.tastsong.crazycar.service;

import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.dto.req.ReqUpdateUser;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.UserModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class UserService {
    @Autowired
    private UserMapper userMapper;

    public List<UserModel> getUserList(){
        return userMapper.selectList(null);
    }

    public UserModel getUserByName(String userName){
        QueryWrapper<UserModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(UserModel::getUser_name, userName);
        return userMapper.selectOne(queryWrapper, false);
    }

    public UserModel toUserModel(ReqUpdateUser req){
        UserModel userModel = getUserByUid(req.getUid());
        if (ObjUtil.isEmpty(userModel)) {
            return null;
        }
        userModel.setStar(req.getStar());
        userModel.set_vip(req.is_vip());
        userModel.setUser_name(req.getUser_name());
        userModel.setUser_password(req.getUser_password());
        return userModel;
    }

    public boolean insert(UserModel userModel) {
        return userMapper.insert(userModel) > 0;
    }

    public boolean isSuperuser(int uid){
        return userMapper.selectById(uid).is_vip();
    }

    public boolean isExistsUser(String userName){
        QueryWrapper<UserModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(UserModel::getUser_name, userName);
        return userMapper.exists(queryWrapper);
    }


    public boolean changePassword(int uid, String password){
        UserModel userModel = userMapper.selectById(uid);
        if (ObjUtil.isEmpty(userModel)) {
            return false;
        }
        userModel.setUser_password(password);
        return userMapper.updateById(userModel) > 0;
    }

    public UserModel getUserByUid(int uid){
        return userMapper.selectById(uid);
    }

    public int getUserStar(int uid){
        return userMapper.selectById(uid).getStar();
    }

    public boolean isExistsUserByUid(int uid){
        return !ObjUtil.isEmpty(userMapper.selectById(uid));
    }

    public void updateUser(UserModel userModel){
        updateUserStar(userModel.getUid(), userModel.getStar());
        updateUserVip(userModel.getUid(), userModel.is_vip());
    }

    public boolean updateUserStar(int uid, int star){
        UserModel userModel = userMapper.selectById(uid);
        if (ObjUtil.isEmpty(userModel)) {
            return false;
        }
        userModel.setStar(star);
        return userMapper.updateById(userModel) > 0;
    }

    public boolean updateUserVip(int uid, boolean isVip) {
        UserModel userModel = userMapper.selectById(uid);
        if  (ObjUtil.isEmpty(userModel)) {
            return false;
        }
        userModel.set_vip(isVip);
        return userMapper.updateById(userModel) > 0;
    }

    public boolean updateUserAid(int uid, int aid) {
        UserModel userModel = userMapper.selectById(uid);
        if  (ObjUtil.isEmpty(userModel)) {
            return false;
        }
        userModel.setAid(aid);
        return userMapper.updateById(userModel) > 0;
    }

    public boolean updateUserEid(int uid, int eid) {
        UserModel userModel = userMapper.selectById(uid);
        if  (ObjUtil.isEmpty(userModel)) {
            return false;
        }
        userModel.setEid(eid);
        return userMapper.updateById(userModel) > 0;
    }
}
