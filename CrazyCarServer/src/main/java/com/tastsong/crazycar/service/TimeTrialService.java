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

    private void initRank(Integer uid, Integer cid){
        timeTrialMapper.delTimeTrialRank(uid, cid);
        timeTrialMapper.initTimeTrialRank(uid, cid);
    }

    public List<TimeTrialRankModel> getRankList(Integer uid, Integer cid){
        // initRank(uid, cid);
        // List<TimeTrialRankModel> timeTrialRankModels =  timeTrialMapper.getTimeTrialRankList(uid, cid);
        List<TimeTrialRankModel> timeTrialRankModels =  timeTrialMapper.getTimeTrialRankListByCid(cid);
        for (Integer i = 0; i< timeTrialRankModels.size(); i++){
            Integer userId = timeTrialRankModels.get(i).uid;
            timeTrialRankModels.get(i).aid = userMapper.getUserByUid(userId).aid;
            timeTrialRankModels.get(i).user_name = userMapper.getUserByUid(userId).user_name;
        }
        return timeTrialRankModels;
    }

    public List<TimeTrialInfoModel> getTimeTrialDetail(Integer uid){
        List<TimeTrialInfoModel> timeTrialInfoModels = timeTrialMapper.getTimeTrialInfos();
        for(Integer i = 0; i < timeTrialInfoModels.size(); i++){
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

    public boolean isHasClass(Integer uid, Integer cid){
        return timeTrialMapper.isHasTimeTrialClass(uid, cid);
    }

    public Integer getUserStar(Integer uid){
        return userMapper.getUserByUid(uid).star;
    }

    private Integer getNeedStar(Integer cid){
        return timeTrialMapper.getTimeTrialInfo(cid).star;
    }

    public boolean canBuyClass(int uid, int cid) {
		return getUserStar(uid) >= getNeedStar(cid);
	}

    public void buyClass(Integer uid, Integer cid){
        Integer curStar = getUserStar(uid) - getNeedStar(cid);
        userMapper.updateUserStar(uid, curStar);
        timeTrialMapper.addTimeTrialMapForUser(uid, cid);
    }

    public Integer getLimitTime(Integer cid){
        return timeTrialMapper.getTimeTrialInfo(cid).limit_time;
    }

    public boolean isBreakRecord(TimeTrialRecordModel recordModel){
        if (recordModel.complete_time == -1) {
			return false;
		}
        Integer minTime = timeTrialMapper.getMiniCompleteTime(recordModel.uid, recordModel.cid);
        if(minTime == null){
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

    public Integer getRank(Integer uid, Integer cid){
        initRank(uid, cid);
        return timeTrialMapper.getRank(uid, cid);
    }

    public Integer getMapStar(Integer cid){
        return timeTrialMapper.getTimeTrialInfo(cid).star;
    }

    public void giveReward(Integer uid, Integer cid){
        userMapper.updateUserStar(uid, getMapStar(cid) + userMapper.getUserByUid(uid).star);
    }
}
