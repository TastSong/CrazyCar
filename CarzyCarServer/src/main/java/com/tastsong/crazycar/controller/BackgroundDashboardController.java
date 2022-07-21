package com.tastsong.crazycar.controller;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundDashboardController {
    @GetMapping(value = "getDashboardData")
    public Object getDashboardData() throws Exception {
        JSONObject result  = new JSONObject();
        result.putOpt("code", 200);
        JSONObject data = new JSONObject();
        data.putOpt("user_num", 5);
        data.putOpt("equip_num", 9);
        data.putOpt("avatar_num", 14);
        data.putOpt("map_num", 4);
        data.putOpt("time_trial_times", 99);
        data.putOpt("match_times", 44);
        int size = 7;
        data.putOpt("tatal", size);
        JSONArray items = new JSONArray();
        for (int i = 0; i < size; i++){
            JSONObject item = new JSONObject();
            item.putOpt("timestamp", System.currentTimeMillis() - 1000 * 60 * 60 *24 * (7 - i));
            item.putOpt("data", (i + 1) * 14);
            items.add(item);
        }
        data.putOpt("login_user_num", items);

        items.clear();
        for (int i = 0; i < size; i++){
            JSONObject item = new JSONObject();
            item.putOpt("timestamp", System.currentTimeMillis() - 1000 * 60 * 60 *24 * (7 - i));
            item.putOpt("data", (i + 1) * 6);
            items.add(item);
        }
        data.putOpt("time_trial_num", items);

        items.clear();
        for (int i = 0; i < size; i++){
            JSONObject item = new JSONObject();
            item.putOpt("timestamp", System.currentTimeMillis() - 1000 * 60 * 60 *24 * (7 - i));
            item.putOpt("data", (i + 1) * 8);
            items.add(item);
        }
        data.putOpt("match_num", items);
        result.putOpt("data", data);
        return result;
    }
}
