package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.VersionModel;
import com.tastsong.crazycar.service.VersionService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundVersionController {
    @Autowired
    private VersionService versionService;

    @GetMapping(value = "/getVersionList")
    public Object getVersionList() throws Exception {
        JSONObject result = new JSONObject();
        result.putOpt("items", versionService.getVersionList());
        result.putOpt("total", versionService.getVersionList().size());
        return result;
    }

    @PostMapping(value = "/updateVersion")
    public Object updateVersion(@RequestBody JSONObject body) throws Exception {
        VersionModel versionModel = new VersionModel();
        versionModel.id = body.getInt("id");
        versionModel.version = body.getStr("version");
        versionModel.platform = body.getStr("platform");
        versionModel.url = body.getStr("url");
        versionModel.rule = body.getInt("rule");
        versionModel.updata_time = System.currentTimeMillis();
        return versionService.updateVersion(versionModel) ? versionModel : false;
    }
}
