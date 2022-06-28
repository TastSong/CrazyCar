package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.EquipModel;

public interface EquipMapper {
    public EquipModel getEquipByEid(Integer eid);
    public List<Integer> getEidsByUid(Integer uid);
    public Integer isHasEquip(Integer uid, Integer eid);
    public Integer addEquipForUser(Integer uid, Integer eid);
}
