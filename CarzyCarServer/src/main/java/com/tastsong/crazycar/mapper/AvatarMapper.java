package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.AvatarModel;

public interface AvatarMapper {
    public List<AvatarModel> getAvatarList();
    public Integer getAvatarNumByUid(Integer uid);
    public Integer addAvatarForUser(Integer uid, Integer aid);
    public boolean isHasAvatar(Integer uid, Integer aid);

    public AvatarModel getAvatarByAid(Integer aid);
}
