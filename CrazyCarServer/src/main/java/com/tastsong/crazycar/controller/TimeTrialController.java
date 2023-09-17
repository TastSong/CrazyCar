package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.model.TimeTrialRecordModel;
import com.tastsong.crazycar.service.TimeTrialService;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/TimeTrial")
public class TimeTrialController {
    @Autowired
    private TimeTrialService timeTrialService;

    @PostMapping(value = "/Rank")
    public Object getRank(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        Integer uid = Util.getUidByToken(token);
        Integer cid = body.getInt("cid");
        return timeTrialService.getRankList(uid, cid);
    }

    @PostMapping(value = "/Detail")
    public Object getDetail(@RequestHeader(Util.TOKEN) String token) throws Exception {
        Integer uid = Util.getUidByToken(token);
        return timeTrialService.getTimeTrialDetail(uid);
    }

    @PostMapping(value = "/BuyClass")
    public Object budClass(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        Integer uid = Util.getUidByToken(token);
        if (body != null && body.containsKey("cid")) {
            int cid = body.getInt("cid");
            JSONObject data = new JSONObject();
            if (timeTrialService.isHasClass(uid, cid)) {
                System.out.print("++++++++ isHasClass ");
                data.putOpt("star", timeTrialService.getUserStar(uid));
                return data;
            } else if (timeTrialService.canBuyClass(uid, cid)) {
                timeTrialService.buyClass(uid, cid);
                System.out.print("++++++++ buyClass ");
                data.putOpt("star", timeTrialService.getUserStar(uid));
                return data;
            } else {
                return Result.failure(ResultCode.RC423);
            }
        } else {
            return Result.failure(ResultCode.RC404);
        }
    }

    @PostMapping(value = "/Result")
    public Object getResult(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        TimeTrialRecordModel recordModel = new TimeTrialRecordModel();
        recordModel.uid = Util.getUidByToken(token);
        recordModel.cid = body.getInt("cid");
        recordModel.complete_time = body.getInt("complete_time");
        recordModel.record_time = (int) (System.currentTimeMillis()/1000);
        if(recordModel.cid == null || recordModel.complete_time == null){
            return Result.failure(ResultCode.RC404);
        }

        Integer limitTime = timeTrialService.getLimitTime(recordModel.cid);
        JSONObject data = new JSONObject();
        if (recordModel.complete_time > 0 && recordModel.complete_time < limitTime) {
            data.putOpt("is_win", true);
            data.putOpt("complete_time", recordModel.complete_time);
        } else {
            data.putOpt("is_win", false);
            data.putOpt("complete_time", -1);
        }
        boolean isBreakRecord = timeTrialService.isBreakRecord(recordModel);
        data.putOpt("is_break_record", isBreakRecord);
        data.putOpt("reward", isBreakRecord ? timeTrialService.getMapStar(recordModel.cid) : 0);
        if (isBreakRecord) {
            timeTrialService.giveReward(recordModel.uid, recordModel.cid);
        }
        timeTrialService.insertRecord(recordModel);
        
        if (isBreakRecord) {
            data.putOpt("rank", timeTrialService.getRank(recordModel.uid, recordModel.cid));
        } else {
            data.putOpt("rank", -1);
        }
        return data;
    }
}
