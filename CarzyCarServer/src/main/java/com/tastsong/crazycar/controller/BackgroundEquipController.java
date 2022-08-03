package com.tastsong.crazycar.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.AvatarModel;
import com.tastsong.crazycar.model.EquipModel;
import com.tastsong.crazycar.service.AvatarService;
import com.tastsong.crazycar.service.EquipService;

import cn.hutool.json.JSONObject;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundEquipController {
    @Autowired
    private EquipService equipService;

    @GetMapping(value = "getEqiupInfos")
    public Object getEqiupInfos() throws Exception {
        JSONObject result = new JSONObject();
        List<EquipModel> items = equipService.getEqiupInfos();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updtaeEquipInfo")
    public Object updtaeEquipInfo(@RequestBody JSONObject body) throws Exception {
        EquipModel equipModel = new EquipModel();
        equipModel.eid = body.getInt("eid");
        equipModel.rid = body.getStr("rid");
        equipModel.equip_name = body.getStr("equip_name");
        equipModel.star = body.getInt("star");
        equipModel.can_wade = body.getBool("can_wade");
        equipModel.is_show = body.getBool("is_show");
        equipModel.mass = body.getInt("mass");
        equipModel.power = body.getInt("power");
        equipModel.max_power = body.getInt("max_power");
        return equipService.updtaeEquipInfo(equipModel) ? equipModel : false;
    }
}
