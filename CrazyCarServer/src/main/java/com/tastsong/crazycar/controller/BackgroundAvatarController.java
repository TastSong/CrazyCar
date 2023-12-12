package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.AvatarModel;
import com.tastsong.crazycar.service.AvatarService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundAvatarController {
    @Autowired
    private AvatarService avatarService;

    @GetMapping(value = "getAvatarInfos")
    public Object getAvatarInfos() throws Exception {
        JSONObject result = new JSONObject();
        // 以后资源更新可能会分版本、平台等，所以做成数组
        result.putOpt("items", avatarService.getAvatarInfos());
        result.putOpt("total", avatarService.getAvatarInfos().size());
        return result;
    }

    @PostMapping(value = "updateAvatarInfo")
    public Object updateAvatarInfo(@RequestBody JSONObject body) throws Exception {
        AvatarModel avatarModel = new AvatarModel();
        avatarModel.setAid(body.getInt("aid"));
        avatarModel.setRid(body.getStr("rid"));
        avatarModel.setAvatar_name(body.getStr("avatar_name"));
        avatarModel.setStar(body.getInt("star"));
        return avatarService.updateAvatarInfo(avatarModel) ? avatarModel : false;
    }
}
