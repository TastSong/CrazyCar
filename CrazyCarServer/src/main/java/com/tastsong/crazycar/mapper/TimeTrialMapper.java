package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.dto.resp.RespDataStatistics;
import com.tastsong.crazycar.model.TimeTrialInfoModel;
import com.tastsong.crazycar.model.TimeTrialRankModel;
import com.tastsong.crazycar.model.TimeTrialRecordModel;

public interface TimeTrialMapper {
    public List<TimeTrialRecordModel> getTimeTrialRecordByUid(int uid);
    public int getTimeTrialTimesByUid(int uid);
    public int getTimeTrialMapNumByUid(int uid);
    public int addTimeTrialMapForUser(int uid, int cid);
    public int initTimeTrialRank(int uid, int cid);
    public int delTimeTrialRank(int uid, int cid);
    public List<TimeTrialRankModel> getTimeTrialRankList(int uid, int cid);
    public List<TimeTrialRankModel> getTimeTrialRankListByCid(int cid);
    public List<TimeTrialInfoModel> getTimeTrialInfos();
    public boolean isHasTimeTrialClass(int uid, int cid);
    public TimeTrialInfoModel getTimeTrialInfo(int cid);
    public int getMiniCompleteTime(int uid, int cid);
    public int insertRecord(TimeTrialRecordModel recordModel);
    public int getRank(int uid, int cid);
    public int getRankByUid(int uid, int cid);
    public List<RespDataStatistics> getTimeTrialData(int offsetTime);
    public int updateTimeTrialInfo(TimeTrialInfoModel timeTrialInfoModel);
}
