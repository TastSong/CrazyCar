package com.tastsong.crazycar.mapper;

import java.util.List;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.tastsong.crazycar.model.EquipModel;

public interface EquipMapper extends BaseMapper<EquipModel> {
    public EquipModel getEquipByEid(int eid);
    public List<EquipModel> getEquipList();
    public List<Integer> getEidsByUid(int uid);
    public boolean isHasEquip(int uid, int eid);
    public int addEquipForUser(int uid, int eid);
    public int updateEquipInfo(EquipModel equipModel);
}
