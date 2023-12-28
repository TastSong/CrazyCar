package com.tastsong.crazycar.controller;

import com.tastsong.crazycar.dto.req.ReqEquip;
import com.tastsong.crazycar.dto.resp.RespEquipList;
import com.tastsong.crazycar.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.service.EquipService;
import com.tastsong.crazycar.utils.Util;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Equip")
public class EquipController {
    @Autowired
    private EquipService equipService;
    @Autowired
    private UserService userService;

    @PostMapping(value = "/Detail")
    public Object getEquipDetail(@RequestHeader(Util.TOKEN) String token) throws Exception{
        int uid = Util.getUidByToken(token);
        RespEquipList resp = new RespEquipList();
        resp.setEquips(equipService.getEquipDetail(uid));
        resp.setCurEid(userService.getUserByUid(uid).getEid());
        return resp;
    }

    @PostMapping(value = "/Buy")
    public Object buyEquip(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqEquip req) throws Exception{
        int uid = Util.getUidByToken(token);
        int eid = req.getEid();
        if (equipService.hasEquip(uid, eid)) {
            return userService.getUserByUid(uid);
        } else if (equipService.canBuyEquip(uid, eid)) {
            equipService.bugEquip(uid, eid);
            return userService.getUserByUid(uid);
        } else {
            return Result.failure(ResultCode.RC423, "购买失败");
        }
    }

    @PostMapping(value = "/Change")
    public Object changeEquip(@RequestHeader(Util.TOKEN) String token, @Valid @RequestBody ReqEquip req) throws Exception{
        int uid = Util.getUidByToken(token);
        int eid = req.getEid();
        if (equipService.hasEquip(uid, eid)) {
            equipService.changeEquip(uid, eid);
            return userService.getUserByUid(uid);
        } else {
            return Result.failure(ResultCode.RC423, "未拥有该装备");
        }
    }
}
