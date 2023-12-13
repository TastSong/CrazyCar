package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.dto.resp.RespDataStatistics;
import com.tastsong.crazycar.model.MatchMapInfoModel;
import com.tastsong.crazycar.model.MatchRankModel;
import com.tastsong.crazycar.model.MatchRecordModel;
import com.tastsong.crazycar.model.MatchRoomInfoModel;

public interface MatchMapper {
    public int insertMatchClass(MatchRoomInfoModel infoModel);
    public MatchRoomInfoModel getMatchRoomInfo(String roomId, long startTime);
    public List<MatchMapInfoModel> getMatchMapDetail();
    public MatchMapInfoModel getMatchMapInfo(int cid);
    public MatchRoomInfoModel getMatchRoomInfoByCid(int cid);
    public int getMiniCompleteTime(int uid, int cid);
    public int insertRecord(MatchRecordModel recordModel);
    public int delMatchRank(int uid, int cid);
    public List<MatchRankModel> getMatchRankList(int uid, int cid);
    public List<MatchRankModel> getMatchRankListByCid(int cid);
    public int initMatchRank(int uid, int cid);
    public List<RespDataStatistics> getMatchData(int offsetTime);
    public int updateMatchMapInfo(MatchMapInfoModel mapInfoModel);
}
