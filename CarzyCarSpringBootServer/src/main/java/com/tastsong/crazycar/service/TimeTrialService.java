package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.TimeTrialMapper;

@Service
public class TimeTrialService {
    @Autowired
    private TimeTrialMapper timeTrialMapper;

    public void initRank(Integer cid){
        timeTrialMapper.delTimeTrialRank(cid);
        timeTrialMapper.initTimeTrialRank(cid);
    }
}
