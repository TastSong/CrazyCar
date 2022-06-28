package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.alibaba.fastjson.JSONObject;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.ForcedUpdatingService;

@RestController
@Scope("prototype")
public class ForcedUpdatingController {
    @Autowired
    private ForcedUpdatingService forcedUpdatingService;

    @PostMapping(value = "/ForcedUpdating")
    public Object forcedUpdating(@RequestBody JSONObject body) throws Exception {
		if (body != null && body.containsKey("platform") && body.containsKey("version")) {
			String version = body.getString("version");
			String platform = body.getString("platform");
			JSONObject data = new JSONObject();
			data.put("is_forced_updating", forcedUpdatingService.isForcedUpdating(version, platform));
			data.put("url", forcedUpdatingService.getURL(platform));
			return data;				
		} else {
			return Result.failure(ResultCode.RC404);
		}		
    }
}
