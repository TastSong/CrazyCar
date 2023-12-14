package com.tastsong.crazycar.service;

import com.tastsong.crazycar.mapper.MatchClassMapper;
import com.tastsong.crazycar.model.MatchClassModel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class MatchClassService {
    @Autowired
    private MatchClassMapper matchClassMapper;
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
}
