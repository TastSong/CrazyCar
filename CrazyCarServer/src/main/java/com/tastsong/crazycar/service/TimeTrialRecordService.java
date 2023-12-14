package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;

import cn.hutool.core.convert.Convert;
import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.model.MatchRecordModel;
import com.tastsong.crazycar.model.UserModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.TimeTrialRecordMapper;
import com.tastsong.crazycar.model.TimeTrialRankModel;
import com.tastsong.crazycar.model.TimeTrialRecordModel;

@Service
public class TimeTrialRecordService {
    @Autowired
    private TimeTrialRecordMapper timeTrialRecordMapper;
    @Autowired
    private UserService userService;

    public int getTimeTrialTimes(int uid){
        QueryWrapper<TimeTrialRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(TimeTrialRecordModel::getUid, uid);
        return Convert.toInt(timeTrialRecordMapper.selectCount(queryWrapper));
    }

    // ªÒ»°≈≈––∞Ò
    public List<TimeTrialRankModel> getTimeTrialRankListByCid(int cid){
        QueryWrapper<TimeTrialRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(TimeTrialRecordModel::getCid, cid);
        queryWrapper.lambda().ne(TimeTrialRecordModel::getComplete_time, -1);
        queryWrapper.lambda().groupBy(TimeTrialRecordModel::getUid);
        queryWrapper.lambda().orderByAsc(TimeTrialRecordModel::getComplete_time);
        List<TimeTrialRecordModel> timeTrialRecordModels = timeTrialRecordMapper.selectList(queryWrapper);
        List<TimeTrialRankModel> timeTrialRankModels = new ArrayList<>();
        for (int i = 0; i< timeTrialRecordModels.size(); i++){
            timeTrialRankModels.add(toRespTimeTrialRank(timeTrialRecordModels.get(i), i+1));
        }
        return timeTrialRankModels;
    }

    public TimeTrialRankModel toRespTimeTrialRank(TimeTrialRecordModel mode, int rank) {
        	TimeTrialRankModel resp = new TimeTrialRankModel();
            resp.setComplete_time(mode.getComplete_time());
            resp.setRank_num(rank);
            resp.setUid(mode.getUid());
            UserModel userModel = userService.getUserByUid(mode.getUid());
            if (ObjUtil.isNotEmpty(userModel)) {
                resp.setAid(userModel.getAid());
                resp.setUser_name(userModel.getUser_name());
            }
        	return resp;
    }

    public int getRankByUid(int uid, int cid){
        List<TimeTrialRankModel> rankList = getTimeTrialRankListByCid(cid);
        for (TimeTrialRankModel timeTrialRankModel : rankList) {
            if (timeTrialRankModel.uid == uid) {
                return timeTrialRankModel.getRank_num();
            }
        }
        return -1;
    }

    public boolean isBreakRecord(TimeTrialRecordModel recordModel){
        if (recordModel.complete_time == -1) {
			return false;
		}
        int minTime = getMiniCompleteTime(recordModel.uid, recordModel.cid);

		if (minTime == -1 && recordModel.complete_time != -1){
			return true;
		}

		return recordModel.complete_time < minTime;
    }

    private int getMiniCompleteTime(int uid, int cid){
        QueryWrapper<TimeTrialRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(TimeTrialRecordModel::getUid, uid);
        queryWrapper.lambda().eq(TimeTrialRecordModel::getCid, cid);
        queryWrapper.lambda().ne(TimeTrialRecordModel::getComplete_time, -1);
        queryWrapper.lambda().orderByAsc(TimeTrialRecordModel::getComplete_time);
        TimeTrialRecordModel recordModel = timeTrialRecordMapper.selectOne(queryWrapper, false);
        if(ObjUtil.isEmpty(recordModel)){
            return -1;
        } else {
            return recordModel.complete_time;
        }
    }

    public void insertRecord(TimeTrialRecordModel recordModel){
        timeTrialRecordMapper.insert(recordModel);
    }
}
