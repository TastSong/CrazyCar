package com.tastsong.crazycar.controller;

import java.util.List;

import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.dto.req.ReqUpdateTimeTrialClass;
import com.tastsong.crazycar.service.TimeTrialClassService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.TimeTrialClassModel;
import com.tastsong.crazycar.service.TimeTrialService;

import cn.hutool.json.JSONObject;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundTimeTrialController {
    @Autowired
    private TimeTrialService timeTrialService;
    @Autowired
    private TimeTrialClassService timeTrialClassService;

    @GetMapping(value = "getTimeTrialInfos")
    public Object getTimeTrialInfos() throws Exception {
        JSONObject result = new JSONObject();
        List<TimeTrialClassModel> items = timeTrialClassService.getAllTimeTrialClass();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updateTimeTrialInfo")
    public Object updateTimeTrialInfo(@Valid @RequestBody ReqUpdateTimeTrialClass req) throws Exception {
        TimeTrialClassModel timeTrialClassModel = timeTrialClassService.toTimeTrialClassModel(req);
        if (ObjUtil.isEmpty(timeTrialClassModel)) {
            return Result.failure(ResultCode.RC404, "找不到该课程");
        }
        return timeTrialClassService.updateTimeTrialClassInfo(timeTrialClassModel) ? timeTrialClassModel : false;
    }
}
