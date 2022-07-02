package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.MatchService;
import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.MatchRecordModel;

import cn.hutool.json.JSONObject;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;


@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Match")
public class MatchController {
    @Autowired
    private MatchService matchService;

    @PostMapping(value="/Map")
    public Object getMapDetail() throws Exception {
        return matchService.getMatchMapDetail();
    }
    
    @PostMapping(value = "/Result")
    public Object getResult(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        MatchRecordModel recordModel = new MatchRecordModel();
        recordModel.uid = Util.getUidByToken(token);
        recordModel.cid = body.getInt("cid");
        recordModel.complete_time = body.getInt("complete_time");
        recordModel.record_time = (int) (System.currentTimeMillis()/1000);
        if(recordModel.cid == null || recordModel.complete_time == null){
            return Result.failure(ResultCode.RC404);
        }

        Integer limitTime = matchService.getMatchRoomLimitTime(recordModel.cid);
        JSONObject data = new JSONObject();
        if (recordModel.complete_time > 0 && recordModel.complete_time < limitTime) {
            data.putOpt("is_win", true);
            data.putOpt("complete_time", recordModel.complete_time);
        } else {
            data.putOpt("is_win", false);
            data.putOpt("complete_time", -1);
        }
        boolean isBreakRecord = matchService.isBreakRecord(recordModel);
        data.putOpt("is_break_record", isBreakRecord);
        data.putOpt("reward", isBreakRecord ? matchService.getMatchStar(recordModel.cid) : 0);
        if (isBreakRecord) {
            matchService.giveReward(recordModel.uid, recordModel.cid);
        }
        matchService.insertRecord(recordModel);
        
        data.putOpt("rank", matchService.getRankList(recordModel.uid, recordModel.cid));
        return data;
    }
}
