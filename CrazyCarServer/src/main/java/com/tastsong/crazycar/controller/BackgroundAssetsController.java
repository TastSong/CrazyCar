package com.tastsong.crazycar.controller;

import cn.hutool.core.util.ObjUtil;
import cn.hutool.json.JSONUtil;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.dto.req.ReqUpdateAssets;
import com.tastsong.crazycar.dto.resp.RespCommonList;
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

import javax.validation.Valid;

@Slf4j
@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundAssetsController {
    @Autowired
    private AssetsUpdatingService assetsUpdatingService;

    @GetMapping(value = "/getAssetsInfo")
    public Object getAssetsInfo() throws Exception {
        RespCommonList resp = new RespCommonList();
        resp.setItems(assetsUpdatingService.getInfo());
        resp.setTotal(1);
        return resp;
    }

    @PostMapping(value = "/updateAssetsInfo")
    public Object updateAssetsInfo(@Valid @RequestBody ReqUpdateAssets req) throws Exception {
        AssetsUpdatingModel assetsUpdatingModel = assetsUpdatingService.toAssetsUpdatingModel(req);
        log.info("updateAssetsInfo:" + JSONUtil.toJsonStr(req));
        if (ObjUtil.isEmpty(assetsUpdatingModel)) {
            return Result.failure(ResultCode.RC404, "资源不存在");
        }
        return assetsUpdatingService.updateInfo(assetsUpdatingModel) ? assetsUpdatingModel : false;
    }
}
