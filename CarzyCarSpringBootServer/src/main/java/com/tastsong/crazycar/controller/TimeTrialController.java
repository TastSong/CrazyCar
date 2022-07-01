package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.service.TimeTrialService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/TimeTrial")
public class TimeTrialController {
    @Autowired
    private TimeTrialService timeTrialService;

    @PostMapping(value = "/Rank")
    public Object getRank(@RequestBody JSONObject body) throws Exception{
        Integer cid = body.getInt("cid");
        return timeTrialService.getRankList(cid);
    }
}
