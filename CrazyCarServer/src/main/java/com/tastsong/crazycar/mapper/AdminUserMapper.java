package com.tastsong.crazycar.mapper;

import com.tastsong.crazycar.model.AdminUserModel;

public interface AdminUserMapper {
    public Integer getAllUserNum();
    public AdminUserModel getUserByUid(Integer uid);
    public AdminUserModel getUserByName(String userName);
    public boolean isExistsUser(String userName);
    public boolean isExistsUserByUid(Integer uid);
    public Integer insertUser(AdminUserModel userModel);
    public Integer updateUserPassword(Integer uid, String password);
    public Integer updateUserRouter(Integer uid, String router);
}
