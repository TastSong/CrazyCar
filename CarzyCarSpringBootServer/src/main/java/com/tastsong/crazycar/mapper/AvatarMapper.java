package com.tastsong.crazycar.mapper;

import java.util.List;

public interface AvatarMapper {
    public List<Integer> getAvatarListByUid(Integer uid);
    public Integer getAvatarNumByUid(Integer uid);
}
