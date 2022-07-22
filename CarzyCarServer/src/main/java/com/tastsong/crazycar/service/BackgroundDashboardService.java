package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.DataStatisticsModel;

@Service
public class BackgroundDashboardService {
    @Autowired
    private UserMapper userMapper;

    @Autowired 
    private EquipMapper equipMapper;

    @Autowired 
    private AvatarMapper avatarMapper;

    @Autowired
    private TimeTrialMapper timeTrialMapper;

    public Integer getUserNum(){
        return userMapper.getAllUserNum();
    }

    public Integer getEquipNum(){
        return equipMapper.getEquipList().size();
    }

    public Integer getAvatarNum(){
        return avatarMapper.getAvatarList().size();
    }

    public Integer getMapNum(){
        return timeTrialMapper.getTimeTrialInfos().size();
    }

    public List<DataStatisticsModel> getUserLoginData(Integer offsetTime){
        return userMapper.getUserLoginData(offsetTime);
    }

    public List<DataStatisticsModel> getTimeTrialData(Integer offsetTime){
        return timeTrialMapper.getTimeTrialData(offsetTime);
    }
}
