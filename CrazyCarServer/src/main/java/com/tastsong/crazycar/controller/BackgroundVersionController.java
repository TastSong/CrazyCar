package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqUpdateVersion;
import com.tastsong.crazycar.dto.resp.RespCommonList;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.VersionModel;
import com.tastsong.crazycar.service.VersionService;

import javax.validation.Valid;
import java.util.List;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundVersionController {
    @Autowired
    private VersionService versionService;

    @GetMapping(value = "/getVersionList")
    public Object getVersionList() throws Exception {
        RespCommonList resp = new RespCommonList();
        List<VersionModel> versionList = versionService.getVersionList();
        resp.setItems(versionList);
        resp.setTotal(versionList.size());
        return resp;
    }

    @PostMapping(value = "/updateVersion")
    public Object updateVersion(@Valid @RequestBody ReqUpdateVersion req) throws Exception {
        VersionModel versionModel = versionService.toVersionModelByReq(req);
        return versionService.updateVersion(versionModel) ? versionModel : false;
    }
}
