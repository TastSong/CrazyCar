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
    public Integer initTimeTrialRank(Integer uid, Integer cid);
    public Integer delTimeTrialRank(Integer uid, Integer cid);
    public List<TimeTrialRankModel> getTimeTrialRankList(Integer uid, Integer cid);
    public List<TimeTrialInfoModel> getTimeTrialInfos();
    public boolean isHasTimeTrialClass(Integer uid, Integer cid);
    public TimeTrialInfoModel getTimeTrialInfo(Integer cid);
    public Integer getMiniCompleteTime(Integer uid, Integer cid);
    public Integer insertRecord(TimeTrialRecordModel recordModel);
    public Integer getRank(Integer uid, Integer cid);
}
