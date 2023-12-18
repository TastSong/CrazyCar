package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqResult;
import com.tastsong.crazycar.dto.resp.RespMatchResult;
import com.tastsong.crazycar.model.MatchClassModel;
import com.tastsong.crazycar.service.MatchClassService;
import com.tastsong.crazycar.service.MatchMapService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.MatchRecordService;
import com.tastsong.crazycar.utils.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.MatchRecordModel;

import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;

import javax.validation.Valid;


@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Match")
public class MatchController {
    @Autowired
    private MatchRecordService matchRecordService;
    @Autowired
    private MatchMapService matchMapService;
    @Autowired
    private MatchClassService matchClassService;

    @PostMapping(value="/Map")
    public Object getMapDetail() throws Exception {
        return matchMapService.getMatchMapDetail();
    }
    
    @PostMapping(value = "/Result")
    public Object getResult(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqResult req) throws Exception {
        MatchRecordModel recordModel = new MatchRecordModel();
        recordModel.uid = Util.getUidByToken(token);
        recordModel.cid = req.getCid();
        recordModel.complete_time = req.getComplete_time();
        recordModel.record_time = (int) (System.currentTimeMillis()/1000);
        if(recordModel.cid == 0 || recordModel.complete_time == 0){
            return Result.failure(ResultCode.RC404);
        }
        MatchClassModel matchClassModel = matchClassService.getMatchClassByCid(recordModel.cid);
        int limitTime = matchClassModel.getLimit_time();
        RespMatchResult resp = new RespMatchResult();
        if (recordModel.complete_time > 0 && recordModel.complete_time < limitTime) {
            resp.set_win(true);
            resp.setComplete_time(recordModel.getComplete_time());
        } else {
            resp.set_win(false);
            resp.setComplete_time(-1);
        }
        boolean isBreakRecord = matchRecordService.isBreakRecord(recordModel);
        resp.set_break_record(isBreakRecord);
        resp.setReward(isBreakRecord ? matchClassModel.getStar() : 0);
        if (isBreakRecord) {
            matchClassService.giveReward(recordModel.uid, recordModel.cid);
        }
        matchRecordService.insertRecord(recordModel);

        resp.setRank(matchRecordService.getMatchRankListByCid(recordModel.cid));
        return resp;
    }
}
