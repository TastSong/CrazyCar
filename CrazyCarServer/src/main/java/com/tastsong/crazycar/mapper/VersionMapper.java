package com.tastsong.crazycar.mapper;

import java.util.List;

import com.tastsong.crazycar.model.VersionModel;

public interface VersionMapper {
    public List<VersionModel> getVersionList();
    public Integer updateVersion(VersionModel versionModel); 
}
