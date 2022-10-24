package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.MatchMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.MatchMapInfoModel;
import com.tastsong.crazycar.model.MatchRankModel;
import com.tastsong.crazycar.model.MatchRecordModel;
import com.tastsong.crazycar.model.MatchRoomInfoModel;

@Service
public class MatchService {
    @Autowired
    private UserMapper userMapper;

    @Autowired
    private EquipMapper equipMapper;

    @Autowired
    private MatchMapper matchMapper;

    public String getUserName(Integer uid){
        return userMapper.getUserByUid(uid).user_name;
    }

    public Integer getAid(Integer uid){
        return userMapper.getUserByUid(uid).aid;
    }

    public boolean canWade(Integer eid){
        return equipMapper.getEquipByEid(eid).can_wade;
    }

    public void insertMatchClass(MatchRoomInfoModel infoModel){
        matchMapper.insertMatchClass(infoModel);
    }

    public Integer getMatchRoomCid(String roomId, long startTime){
        return matchMapper.getMatchRoomInfo(roomId, startTime).cid;
    }

    public Integer getMatchMapMapId(Integer cid){
        return matchMapper.getMatchMapInfo(cid).map_id;
    }

    public Integer getMatchRoomLimitTime(Integer cid){
        return matchMapper.getMatchRoomInfoByCid(cid).limit_time;
    }

    public Integer getMatchMapLimitTime(Integer cid){
        return matchMapper.getMatchMapInfo(cid).limit_time;
    }

    public Integer getMatchMapTimes(Integer cid){
        return matchMapper.getMatchMapInfo(cid).times;
    }

    public List<MatchMapInfoModel> getMatchMapDetail(){
        return matchMapper.getMatchMapDetail();
    }

    public boolean updateMatchMapInfo(MatchMapInfoModel mapInfoModel){
        return matchMapper.updateMatchMapInfo(mapInfoModel) == 1;
    }

    public boolean isVIP(Integer uid){
        return userMapper.getUserByUid(uid).is_vip;
    }

    public boolean isBreakRecord(MatchRecordModel recordModel) {
        if (recordModel.complete_time == -1) {
			return false;
		} 
        Integer minTime = matchMapper.getMiniCompleteTime(recordModel.uid, recordModel.cid);
        if(minTime == null){
            minTime = -1;
        }
		if (minTime == -1 && recordModel.complete_time != -1){
			return true;
		}		
		
		return recordModel.complete_time < minTime;
    }

    public Integer getMatchStar(Integer cid) {
        return matchMapper.getMatchRoomInfoByCid(cid).star;
    }

    public void giveReward(Integer uid, Integer cid) {
        userMapper.updateUserStar(uid, getMatchStar(cid) + userMapper.getUserByUid(uid).star);
    }

    public void insertRecord(MatchRecordModel recordModel) {
        matchMapper.insertRecord(recordModel);
    }

    private void initRank(Integer uid, Integer cid){
        matchMapper.delMatchRank(uid, cid);
        matchMapper.initMatchRank(uid, cid);
    }

    public List<MatchRankModel> getRankList(Integer uid, Integer cid){
        initRank(uid, cid);
        List<MatchRankModel> rankModels =  matchMapper.getMatchRankList(uid, cid);
        for (Integer i = 0; i< rankModels.size(); i++){
            Integer userId = rankModels.get(i).uid;
            rankModels.get(i).aid = userMapper.getUserByUid(userId).aid;
            rankModels.get(i).user_name = userMapper.getUserByUid(userId).user_name;
        }
        return rankModels;
    }
}
