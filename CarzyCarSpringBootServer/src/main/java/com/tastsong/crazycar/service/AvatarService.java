package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.AvatarMapper;
import com.tastsong.crazycar.model.AvatarModel;

@Service
public class AvatarService {
    @Autowired
    private AvatarMapper avatarMapper;

    public List<AvatarModel> getAvatarList(){
        return avatarMapper.getAvatarList();
    }

    public boolean isHasAvatar(Integer uid, Integer aid){
        return avatarMapper.isHasAvatar(uid, aid);
    }
}
