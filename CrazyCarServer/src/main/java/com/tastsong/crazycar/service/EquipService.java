package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.model.EquipModel;

@Service
public class EquipService {
    @Autowired 
    private EquipMapper equipMapper;

    @Autowired
    private UserService userService;

    public List<EquipModel> getEquipDetail(int uid){
        List<EquipModel> equipModels = equipMapper.getEquipList();
        for (EquipModel equipModel : equipModels) {
            equipModel.is_has = equipMapper.isHasEquip(uid, equipModel.eid);
        }
        return equipModels;
    }

    public boolean isHasEquip(int uid, int eid){
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
        return equipMapper.getEquipByEid(eid).star;
    }

    public void changeEquip(int uid, int eid){
        userService.updateUserEid(uid, eid);
    }

    public List<EquipModel> getEqiupInfos(){
        return equipMapper.getEquipList();
    }
    
    public boolean updtaeEquipInfo(EquipModel equipModel){
        return equipMapper.updateEquipInfo(equipModel) == 1;
    }
}
