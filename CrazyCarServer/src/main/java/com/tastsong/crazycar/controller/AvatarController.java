package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.resp.RespAvatarList;
import com.tastsong.crazycar.service.UserService;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.service.AvatarService;
import com.tastsong.crazycar.utils.Util;

import cn.hutool.json.JSONObject;

@Slf4j
@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Avatar")
public class AvatarController {
    @Autowired
    private AvatarService avatarService;
    @Autowired
    private UserService userService;

    @PostMapping(value = "/Detail")
    public Object getAvatarDetail(@RequestHeader(Util.TOKEN) String token) throws Exception{
        int uid = Util.getUidByToken(token);
        RespAvatarList resp = new RespAvatarList();
        resp.setAvatars(avatarService.getAvatarList(uid));
        resp.setCur_aid(userService.getUserStar(uid));
        return resp;
    }

    @PostMapping(value = "/Buy")
    public Object buyAvatar(@RequestBody JSONObject body, @RequestHeader(Util.TOKEN) String token)  throws Exception{
        int uid = Util.getUidByToken(token);
        int aid = body.getInt("aid");
        JSONObject data = new JSONObject();
        log.info("buyAvatar : uid = " + uid + "; aid  = " + aid);
        if (avatarService.hasAvatar(uid, aid)) {
            return data.putOpt("star", userService.getUserStar(uid));
        } else if (avatarService.canBuyAvatar(uid, aid)) {
            avatarService.buyAvatar(uid, aid);
            return data.putOpt("star", userService.getUserStar(uid));
        } else {
            return Result.failure(ResultCode.RC423);
        }		
    }

    @PostMapping(value = "/Change")
    public Object changeAvatar(@RequestBody JSONObject body, @RequestHeader(Util.TOKEN) String token) throws Exception{
        int uid = Util.getUidByToken(token);
        if (body != null && body.containsKey("aid")) {
			int aid = body.getInt("aid");
			if (avatarService.hasAvatar(uid, aid)) {
				avatarService.changeAvatar(uid, aid);
                JSONObject data = new JSONObject();
                data.putOpt("aid", aid);
                return data;
			} else {
                return Result.failure(ResultCode.RC423);
			}
		} else {
            return Result.failure(ResultCode.RC404);
		}	
    }
}
