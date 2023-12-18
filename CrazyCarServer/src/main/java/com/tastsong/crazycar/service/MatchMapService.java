package com.tastsong.crazycar.service;

import cn.hutool.core.util.ObjUtil;
import com.tastsong.crazycar.dto.req.ReqUpdateMatchMap;
import com.tastsong.crazycar.mapper.MatchMapMapper;
import com.tastsong.crazycar.model.MatchMapModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class MatchMapService {
    @Autowired
    private MatchMapMapper matchMapMapper;

    public List<MatchMapModel> getMatchMapDetail() {
        return matchMapMapper.selectList(null);
    }

    public MatchMapModel getMatchMapByCid(int cid) {
        return matchMapMapper.selectById(cid);
    }

    public boolean updateMatchMapInfo(MatchMapModel mapInfoModel) {
        return matchMapMapper.updateById(mapInfoModel) > 0;
    }

    public MatchMapModel toMatchMapModel(ReqUpdateMatchMap req) {
        MatchMapModel mapInfoModel = getMatchMapByCid(req.getCid());
        if (ObjUtil.isEmpty(mapInfoModel)) {
            return null;
        }
        mapInfoModel.setStar(req.getStar());
        mapInfoModel.setMap_id(req.getMap_id());
        mapInfoModel.setHas_water(req.isHas_water());
        mapInfoModel.setLimit_time(req.getLimit_time());
        mapInfoModel.setClass_name(req.getClass_name());
        mapInfoModel.setTimes(req.getTimes());
        return mapInfoModel;
    }
}
