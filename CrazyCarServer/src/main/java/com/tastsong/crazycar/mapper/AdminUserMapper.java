package com.tastsong.crazycar.mapper;

import java.util.List;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.tastsong.crazycar.model.AdminUserModel;

public interface AdminUserMapper extends BaseMapper<AdminUserModel> {
    public int getAllUserNum();
    public List<AdminUserModel> getAllUser();
    public AdminUserModel getUserByUid(int uid);
    public AdminUserModel getUserByName(String userName);
    public boolean isExistsUser(String userName);
    public boolean isExistsUserByUid(int uid);
    public int insertUser(AdminUserModel userModel);
    public int updateUserPassword(int uid, String password);
    public int updateUserRoute(int uid, String routes);
}
