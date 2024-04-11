package com.tastsong.crazycar.controller;

import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.dto.req.ReqUpdateAvatar;
import com.tastsong.crazycar.dto.resp.RespCommonList;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.AvatarModel;
import com.tastsong.crazycar.service.AvatarService;

import javax.validation.Valid;
import java.util.List;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundAvatarController {
    @Autowired
    private AvatarService avatarService;

    @GetMapping(value = "getAvatarInfos")
    public Object getAvatarInfos() throws Exception {
        RespCommonList resp = new RespCommonList();
        List<AvatarModel> data = avatarService.getAllAvatar();
        resp.setItems(data);
        resp.setTotal(data.size());
        // 以后资源更新可能会分版本、平台等，所以做成数组
        return resp;
    }

    @PostMapping(value = "updateAvatarInfo")
    public Object updateAvatarInfo(@Valid @RequestBody ReqUpdateAvatar req) throws Exception {
        AvatarModel avatarModel = avatarService.toAvatarModel(req);
        if (ObjUtil.isEmpty(avatarModel)) {
            return Result.failure(ResultCode.RC404, "无此资源");
        }
        return avatarService.updateAvatarInfo(avatarModel) ? avatarModel : false;
    }
}
