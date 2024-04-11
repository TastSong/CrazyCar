package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqEnterGame;
import com.tastsong.crazycar.dto.resp.RespEnterGame;
import com.tastsong.crazycar.service.TimeTrialClassService;
import com.tastsong.crazycar.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import lombok.extern.slf4j.Slf4j;

import com.tastsong.crazycar.common.GameType;
import com.tastsong.crazycar.common.NetType;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.utils.Util;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@Slf4j
@RequestMapping(value = "/v2/Game")
public class GameController {
    @Autowired
    private TimeTrialClassService timeTrialClassService;

    @Autowired
    private UserService userService;

    @PostMapping(value = "/EnterGame")
    public Object enterGame(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqEnterGame req)  throws Exception{
        int uid = Util.getUidByToken(token);
        int cid = req.getCid();
		GameType gameType = GameType.values()[req.getGameType()];
		NetType netType = NetType.values()[req.getNetType()];

        RespEnterGame resp = new RespEnterGame();
		if (gameType == GameType.Match){
            if(!userService.getUserByUid(uid).is_vip()) {
                return Result.failure(ResultCode.RC423);
			} 

			if(netType == NetType.WebSocket){
				log.info("EnterRoom cid = " + cid + " GameType = " + gameType.name() + " NetType = " + netType.name());
                resp.setNum(MatchWebSocket.getOnlineCount());
            } else{
                resp.setNum(0);
            }
            return resp;
        } else{
			if(timeTrialClassService.hasClass(uid, cid)) {
                resp.setNum(0);
                return resp;
			} else{
                return Result.failure(ResultCode.RC423);
			}
		}
    }
}
