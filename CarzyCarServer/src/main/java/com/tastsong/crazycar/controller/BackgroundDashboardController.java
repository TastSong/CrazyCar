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
        int size = 7;
        data.putOpt("tatal", size);
        JSONArray items = new JSONArray();
        for (int i = 0; i < size; i++){
            JSONObject item = new JSONObject();
            item.putOpt("timestamp", System.currentTimeMillis() - 1000 * 60 * 60 *24 * (7 - i));
            item.putOpt("data", (i + 1) * 24);
            items.add(item);
        }
        data.putOpt("items", items);
        result.putOpt("data", data);
        return result;
    }
}
