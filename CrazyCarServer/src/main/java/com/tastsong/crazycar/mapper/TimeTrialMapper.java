package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.dto.resp.RespDataStatistics;
import com.tastsong.crazycar.model.TimeTrialClassModel;
import com.tastsong.crazycar.model.TimeTrialRankModel;
import com.tastsong.crazycar.model.TimeTrialRecordModel;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

public interface TimeTrialMapper {
    public int getTimeTrialTimesByUid(int uid);
    public int getTimeTrialMapNumByUid(int uid);
    public int addTimeTrialMapForUser(int uid, int cid);
    public List<TimeTrialRankModel> getTimeTrialRankListByCid(int cid);
    public boolean isHasTimeTrialClass(int uid, int cid);
    public int getMiniCompleteTime(int uid, int cid);
    public int insertRecord(TimeTrialRecordModel recordModel);
    public int getRankByUid(int uid, int cid);
    @Select("SELECT COUNT(*) AS count, record_time AS timestamp " +
            "FROM time_trial_record " +
            "WHERE record_time > (UNIX_TIMESTAMP(CAST(SYSDATE() AS DATE)) - 60 * 60 * 24 * #{offsetTime}) " +
            "GROUP BY FROM_UNIXTIME(record_time, '%y-%m-%d'), record_time " +
            "ORDER BY record_time LIMIT #{offsetTime}")
    List<RespDataStatistics> getTimeTrialData(@Param("offsetTime") Integer offsetTime);
}
