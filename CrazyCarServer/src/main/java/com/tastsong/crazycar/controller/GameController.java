package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.service.TimeTrialClassService;
import com.tastsong.crazycar.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import cn.hutool.json.JSONObject;
import lombok.extern.slf4j.Slf4j;

import com.tastsong.crazycar.common.GameType;
import com.tastsong.crazycar.common.NetType;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.MatchRecordService;
import com.tastsong.crazycar.service.TimeTrialRecordService;
import com.tastsong.crazycar.utils.Util;

@RestController
@Scope("prototype")
@Slf4j
@RequestMapping(value = "/v2/Game")
public class GameController {
    @Autowired
    private TimeTrialRecordService timeTrialRecordService;
    @Autowired
    private TimeTrialClassService timeTrialClassService;

    @Autowired
    private MatchRecordService matchRecordService;
    @Autowired
    private UserService userService;

    @PostMapping(value = "/EnterGame")
    public Object enterGame(@RequestHeader(Util.TOKEN) String token, @RequestBody JSONObject body)  throws Exception{
        int uid = Util.getUidByToken(token);
        int cid = body.getInt("cid");
		GameType gameType = GameType.values()[body.getInt("GameType")];
		NetType netType = NetType.values()[body.getInt("NetType")];

        JSONObject data = new JSONObject();
		if (gameType == GameType.Match){
            if(!userService.getUserByUid(uid).is_vip()) {
                return Result.failure(ResultCode.RC423);
			} 

			if(netType == NetType.WebSocket){
				log.info("EnterRoom cid = " + cid + " GameType = " + gameType.name() + " NetType = " + netType.name());
				data.putOpt("num", MatchWebSocket.getOnlineCount());
                return data;
			} else{
				data.putOpt("num", 0);
                return data;
			}	
		} else{
			if(timeTrialClassService.hasClass(uid, cid)) {
                data.putOpt("num", 0);
                return data;
			} else{
                return Result.failure(ResultCode.RC423);
			}
		}
    }
}
