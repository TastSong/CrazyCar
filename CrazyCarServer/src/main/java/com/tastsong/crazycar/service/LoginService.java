package com.tastsong.crazycar.service;

import java.util.List;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.model.*;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.dto.resp.RespUserInfo;
import com.tastsong.crazycar.utils.Util;

@Service
public class LoginService {
    @Autowired
    private UserService userService;
    @Autowired
    private AvatarService avatarService;
    @Autowired
    private EquipService equipService;
    @Autowired
    private TimeTrialRecordService timeTrialRecordService;
    @Autowired
    private TimeTrialClassService timeTrialClassService;

    public RespUserInfo getUserInfo(String userName){
        RespUserInfo respUserInfo = new RespUserInfo();
        UserModel userModel = userService.getUserByName(userName);
        respUserInfo.user_name = userModel.getUser_name();
        respUserInfo.uid = userModel.getUid();
        respUserInfo.aid = userModel.getAid();
        respUserInfo.star = userModel.getStar();
        respUserInfo.is_vip = userModel.is_vip();
        respUserInfo.token = Util.createToken(userModel.getUid());
        int uid = userModel.getUid();
        respUserInfo.is_superuser = userService.isSuperuser(uid);
        respUserInfo.travel_times = timeTrialRecordService.getTimeTrialTimes(uid);
        respUserInfo.avatar_num = avatarService.getAvatarNumByUid(uid);
        respUserInfo.map_num = getTimeTrialMapNum(uid);
        respUserInfo.equip_info = equipService.getRespEquip(uid, userModel.getEid());
        return respUserInfo;
    }

    public int getTimeTrialMapNum(int uid){
        return timeTrialClassService.getTimeTrialClassNumByUid(uid);
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
        userService.insert(userModel);

		int uid = userModel.getUid();
        if(avatarService.hasAvatar(uid, defaultAid)){
            avatarService.addAvatarForUser(uid, defaultAid);
        }

        if(!timeTrialClassService.hasClass(uid, defaultCid)){
            timeTrialClassService.addTimeTrialClassForUser(uid, defaultCid);
        }

        if(!equipService.hasEquip(uid, defaultEid)){
            equipService.addEquipForUser(uid, defaultEid);
        }
    }

    public List<AvatarModel> getAvatarList(){
        return avatarService.getAllAvatar();
    }
}
