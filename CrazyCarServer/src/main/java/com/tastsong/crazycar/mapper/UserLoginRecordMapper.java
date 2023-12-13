package com.tastsong.crazycar.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.tastsong.crazycar.model.DataStatisticsModel;
import com.tastsong.crazycar.model.UserLoginRecordModel;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

import java.util.List;

public interface UserLoginRecordMapper extends BaseMapper<UserLoginRecordModel> {
    @Select("SELECT COUNT(*) as count, login_time as timestamp " +
            "FROM user_login_record " +
            "WHERE login_time > (UNIX_TIMESTAMP(CAST(SYSDATE() AS DATE)) - 60 * 60 * 24 * #{offsetTime}) " +
            "GROUP BY FROM_UNIXTIME(login_time, '%y-%m-%d'), login_time " +
            "ORDER BY login_time LIMIT #{offsetTime}")
    List<DataStatisticsModel> getUserLoginData(@Param("offsetTime") Integer offsetTime);
}
