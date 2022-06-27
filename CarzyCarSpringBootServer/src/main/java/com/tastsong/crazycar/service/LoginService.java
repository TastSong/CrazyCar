package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.EquipModel;
import com.tastsong.crazycar.model.UserModel;

@Service
public class LoginService {
    @Autowired
    private UserMapper userMapper;
    @Autowired 
    private TimeTrialMapper timeTrialMapper;
    @Autowired
    private AvatarMapper avatarMapper;
    @Autowired
    private EquipMapper equipMapper;

    public UserModel getUserByUid(Integer uid){
        return userMapper.getUserByUid(uid);
    }

    public Integer getTimeTrialTimes(Integer uid){
        return timeTrialMapper.getTimeTrialRecordByUid(uid).size();
    }

    public Integer getTimeTrialMapNum(Integer uid){
        return timeTrialMapper.getTimeTrialMapNumByUid(uid);
    }

    public Integer getAvatarNumByUid(Integer uid){
        return avatarMapper.getAvatarListByUid(uid).size();
    }

    public EquipModel getEquipByEquipModel(Integer eid){
        return equipMapper.getEquipByEid(eid);
    } 
}
