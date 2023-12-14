package com.tastsong.crazycar.service;

import java.util.List;

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
    private UserService userService;

    public List<TimeTrialRankModel> getRankList(int uid, int cid){
        List<TimeTrialRankModel> timeTrialRankModels =  timeTrialMapper.getTimeTrialRankListByCid(cid);
        for (int i = 0; i< timeTrialRankModels.size(); i++){
            int userId = timeTrialRankModels.get(i).uid;
            UserModel userModel = userService.getUserByUid(userId);
            timeTrialRankModels.get(i).aid = userModel.getAid();
            timeTrialRankModels.get(i).user_name = userModel.getUser_name();
        }
        return timeTrialRankModels;
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
        return timeTrialMapper.getRankByUid(uid, cid);
    }
}
