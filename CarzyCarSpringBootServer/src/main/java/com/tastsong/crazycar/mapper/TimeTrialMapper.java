package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.TimeTrialRecordModel;

public interface TimeTrialMapper {
    public List<TimeTrialRecordModel> getTimeTrialRecordByUid(Integer uid);
    public Integer getTimeTrialTimesByUid(Integer uid);
    public Integer getTimeTrialMapNumByUid(Integer uid);
}
