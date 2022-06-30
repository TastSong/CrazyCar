package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.TimeTrialRecordModel;

public interface TimeTrialMapper {
    public List<TimeTrialRecordModel> getTimeTrialRecordByUid(Integer uid);
    public Integer getTimeTrialTimesByUid(Integer uid);
    public Integer getTimeTrialMapNumByUid(Integer uid);
    public Integer addTimeTrialMapForUser(Integer uid, Integer cid);
    public Integer initTimeTrialRank(Integer cid);
    public Integer delTimeTrialRank(Integer cid);
}
