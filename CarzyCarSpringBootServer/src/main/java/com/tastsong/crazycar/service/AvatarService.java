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

    public List<AvatarModel> getAvatarList(Integer uid){
        List<AvatarModel> avatarModels = avatarMapper.getAvatarList();
        for (Integer i = 0; i < avatarModels.size(); i++){
            avatarModels.get(i).is_has = isHasAvatar(uid, avatarModels.get(i).aid);
        }
        return avatarModels;
    }

    private boolean isHasAvatar(Integer uid, Integer aid){
        return avatarMapper.isHasAvatar(uid, aid);
    }

    public Integer getCurAidByUid(Integer uid){
        return userMapper.getUserByUid(uid).aid;
    }
}
