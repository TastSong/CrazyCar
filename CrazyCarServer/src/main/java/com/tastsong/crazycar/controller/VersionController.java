package com.tastsong.crazycar.controller;

import cn.hutool.core.util.ObjUtil;
import cn.hutool.core.util.StrUtil;
import com.tastsong.crazycar.dto.req.ReqUpdatingInfo;
import com.tastsong.crazycar.dto.resp.RespUpdatingInfo;
import com.tastsong.crazycar.service.VersionService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;

import lombok.extern.slf4j.Slf4j;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1")
@Slf4j
public class VersionController {
    @Autowired
    private VersionService versionService;

    @PostMapping(value = "/ForcedUpdating")
    public Object forcedUpdating(@Valid @RequestBody ReqUpdatingInfo req) throws Exception {
		if (!ObjUtil.isEmpty(req) && !StrUtil.isEmpty(req.getPlatform()) && !StrUtil.isEmpty(req.getVersion())) {
			String version = req.getVersion();
			String platform = req.getPlatform();
			log.info("ForcedUpdating version = " + version + "; platform = " + platform);
			RespUpdatingInfo resp = new RespUpdatingInfo();
			resp.set_forced_updating(versionService.isForcedUpdating(version, platform));
			resp.setUrl(versionService.getURL(platform));
			return resp;
		} else {
			return Result.failure(ResultCode.RC404);
		}		
    }
}
