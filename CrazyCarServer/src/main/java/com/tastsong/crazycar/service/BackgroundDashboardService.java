package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;
import java.util.TimeZone;

import com.tastsong.crazycar.dto.resp.RespDashboardData;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.MatchRecordMapper;
import com.tastsong.crazycar.mapper.TimeTrialRecordMapper;
import com.tastsong.crazycar.dto.resp.RespDataStatistics;

@Service
public class BackgroundDashboardService {
    @Autowired
    private UserLoginRecordService userLoginRecordService;
    @Autowired 
    private EquipService equipService;
    @Autowired
    private TimeTrialRecordMapper timeTrialRecordMapper;
    @Autowired
    private TimeTrialClassService timeTrialClassService;
    @Autowired
    private MatchRecordMapper matchRecordMapper;
    @Autowired
    private AvatarService avatarService;
    @Autowired
    private UserService userService;

    private int getEquipNum(){
        return equipService.getEquipInfos().size();
    }

    private int getMapNum(){
        return timeTrialClassService.getAllTimeTrialClass().size();
    }

    private List<RespDataStatistics> getUserLoginData(int offsetTime){
        List<RespDataStatistics> data = userLoginRecordService.getUserLoginData(offsetTime);
        return formatData(data, offsetTime);
    }

    private List<RespDataStatistics> getTimeTrialData(int offsetTime){
        List<RespDataStatistics> data = timeTrialRecordMapper.getTimeTrialData(offsetTime);
        return formatData(data, offsetTime);
    }

    private List<RespDataStatistics> getMatchData(int offsetTime){
        List<RespDataStatistics> data = matchRecordMapper.getMatchData(offsetTime);
        return formatData(data, offsetTime);
    }

    private List<RespDataStatistics> formatData(List<RespDataStatistics> data, int offsetTime){
        ArrayList<RespDataStatistics> result = new ArrayList<>();
        long current = System.currentTimeMillis() / 1000;
        int oneDay = 60 * 60 * 24;
        long curWeeHours = current-(current+ TimeZone.getDefault().getRawOffset()) % oneDay;
        for(int i = 0; i < offsetTime; i++){
            RespDataStatistics temp = new RespDataStatistics();
            temp.setCount(0);
            temp.setTimestamp( curWeeHours - (long) oneDay * (offsetTime - i - 1));
            long nextTimestamp = curWeeHours - (long) oneDay * (offsetTime - i - 2);
            for (RespDataStatistics datum : data) {
                if (datum.getTimestamp() >= temp.getTimestamp() && datum.getTimestamp() <= nextTimestamp) {
                    temp.setCount(datum.getCount());
                    break;
                }
            }
            result.add(temp);
        }
        return result;
    }

    private int getTimeTrialTimes(int offsetTime){
        List<RespDataStatistics> data = timeTrialRecordMapper.getTimeTrialData(offsetTime);
        int tatal = 0;
        for (RespDataStatistics datum : data) {
            tatal += datum.getCount();
        }
        // ------假数据------
        if(tatal == 0){
            tatal = 1;
        }
        // ------------------
        return tatal;
    }

    private int getMatchTimes(int offsetTime){
        List<RespDataStatistics> data = matchRecordMapper.getMatchData(offsetTime);
        int tatal = 0;
        for (RespDataStatistics datum : data) {
            tatal += datum.getCount();
        }
        // ------假数据------
        if(tatal == 0){
            tatal = 1;
        }
        // ------------------
        return tatal;
    }

    public RespDashboardData getDashboardData(){
        RespDashboardData dashboardData = new RespDashboardData();
        dashboardData.setUser_num(userService.getUserList().size());
        dashboardData.setEquip_num(getEquipNum());
        dashboardData.setAvatar_num(avatarService.getAllAvatar().size());
        dashboardData.setMap_num(getMapNum());

        int offsetTime = 7;
        dashboardData.setTime_trial_times(getTimeTrialTimes(offsetTime));
        dashboardData.setMatch_times(getMatchTimes(offsetTime));
        dashboardData.setLogin_user_num(getUserLoginData(offsetTime));
        dashboardData.setTime_trial_num(getTimeTrialData(offsetTime));
        dashboardData.setMatch_num(getMatchData(offsetTime));
        return dashboardData;
    }
}
