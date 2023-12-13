package com.tastsong.crazycar.controller;

import java.util.List;

import com.tastsong.crazycar.dto.req.ReqUpdateEquip;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.EquipModel;
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
        List<EquipModel> items = equipService.getEquipInfos();
        result.putOpt("items", items);
        result.putOpt("total", items.size());
        return result;
    }

    @PostMapping(value = "updateEquipInfo")
    public Object updateEquipInfo(@RequestBody ReqUpdateEquip req) throws Exception {
        EquipModel equipModel = equipService.getEquipByReq(req);
        return equipService.updateEquipInfoByModel(equipModel) ? equipModel : false;
    }
}
