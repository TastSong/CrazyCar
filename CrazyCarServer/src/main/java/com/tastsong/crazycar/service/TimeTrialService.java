package com.tastsong.crazycar.service;

import java.util.List;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.TimeTrialInfoModel;
import com.tastsong.crazycar.model.TimeTrialRankModel;
import com.tastsong.crazycar.model.TimeTrialRecordModel;

@Service
public class TimeTrialService {
    @Autowired
    private TimeTrialMapper timeTrialMapper;

    @Autowired
    private UserMapper userMapper;

    // private void initRank(int uid, int cid){
    //     timeTrialMapper.delTimeTrialRank(uid, cid);
    //     timeTrialMapper.initTimeTrialRank(uid, cid);
    // }

    public List<TimeTrialRankModel> getRankList(int uid, int cid){
        // initRank(uid, cid);
        // List<TimeTrialRankModel> timeTrialRankModels =  timeTrialMapper.getTimeTrialRankList(uid, cid);
        List<TimeTrialRankModel> timeTrialRankModels =  timeTrialMapper.getTimeTrialRankListByCid(cid);
        for (int i = 0; i< timeTrialRankModels.size(); i++){
            int userId = timeTrialRankModels.get(i).uid;
            timeTrialRankModels.get(i).aid = userMapper.getUserByUid(userId).aid;
            timeTrialRankModels.get(i).user_name = userMapper.getUserByUid(userId).user_name;
        }
        return timeTrialRankModels;
    }

    public List<TimeTrialInfoModel> getTimeTrialDetail(int uid){
        List<TimeTrialInfoModel> timeTrialInfoModels = timeTrialMapper.getTimeTrialInfos();
        for(int i = 0; i < timeTrialInfoModels.size(); i++){
            timeTrialInfoModels.get(i).is_has = timeTrialMapper.isHasTimeTrialClass(uid, timeTrialInfoModels.get(i).cid);
        }
        return timeTrialInfoModels;
    }

    public List<TimeTrialInfoModel> getTimeTrialInfos(){
        List<TimeTrialInfoModel> timeTrialInfoModels = timeTrialMapper.getTimeTrialInfos();
        return timeTrialInfoModels;
    }

    public boolean updateTimeTrialInfo(TimeTrialInfoModel timeTrialInfoModel){
        return timeTrialMapper.updateTimeTrialInfo(timeTrialInfoModel) == 1;
    }

    public boolean isHasClass(int uid, int cid){
        return timeTrialMapper.isHasTimeTrialClass(uid, cid);
    }

    public int getUserStar(int uid){
        return userMapper.getUserByUid(uid).star;
    }

    private int getNeedStar(int cid){
        return timeTrialMapper.getTimeTrialInfo(cid).star;
    }

    public boolean canBuyClass(int uid, int cid) {
		return getUserStar(uid) >= getNeedStar(cid);
	}

    public void buyClass(int uid, int cid){
        int curStar = getUserStar(uid) - getNeedStar(cid);
        userMapper.updateUserStar(uid, curStar);
        timeTrialMapper.addTimeTrialMapForUser(uid, cid);
    }

    public int getLimitTime(int cid){
        return timeTrialMapper.getTimeTrialInfo(cid).limit_time;
    }

    public boolean isBreakRecord(TimeTrialRecordModel recordModel){
        if (recordModel.complete_time == -1) {
			return false;
		}
        int minTime = timeTrialMapper.getMiniCompleteTime(recordModel.uid, recordModel.cid);
        if(minTime == 0){
            minTime = -1;
        }
		if (minTime == -1 && recordModel.complete_time != -1){
			return true;
		}

		return recordModel.complete_time < minTime;
    }

    public void insertRecord(TimeTrialRecordModel recordModel){
        timeTrialMapper.insertRecord(recordModel);
    }

    public int getRank(int uid, int cid){
        // initRank(uid, cid);
        // return timeTrialMapper.getRank(uid, cid);
        return timeTrialMapper.getRankByUid(uid, cid);
    }

    public int getMapStar(int cid){
        return timeTrialMapper.getTimeTrialInfo(cid).star;
    }

    public void giveReward(int uid, int cid){
        userMapper.updateUserStar(uid, getMapStar(cid) + userMapper.getUserByUid(uid).star);
    }
}
