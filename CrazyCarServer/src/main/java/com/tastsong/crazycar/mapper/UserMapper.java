package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.DataStatisticsModel;
import com.tastsong.crazycar.model.UserLoginRecordModel;
import com.tastsong.crazycar.model.UserModel;

public interface UserMapper {
    public int getAllUserNum();
    public UserModel getUserByUid(int uid);
    public UserModel getUserByName(String userName);
    public boolean isSuperuser(int uid);
    public boolean isExistsUser(String userName);
    public boolean isExistsUserByUid(int uid);
    public int insertUser(UserModel userModel);
    public int updateUserStar(int uid, int star);
    public int updateUserVip(int uid, Boolean is_vip);
    public int updateUserAid(int uid, int aid);
    public int updateUserPassword(int uid, String password);
    public int updateUserEid(int uid, int eid);
    public int insertUserLoginRecord(UserLoginRecordModel userLoginRecordModel);
    public List<UserLoginRecordModel> getLoginRecordAfterTime(Long time);
    public List<DataStatisticsModel> getUserLoginData(int offsetTime);
}
