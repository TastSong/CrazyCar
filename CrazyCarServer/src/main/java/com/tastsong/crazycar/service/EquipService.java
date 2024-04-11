package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;

import cn.hutool.core.date.DateUtil;
import cn.hutool.core.util.ObjUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.dto.req.ReqUpdateEquip;
import com.tastsong.crazycar.dto.resp.RespEquip;
import com.tastsong.crazycar.mapper.EquipRecordMapper;
import com.tastsong.crazycar.model.EquipRecordModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.model.EquipModel;

@Service
public class EquipService {
    @Autowired 
    private EquipMapper equipMapper;
    @Autowired
    private EquipRecordMapper equipRecordMapper;

    @Autowired
    private UserService userService;

    public List<RespEquip> getEquipDetail(int uid){
        List<EquipModel> equipModels = equipMapper.selectList(null);
        List<RespEquip> resp = new ArrayList<>();
        for (EquipModel equipModel : equipModels) {
            resp.add(toResp(equipModel, uid));
        }
        return resp;
    }

    public RespEquip getRespEquip(int uid, int eid){
        EquipModel equipModel = getEquipByEid(eid);
        return toResp(equipModel, uid);
    }

    public EquipModel getEquipByEid(int eid){
        return equipMapper.selectById(eid);
    }

    private RespEquip toResp(EquipModel model, int uid) {
        RespEquip resp = new RespEquip();
        resp.setEid(model.getEid());
        resp.setRid(model.getRid());
        resp.setEquip_name(model.getEquip_name());
        resp.setStar(model.getStar());
        resp.setMass(model.getMass());
        resp.setPower(model.getPower());
        resp.setMax_power(model.getMax_power());
        resp.setCan_wade(model.isCan_wade());
        resp.set_show(model.is_show());
        resp.set_has(hasEquip(uid, model.getEid()));
        return resp;
    }

    public boolean canBuyEquip(int uid, int eid){
        return userService.getUserStar(uid) >= getEquipNeedStar(eid);
    }

    public void bugEquip(int uid, int eid){
        int curStar = userService.getUserStar(uid) - getEquipNeedStar(eid);
        userService.updateUserStar(uid, curStar);
        addEquipForUser(uid, eid);
    }

    private int getEquipNeedStar(int eid){
        return getEquipByEid(eid).getStar();
    }

    public void changeEquip(int uid, int eid){
        userService.updateUserEid(uid, eid);
    }

    public List<EquipModel> getEquipInfos(){
        return equipMapper.selectList(null);
    }
    
    public boolean updateEquipInfoByModel(EquipModel equipModel){
        return equipMapper.updateById(equipModel) == 1;
    }

    public EquipModel getEquipByReq(ReqUpdateEquip req) {
        EquipModel equipModel = getEquipByEid(req.getEid());
        if (ObjUtil.isEmpty(equipModel)) {
            return null;
        }
        equipModel.setEquip_name(req.getEquip_name());
        equipModel.setEid(req.getEid());
        equipModel.setRid(req.getRid());
        equipModel.setStar(req.getStar());
        equipModel.setMass(req.getMass());
        equipModel.setPower(req.getPower());
        equipModel.setMax_power(req.getMax_power());
        equipModel.setCan_wade(req.isCan_wade());
        equipModel.set_show(req.is_show());
        return equipModel;
    }

    public boolean hasEquip(int uid, int eid){
        QueryWrapper<EquipRecordModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(EquipRecordModel::getUid, uid);
        queryWrapper.lambda().eq(EquipRecordModel::getEid, eid);
        return equipRecordMapper.exists(queryWrapper);
    }

    public boolean addEquipForUser(int uid, int eid){
        if (hasEquip(uid, eid)) {
            return true;
        }
        EquipRecordModel equipRecordModel = new EquipRecordModel();
        equipRecordModel.setUid(uid);
        equipRecordModel.setEid(eid);
        equipRecordModel.setUpdate_time(DateUtil.currentSeconds());
        return equipRecordMapper.insert(equipRecordModel) > 0;
    }
}
