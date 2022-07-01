package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.TimeTrialInfoModel;
import com.tastsong.crazycar.model.TimeTrialRankModel;
import com.tastsong.crazycar.model.TimeTrialRecordModel;

public interface TimeTrialMapper {
    public List<TimeTrialRecordModel> getTimeTrialRecordByUid(Integer uid);
    public Integer getTimeTrialTimesByUid(Integer uid);
    public Integer getTimeTrialMapNumByUid(Integer uid);
    public Integer addTimeTrialMapForUser(Integer uid, Integer cid);
    public Integer initTimeTrialRank(Integer cid);
    public Integer delTimeTrialRank(Integer cid);
    public List<TimeTrialRankModel> getTimeTrialRank(Integer cid);
    public List<TimeTrialInfoModel> getTimeTrialInfo();
    public boolean isHasTimeTrialClass(Integer uid, Integer cid);
}
