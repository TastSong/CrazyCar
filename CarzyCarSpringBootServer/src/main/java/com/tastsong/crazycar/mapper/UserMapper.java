package com.tastsong.crazycar.mapper;

import com.tastsong.crazycar.model.UserModel;

public interface UserMapper {
    public UserModel getUserByUid(Integer uid);
    public UserModel getUserByName(String userName);
    public boolean isSuperuser(Integer uid);
    public boolean isExistsUser(String userName);
    public boolean isExistsUserByUid(Integer uid);
    public Integer insertUser(UserModel userModel);
    public Integer updateUserStar(Integer uid, Integer star);
    public Integer updateUserAid(Integer uid, Integer aid);
    public Integer updateUserPassword(Integer uid, String password);
    public Integer updateUserEid(Integer uid, Integer eid);
}
