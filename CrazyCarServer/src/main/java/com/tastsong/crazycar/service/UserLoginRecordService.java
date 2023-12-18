package com.tastsong.crazycar.service;

import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.dto.resp.RespLoginRecord;
import com.tastsong.crazycar.mapper.UserLoginRecordMapper;
import com.tastsong.crazycar.dto.resp.RespDataStatistics;
import com.tastsong.crazycar.model.UserLoginRecordModel;
import com.tastsong.crazycar.model.UserModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.ArrayList;
import java.util.List;

@Service
public class UserLoginRecordService {
    @Autowired
    private UserLoginRecordMapper userLoginRecordMapper;
    @Autowired
    private UserService userService;

    public boolean insert(UserLoginRecordModel userLoginRecordModel) {
        return userLoginRecordMapper.insert(userLoginRecordModel) > 0;
    }

    public List<RespLoginRecord> getLoginRecordAfterTime(long time){
        QueryWrapper<UserLoginRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().ge(UserLoginRecordModel::getLogin_time, time);
        List<UserLoginRecordModel> userLoginRecordModels = userLoginRecordMapper.selectList(queryWrapper);
        List<RespLoginRecord> respLoginRecords = new ArrayList<>();
        for (UserLoginRecordModel userLoginRecordModel : userLoginRecordModels) {
            respLoginRecords.add(toResp(userLoginRecordModel));
        }
        return respLoginRecords;
    }

    private RespLoginRecord toResp(UserLoginRecordModel userLoginRecordModel){
        RespLoginRecord respLoginRecord = new RespLoginRecord();
        UserModel userModel = userService.getUserByUid(userLoginRecordModel.getUid());
        respLoginRecord.setUser_name(userModel.getUser_name());
        respLoginRecord.setLogin_time(userLoginRecordModel.getLogin_time());
        respLoginRecord.setPlace(userLoginRecordModel.getPlace());
        respLoginRecord.setDevice(userLoginRecordModel.getDevice());
        return respLoginRecord;
    }

    public List<RespDataStatistics> getUserLoginData(int offsetTime){
        return userLoginRecordMapper.getUserLoginData(offsetTime);
    }
}
