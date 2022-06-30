package com.tastsong.crazycar.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.EquipService;
import com.tastsong.crazycar.Util.Util;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Equip")
public class EquipController {
    @Autowired
    private EquipService equipService;

    @PostMapping(value = "/Detail")
    public Object getEquipDetail(@RequestHeader(Util.TOKEN) String token) throws Exception{
        Integer uid = Util.getUidByToken(token);
        JSONObject data = new JSONObject();
        data.putOpt("equips", equipService.getEquipDetail(uid));
        data.putOpt("curEid", equipService.getCurEid(uid));
        return data;
    }
}
