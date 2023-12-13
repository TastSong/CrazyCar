package com.tastsong.crazycar.service;

import java.util.ArrayList;
import java.util.List;

import com.tastsong.crazycar.dto.req.ReqUpdateEquip;
import com.tastsong.crazycar.dto.resp.RespEquip;
import com.tastsong.crazycar.mapper.EquipRecordMapper;
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
        EquipModel equipModel = equipMapper.getEquipByEid(eid);
        return toResp(equipModel, uid);
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
        resp.set_has(equipMapper.isHasEquip(uid, model.getEid()));
        return resp;
    }

    public boolean updateEquipInfo(int uid, int eid){
        return equipMapper.isHasEquip(uid, eid);
    }

    public boolean canBuyEquip(int uid, int eid){
        return userService.getUserStar(uid) >= getEquipNeedStar(eid);
    }

    public void bugEquip(int uid, int eid){
        int curStar = userService.getUserStar(uid) - getEquipNeedStar(eid);
        userService.updateUserStar(uid, curStar);
        equipMapper.addEquipForUser(uid, eid);
    }

    private int getEquipNeedStar(int eid){
        return equipMapper.getEquipByEid(eid).getStar();
    }

    public void changeEquip(int uid, int eid){
        userService.updateUserEid(uid, eid);
    }

    public List<EquipModel> getEquipInfos(){
        return equipMapper.getEquipList();
    }
    
    public boolean updateEquipInfoByModel(EquipModel equipModel){
        return equipMapper.updateEquipInfo(equipModel) == 1;
    }

    public EquipModel getEquipByReq(ReqUpdateEquip req) {
        EquipModel equipModel = new EquipModel();
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
        return equipMapper.isHasEquip(uid, eid);
    }

    public boolean addEquipForUser(int uid, int eid){
        return equipMapper.addEquipForUser(uid, eid) == 1;
    }
}
