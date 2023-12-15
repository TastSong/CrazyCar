package com.tastsong.crazycar.service;

import java.util.List;

import cn.hutool.core.date.DateUtil;
import com.tastsong.crazycar.model.*;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.dto.resp.RespUserDetail;
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

    public RespUserDetail getUserDetail(int uid){
        RespUserDetail resp = new RespUserDetail();
        UserModel userModel = userService.getUserByUid(uid);
        resp.setUser_name(userModel.getUser_name());
        resp.setUid(userModel.getUid());
        resp.setAid(userModel.getAid());
        resp.setStar(userModel.getStar());
        resp.set_vip(userModel.is_vip());
        resp.setToken(Util.createToken(userModel.getUid()));
        resp.set_superuser(userService.isSuperuser(uid));
        resp.setTravel_times(timeTrialRecordService.getTimeTrialTimes(uid));
        resp.setAvatar_num(avatarService.getAvatarNumByUid(uid));
        resp.setMap_num(getTimeTrialMapNum(uid));
        resp.setEquip_info(equipService.getRespEquip(uid, userModel.getEid()));
        return resp;
    }
    public int getTimeTrialMapNum(int uid){
        return timeTrialClassService.getTimeTrialClassNumByUid(uid);
    }


    public int registerUser (String userName, String password){
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
        return uid;
    }

    public List<AvatarModel> getAvatarList(){
        return avatarService.getAllAvatar();
    }
}
