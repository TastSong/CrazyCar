package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.ForcedUpdatingService;

import cn.hutool.json.JSONObject;
import lombok.extern.slf4j.Slf4j;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v1")
@Slf4j
public class AssetsUpdatingController {
    @Autowired
    private ForcedUpdatingService forcedUpdatingService;

    @PostMapping(value = "/AssetsUpdating")
    public Object forcedUpdating(@RequestBody JSONObject body) throws Exception {
		if (body != null && body.containsKey("platform") && body.containsKey("version")) {
			String version = body.getStr("version");
			String platform = body.getStr("platform");
			log.info("ForcedUpdating version = " + version + "; platform = " + platform);
			JSONObject data = new JSONObject();
			data.putOpt("is_forced_updating", forcedUpdatingService.isForcedUpdating(version, platform));
			data.putOpt("url", forcedUpdatingService.getURL(platform));
			return data;				
		} else {
			return Result.failure(ResultCode.RC404);
		}		
    }
}
