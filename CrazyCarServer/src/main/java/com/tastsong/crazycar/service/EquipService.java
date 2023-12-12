package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.EquipModel;

@Service
public class EquipService {
    @Autowired 
    private EquipMapper equipMapper;

    @Autowired
    private UserMapper userMapper;

    public List<EquipModel> getEquipDetail(int uid){
        List<EquipModel> equipModels = equipMapper.getEquipList();
        for(int i = 0; i < equipModels.size(); i++){
            equipModels.get(i).is_has = equipMapper.isHasEquip(uid, equipModels.get(i).eid);
        }
        return equipModels;
    }

    public int getCurEid(int uid){
        return userMapper.getUserByUid(uid).eid;
    }

    public boolean isHasEquip(int uid, int eid){
        return equipMapper.isHasEquip(uid, eid);
    }

    public boolean canBuyEquip(int uid, int eid){
        return getUserCurStar(uid) >= getEquipNeedStar(eid);
    }

    public void bugEquip(int uid, int eid){
        int curStar = getUserCurStar(uid) - getEquipNeedStar(eid);
        userMapper.updateUserStar(uid, curStar);
        equipMapper.addEquipForUser(uid, eid);
    }

    public int getUserCurStar(int uid){
        return userMapper.getUserByUid(uid).star;
    }

    private int getEquipNeedStar(int eid){
        return equipMapper.getEquipByEid(eid).star;
    }

    public void changeEquip(int uid, int eid){
        userMapper.updateUserEid(uid, eid);
    }

    public List<EquipModel> getEqiupInfos(){
        return equipMapper.getEquipList();
    }
    
    public boolean updtaeEquipInfo(EquipModel equipModel){
        return equipMapper.updateEquipInfo(equipModel) == 1;
    }
}
