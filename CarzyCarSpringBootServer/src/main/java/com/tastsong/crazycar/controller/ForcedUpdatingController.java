package com.tastsong.crazycar.controller;

import java.io.PrintWriter;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.alibaba.fastjson.JSONObject;
import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.service.ForcedUpdatingService;

@RestController
@Scope("prototype")
@RequestMapping("CrazyCarSpringBootServer")
public class ForcedUpdatingController {
    @Autowired
    private ForcedUpdatingService forcedUpdatingService;

    @PostMapping(value = "/ForcedUpdating")
    public void forcedUpdating(HttpServletRequest request, HttpServletResponse response) throws Exception {
        response.setContentType("text/html;charset=UTF-8");
		JSONObject getJB = new JSONObject();
		getJB = Util.getMsgData(request);

		PrintWriter out = response.getWriter();
		JSONObject outJB = new JSONObject();
		JSONObject dataJB = new JSONObject();
		if (getJB != null && getJB.containsKey("platform") && getJB.containsKey("version")) {
			String version = getJB.getString("version");
			String platform = getJB.getString("platform");
			outJB.put("code", 200);
			dataJB.put("is_forced_updating", forcedUpdatingService.isForcedUpdating(version, platform));
			dataJB.put("url", forcedUpdatingService.getURL(platform));				
		} else {
			outJB.put("code", 404);
		}		
		outJB.put("data", dataJB);
		out.println(outJB.toString());
		out.flush();
		out.close();
    }
}
