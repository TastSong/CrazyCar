package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.BackgroundDashboardService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundDashboardController {
    @Autowired
    private BackgroundDashboardService dashboardService;

    @GetMapping(value = "getDashboardData")
    public Object getDashboardData() throws Exception {
        JSONObject data = new JSONObject();
        data.putOpt("user_num", dashboardService.getUserNum());
        data.putOpt("equip_num", dashboardService.getEquipNum());
        data.putOpt("avatar_num", dashboardService.getAvatarNum());
        data.putOpt("map_num", dashboardService.getMapNum());
        data.putOpt("time_trial_times", 99);
        data.putOpt("match_times", 44);
        data.putOpt("login_user_num", dashboardService.getUserLoginData(7));
        data.putOpt("time_trial_num", dashboardService.getTimeTrialData(7));
        data.putOpt("match_num", dashboardService.getMatchData(7));
        return data;
    }
}
