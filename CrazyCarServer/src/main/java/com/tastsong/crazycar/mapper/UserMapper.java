package com.tastsong.crazycar.mapper;

import java.util.List;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.tastsong.crazycar.model.DataStatisticsModel;
import com.tastsong.crazycar.model.UserLoginRecordModel;
import com.tastsong.crazycar.model.UserModel;

public interface UserMapper extends BaseMapper<UserModel> {
    public int insertUserLoginRecord(UserLoginRecordModel userLoginRecordModel);
    public List<UserLoginRecordModel> getLoginRecordAfterTime(Long time);
    public List<DataStatisticsModel> getUserLoginData(int offsetTime);
}
