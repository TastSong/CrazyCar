package com.tastsong.crazycar.mapper;

import com.tastsong.crazycar.model.UserModel;

public interface UserMapper {
    public UserModel getUserByUid(Integer uid);
    public UserModel getUserByName(String userName);
    public Integer isSuperuser(Integer uid);
    public boolean isExistsUser(String userName);
    public boolean isExistsUserByUid(Integer uid);
    public Integer insertUser(UserModel userModel);
}
