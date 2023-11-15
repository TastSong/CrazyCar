package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.EquipModel;

public interface EquipMapper {
    public EquipModel getEquipByEid(Integer eid);
    public List<EquipModel> getEquipList();
    public List<Integer> getEidsByUid(Integer uid);
    public boolean isHasEquip(Integer uid, Integer eid);
    public Integer addEquipForUser(Integer uid, Integer eid);
    public Integer updateEquipInfo(EquipModel equipModel);
}
