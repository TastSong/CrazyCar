package com.tastsong.crazycar.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.EquipModel;
import com.tastsong.crazycar.model.UserModel;

import cn.hutool.json.JSONUtil;

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

    public UserModel getUserByName(String userName){
        return userMapper.getUserByName(userName);
    }

    public Integer getTimeTrialTimes(Integer uid){
        return timeTrialMapper.getTimeTrialTimesByUid(uid);
    }

    public Integer getTimeTrialMapNum(Integer uid){
        return timeTrialMapper.getTimeTrialMapNumByUid(uid);
    }

    public Integer getAvatarNumByUid(Integer uid){
        return avatarMapper.getAvatarNumByUid(uid);
    }

    public EquipModel getEquipByEid(Integer eid){
        return equipMapper.getEquipByEid(eid);
    } 

    public boolean isHasEquip (Integer eid, Integer uid){
        return equipMapper.isHasEquip(uid, eid) == 1;
    }

    public boolean isSuperuser(Integer uid){
        return userMapper.isSuperuser(uid) == 1;
    }

    public boolean isExistsUser(String userName){
        return userMapper.isExistsUser(userName) == 1;
    }

    public void registerUser (String userName, String password){
        int defaultAid = 1;
		int defaultCid = 0;
		int defaultStar = 14;
		boolean defaultVIP = false;
		int defaultEid = 1;

        UserModel userModel = new UserModel();
        userModel.user_name = userName;
        userModel.user_password = password;
        userModel.aid = defaultAid;
        userModel.star = defaultStar;
        userModel.eid = defaultEid;
        userModel.is_vip = defaultVIP;
        userModel.login_time = (int) (System.currentTimeMillis()/1000);
        System.out.println("++++++ " + JSONUtil.toJsonStr(userModel));
        userMapper.insertUser(userModel);

		int uid = userMapper.getUserByName(userName).uid;
        avatarMapper.addAvatarForUser(uid, defaultAid);
        timeTrialMapper.addTimeTrialMapForUser(uid, defaultCid);
        equipMapper.addEquipForUser(uid, defaultEid);
		return;
    }
}
