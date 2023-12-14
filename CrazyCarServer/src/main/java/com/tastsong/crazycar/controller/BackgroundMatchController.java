package com.tastsong.crazycar.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.MatchMapModel;
import com.tastsong.crazycar.service.MatchService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundMatchController {
    @Autowired
    private MatchService matchService;

    @GetMapping(value = "getMatchInfos")
    public Object getMatchInfos() throws Exception {
        JSONObject result = new JSONObject();
        List<MatchMapModel> items = matchService.getMatchMapDetail();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updtaeMatchInfo")
    public Object updtaeMatchInfo(@RequestBody JSONObject body) throws Exception {
        MatchMapModel mapInfoModel = new MatchMapModel();
        mapInfoModel.cid= body.getInt("cid");
        mapInfoModel.map_id = body.getInt("map_id");
        mapInfoModel.class_name = body.getStr("class_name");
        mapInfoModel.star = body.getInt("star");
        mapInfoModel.has_water = body.getBool("has_water");
        mapInfoModel.limit_time = body.getInt("limit_time");
        mapInfoModel.times = body.getInt("times");
        return matchService.updateMatchMapInfo(mapInfoModel) ? mapInfoModel : false;
    }
}
