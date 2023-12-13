package com.tastsong.crazycar.service;

import java.util.List;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.mapper.*;
import com.tastsong.crazycar.model.*;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.dto.resp.RespUserInfo;
import com.tastsong.crazycar.utils.Util;

@Service
public class LoginService {
    @Autowired
    private UserMapper userMapper;
    @Autowired
    private TimeTrialMapper timeTrialMapper;
    @Autowired
    private AvatarService avatarService;
    @Autowired
    private EquipMapper equipMapper;

    public UserModel getUserByName(String userName){
        return userMapper.getUserByName(userName);
    }

    public RespUserInfo getUserInfo(String userName){
        RespUserInfo respUserInfo = new RespUserInfo();
        UserModel userModel = getUserByName(userName);
        respUserInfo.user_name = userModel.getUser_name();
        respUserInfo.uid = userModel.getUid();
        respUserInfo.aid = userModel.getAid();
        respUserInfo.star = userModel.getStar();
        respUserInfo.is_vip = userModel.is_vip();
        respUserInfo.token = Util.createToken(userModel.getUid());
        int uid = userModel.getUid();
        respUserInfo.is_superuser = isSuperuser(uid);
        respUserInfo.travel_times = getTimeTrialTimes(uid);
        respUserInfo.avatar_num = avatarService.getAvatarNumByUid(uid);
        respUserInfo.map_num = getTimeTrialMapNum(uid);
        respUserInfo.equip_info = getEquipByEid(userModel.getEid());
        respUserInfo.equip_info.is_has = isHasEquip(userModel.getEid(), uid);
        return respUserInfo;
    }

    public int getTimeTrialTimes(int uid){
        return timeTrialMapper.getTimeTrialTimesByUid(uid);
    }

    public int getTimeTrialMapNum(int uid){
        return timeTrialMapper.getTimeTrialMapNumByUid(uid);
    }

    private EquipModel getEquipByEid(int eid){
        return equipMapper.getEquipByEid(eid);
    }

    private boolean isHasEquip (int eid, int uid){
        return equipMapper.isHasEquip(uid, eid);
    }

    private boolean isSuperuser(int uid){
        return userMapper.isSuperuser(uid);
    }

    public boolean isExistsUser(String userName){
        return userMapper.isExistsUser(userName);
    }

    public void registerUser (String userName, String password){
        int defaultAid = 1;
		int defaultCid = 1;
		int defaultStar = 14;
		boolean defaultVIP = false;
		int defaultEid = 1;

        UserModel userModel = new UserModel();
        userModel.setUser_name(userName);
        userModel.setUser_password(password);
        userModel.setAid(defaultAid);
        userModel.setStar(defaultStar);
        userModel.setEid(defaultEid);
        userModel.set_vip(defaultVIP);
        userModel.setLogin_time(DateUtil.currentSeconds());
        userMapper.insertUser(userModel);

		int uid = userModel.getUid();
        if(avatarService.hasAvatar(uid, defaultAid)){
            avatarService.addAvatarForUser(uid, defaultAid);
        }

        if(!timeTrialMapper.isHasTimeTrialClass(uid, defaultCid)){
            timeTrialMapper.addTimeTrialMapForUser(uid, defaultCid);
        }

        if(!equipMapper.isHasEquip(uid, defaultEid)){
            equipMapper.addEquipForUser(uid, defaultEid);
        }
    }

    public void changePassword(int uid, String password){
        userMapper.updateUserPassword(uid, password);
    }

    public UserModel getUserByUid(int uid){
        return userMapper.getUserByUid(uid);
    }

    public boolean isExistsUserByUid(int uid){
        return userMapper.isExistsUserByUid(uid);
    }

    public void recordLoginInfo(UserLoginRecordModel userLoginRecordModel){
        userMapper.insertUserLoginRecord(userLoginRecordModel);
    }

    public void updateUser(UserModel userModel){
        userMapper.updateUserStar(userModel.getUid(), userModel.getStar());
        userMapper.updateUserVip(userModel.getUid(), userModel.is_vip());
    }

    public List<AvatarModel> getAvatarList(){
        return avatarService.getAllAvatar();
    }
}
