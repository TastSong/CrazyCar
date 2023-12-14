package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.dto.resp.RespDataStatistics;
import com.tastsong.crazycar.model.MatchRankModel;
import com.tastsong.crazycar.model.MatchRecordModel;
import com.tastsong.crazycar.model.MatchRoomInfoModel;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

public interface MatchMapper {
    public int insertMatchClass(MatchRoomInfoModel infoModel);
    public MatchRoomInfoModel getMatchRoomInfoByCid(int cid);
    public int getMiniCompleteTime(int uid, int cid);
    public int insertRecord(MatchRecordModel recordModel);
    public int delMatchRank(int uid, int cid);
    public List<MatchRankModel> getMatchRankList(int uid, int cid);
    public List<MatchRankModel> getMatchRankListByCid(int cid);
    public int initMatchRank(int uid, int cid);
    @Select("SELECT COUNT(*) as count, record_time as timestamp " +
            "FROM match_record " +
            "WHERE record_time > (UNIX_TIMESTAMP(CAST(SYSDATE() AS DATE)) - 60 * 60 * 24 * #{offsetTime}) " +
            "GROUP BY FROM_UNIXTIME(record_time, '%y-%m-%d'), record_time " +
            "ORDER BY record_time LIMIT #{offsetTime}")
    List<RespDataStatistics> getMatchData(@Param("offsetTime") Integer offsetTime);
}
