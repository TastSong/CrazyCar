package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;

import cn.hutool.core.convert.Convert;
import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.model.UserModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.TimeTrialRecordMapper;
import com.tastsong.crazycar.dto.resp.RespTimeTrialRank;
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

    // 获取排行榜
    public List<RespTimeTrialRank> getTimeTrialRankListByCid(int cid){
        QueryWrapper<TimeTrialRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(TimeTrialRecordModel::getCid, cid);
        queryWrapper.lambda().ne(TimeTrialRecordModel::getComplete_time, -1);
        queryWrapper.lambda().groupBy(TimeTrialRecordModel::getUid);
        queryWrapper.lambda().orderByAsc(TimeTrialRecordModel::getComplete_time);
        List<TimeTrialRecordModel> timeTrialRecordModels = timeTrialRecordMapper.selectList(queryWrapper);
        List<RespTimeTrialRank> respTimeTrialRanks = new ArrayList<>();
        for (int i = 0; i< timeTrialRecordModels.size(); i++){
            respTimeTrialRanks.add(toRespTimeTrialRank(timeTrialRecordModels.get(i), i+1));
        }
        return respTimeTrialRanks;
    }

    public RespTimeTrialRank toRespTimeTrialRank(TimeTrialRecordModel mode, int rank) {
        	RespTimeTrialRank resp = new RespTimeTrialRank();
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
        List<RespTimeTrialRank> rankList = getTimeTrialRankListByCid(cid);
        for (RespTimeTrialRank respTimeTrialRank : rankList) {
            if (respTimeTrialRank.getUid() == uid) {
                return respTimeTrialRank.getRank_num();
            }
        }
        return -1;
    }

    public boolean isBreakRecord(TimeTrialRecordModel recordModel){
        if (recordModel.getComplete_time() == -1) {
			return false;
		}
        int minTime = getMiniCompleteTime(recordModel.getUid(), recordModel.getCid());

		if (minTime == -1 && recordModel.getComplete_time() != -1){
			return true;
		}

		return recordModel.getComplete_time() < minTime;
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
            return recordModel.getComplete_time();
        }
    }

    public void insertRecord(TimeTrialRecordModel recordModel){
        timeTrialRecordMapper.insert(recordModel);
    }
}
