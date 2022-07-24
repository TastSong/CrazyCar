package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;
import java.util.TimeZone;

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
        List<DataStatisticsModel> data = userMapper.getUserLoginData(offsetTime);
        return formatData(data, offsetTime);
    }

    public List<DataStatisticsModel> getTimeTrialData(Integer offsetTime){
        List<DataStatisticsModel> data = timeTrialMapper.getTimeTrialData(offsetTime);
        return formatData(data, offsetTime);
    }

    public List<DataStatisticsModel> getMatchData(Integer offsetTime){
        List<DataStatisticsModel> data = matchMapper.getMatchData(offsetTime);
        return formatData(data, offsetTime);
    }

    private List<DataStatisticsModel> formatData(List<DataStatisticsModel> data, Integer offsetTime){
        ArrayList<DataStatisticsModel> result = new ArrayList<>();
        long current = System.currentTimeMillis() / 1000;
        Integer oneDay = 60 * 60 * 24;
        long curWeeHours = current-(current+ TimeZone.getDefault().getRawOffset()) % oneDay;
        for(int i = 0; i < offsetTime; i++){
            DataStatisticsModel temp = new DataStatisticsModel();
            temp.count = 0;
            temp.timestamp = curWeeHours - oneDay * (offsetTime - i - 1);
            long nextTimestaml = curWeeHours - oneDay * (offsetTime - i - 2);
            for(int k = 0; k < data.size(); k++){
                if(data.get(k).timestamp >= temp.timestamp && data.get(k).timestamp <= nextTimestaml){
                    temp.count = data.get(k).count;
                    break;
                }
            }
            result.add(temp);
        }
        return result;
    }

    public Integer getTimeTrialTimes(Integer offsetTime){
        var data = timeTrialMapper.getTimeTrialData(offsetTime);
        Integer tatal = 0;
        for(int i = 0; i < data.size(); i++){
            tatal += data.get(i).count;
        }
        // ------假数据------
        if(tatal == 0){
            tatal = 1;
        }
        // ------------------
        return tatal;
    }

    public Integer getMatchTimes(Integer offsetTime){
        var data = matchMapper.getMatchData(offsetTime);
        Integer tatal = 0;
        for(int i = 0; i < data.size(); i++){
            tatal += data.get(i).count;
        }
        // ------假数据------
        if(tatal == 0){
            tatal = 1;
        }
        // ------------------
        return tatal;
    }
}
