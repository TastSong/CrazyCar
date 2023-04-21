package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.Util.Util;
import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.EquipMapper;
import com.tastsong.crazycar.mapper.TimeTrialMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.AvatarModel;
import com.tastsong.crazycar.model.EquipModel;
import com.tastsong.crazycar.model.UserInfoModel;
import com.tastsong.crazycar.model.UserLoginRecordModel;
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

    public UserModel getUserByName(String userName){
        return userMapper.getUserByName(userName);
    }

    public UserInfoModel getUserInfo(String userName){
        UserInfoModel userInfoModel = new UserInfoModel();
        UserModel userModel = getUserByName(userName);
        userInfoModel.user_name = userModel.user_name;
        userInfoModel.uid = userModel.uid;
        userInfoModel.aid = userModel.aid;
        userInfoModel.star = userModel.star;
        userInfoModel.is_vip = userModel.is_vip;
        userInfoModel.token = Util.createToken(userModel.uid);
        Integer uid = userModel.uid;
        userInfoModel.is_superuser = isSuperuser(uid);
        userInfoModel.travel_times = getTimeTrialTimes(uid);
        userInfoModel.avatar_num = getAvatarNumByUid(uid);
        userInfoModel.map_num = getTimeTrialMapNum(uid);
        userInfoModel.equip_info = getEquipByEid(userModel.eid);
        userInfoModel.equip_info.is_has = isHasEquip(userModel.eid, uid);
        return userInfoModel;
    }

    public Integer getTimeTrialTimes(Integer uid){
        return timeTrialMapper.getTimeTrialTimesByUid(uid);
    }

    public Integer getTimeTrialMapNum(Integer uid){
        return timeTrialMapper.getTimeTrialMapNumByUid(uid);
    }

    private Integer getAvatarNumByUid(Integer uid){
        return avatarMapper.getAvatarNumByUid(uid);
    }

    private EquipModel getEquipByEid(Integer eid){
        return equipMapper.getEquipByEid(eid);
    }

    private boolean isHasEquip (Integer eid, Integer uid){
        return equipMapper.isHasEquip(uid, eid);
    }

    private boolean isSuperuser(Integer uid){
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
        userModel.user_name = userName;
        userModel.user_password = password;
        userModel.aid = defaultAid;
        userModel.star = defaultStar;
        userModel.eid = defaultEid;
        userModel.is_vip = defaultVIP;
        userModel.login_time = System.currentTimeMillis()/1000;
        userMapper.insertUser(userModel);

		int uid = userMapper.getUserByName(userName).uid;
        if(avatarMapper.isHasAvatar(uid, defaultAid)){
            avatarMapper.addAvatarForUser(uid, defaultAid);
        }

        if(!timeTrialMapper.isHasTimeTrialClass(uid, defaultCid)){
            timeTrialMapper.addTimeTrialMapForUser(uid, defaultCid);
        }

        if(!equipMapper.isHasEquip(uid, defaultEid)){
            equipMapper.addEquipForUser(uid, defaultEid);
        }
    }

    public void changePassword(Integer uid, String password){
        userMapper.updateUserPassword(uid, password);
    }

    public UserModel getUserByUid(Integer uid){
        return userMapper.getUserByUid(uid);
    }

    public boolean isExistsUserByUid(Integer uid){
        return userMapper.isExistsUserByUid(uid);
    }

    public void recordLoginInfo(UserLoginRecordModel userLoginRecordModel){
        userMapper.insertUserLoginRecord(userLoginRecordModel);
    }

    public void updateUser(UserModel userModel){
        userMapper.updateUserStar(userModel.uid, userModel.star);
        userMapper.updateUserVip(userModel.uid, userModel.is_vip);
    }

    public List<AvatarModel> getAvatarList(){
        List<AvatarModel> avatarModels = avatarMapper.getAvatarList();
        for (Integer i = 0; i < avatarModels.size(); i++){
            avatarModels.get(i).is_has = false;
        }
        return avatarModels;
    }
}
