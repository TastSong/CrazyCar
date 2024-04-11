package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqAvatar;
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

import javax.validation.Valid;

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
    public Object buyAvatar(@Valid @RequestBody ReqAvatar req, @RequestHeader(Util.TOKEN) String token)  throws Exception{
        int uid = Util.getUidByToken(token);
        int aid = req.getAid();
        log.info("buyAvatar : uid = " + uid + "; aid  = " + aid);
        if (avatarService.hasAvatar(uid, aid)) {
            return userService.getUserByUid(uid);
        } else if (avatarService.canBuyAvatar(uid, aid)) {
            avatarService.buyAvatar(uid, aid);
            return userService.getUserByUid(uid);
        } else {
            return Result.failure(ResultCode.RC423);
        }		
    }

    @PostMapping(value = "/Change")
    public Object changeAvatar(@Valid @RequestBody ReqAvatar req, @RequestHeader(Util.TOKEN) String token) throws Exception{
        int uid = Util.getUidByToken(token);
        int aid = req.getAid();
        if (avatarService.hasAvatar(uid, aid)) {
            avatarService.changeAvatar(uid, aid);
            return userService.getUserByUid(uid);
        } else {
            return Result.failure(ResultCode.RC423, "未拥有该头像");
        }
    }
}
