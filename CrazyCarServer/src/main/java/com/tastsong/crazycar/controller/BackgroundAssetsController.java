package com.tastsong.crazycar.controller;

import cn.hutool.json.JSONUtil;
import com.tastsong.crazycar.dto.req.ReqUpdateAssets;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.AssetsUpdatingModel;
import com.tastsong.crazycar.service.AssetsUpdatingService;

import cn.hutool.json.JSONArray;
import cn.hutool.json.JSONObject;

@Slf4j
@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundAssetsController {
    @Autowired
    private AssetsUpdatingService assetsUpdatingService;

    @GetMapping(value = "/getAssetsInfo")
    public Object getAssetsInfo() throws Exception {
        JSONObject result = new JSONObject();
        JSONArray itemArray = new JSONArray();
        itemArray.add(assetsUpdatingService.getInfo());
        // 以后资源更新可能会分版本、平台等，所以做成数组
        result.putOpt("items", itemArray);
        result.putOpt("total", 1);
        return result;
    }

    @PostMapping(value = "/updateAssetsInfo")
    public Object updateAssetsInfo(@RequestBody ReqUpdateAssets body) throws Exception {
        AssetsUpdatingModel assetsUpdatingModel = new AssetsUpdatingModel();
        log.info("updateAssetsInfo:" + JSONUtil.toJsonStr(body));
        assetsUpdatingModel.setId(body.getId());
        assetsUpdatingModel.set_on(body.is_on());
        assetsUpdatingModel.setUrl(body.getUrl());
        assetsUpdatingModel.setUpdate_time(System.currentTimeMillis());
        return assetsUpdatingService.updateInfo(assetsUpdatingModel) ? assetsUpdatingModel : false;
    }
}
