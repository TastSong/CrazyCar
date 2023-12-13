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

    public String getUserName(int uid){
        return userMapper.getUserByUid(uid).getUser_name();
    }

    public int getAid(int uid){
        return userMapper.getUserByUid(uid).getAid();
    }

    public boolean canWade(int eid){
        return equipMapper.getEquipByEid(eid).can_wade;
    }

    public Boolean insertMatchClass(MatchRoomInfoModel infoModel){
        return matchMapper.insertMatchClass(infoModel) > 0;
    }

    public int getMatchRoomCid(String roomId, long startTime){
        return matchMapper.getMatchRoomInfo(roomId, startTime).cid;
    }

    public int getMatchMapMapId(int cid){
        return matchMapper.getMatchMapInfo(cid).map_id;
    }

    public int getMatchRoomLimitTime(int cid){
        return matchMapper.getMatchRoomInfoByCid(cid).limit_time;
    }

    public int getMatchMapLimitTime(int cid){
        return matchMapper.getMatchMapInfo(cid).limit_time;
    }

    public int getMatchMapTimes(int cid){
        return matchMapper.getMatchMapInfo(cid).times;
    }

    public List<MatchMapInfoModel> getMatchMapDetail(){
        return matchMapper.getMatchMapDetail();
    }

    public boolean updateMatchMapInfo(MatchMapInfoModel mapInfoModel){
        return matchMapper.updateMatchMapInfo(mapInfoModel) == 1;
    }

    public boolean isVIP(int uid){
        return userMapper.getUserByUid(uid).is_vip();
    }

    public boolean isBreakRecord(MatchRecordModel recordModel) {
        if (recordModel.complete_time == -1) {
			return false;
		} 
        int minTime = matchMapper.getMiniCompleteTime(recordModel.uid, recordModel.cid);
        if(minTime == 0){
            minTime = -1;
        }
		if (minTime == -1 && recordModel.complete_time != -1){
			return true;
		}		
		
		return recordModel.complete_time < minTime;
    }

    public int getMatchStar(int cid) {
        return matchMapper.getMatchRoomInfoByCid(cid).star;
    }

    public void giveReward(int uid, int cid) {
        userMapper.updateUserStar(uid, getMatchStar(cid) + userMapper.getUserByUid(uid).getStar());
    }

    public void insertRecord(MatchRecordModel recordModel) {
        matchMapper.insertRecord(recordModel);
    }

    // private void initRank(int uid, int cid){
    //     matchMapper.delMatchRank(uid, cid);
    //     matchMapper.initMatchRank(uid, cid);
    // }

    public List<MatchRankModel> getRankList(int uid, int cid){
        // initRank(uid, cid);
        // List<MatchRankModel> rankModels =  matchMapper.getMatchRankList(uid, cid);
        List<MatchRankModel> rankModels =  matchMapper.getMatchRankListByCid(cid);
        for (int i = 0; i< rankModels.size(); i++){
            int userId = rankModels.get(i).uid;
            rankModels.get(i).aid = userMapper.getUserByUid(userId).getAid();
            rankModels.get(i).user_name = userMapper.getUserByUid(userId).getUser_name();
        }
        return rankModels;
    }
}
