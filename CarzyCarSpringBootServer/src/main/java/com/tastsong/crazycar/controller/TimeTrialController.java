package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.TimeTrialService;
import com.tastsong.crazycar.Util.Util;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/TimeTrial")
public class TimeTrialController {
    @Autowired
    private TimeTrialService timeTrialService;

    @PostMapping(value = "/Rank")
    public Object getRank(@RequestBody JSONObject body) throws Exception{
        Integer cid = body.getInt("cid");
        return timeTrialService.getRankList(cid);
    }

    @PostMapping(value = "/Detail")
    public Object getDetail(@RequestHeader(Util.TOKEN) String token) throws Exception{
        Integer uid = Util.getUidByToken(token);
        return timeTrialService.getTimeTrialDetail(uid);
    }

    @PostMapping(value = "/BuyClass")
    public Object budClass(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body) throws Exception{
        Integer uid = Util.getUidByToken(token);
        if (body != null && body.containsKey("cid")) {
			int cid = body.getInt("cid");
            JSONObject data = new JSONObject();
			if (timeTrialService.isHasClass(cid, uid)) {
				data.putOpt("star", timeTrialService.getUserStar(uid));
                return data;
			} else if (timeTrialService.canBuyClass(uid, cid)) {
				timeTrialService.buyClass(uid, cid);
				data.putOpt("star", timeTrialService.getUserStar(uid));
                return data;
			} else {
                return Result.failure(ResultCode.RC423);
			}
		} else {
			return Result.failure(ResultCode.RC404);
		}	
    }
}
