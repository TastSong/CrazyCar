package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.AdminUserModel;

public interface AdminUserMapper {
    public Integer getAllUserNum();
    public List<AdminUserModel> getAllUser();
    public AdminUserModel getUserByUid(Integer uid);
    public AdminUserModel getUserByName(String userName);
    public boolean isExistsUser(String userName);
    public boolean isExistsUserByUid(Integer uid);
    public Integer insertUser(AdminUserModel userModel);
    public Integer updateUserPassword(Integer uid, String password);
    public Integer updateUserRoute(Integer uid, String route);
}
