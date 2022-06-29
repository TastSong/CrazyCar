package com.tastsong.crazycar.controller;

import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;


@RestController
@Scope("prototype")
public class AvatarController {
    @PostMapping(value = "/Avatar")
    public Object getAvatarDetail(@RequestHeader(Util.TOKEN) String token){
        return Result.failure(ResultCode.RC999);
    }
}
