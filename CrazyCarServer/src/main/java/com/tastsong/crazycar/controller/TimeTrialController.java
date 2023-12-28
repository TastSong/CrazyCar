package com.tastsong.crazycar.controller;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.dto.req.ReqMatchInfo;
import com.tastsong.crazycar.dto.req.ReqResult;
import com.tastsong.crazycar.dto.resp.RespTimeTrailResult;
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
import com.tastsong.crazycar.service.TimeTrialRecordService;
import com.tastsong.crazycar.utils.Util;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/TimeTrial")
public class TimeTrialController {
    @Autowired
    private TimeTrialRecordService timeTrialRecordService;
    @Autowired
    private TimeTrialClassService timeTrialClassService;
    @Autowired
    private UserService userService;

    @PostMapping(value = "/Rank")
    public Object getRank(@Valid @RequestBody ReqMatchInfo req) throws Exception {
        int cid = req.getCid();
        return timeTrialRecordService.getTimeTrialRankListByCid(cid);
    }

    @PostMapping(value = "/Detail")
    public Object getDetail(@RequestHeader(Util.TOKEN) String token) throws Exception {
        int uid = Util.getUidByToken(token);
        return timeTrialClassService.getTimeTrialClassList(uid);
    }

    @PostMapping(value = "/BuyClass")
    public Object budClass(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqMatchInfo req) throws Exception {
        int uid = Util.getUidByToken(token);
        int cid = req.getCid();
        if (timeTrialClassService.hasClass(uid, cid)) {
            System.out.print("++++++++ isHasClass ");
            return userService.getUserByUid(uid);
        } else if (timeTrialClassService.canBuyClass(uid, cid)) {
            timeTrialClassService.buyClass(uid, cid);
            System.out.print("++++++++ buyClass ");
            return userService.getUserByUid(uid);
        } else {
            return Result.failure(ResultCode.RC423, "购买失败");
        }
    }

    @PostMapping(value = "/Result")
    public Object getResult(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqResult req) throws Exception {
        TimeTrialRecordModel recordModel = new TimeTrialRecordModel();
        recordModel.setUid(Util.getUidByToken(token));
        recordModel.setCid(req.getCid());
        recordModel.setComplete_time(req.getComplete_time());
        recordModel.setRecord_time(DateUtil.currentSeconds());
        if(recordModel.getCid() == 0 || recordModel.getComplete_time() == 0){
            return Result.failure(ResultCode.RC404);
        }

        int limitTime = timeTrialClassService.getTimeTrialClass(recordModel.getCid()).getLimit_time();
        RespTimeTrailResult resp = new RespTimeTrailResult();
        if (recordModel.getComplete_time() > 0 && recordModel.getComplete_time() < limitTime) {
            resp.set_win(true);
            resp.setComplete_time(recordModel.getComplete_time());
        } else {
            resp.set_win(false);
            resp.setComplete_time(-1);
        }
        boolean isBreakRecord = timeTrialRecordService.isBreakRecord(recordModel);
        resp.set_break_record(isBreakRecord);
        resp.setReward(isBreakRecord ? timeTrialClassService.getTimeTrialClass(recordModel.getCid()).getStar() : 0);
        if (isBreakRecord) {
            timeTrialClassService.giveReward(recordModel.getUid(), recordModel.getCid());
        }
        timeTrialRecordService.insertRecord(recordModel);
        
        if (isBreakRecord) {
            resp.setRank(timeTrialRecordService.getRankByUid(recordModel.getUid(), recordModel.getCid()));
        } else {
            resp.setRank(-1);
        }
        return resp;
    }
}
