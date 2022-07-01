package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.MatchMapInfoModel;
import com.tastsong.crazycar.model.MatchRoomInfoModel;

public interface MatchMapper {
    public Integer insertMatchClass(MatchRoomInfoModel infoModel);
    public MatchRoomInfoModel getMatchRoomInfo(String roomId, long startTime);

    public MatchMapInfoModel getMatchMapInfo(Integer cid);
    public List<MatchMapInfoModel> getMatchMapDetail();
}
