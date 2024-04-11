package com.tastsong.crazycar.mapper;

import java.util.List;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.tastsong.crazycar.dto.resp.RespDataStatistics;
import com.tastsong.crazycar.model.MatchRecordModel;
import org.apache.ibatis.annotations.Param;
import org.apache.ibatis.annotations.Select;

public interface MatchRecordMapper extends BaseMapper<MatchRecordModel> {
    @Select("SELECT COUNT(*) as count, record_time as timestamp " +
            "FROM match_record " +
            "WHERE record_time > (UNIX_TIMESTAMP(CAST(SYSDATE() AS DATE)) - 60 * 60 * 24 * #{offsetTime}) " +
            "GROUP BY FROM_UNIXTIME(record_time, '%y-%m-%d'), record_time " +
            "ORDER BY record_time LIMIT #{offsetTime}")
    List<RespDataStatistics> getMatchData(@Param("offsetTime") Integer offsetTime);
}
