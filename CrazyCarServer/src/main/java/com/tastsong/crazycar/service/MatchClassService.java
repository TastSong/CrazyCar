package com.tastsong.crazycar.service;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.mapper.MatchClassMapper;
import com.tastsong.crazycar.model.MatchClassModel;
import com.tastsong.crazycar.model.MatchMapModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class MatchClassService {
    @Autowired
    private MatchClassMapper matchClassMapper;
    @Autowired
    private MatchMapService matchMapService;
    @Autowired
    private UserService userService;
    public MatchClassModel getMatchClassByCid(int cid) {
        return matchClassMapper.selectById(cid);
    }

    public boolean insertMatchClass(MatchClassModel mapInfoModel) {
        return matchClassMapper.insert(mapInfoModel) > 0;
    }

    public void giveReward(int uid, int cid) {
        userService.updateUserStar(uid, getMatchClassByCid(cid).getStar() + userService.getUserStar(uid));
    }

    public MatchClassModel createOneMatch(int mapCid, String roomId) {
        int startOffsetTime = 16;
        MatchClassModel infoModel = new MatchClassModel();
        infoModel.setRoom_id(roomId);
        MatchMapModel matchMapModel = matchMapService.getMatchMapByCid(mapCid);
        infoModel.setMap_id(matchMapModel.getMap_id());
        infoModel.setLimit_time(matchMapModel.getLimit_time());
        infoModel.setTimes(matchMapModel.getTimes());
        infoModel.setStart_time(DateUtil.currentSeconds() + startOffsetTime );
        infoModel.setEnroll_time(DateUtil.currentSeconds());
        infoModel.setClass_name("TastSong");
        infoModel.setStar(2);
        insertMatchClass(infoModel);
        return infoModel;
    }
}
