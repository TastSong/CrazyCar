package com.tastsong.crazycar.service;

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
}
