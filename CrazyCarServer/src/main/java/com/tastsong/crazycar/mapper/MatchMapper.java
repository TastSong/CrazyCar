package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.DataStatisticsModel;
import com.tastsong.crazycar.model.MatchMapInfoModel;
import com.tastsong.crazycar.model.MatchRankModel;
import com.tastsong.crazycar.model.MatchRecordModel;
import com.tastsong.crazycar.model.MatchRoomInfoModel;

public interface MatchMapper {
    public Integer insertMatchClass(MatchRoomInfoModel infoModel);
    public MatchRoomInfoModel getMatchRoomInfo(String roomId, long startTime);
    public List<MatchMapInfoModel> getMatchMapDetail();
    public MatchMapInfoModel getMatchMapInfo(Integer cid);
    public MatchRoomInfoModel getMatchRoomInfoByCid(Integer cid);
    public Integer getMiniCompleteTime(Integer uid, Integer cid);
    public Integer insertRecord(MatchRecordModel recordModel);
    public Integer delMatchRank(Integer uid, Integer cid);
    public List<MatchRankModel> getMatchRankList(Integer uid, Integer cid);
    public List<MatchRankModel> getMatchRankListByCid(Integer cid);
    public Integer initMatchRank(Integer uid, Integer cid);
    public List<DataStatisticsModel> getMatchData(Integer offsetTime); 
    public Integer updateMatchMapInfo(MatchMapInfoModel mapInfoModel);
}
