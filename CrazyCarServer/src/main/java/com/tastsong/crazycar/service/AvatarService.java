package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.mapper.UserMapper;
import com.tastsong.crazycar.model.AvatarModel;

@Service
public class AvatarService {
    @Autowired
    private AvatarMapper avatarMapper;

    @Autowired
    private UserMapper userMapper;

    public List<AvatarModel> getAvatarList(int uid){
        List<AvatarModel> avatarModels = avatarMapper.getAvatarList();
        for (int i = 0; i < avatarModels.size(); i++){
            avatarModels.get(i).is_has = isHasAvatar(uid, avatarModels.get(i).aid);
        }
        return avatarModels;
    }

    public List<AvatarModel> getAvatarInfos(){
        List<AvatarModel> avatarModels = avatarMapper.getAvatarList();
        return avatarModels;
    }

    public boolean updateAvatarInfo(AvatarModel avatarModel){
        return avatarMapper.updateAvatarInfo(avatarModel) == 1;
    }

    public boolean isHasAvatar(int uid, int aid){
        return avatarMapper.isHasAvatar(uid, aid);
    }

    public int getCurAidByUid(int uid){
        return userMapper.getUserByUid(uid).aid;
    }

    public int getUserStar(int uid){
        return userMapper.getUserByUid(uid).star;
    }

    private int getNeedStar(int aid){
        return avatarMapper.getAvatarByAid(aid).star;
    }

    public boolean canBuyAvatar(int uid, int aid) {
		return getUserStar(uid) >= getNeedStar(aid);		
	}

    public void buyAvatar(int uid, int aid){
        int curStar = getUserStar(uid) - getNeedStar(aid);
        userMapper.updateUserStar(uid, curStar);
        avatarMapper.addAvatarForUser(uid, aid);
    }

    public void changeAvatar(int uid, int aid){
        userMapper.updateUserAid(uid, aid);
    }
}
