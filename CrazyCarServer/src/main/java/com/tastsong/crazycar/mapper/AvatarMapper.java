package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.AvatarModel;

public interface AvatarMapper {
    public List<AvatarModel> getAvatarList();
    public int getAvatarNumByUid(int uid);
    public int addAvatarForUser(int uid, int aid);
    public boolean isHasAvatar(int uid, int aid);
    public AvatarModel getAvatarByAid(int aid);
    public int updateAvatarInfo(AvatarModel avatarModel);
}
