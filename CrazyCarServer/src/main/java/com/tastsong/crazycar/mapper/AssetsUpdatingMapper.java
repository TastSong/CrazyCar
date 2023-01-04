package com.tastsong.crazycar.mapper;

import com.tastsong.crazycar.model.AssetsUpdatingModel;

public interface AssetsUpdatingMapper {
    public AssetsUpdatingModel getInfo(Integer id);
    public Integer updateInfo(AssetsUpdatingModel assetsUpdatingModel);
}
