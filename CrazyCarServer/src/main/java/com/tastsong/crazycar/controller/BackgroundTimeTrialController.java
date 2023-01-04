package com.tastsong.crazycar.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.TimeTrialInfoModel;
import com.tastsong.crazycar.service.TimeTrialService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundTimeTrialController {
    @Autowired
    private TimeTrialService timeTrialService;

    @GetMapping(value = "getTimeTrialInfos")
    public Object getTimeTrialInfos() throws Exception {
        JSONObject result = new JSONObject();
        List<TimeTrialInfoModel> items = timeTrialService.getTimeTrialInfos();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updtaeTimeTrialInfo")
    public Object updtaeTimeTrialInfo(@RequestBody JSONObject body) throws Exception {
        TimeTrialInfoModel timeTrialInfoModel = new TimeTrialInfoModel();
        timeTrialInfoModel.cid= body.getInt("cid");
        timeTrialInfoModel.map_id = body.getInt("map_id");
        timeTrialInfoModel.class_name = body.getStr("class_name");
        timeTrialInfoModel.star = body.getInt("star");
        timeTrialInfoModel.has_water = body.getBool("has_water");
        timeTrialInfoModel.limit_time = body.getInt("limit_time");
        timeTrialInfoModel.times = body.getInt("times");
        return timeTrialService.updateTimeTrialInfo(timeTrialInfoModel) ? timeTrialInfoModel : false;
    }
}
