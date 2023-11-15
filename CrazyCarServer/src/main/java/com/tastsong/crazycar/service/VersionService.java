package com.tastsong.crazycar.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.VersionMapper;
import com.tastsong.crazycar.model.VersionModel;

@Service
public class VersionService {
    @Autowired
    private VersionMapper versionMapper;

    public List<VersionModel> getVersionList(){
        return versionMapper.getVersionList();
    }

    public boolean updateVersion(VersionModel versionModel){
        return versionMapper.updateVersion(versionModel) == 1;
    }
}
