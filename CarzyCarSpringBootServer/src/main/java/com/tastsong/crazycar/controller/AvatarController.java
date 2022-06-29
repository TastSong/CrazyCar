package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.service.AvatarService;

import cn.hutool.json.JSONObject;


@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Avatar")
public class AvatarController {
    @Autowired
    private AvatarService avatarService;

    @PostMapping(value = "/Detail")
    public Object getAvatarDetail(@RequestHeader(Util.TOKEN) String token){
        Integer uid = Util.getUidByToken(token);
        JSONObject data = new JSONObject();
        data.putOpt("avatars", avatarService.getAvatarList(uid));
        data.putOpt("cur_aid", avatarService.getCurAidByUid(uid));
        return data;
    }
}
