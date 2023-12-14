package com.tastsong.crazycar.controller;

import java.util.List;

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

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundTimeTrialController {
    @Autowired
    private TimeTrialService timeTrialService;

    @GetMapping(value = "getTimeTrialInfos")
    public Object getTimeTrialInfos() throws Exception {
        JSONObject result = new JSONObject();
        List<TimeTrialClassModel> items = timeTrialService.getTimeTrialInfos();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updtaeTimeTrialInfo")
    public Object updtaeTimeTrialInfo(@RequestBody JSONObject body) throws Exception {
        TimeTrialClassModel timeTrialClassModel = new TimeTrialClassModel();
        timeTrialClassModel.cid= body.getInt("cid");
        timeTrialClassModel.map_id = body.getInt("map_id");
        timeTrialClassModel.class_name = body.getStr("class_name");
        timeTrialClassModel.star = body.getInt("star");
        timeTrialClassModel.has_water = body.getBool("has_water");
        timeTrialClassModel.limit_time = body.getInt("limit_time");
        timeTrialClassModel.times = body.getInt("times");
        return timeTrialService.updateTimeTrialInfo(timeTrialClassModel) ? timeTrialClassModel : false;
    }
}
