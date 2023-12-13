package com.tastsong.crazycar.service;

import java.util.List;

import cn.hutool.core.date.DateUtil;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.tastsong.crazycar.dto.req.ReqUpdateVersion;
import com.tastsong.crazycar.utils.Util;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.tastsong.crazycar.mapper.VersionMapper;
import com.tastsong.crazycar.model.VersionModel;

@Service
public class VersionService {
    @Autowired
    private VersionMapper versionMapper;

    public List<VersionModel> getVersionList(){
        return versionMapper.selectList(null);
    }

    public VersionModel toVersionModelByReq(ReqUpdateVersion req){
        VersionModel versionModel = new VersionModel();
        versionModel.setVersion(req.getVersion());
        versionModel.setPlatform(req.getPlatform());
        versionModel.setId(req.getId());
        versionModel.setUrl(req.getUrl());
        versionModel.setRule(req.getRule());
        versionModel.setUpdate_time(DateUtil.currentSeconds());
        return versionModel;
    }

    public boolean updateVersion(VersionModel versionModel){
        return versionMapper.updateById(versionModel) > 0;
    }

    public boolean isForcedUpdating(String version, String platform) {
        try {
            String rs = getVersionByPlatform(platform);
            String[] minVersionStr = rs.split("\\.");
            String[] curVersionStr = version.split("\\.");
            int minVersion = Util.getSum(minVersionStr);
            int curVersion = Util.getSum(curVersionStr);
            return (minVersion - curVersion) > 0;
        } catch (Exception e) {
            return true;
        }

    }

    private String getVersionByPlatform(String platform) {
        QueryWrapper<VersionModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(VersionModel::getPlatform, platform);
        VersionModel versionModel = versionMapper.selectOne(queryWrapper,false);
        return versionModel.getVersion();
    }

    public String getURL(String platform) {
        String rs = getUtlByPlatform(platform);
        if (rs== null){
            return getUtlByPlatform("Defeat");
        } else{
            return rs;
        }
    }

    private String getUtlByPlatform(String platform) {
        QueryWrapper<VersionModel> queryWrapper = new QueryWrapper<>();
        queryWrapper.lambda().eq(VersionModel::getPlatform, platform);
        VersionModel versionModel = versionMapper.selectOne(queryWrapper,false);
        return versionModel.getUrl();
    }
}
