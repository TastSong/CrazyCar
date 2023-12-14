package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;
import java.util.TimeZone;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.MatchRecordMapper;
import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.dto.resp.RespDataStatistics;

@Service
public class BackgroundDashboardService {
    @Autowired
    private UserLoginRecordService userLoginRecordService;
    @Autowired 
    private EquipService equipService;
    @Autowired
    private TimeTrialMapper timeTrialMapper;
    @Autowired
    private TimeTrialClassService timeTrialClassService;
    @Autowired
    private MatchRecordMapper matchRecordMapper;

    public int getEquipNum(){
        return equipService.getEquipInfos().size();
    }

    public int getMapNum(){
        return timeTrialClassService.getAllTimeTrialClass().size();
    }

    public List<RespDataStatistics> getUserLoginData(int offsetTime){
        List<RespDataStatistics> data = userLoginRecordService.getUserLoginData(offsetTime);
        return formatData(data, offsetTime);
    }

    public List<RespDataStatistics> getTimeTrialData(int offsetTime){
        List<RespDataStatistics> data = timeTrialMapper.getTimeTrialData(offsetTime);
        return formatData(data, offsetTime);
    }

    public List<RespDataStatistics> getMatchData(int offsetTime){
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
            temp.count = 0;
            temp.timestamp = curWeeHours - (long) oneDay * (offsetTime - i - 1);
            long nextTimestamp = curWeeHours - (long) oneDay * (offsetTime - i - 2);
            for (RespDataStatistics datum : data) {
                if (datum.timestamp >= temp.timestamp && datum.timestamp <= nextTimestamp) {
                    temp.count = datum.count;
                    break;
                }
            }
            result.add(temp);
        }
        return result;
    }

    public int getTimeTrialTimes(int offsetTime){
        List<RespDataStatistics> data = timeTrialMapper.getTimeTrialData(offsetTime);
        int tatal = 0;
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

    public int getMatchTimes(int offsetTime){
        List<RespDataStatistics> data = matchRecordMapper.getMatchData(offsetTime);
        int tatal = 0;
        for (RespDataStatistics datum : data) {
            tatal += datum.count;
        }
        // ------假数据------
        if(tatal == 0){
            tatal = 1;
        }
        // ------------------
        return tatal;
    }
}
