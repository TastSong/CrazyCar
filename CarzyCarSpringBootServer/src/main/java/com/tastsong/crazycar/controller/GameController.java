package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import cn.hutool.json.JSONObject;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.GameType;
import com.tastsong.crazycar.common.NetType;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.TimeTrialService;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Game")
public class GameController {
    @Autowired
    private TimeTrialService timeTrialService;

    @PostMapping(value = "/EnterGame")
    public Object enterGame(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body)  throws Exception{
        Integer uid = Util.getUidByToken(token);
        Integer cid = body.getInt("cid");
		GameType gameType = GameType.values()[body.getInt("GameType")];
		NetType netType = NetType.values()[body.getInt("NetType")];

        JSONObject data = new JSONObject();
		if (gameType == GameType.Match){
            System.out.println("+++++++ " + netType);
            return Result.failure(ResultCode.RC999);
		} else{
			if(timeTrialService.isHasClass(uid, cid)) {
                data.putOpt("num", 0);
                return data;
			} else{
                return Result.failure(ResultCode.RC423);
			}
		}
    }
}
