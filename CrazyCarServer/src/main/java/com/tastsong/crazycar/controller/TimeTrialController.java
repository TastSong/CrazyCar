package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.service.TimeTrialClassService;
import com.tastsong.crazycar.service.UserService;
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
    @Autowired
    private TimeTrialClassService timeTrialClassService;
    @Autowired
    private UserService userService;

    @PostMapping(value = "/Rank")
    public Object getRank(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        int uid = Util.getUidByToken(token);
        int cid = body.getInt("cid");
        return timeTrialService.getRankList(uid, cid);
    }

    @PostMapping(value = "/Detail")
    public Object getDetail(@RequestHeader(Util.TOKEN) String token) throws Exception {
        int uid = Util.getUidByToken(token);
        return timeTrialClassService.getTimeTrialClassList(uid);
    }

    @PostMapping(value = "/BuyClass")
    public Object budClass(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception {
        int uid = Util.getUidByToken(token);
        if (body != null && body.containsKey("cid")) {
            int cid = body.getInt("cid");
            JSONObject data = new JSONObject();
            if (timeTrialClassService.hasClass(uid, cid)) {
                System.out.print("++++++++ isHasClass ");
                data.putOpt("star", userService.getUserStar(uid));
                return data;
            } else if (timeTrialClassService.canBuyClass(uid, cid)) {
                timeTrialClassService.buyClass(uid, cid);
                System.out.print("++++++++ buyClass ");
                data.putOpt("star", userService.getUserStar(uid));
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
        if(recordModel.cid == 0 || recordModel.complete_time == 0){
            return Result.failure(ResultCode.RC404);
        }

        int limitTime = timeTrialClassService.getTimeTrialClass(recordModel.cid).getLimit_time();
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
        data.putOpt("reward", isBreakRecord ? timeTrialClassService.getTimeTrialClass(recordModel.cid).getStar() : 0);
        if (isBreakRecord) {
            timeTrialClassService.giveReward(recordModel.uid, recordModel.cid);
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
