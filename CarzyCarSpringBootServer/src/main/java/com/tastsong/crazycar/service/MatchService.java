package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.MatchMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.MatchMapInfoModel;
import com.tastsong.crazycar.model.MatchRoomInfoModel;

@Service
public class MatchService {
    @Autowired
    private UserMapper userMapper;

    @Autowired
    private EquipMapper equipMapper;

    @Autowired
    private MatchMapper matchMapper;

    public String getUserName(Integer uid){
        return userMapper.getUserByUid(uid).user_name;
    }

    public Integer getAid(Integer uid){
        return userMapper.getUserByUid(uid).aid;
    }

    public boolean canWade(Integer eid){
        return equipMapper.getEquipByEid(eid).can_wade;
    }

    public void insertMatchClass(MatchRoomInfoModel infoModel){
        matchMapper.insertMatchClass(infoModel);
    }

    public Integer getMatchRoomCid(String roomId, long startTime){
        return matchMapper.getMatchRoomInfo(roomId, startTime).cid;
    }

    public Integer getMatchMapId(Integer cid){
        return matchMapper.getMatchMapInfo(cid).map_id;
    }

    public Integer getMatchMapLimitTime(Integer cid){
        return matchMapper.getMatchMapInfo(cid).limit_time;
    }

    public Integer getMatchMapTimes(Integer cid){
        return matchMapper.getMatchMapInfo(cid).times;
    }

    public List<MatchMapInfoModel> getMatchMapDetail(){
        return matchMapper.getMatchMapDetail();
    }
}
