package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.MatchMapper;
import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.DataStatisticsModel;

import lombok.var;

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

    @Autowired
    private MatchMapper matchMapper;

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

    public List<DataStatisticsModel> getMatchData(Integer offsetTime){
        return matchMapper.getMatchData(offsetTime);
    }

    public Integer getTimeTrialTimes(Integer offsetTime){
        var data = timeTrialMapper.getTimeTrialData(offsetTime);
        Integer tatal = 0;
        for(int i = 0; i < data.size(); i++){
            tatal += data.get(i).count;
        }
        return tatal;
    }

    public Integer getMatchTimes(Integer offsetTime){
        var data = matchMapper.getMatchData(offsetTime);
        Integer tatal = 0;
        for(int i = 0; i < data.size(); i++){
            tatal += data.get(i).count;
        }
        return tatal;
    }
}
