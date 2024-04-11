package com.tastsong.crazycar.controller;

import java.util.List;

import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.common.Result;
import com.tastsong.crazycar.common.ResultCode;
import com.tastsong.crazycar.dto.req.ReqUpdateEquip;
import com.tastsong.crazycar.dto.resp.RespCommonList;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Scope;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.tastsong.crazycar.model.EquipModel;
import com.tastsong.crazycar.service.EquipService;

import javax.validation.Valid;

@RestController
@Scope("prototype")
@RequestMapping(value = "/v2/Background")
public class BackgroundEquipController {
    @Autowired
    private EquipService equipService;

    @GetMapping(value = "getEquipInfos")
    public Object getEquipInfos() throws Exception {
        RespCommonList reap = new RespCommonList();
        List<EquipModel> items = equipService.getEquipInfos();
        reap.setItems(items);
        reap.setTotal(items.size());
        return reap;
    }

    @PostMapping(value = "updateEquipInfo")
    public Object updateEquipInfo(@Valid @RequestBody ReqUpdateEquip req) throws Exception {
        EquipModel equipModel = equipService.getEquipByReq(req);
        if (ObjUtil.isEmpty(equipModel)) {
            return Result.failure(ResultCode.RC404, "无此资源");
        }
        return equipService.updateEquipInfoByModel(equipModel) ? equipModel : false;
    }
}
