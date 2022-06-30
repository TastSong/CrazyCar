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

    public List<EquipModel> getEquipDetail(Integer uid){
        List<EquipModel> equipModels = equipMapper.getEquipList();
        for(Integer i = 0; i < equipModels.size(); i++){
            equipModels.get(i).is_has = equipMapper.isHasEquip(uid, equipModels.get(i).eid);
        }
        return equipModels;
    }

    public Integer getCurEid(Integer uid){
        return userMapper.getUserByUid(uid).eid;
    }

    public boolean isHasEquip(Integer uid, Integer eid){
        return equipMapper.isHasEquip(uid, eid);
    }

    public boolean canBuyEquip(Integer uid, Integer eid){
        return getUserCurStar(uid) >= getEquipNeedStar(eid);
    }

    public void bugEquip(Integer uid, Integer eid){
        Integer curStar = getUserCurStar(uid) - getEquipNeedStar(eid);
        userMapper.updateUserStar(uid, curStar);
        equipMapper.addEquipForUser(uid, eid);
    }

    public Integer getUserCurStar(Integer uid){
        return userMapper.getUserByUid(uid).star;
    }

    private Integer getEquipNeedStar(Integer eid){
        return equipMapper.getEquipByEid(eid).star;
    }
}
