package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;


import com.tastsong.crazycar.dto.resp.RespTimeTrialClass;
import com.tastsong.crazycar.mapper.TimeTrialClassMapper;
import com.tastsong.crazycar.model.UserModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.model.TimeTrialClassModel;
import com.tastsong.crazycar.model.TimeTrialRankModel;
import com.tastsong.crazycar.model.TimeTrialRecordModel;

@Service
public class TimeTrialService {
    @Autowired
    private TimeTrialMapper timeTrialMapper;
    @Autowired
    private TimeTrialClassMapper timeTrialClassMapper;

    @Autowired
    private UserService userService;

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
            UserModel userModel = userService.getUserByUid(userId);
            timeTrialRankModels.get(i).aid = userModel.getAid();
            timeTrialRankModels.get(i).user_name = userModel.getUser_name();
        }
        return timeTrialRankModels;
    }

    public List<RespTimeTrialClass> getTimeTrialDetail(int uid){
        List<TimeTrialClassModel> timeTrialClassModels = timeTrialMapper.getTimeTrialInfos();
        List<RespTimeTrialClass> resp = new ArrayList<>();
        for (TimeTrialClassModel timeTrialClassModel : timeTrialClassModels) {
            resp.add(toRespTimeTrialClass(timeTrialClassModel, uid));
        }
        return resp;
    }

    public RespTimeTrialClass toRespTimeTrialClass(TimeTrialClassModel model, int uid) {
        RespTimeTrialClass resp = new RespTimeTrialClass();
        resp.setTimes(model.getTimes());
        resp.setCid(model.getCid());
        resp.setStar(model.getStar());
        resp.setHas_water(model.isHas_water());
        resp.setLimit_time(model.getLimit_time());
        resp.setClass_name(model.getClass_name());
        resp.setMap_id(model.getMap_id());
        resp.set_has(timeTrialMapper.isHasTimeTrialClass(uid, model.getCid()));
        return resp;
    }

    public List<TimeTrialClassModel> getTimeTrialInfos(){
        List<TimeTrialClassModel> timeTrialClassModels = timeTrialMapper.getTimeTrialInfos();
        return timeTrialClassModels;
    }

    public boolean updateTimeTrialInfo(TimeTrialClassModel timeTrialClassModel){
        return timeTrialMapper.updateTimeTrialInfo(timeTrialClassModel) == 1;
    }

    public boolean isHasClass(int uid, int cid){
        return timeTrialMapper.isHasTimeTrialClass(uid, cid);
    }

    private int getNeedStar(int cid){
        return timeTrialMapper.getTimeTrialInfo(cid).star;
    }

    public boolean canBuyClass(int uid, int cid) {
		return userService.getUserStar(uid) >= getNeedStar(cid);
	}

    public void buyClass(int uid, int cid){
        int curStar = userService.getUserStar(uid) - getNeedStar(cid);
        userService.updateUserStar(uid, curStar);
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
        userService.updateUserStar(uid, getMapStar(cid) + userService.getUserStar(uid));
    }
}
