package com.tastsong.crazycar.controller;

import java.util.List;

import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.dto.req.ReqUpdateMatchMap;
import com.tastsong.crazycar.service.MatchMapService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.MatchMapModel;

import cn.hutool.json.JSONObject;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundMatchController {
    @Autowired
    private MatchMapService matchMapService;

    @GetMapping(value = "getMatchInfos")
    public Object getMatchInfos() throws Exception {
        JSONObject result = new JSONObject();
        List<MatchMapModel> items = matchMapService.getMatchMapDetail();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updateMatchInfo")
    public Object updateMatchInfo(@Valid @RequestBody ReqUpdateMatchMap req) throws Exception {
        MatchMapModel mapInfoModel = matchMapService.toMatchMapModel(req);
        if (ObjUtil.isEmpty(mapInfoModel)) {
            return Result.failure(ResultCode.RC404, "无此地图");
        }
        return matchMapService.updateMatchMapInfo(mapInfoModel) ? mapInfoModel : false;
    }
}
